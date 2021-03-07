// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VPatmos.h for the primary calling header

#include "VPatmos.h"
#include "VPatmos__Syms.h"

#include "verilated_dpi.h"

void VPatmos::_settle__TOP__8(VPatmos__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPatmos::_settle__TOP__8\n"); );
    VPatmos* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if ((0U == (IData)(vlTOPp->Patmos__DOT__ramCtrl__DOT__stateReg))) {
        vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_25 
            = (0xffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__burstBus_io_slave_M_Data 
                          >> 0x10U));
        vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_22 
            = (3U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__burstBus_io_slave_M_DataByteEn));
        vlTOPp->Patmos__DOT__ramCtrl__DOT___GEN_24 
            = (3U & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__burstBus_io_slave_M_DataByteEn) 
                     >> 2U));
    } else {
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

void VPatmos::_eval_initial(VPatmos__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPatmos::_eval_initial\n"); );
    VPatmos* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VPatmos::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPatmos::final\n"); );
    // Variables
    VPatmos__Syms* __restrict vlSymsp = this->__VlSymsp;
    VPatmos* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VPatmos::_eval_settle(VPatmos__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPatmos::_eval_settle\n"); );
    VPatmos* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__7(vlSymsp);
    vlTOPp->__Vm_traceActivity[3U] = 1U;
    vlTOPp->__Vm_traceActivity[2U] = 1U;
    vlTOPp->__Vm_traceActivity[1U] = 1U;
    vlTOPp->__Vm_traceActivity[0U] = 1U;
    vlTOPp->_settle__TOP__8(vlSymsp);
}

void VPatmos::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VPatmos::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_Leds_led = VL_RAND_RESET_I(9);
    io_UartCmp_tx = VL_RAND_RESET_I(1);
    io_SRamCtrl_ramOut_addr = VL_RAND_RESET_I(20);
    io_SRamCtrl_ramOut_doutEna = VL_RAND_RESET_I(1);
    io_SRamCtrl_ramOut_dout = VL_RAND_RESET_I(16);
    io_SRamCtrl_ramOut_nce = VL_RAND_RESET_I(1);
    io_SRamCtrl_ramOut_noe = VL_RAND_RESET_I(1);
    io_SRamCtrl_ramOut_nwe = VL_RAND_RESET_I(1);
    io_SRamCtrl_ramOut_nlb = VL_RAND_RESET_I(1);
    io_SRamCtrl_ramOut_nub = VL_RAND_RESET_I(1);
    io_Keys_key = VL_RAND_RESET_I(4);
    io_UartCmp_rx = VL_RAND_RESET_I(1);
    io_SRamCtrl_ramIn_din = VL_RAND_RESET_I(16);
    Patmos__DOT__cores_0_io_memInOut_S_Resp = VL_RAND_RESET_I(2);
    Patmos__DOT__HardlockOCPWrapper_io_cores_0_M_Cmd = VL_RAND_RESET_I(3);
    Patmos__DOT__UartCmp_io_cores_0_M_Cmd = VL_RAND_RESET_I(3);
    Patmos__DOT__Leds_io_ocp_M_Cmd = VL_RAND_RESET_I(3);
    Patmos__DOT__Deadline_io_ocp_M_Cmd = VL_RAND_RESET_I(3);
    Patmos__DOT__Spm_io_M_Cmd = VL_RAND_RESET_I(3);
    Patmos__DOT__ramCtrl_io_ocp_S_Resp = VL_RAND_RESET_I(2);
    Patmos__DOT__ramCtrl_io_ocp_S_Data = VL_RAND_RESET_I(32);
    Patmos__DOT__REG = VL_RAND_RESET_I(2);
    Patmos__DOT__REG_1 = VL_RAND_RESET_I(1);
    Patmos__DOT__REG_2 = VL_RAND_RESET_I(1);
    Patmos__DOT__REG_3 = VL_RAND_RESET_I(1);
    Patmos__DOT__REG_4 = VL_RAND_RESET_I(1);
    Patmos__DOT__REG_5 = VL_RAND_RESET_I(1);
    Patmos__DOT__REG_6 = VL_RAND_RESET_I(1);
    Patmos__DOT__REG_7 = VL_RAND_RESET_I(1);
    Patmos__DOT__REG_8 = VL_RAND_RESET_I(1);
    Patmos__DOT___T_38 = VL_RAND_RESET_I(1);
    Patmos__DOT__REG_9 = VL_RAND_RESET_I(1);
    Patmos__DOT__REG_10 = VL_RAND_RESET_I(1);
    Patmos__DOT__REG_11 = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__icache_io_ena_out = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache_io_ena_in = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__fetch_io_fedec_instr_a = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch_io_fedec_instr_b = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__decode_io_flush = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__decode_io_decex_aluOp_0_isMul = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__decode_io_decex_jmpOp_branch = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__decode_io_decex_rsAddr_0 = VL_RAND_RESET_I(5);
    Patmos__DOT__cores_0__DOT__decode_io_decex_rsAddr_1 = VL_RAND_RESET_I(5);
    Patmos__DOT__cores_0__DOT__decode_io_decex_rsAddr_2 = VL_RAND_RESET_I(5);
    Patmos__DOT__cores_0__DOT__decode_io_decex_rsAddr_3 = VL_RAND_RESET_I(5);
    Patmos__DOT__cores_0__DOT__decode_io_decex_rdAddr_0 = VL_RAND_RESET_I(5);
    Patmos__DOT__cores_0__DOT__decode_io_decex_rdAddr_1 = VL_RAND_RESET_I(5);
    Patmos__DOT__cores_0__DOT__decode_io_decex_immOp_0 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__decode_io_decex_call = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__decode_io_decex_ret = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__decode_io_decex_brcf = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__decode_io_decex_xret = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute_io_ena = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute_io_brflush = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute_io_exmem_rd_0_data = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute_io_exmem_rd_0_valid = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute_io_exmem_rd_1_data = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute_io_exmem_rd_1_valid = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_load = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_store = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute_io_exicache_doCallRet = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute_io_exfe_doBranch = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute_io_exsc_op = VL_RAND_RESET_I(3);
    Patmos__DOT__cores_0__DOT__execute_io_exsc_opData = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute_io_exsc_opOff = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__memory_io_ena_in = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__memory_io_flush = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__memory_io_memwb_rd_0_data = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__memory_io_memfe_doCallRet = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__memory_io_localInOut_M_Cmd = VL_RAND_RESET_I(3);
    Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_Cmd = VL_RAND_RESET_I(3);
    Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_Data = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_ByteEn = VL_RAND_RESET_I(4);
    Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_AddrSpace = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__memory_io_exc_src = VL_RAND_RESET_I(5);
    Patmos__DOT__cores_0__DOT__memory_io_exc_exc = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc_io_ena = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache_io_master_S_Resp = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__dcache_io_slave_S_Resp = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__dcache_io_scIO_ena_in = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__burstBus_io_slave_M_Cmd = VL_RAND_RESET_I(3);
    Patmos__DOT__cores_0__DOT__burstBus_io_slave_M_Data = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__burstBus_io_slave_M_DataValid = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__burstBus_io_slave_M_DataByteEn = VL_RAND_RESET_I(4);
    Patmos__DOT__cores_0__DOT__REG = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT___T_2 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT___T_3 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__enableReg = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wEna = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wData = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ocp_port_M_Cmd = VL_RAND_RESET_I(3);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_illMem = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_mcachefe_instrEven = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_mcachefe_instrOdd = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_mcachefe_reloc = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_mcachefe_memSel = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_memIn_wEven = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_memIn_wOdd = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg = VL_RAND_RESET_I(3);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpCmdReg = VL_RAND_RESET_I(3);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpAddrReg = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg = VL_RAND_RESET_I(11);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg = VL_RAND_RESET_I(11);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__burstCntReg = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__callRetBaseReg = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__addrEvenReg = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__addrOddReg = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Resp = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Data = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_13 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_14 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_15 = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_16 = VL_RAND_RESET_I(3);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_18 = VL_RAND_RESET_Q(34);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_19 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_20 = VL_RAND_RESET_I(3);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___T_10 = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_26 = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_50 = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_51 = VL_RAND_RESET_I(12);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_52 = VL_RAND_RESET_I(11);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_53 = VL_RAND_RESET_I(3);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_55 = VL_RAND_RESET_Q(34);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_56 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_58 = VL_RAND_RESET_I(12);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_59 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_60 = VL_RAND_RESET_I(3);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___T_26 = VL_RAND_RESET_I(11);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___T_33 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_65 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_68 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_69 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_70 = VL_RAND_RESET_I(3);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_125 = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_126 = VL_RAND_RESET_I(3);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_132 = VL_RAND_RESET_I(3);
    Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__callRetBaseNext = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg = VL_RAND_RESET_I(4);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg = VL_RAND_RESET_I(4);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg = VL_RAND_RESET_I(11);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg = VL_RAND_RESET_I(13);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__posReg = VL_RAND_RESET_I(11);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitReg = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__wrPosReg = VL_RAND_RESET_I(11);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__callRetBaseReg = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__callAddrReg = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__selSpmReg = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__selCacheReg = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_178 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_0 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_179 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_1 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_180 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_2 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_181 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_3 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_182 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_4 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_183 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_5 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_184 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_6 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_185 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_7 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_186 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_8 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_187 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_9 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_188 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_10 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_189 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_11 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_190 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_12 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_191 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_13 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_192 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_14 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_193 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_15 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hit = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___T_54 = VL_RAND_RESET_I(11);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___T_62 = VL_RAND_RESET_I(11);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__relBase = VL_RAND_RESET_I(14);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__relPc = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_146 = VL_RAND_RESET_I(12);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_0 = VL_RAND_RESET_I(12);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_147 = VL_RAND_RESET_I(12);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_1 = VL_RAND_RESET_I(12);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_148 = VL_RAND_RESET_I(12);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_2 = VL_RAND_RESET_I(12);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_149 = VL_RAND_RESET_I(12);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_3 = VL_RAND_RESET_I(12);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_150 = VL_RAND_RESET_I(12);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_4 = VL_RAND_RESET_I(12);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_151 = VL_RAND_RESET_I(12);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_5 = VL_RAND_RESET_I(12);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_152 = VL_RAND_RESET_I(12);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_6 = VL_RAND_RESET_I(12);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_153 = VL_RAND_RESET_I(12);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_7 = VL_RAND_RESET_I(12);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_154 = VL_RAND_RESET_I(12);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_8 = VL_RAND_RESET_I(12);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_155 = VL_RAND_RESET_I(12);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_9 = VL_RAND_RESET_I(12);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_156 = VL_RAND_RESET_I(12);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_10 = VL_RAND_RESET_I(12);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_157 = VL_RAND_RESET_I(12);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_11 = VL_RAND_RESET_I(12);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_158 = VL_RAND_RESET_I(12);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_12 = VL_RAND_RESET_I(12);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_159 = VL_RAND_RESET_I(12);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_13 = VL_RAND_RESET_I(12);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_160 = VL_RAND_RESET_I(12);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_14 = VL_RAND_RESET_I(12);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_161 = VL_RAND_RESET_I(12);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_15 = VL_RAND_RESET_I(12);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___T_78 = VL_RAND_RESET_I(12);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___T_81 = VL_RAND_RESET_I(13);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___T_85 = VL_RAND_RESET_I(11);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___T_88 = VL_RAND_RESET_I(4);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___T_89 = VL_RAND_RESET_I(4);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___T_92 = VL_RAND_RESET_I(12);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___T_95 = VL_RAND_RESET_I(13);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___T_98 = VL_RAND_RESET_I(4);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___T_101 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__instrEvenReg = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__instrOddReg = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitNext = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__callRetBaseNext = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__selSpmNext = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__selCacheNext = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
            Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheEven__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheEven__DOT__rdAddrReg = VL_RAND_RESET_I(10);
    Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheEven__DOT__REG = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheEven__DOT__REG_1 = VL_RAND_RESET_I(10);
    Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheEven__DOT__REG_2 = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
            Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheOdd__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheOdd__DOT__rdAddrReg = VL_RAND_RESET_I(10);
    Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheOdd__DOT__REG = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheOdd__DOT__REG_1 = VL_RAND_RESET_I(10);
    Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheOdd__DOT__REG_2 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT__pcReg = VL_RAND_RESET_I(30);
    Patmos__DOT__cores_0__DOT__fetch__DOT__addrEvenReg = VL_RAND_RESET_I(30);
    Patmos__DOT__cores_0__DOT__fetch__DOT__addrOddReg = VL_RAND_RESET_I(30);
    Patmos__DOT__cores_0__DOT__fetch__DOT___T_2 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__fetch__DOT__selSpm = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__fetch__DOT__instr_a_ispm = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT__selCache = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__fetch__DOT__data_even = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT__data_odd = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___T_31 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT__pc_next = VL_RAND_RESET_I(30);
    Patmos__DOT__cores_0__DOT__fetch__DOT__pc_inc = VL_RAND_RESET_I(30);
    Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven = VL_RAND_RESET_I(30);
    Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd = VL_RAND_RESET_I(30);
    Patmos__DOT__cores_0__DOT__fetch__DOT__baseReg = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT__relBaseReg = VL_RAND_RESET_I(11);
    Patmos__DOT__cores_0__DOT__fetch__DOT__relocReg = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_20 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_33 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_46 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_59 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_72 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_85 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_98 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_111 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_124 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_137 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_150 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_163 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_176 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_189 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_202 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_215 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_228 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_241 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_254 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_267 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_280 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_293 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_306 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_319 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_332 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_345 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_358 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_371 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_384 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_397 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_410 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_423 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_436 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_449 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_462 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_475 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_488 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_501 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_514 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_532 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_545 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_558 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_571 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_584 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_597 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_610 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_623 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_636 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_649 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_662 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_675 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_688 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_701 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_714 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_727 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_740 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_753 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_766 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_779 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_792 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_805 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_818 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_831 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_844 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_857 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_870 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_883 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_896 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_909 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_922 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_935 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_948 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_961 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_974 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_987 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_1000 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_1013 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT___GEN_1026 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT__pcNext = VL_RAND_RESET_I(30);
    Patmos__DOT__cores_0__DOT__fetch__DOT__relPc = VL_RAND_RESET_I(30);
    Patmos__DOT__cores_0__DOT__fetch__DOT__selSpmNext = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__fetch__DOT__selCacheNext = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__fetch__DOT__relBaseNext = VL_RAND_RESET_I(11);
    Patmos__DOT__cores_0__DOT__fetch__DOT__relocNext = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<128; ++__Vi0) {
            Patmos__DOT__cores_0__DOT__fetch__DOT__MemBlock__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    Patmos__DOT__cores_0__DOT__fetch__DOT__MemBlock__DOT__mem_MPORT_1_data = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT__MemBlock__DOT__rdAddrReg = VL_RAND_RESET_I(7);
    { int __Vi0=0; for (; __Vi0<128; ++__Vi0) {
            Patmos__DOT__cores_0__DOT__fetch__DOT__MemBlock_1__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    Patmos__DOT__cores_0__DOT__fetch__DOT__MemBlock_1__DOT__mem_MPORT_1_data = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__fetch__DOT__MemBlock_1__DOT__rdAddrReg = VL_RAND_RESET_I(7);
    Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__decode__DOT__decReg_pc = VL_RAND_RESET_I(30);
    Patmos__DOT__cores_0__DOT__decode__DOT__decReg_base = VL_RAND_RESET_I(30);
    Patmos__DOT__cores_0__DOT__decode__DOT__decReg_reloc = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__decode__DOT__decReg_relPc = VL_RAND_RESET_I(30);
    Patmos__DOT__cores_0__DOT__decode__DOT__dual = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__decode__DOT___GEN_13 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__decode__DOT___GEN_20 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__decode__DOT___GEN_62 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__decode__DOT___GEN_63 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__decode__DOT___GEN_67 = VL_RAND_RESET_I(13);
    Patmos__DOT__cores_0__DOT__decode__DOT___GEN_82 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__decode__DOT___GEN_92 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__decode__DOT___GEN_134 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__decode__DOT___GEN_135 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__decode__DOT___GEN_139 = VL_RAND_RESET_I(13);
    Patmos__DOT__cores_0__DOT__decode__DOT__longImm = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__decode__DOT___GEN_154 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__decode__DOT___GEN_157 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__decode__DOT__isSTC = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__decode__DOT___T_81 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__decode__DOT___T_85 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__decode__DOT___T_89 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__decode__DOT___GEN_199 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__decode__DOT___GEN_234 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__decode__DOT___GEN_245 = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__decode__DOT___GEN_246 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__decode__DOT___GEN_247 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__decode__DOT___GEN_250 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__decode__DOT__isMem = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__decode__DOT__shamt = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__decode__DOT__isStack = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__decode__DOT__decoded_0 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__decode__DOT__addrImm = VL_RAND_RESET_I(10);
    Patmos__DOT__cores_0__DOT__decode__DOT__inDelaySlot = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__decode__DOT___T_139 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__decode__DOT___T_140 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__decode__DOT___T_155 = VL_RAND_RESET_I(2);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }}
    Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_0 = VL_RAND_RESET_I(5);
    Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_1 = VL_RAND_RESET_I(5);
    Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_2 = VL_RAND_RESET_I(5);
    Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_3 = VL_RAND_RESET_I(5);
    Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__wrReg_0_data = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__wrReg_1_data = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_0_0 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_0_1 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_1_0 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_1_1 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_2_0 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_2_1 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_3_0 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_3_1 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_base = VL_RAND_RESET_I(30);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_relPc = VL_RAND_RESET_I(30);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_pred_0 = VL_RAND_RESET_I(4);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_pred_1 = VL_RAND_RESET_I(4);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func = VL_RAND_RESET_I(4);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_isMul = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_isCmp = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_isPred = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_isBCpy = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_isMTS = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_isMFS = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func = VL_RAND_RESET_I(4);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_isCmp = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_isPred = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_isBCpy = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_isMTS = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_isMFS = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_0_func = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_0_dest = VL_RAND_RESET_I(3);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_0_s1Addr = VL_RAND_RESET_I(4);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_0_s2Addr = VL_RAND_RESET_I(4);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_1_func = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_1_dest = VL_RAND_RESET_I(3);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_1_s1Addr = VL_RAND_RESET_I(4);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_1_s2Addr = VL_RAND_RESET_I(4);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_jmpOp_branch = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_jmpOp_target = VL_RAND_RESET_I(30);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_jmpOp_reloc = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_load = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_store = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_hword = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_byte = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_zext = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_typ = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_stackOp = VL_RAND_RESET_I(3);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_rsData_0 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_rsData_1 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_rsData_2 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_rsData_3 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_rdAddr_0 = VL_RAND_RESET_I(5);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_rdAddr_1 = VL_RAND_RESET_I(5);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_immVal_0 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_immVal_1 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_immOp_0 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_wrRd_0 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_wrRd_1 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_callAddr = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_call = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_ret = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_brcf = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_trap = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_xcall = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_xret = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_xsrc = VL_RAND_RESET_I(5);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_nonDelayed = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__exReg_illOp = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__fwReg_0 = VL_RAND_RESET_I(3);
    Patmos__DOT__cores_0__DOT__execute__DOT__fwReg_1 = VL_RAND_RESET_I(3);
    Patmos__DOT__cores_0__DOT__execute__DOT__fwReg_2 = VL_RAND_RESET_I(3);
    Patmos__DOT__cores_0__DOT__execute__DOT__fwReg_3 = VL_RAND_RESET_I(3);
    Patmos__DOT__cores_0__DOT__execute__DOT__fwSrcReg_0 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__fwSrcReg_1 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__fwSrcReg_2 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__fwSrcReg_3 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__memResultDataReg_0 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT__memResultDataReg_1 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT__exResultDataReg_0 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT__exResultDataReg_1 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT___T_38 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT___GEN_116 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT__op_0 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT___T_44 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT___GEN_120 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT___T_48 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT___GEN_124 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT__op_2 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT___T_54 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT___GEN_128 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT__op_3 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT__predReg_1 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__predReg_2 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__predReg_3 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__predReg_4 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__predReg_5 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__predReg_6 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__predReg_7 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__doExecute_0 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__doExecute_1 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__retBaseReg = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT__retOffReg = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT__saveRetOff = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__saveND = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__excBaseReg = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT__excOffReg = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT__mulLoReg = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT__mulHiReg = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT__mulLLReg = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT__mulLHReg = VL_RAND_RESET_Q(33);
    Patmos__DOT__cores_0__DOT__execute__DOT__mulHLReg = VL_RAND_RESET_Q(33);
    Patmos__DOT__cores_0__DOT__execute__DOT__mulHHReg = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT__mulPipeReg = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT___T_68 = VL_RAND_RESET_I(17);
    Patmos__DOT__cores_0__DOT__execute__DOT___T_72 = VL_RAND_RESET_I(17);
    Patmos__DOT__cores_0__DOT__execute__DOT___T_96 = VL_RAND_RESET_Q(64);
    Patmos__DOT__cores_0__DOT__execute__DOT___GEN_151 = VL_RAND_RESET_Q(34);
    Patmos__DOT__cores_0__DOT__execute__DOT___GEN_152 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT___GEN_153 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT___GEN_154 = VL_RAND_RESET_I(3);
    Patmos__DOT__cores_0__DOT__execute__DOT___T_108 = VL_RAND_RESET_Q(35);
    Patmos__DOT__cores_0__DOT__execute__DOT___T_130 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT___T_142 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT___T_143 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT___T_144 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT___T_179 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT___T_182 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT___T_183 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT___T_196 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT___GEN_198 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT___GEN_199 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT___GEN_200 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT___GEN_201 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT___GEN_202 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT___GEN_203 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT___GEN_204 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT___GEN_255 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT___GEN_256 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT___GEN_257 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT___GEN_258 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT___GEN_259 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT___GEN_260 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT___GEN_261 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT___GEN_262 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT___GEN_263 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT___GEN_264 = VL_RAND_RESET_I(3);
    Patmos__DOT__cores_0__DOT__execute__DOT___GEN_265 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT___GEN_266 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT___GEN_267 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT___GEN_268 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT___T_216 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT___T_226 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT___T_234 = VL_RAND_RESET_Q(35);
    Patmos__DOT__cores_0__DOT__execute__DOT___T_256 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT___T_268 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT___T_269 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT___T_270 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT___T_305 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT___T_308 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT___T_309 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT___T_322 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT___GEN_321 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT___GEN_322 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT___GEN_323 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT___GEN_324 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT___GEN_325 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT___GEN_326 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT___GEN_327 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT___T_352 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT___T_358 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT___T_362 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__execute__DOT__callRetBase = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__execute__DOT__target = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__memory__DOT__memReg_rd_0_addr = VL_RAND_RESET_I(5);
    Patmos__DOT__cores_0__DOT__memory__DOT__memReg_rd_0_data = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__memory__DOT__memReg_rd_0_valid = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__memory__DOT__memReg_rd_1_addr = VL_RAND_RESET_I(5);
    Patmos__DOT__cores_0__DOT__memory__DOT__memReg_rd_1_data = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__memory__DOT__memReg_rd_1_valid = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_load = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_hword = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_byte = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_zext = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_typ = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_addr = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_call = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_ret = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_brcf = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_trap = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_xcall = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_xret = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_xsrc = VL_RAND_RESET_I(5);
    Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_illOp = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_nonDelayed = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__memory__DOT__memReg_base = VL_RAND_RESET_I(30);
    Patmos__DOT__cores_0__DOT__memory__DOT__memReg_relPc = VL_RAND_RESET_I(30);
    Patmos__DOT__cores_0__DOT__memory__DOT___T_3 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__memory__DOT__illMemReg = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__memory__DOT___T_6 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__memory__DOT___T_10 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__memory__DOT__mayStallReg = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__memory__DOT___T_13 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__memory__DOT__enable = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__memory__DOT___GEN_41 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__memory__DOT___GEN_57 = VL_RAND_RESET_I(8);
    Patmos__DOT__cores_0__DOT__memory__DOT___GEN_58 = VL_RAND_RESET_I(8);
    Patmos__DOT__cores_0__DOT__memory__DOT___GEN_59 = VL_RAND_RESET_I(4);
    Patmos__DOT__cores_0__DOT__memory__DOT___GEN_60 = VL_RAND_RESET_I(8);
    Patmos__DOT__cores_0__DOT__memory__DOT___GEN_61 = VL_RAND_RESET_I(8);
    Patmos__DOT__cores_0__DOT__memory__DOT___GEN_72 = VL_RAND_RESET_I(4);
    Patmos__DOT__cores_0__DOT__memory__DOT__cmd = VL_RAND_RESET_I(3);
    Patmos__DOT__cores_0__DOT__memory__DOT__lo = VL_RAND_RESET_I(16);
    Patmos__DOT__cores_0__DOT__memory__DOT__hi_1 = VL_RAND_RESET_I(16);
    Patmos__DOT__cores_0__DOT__memory__DOT___T_63 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__memory__DOT__bval = VL_RAND_RESET_I(8);
    Patmos__DOT__cores_0__DOT__memory__DOT__hval = VL_RAND_RESET_I(16);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            Patmos__DOT__cores_0__DOT__exc__DOT__vec[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
            Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[__Vi0] = VL_RAND_RESET_I(32);
    }}
    Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Cmd = VL_RAND_RESET_I(3);
    Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Data = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__exc__DOT__statusReg = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__exc__DOT__maskReg = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__exc__DOT__sourceReg = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__exc__DOT__localModeReg = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__sleepReg = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_0 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_1 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_2 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_3 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_4 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_5 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_6 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_7 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_8 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_9 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_10 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_11 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_12 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_13 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_14 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_15 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_16 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_17 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_18 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_19 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_20 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_21 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_22 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_23 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_24 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_25 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_26 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_27 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_28 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_29 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_30 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_31 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_16 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_17 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_18 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_19 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_20 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_21 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_138 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_174 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_179 = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_227 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_233 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_235 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_252 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_253 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_254 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_255 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_256 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_257 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_344 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_345 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_346 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_347 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_348 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_349 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_350 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_351 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_352 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_353 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_354 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_355 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_356 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_357 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_358 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_359 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_360 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_361 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_362 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_363 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_364 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_365 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_366 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_367 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_368 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_369 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_370 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_371 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_372 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_373 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_374 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_375 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_409 = VL_RAND_RESET_Q(35);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_411 = VL_RAND_RESET_Q(35);
    Patmos__DOT__cores_0__DOT__exc__DOT__REG = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__intrPend_16 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__REG_1 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__intrPend_17 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__REG_2 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__intrPend_18 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__REG_3 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__intrPend_19 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__REG_4 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__intrPend_20 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__REG_5 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__intrPend_21 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excBaseReg = VL_RAND_RESET_I(30);
    Patmos__DOT__cores_0__DOT__exc__DOT__excAddrReg = VL_RAND_RESET_I(30);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_428 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_429 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_430 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_431 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_432 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_433 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_434 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_435 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_436 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_437 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_438 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_439 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_440 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_441 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_442 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_443 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_444 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_445 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_446 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_447 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_448 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_449 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_450 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_451 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_452 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_453 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_454 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_455 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_456 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_457 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_458 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_459 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPend_0 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPend_1 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPend_2 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPend_3 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPend_4 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPend_5 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPend_6 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPend_7 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPend_8 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPend_9 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPend_10 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPend_11 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPend_12 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPend_13 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPend_14 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPend_15 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPend_16 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPend_17 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPend_18 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPend_19 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPend_20 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPend_21 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPend_22 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPend_23 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPend_24 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPend_25 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPend_26 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPend_27 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPend_28 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPend_29 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPend_30 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__excPend_31 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__srcReg = VL_RAND_RESET_I(5);
    Patmos__DOT__cores_0__DOT__exc__DOT___GEN_543 = VL_RAND_RESET_I(5);
    Patmos__DOT__cores_0__DOT__exc__DOT__exc = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT__intr = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__exc__DOT___T_198 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm_io_slave_M_Cmd = VL_RAND_RESET_I(3);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm_io_slave_S_Resp = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc_io_illMem = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc_io_fromCPU_M_Cmd = VL_RAND_RESET_I(3);
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc_io_toMemory_M_Cmd = VL_RAND_RESET_I(3);
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc_io_toMemory_S_Resp = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__dcache__DOT__bp_io_slave_S_Resp = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__dcache__DOT__burstReadBus1_io_master_S_Resp = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__dcache__DOT__burstReadBus1_io_slave_M_Cmd = VL_RAND_RESET_I(3);
    Patmos__DOT__cores_0__DOT__dcache__DOT__burstReadBus2_io_slave_M_Cmd = VL_RAND_RESET_I(3);
    Patmos__DOT__cores_0__DOT__dcache__DOT__burstReadBus2_io_slave_M_Addr = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__dcache__DOT__wc_io_readMaster_S_Resp = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__dcache__DOT__wc_io_slave_M_Cmd = VL_RAND_RESET_I(3);
    Patmos__DOT__cores_0__DOT__dcache__DOT__selDCReg = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__selSCReg = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__REG = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT___T_14 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__REG_1 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT___T_20 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT___T_21 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagMem_io_wrEna = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_io_wrEna = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1_io_wrEna = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2_io_wrEna = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3_io_wrEna = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Cmd = VL_RAND_RESET_I(3);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_ByteEn = VL_RAND_RESET_I(4);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_0 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_1 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_2 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_3 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_4 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_5 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_6 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_7 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_8 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_9 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_10 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_11 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_12 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_13 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_14 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_15 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_16 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_17 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_18 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_19 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_20 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_21 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_22 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_23 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_24 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_25 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_26 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_27 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_28 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_29 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_30 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_31 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_32 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_33 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_34 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_35 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_36 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_37 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_38 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_39 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_40 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_41 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_42 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_43 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_44 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_45 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_46 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_47 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_48 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_49 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_50 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_51 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_52 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_53 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_54 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_55 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_56 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_57 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_58 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_59 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_60 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_61 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_62 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_63 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_64 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_65 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_66 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_67 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_68 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_69 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_70 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_71 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_72 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_73 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_74 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_75 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_76 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_77 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_78 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_79 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_80 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_81 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_82 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_83 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_84 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_85 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_86 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_87 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_88 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_89 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_90 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_91 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_92 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_93 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_94 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_95 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_96 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_97 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_98 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_99 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_100 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_101 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_102 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_103 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_104 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_105 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_106 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_107 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_108 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_109 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_110 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_111 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_112 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_113 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_114 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_115 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_116 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_117 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_118 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_119 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_120 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_121 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_122 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_123 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_124 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_125 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_126 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_127 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_128 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_129 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_130 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_131 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_132 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_133 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_134 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_135 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_136 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_137 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_138 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_139 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_140 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_141 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_142 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_143 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_144 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_145 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_146 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_147 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_148 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_149 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_150 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_151 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_152 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_153 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_154 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_155 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_156 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_157 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_158 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_159 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_160 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_161 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_162 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_163 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_164 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_165 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_166 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_167 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_168 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_169 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_170 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_171 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_172 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_173 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_174 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_175 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_176 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_177 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_178 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_179 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_180 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_181 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_182 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_183 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_184 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_185 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_186 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_187 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_188 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_189 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_190 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_191 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_192 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_193 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_194 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_195 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_196 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_197 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_198 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_199 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_200 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_201 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_202 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_203 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_204 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_205 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_206 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_207 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_208 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_209 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_210 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_211 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_212 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_213 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_214 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_215 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_216 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_217 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_218 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_219 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_220 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_221 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_222 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_223 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_224 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_225 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_226 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_227 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_228 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_229 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_230 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_231 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_232 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_233 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_234 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_235 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_236 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_237 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_238 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_239 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_240 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_241 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_242 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_243 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_244 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_245 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_246 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_247 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_248 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_249 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_250 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_251 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_252 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_253 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_254 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_255 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagV = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_13 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_26 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_39 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_52 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_65 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_78 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_91 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_104 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_117 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_130 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_143 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_156 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_169 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_182 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_195 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_208 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_221 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_234 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_247 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagValid = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__fillReg = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__wrAddrReg = VL_RAND_RESET_I(10);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__wrDataReg = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__stmsk = VL_RAND_RESET_I(4);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__stateReg = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__burstCntReg = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__missIndexReg = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__slaveReg_Resp = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__slaveReg_Data = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_514 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_515 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_516 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_517 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_518 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_519 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_520 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_521 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_522 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_523 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_524 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_525 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_526 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_527 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_528 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_529 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_530 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_531 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_532 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_533 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_534 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_535 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_536 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_537 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_538 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_539 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_540 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_541 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_542 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_543 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_544 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_545 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_546 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_547 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_548 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_549 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_550 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_551 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_552 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_553 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_554 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_555 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_556 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_557 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_558 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_559 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_560 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_561 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_562 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_563 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_564 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_565 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_566 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_567 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_568 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_569 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_570 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_571 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_572 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_573 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_574 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_575 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_576 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_577 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_578 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_579 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_580 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_581 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_582 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_583 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_584 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_585 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_586 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_587 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_588 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_589 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_590 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_591 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_592 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_593 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_594 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_595 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_596 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_597 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_598 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_599 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_600 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_601 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_602 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_603 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_604 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_605 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_606 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_607 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_608 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_609 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_610 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_611 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_612 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_613 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_614 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_615 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_616 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_617 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_618 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_619 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_620 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_621 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_622 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_623 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_624 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_625 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_626 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_627 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_628 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_629 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_630 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_631 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_632 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_633 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_634 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_635 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_636 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_637 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_638 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_639 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_640 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_641 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_642 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_643 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_644 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_645 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_646 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_647 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_648 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_649 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_650 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_651 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_652 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_653 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_654 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_655 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_656 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_657 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_658 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_659 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_660 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_661 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_662 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_663 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_664 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_665 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_666 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_667 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_668 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_669 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_670 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_671 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_672 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_673 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_674 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_675 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_676 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_677 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_678 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_679 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_680 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_681 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_682 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_683 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_684 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_685 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_686 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_687 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_688 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_689 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_690 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_691 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_692 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_693 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_694 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_695 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_696 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_697 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_698 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_699 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_700 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_701 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_702 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_703 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_704 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_705 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_706 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_707 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_708 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_709 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_710 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_711 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_712 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_713 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_714 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_715 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_716 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_717 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_718 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_719 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_720 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_721 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_722 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_723 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_724 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_725 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_726 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_727 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_728 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_729 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_730 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_731 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_732 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_733 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_734 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_735 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_736 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_737 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_738 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_739 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_740 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_741 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_742 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_743 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_744 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_745 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_746 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_747 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_748 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_749 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_750 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_751 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_752 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_753 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_754 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_755 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_756 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_757 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_758 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_759 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_760 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_761 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_762 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_763 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_764 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_765 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_766 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_767 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_768 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_769 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_777 = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___T_48 = VL_RAND_RESET_I(10);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_781 = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___lo_T_1 = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_788 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_789 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_790 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_791 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_792 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_793 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_794 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_795 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_796 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_797 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_798 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_799 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_800 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_801 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_802 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_803 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_804 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_805 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_806 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_807 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_808 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_809 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_810 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_811 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_812 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_813 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_814 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_815 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_816 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_817 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_818 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_819 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_820 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_821 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_822 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_823 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_824 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_825 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_826 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_827 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_828 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_829 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_830 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_831 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_832 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_833 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_834 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_835 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_836 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_837 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_838 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_839 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_840 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_841 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_842 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_843 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_844 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_845 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_846 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_847 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_848 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_849 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_850 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_851 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_852 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_853 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_854 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_855 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_856 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_857 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_858 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_859 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_860 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_861 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_862 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_863 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_864 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_865 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_866 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_867 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_868 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_869 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_870 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_871 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_872 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_873 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_874 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_875 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_876 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_877 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_878 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_879 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_880 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_881 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_882 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_883 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_884 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_885 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_886 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_887 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_888 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_889 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_890 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_891 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_892 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_893 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_894 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_895 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_896 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_897 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_898 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_899 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_900 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_901 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_902 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_903 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_904 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_905 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_906 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_907 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_908 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_909 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_910 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_911 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_912 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_913 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_914 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_915 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_916 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_917 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_918 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_919 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_920 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_921 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_922 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_923 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_924 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_925 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_926 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_927 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_928 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_929 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_930 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_931 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_932 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_933 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_934 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_935 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_936 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_937 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_938 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_939 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_940 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_941 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_942 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_943 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_944 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_945 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_946 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_947 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_948 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_949 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_950 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_951 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_952 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_953 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_954 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_955 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_956 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_957 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_958 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_959 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_960 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_961 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_962 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_963 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_964 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_965 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_966 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_967 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_968 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_969 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_970 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_971 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_972 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_973 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_974 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_975 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_976 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_977 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_978 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_979 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_980 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_981 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_982 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_983 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_984 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_985 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_986 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_987 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_988 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_989 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_990 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_991 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_992 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_993 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_994 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_995 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_996 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_997 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_998 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_999 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1000 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1001 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1002 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1003 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1004 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1005 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1006 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1007 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1008 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1009 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1010 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1011 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1012 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1013 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1014 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1015 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1016 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1017 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1018 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1019 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1020 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1021 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1022 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1023 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1024 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1025 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1026 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1027 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1028 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1029 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1030 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1031 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1032 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1033 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1034 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1035 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1036 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1037 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1038 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1039 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1040 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1041 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1042 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT___GEN_1043 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<256; ++__Vi0) {
            Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagMem__DOT__mem[__Vi0] = VL_RAND_RESET_I(20);
    }}
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagMem__DOT__rdAddrReg = VL_RAND_RESET_I(8);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagMem__DOT__REG = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagMem__DOT__REG_1 = VL_RAND_RESET_I(8);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagMem__DOT__REG_2 = VL_RAND_RESET_I(20);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
            Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }}
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__rdAddrReg = VL_RAND_RESET_I(10);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__REG = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__REG_1 = VL_RAND_RESET_I(10);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__REG_2 = VL_RAND_RESET_I(8);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
            Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }}
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__rdAddrReg = VL_RAND_RESET_I(10);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__REG = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__REG_1 = VL_RAND_RESET_I(10);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__REG_2 = VL_RAND_RESET_I(8);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
            Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }}
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__rdAddrReg = VL_RAND_RESET_I(10);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__REG = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__REG_1 = VL_RAND_RESET_I(10);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__REG_2 = VL_RAND_RESET_I(8);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
            Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }}
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__rdAddrReg = VL_RAND_RESET_I(10);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__REG = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__REG_1 = VL_RAND_RESET_I(10);
    Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__REG_2 = VL_RAND_RESET_I(8);
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock_io_rdAddr = VL_RAND_RESET_I(9);
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg = VL_RAND_RESET_I(3);
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__isReserveReg = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stackTopReg = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__memTopReg = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg = VL_RAND_RESET_Q(33);
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__newMemTopReg = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_1 = VL_RAND_RESET_I(24);
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__rdAddrReg = VL_RAND_RESET_I(9);
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__responseToCPUReg = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_7 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_14 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stackTopInc = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stackAboveMem = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_18 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_30 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_43 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___GEN_20 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___GEN_24 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___GEN_26 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___GEN_27 = VL_RAND_RESET_Q(33);
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___GEN_30 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___GEN_46 = VL_RAND_RESET_I(9);
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_48 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_50 = VL_RAND_RESET_Q(33);
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_63 = VL_RAND_RESET_I(1);
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___GEN_81 = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___GEN_88 = VL_RAND_RESET_Q(33);
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___GEN_92 = VL_RAND_RESET_I(3);
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___GEN_102 = VL_RAND_RESET_I(9);
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___GEN_111 = VL_RAND_RESET_I(9);
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__mb_wrData = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__mb_wrEna = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<512; ++__Vi0) {
            Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }}
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock__DOT__rdAddrReg = VL_RAND_RESET_I(9);
    { int __Vi0=0; for (; __Vi0<512; ++__Vi0) {
            Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock_1__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }}
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock_1__DOT__rdAddrReg = VL_RAND_RESET_I(9);
    { int __Vi0=0; for (; __Vi0<512; ++__Vi0) {
            Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock_2__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }}
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock_2__DOT__rdAddrReg = VL_RAND_RESET_I(9);
    { int __Vi0=0; for (; __Vi0<512; ++__Vi0) {
            Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock_3__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }}
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock_3__DOT__mem_MPORT_1_data = VL_RAND_RESET_I(8);
    Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock_3__DOT__rdAddrReg = VL_RAND_RESET_I(9);
    Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__stateReg = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__burstCntReg = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__posReg = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__masterReg_Cmd = VL_RAND_RESET_I(3);
    Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__masterReg_Addr = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__slaveReg_Resp = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__slaveReg_Data = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT___T_10 = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT___GEN_16 = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__state = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__cntReg = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__writeMasterReg_Addr = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__writeMasterReg_Data = VL_RAND_RESET_I(32);
    Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__writeMasterReg_ByteEn = VL_RAND_RESET_I(4);
    Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT___T_6 = VL_RAND_RESET_I(2);
    Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT___GEN_12 = VL_RAND_RESET_I(2);
    Patmos__DOT__HardlockOCPWrapper__DOT__reqReg = VL_RAND_RESET_I(1);
    Patmos__DOT__HardlockOCPWrapper__DOT__reqBools_0 = VL_RAND_RESET_I(1);
    Patmos__DOT__UartCmp__DOT__REG = VL_RAND_RESET_I(1);
    Patmos__DOT__UartCmp__DOT___GEN_1 = VL_RAND_RESET_I(1);
    Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue_io_enq_bits = VL_RAND_RESET_I(8);
    Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue_io_enq_valid = VL_RAND_RESET_I(1);
    Patmos__DOT__UartCmp__DOT__uart__DOT__tx_baud_counter = VL_RAND_RESET_I(10);
    Patmos__DOT__UartCmp__DOT__uart__DOT__tx_baud_tick = VL_RAND_RESET_I(1);
    Patmos__DOT__UartCmp__DOT__uart__DOT__tx_state = VL_RAND_RESET_I(1);
    Patmos__DOT__UartCmp__DOT__uart__DOT__tx_buff = VL_RAND_RESET_I(10);
    Patmos__DOT__UartCmp__DOT__uart__DOT__tx_reg = VL_RAND_RESET_I(1);
    Patmos__DOT__UartCmp__DOT__uart__DOT__tx_counter = VL_RAND_RESET_I(4);
    Patmos__DOT__UartCmp__DOT__uart__DOT__rxd_reg0 = VL_RAND_RESET_I(1);
    Patmos__DOT__UartCmp__DOT__uart__DOT__rxd_reg1 = VL_RAND_RESET_I(1);
    Patmos__DOT__UartCmp__DOT__uart__DOT__rxd_reg2 = VL_RAND_RESET_I(1);
    Patmos__DOT__UartCmp__DOT__uart__DOT__rx_baud_counter = VL_RAND_RESET_I(10);
    Patmos__DOT__UartCmp__DOT__uart__DOT__rx_baud_tick = VL_RAND_RESET_I(1);
    Patmos__DOT__UartCmp__DOT__uart__DOT__rx_enable = VL_RAND_RESET_I(1);
    Patmos__DOT__UartCmp__DOT__uart__DOT__rx_buff = VL_RAND_RESET_I(8);
    Patmos__DOT__UartCmp__DOT__uart__DOT__rx_counter = VL_RAND_RESET_I(3);
    Patmos__DOT__UartCmp__DOT__uart__DOT__rx_state = VL_RAND_RESET_I(2);
    Patmos__DOT__UartCmp__DOT__uart__DOT__respReg = VL_RAND_RESET_I(2);
    Patmos__DOT__UartCmp__DOT__uart__DOT__rdDataReg = VL_RAND_RESET_I(8);
    Patmos__DOT__UartCmp__DOT__uart__DOT___T_12 = VL_RAND_RESET_I(10);
    Patmos__DOT__UartCmp__DOT__uart__DOT___GEN_10 = VL_RAND_RESET_I(1);
    Patmos__DOT__UartCmp__DOT__uart__DOT___GEN_11 = VL_RAND_RESET_I(10);
    Patmos__DOT__UartCmp__DOT__uart__DOT___GEN_12 = VL_RAND_RESET_I(1);
    Patmos__DOT__UartCmp__DOT__uart__DOT___T_17 = VL_RAND_RESET_I(10);
    Patmos__DOT__UartCmp__DOT__uart__DOT___T_19 = VL_RAND_RESET_I(1);
    Patmos__DOT__UartCmp__DOT__uart__DOT___T_22 = VL_RAND_RESET_I(4);
    Patmos__DOT__UartCmp__DOT__uart__DOT___GEN_14 = VL_RAND_RESET_I(10);
    Patmos__DOT__UartCmp__DOT__uart__DOT___GEN_28 = VL_RAND_RESET_I(1);
    Patmos__DOT__UartCmp__DOT__uart__DOT___GEN_34 = VL_RAND_RESET_I(10);
    Patmos__DOT__UartCmp__DOT__uart__DOT___GEN_39 = VL_RAND_RESET_I(2);
    Patmos__DOT__UartCmp__DOT__uart__DOT___GEN_41 = VL_RAND_RESET_I(1);
    Patmos__DOT__UartCmp__DOT__uart__DOT___GEN_44 = VL_RAND_RESET_I(2);
    Patmos__DOT__UartCmp__DOT__uart__DOT___T_36 = VL_RAND_RESET_I(1);
    Patmos__DOT__UartCmp__DOT__uart__DOT___T_40 = VL_RAND_RESET_I(3);
    Patmos__DOT__UartCmp__DOT__uart__DOT___T_42 = VL_RAND_RESET_I(8);
    Patmos__DOT__UartCmp__DOT__uart__DOT___GEN_48 = VL_RAND_RESET_I(2);
    Patmos__DOT__UartCmp__DOT__uart__DOT__uartOcpEmu_Cmd = VL_RAND_RESET_I(3);
    Patmos__DOT__UartCmp__DOT__uart__DOT__uartOcpEmu_Addr = VL_RAND_RESET_I(32);
    Patmos__DOT__UartCmp__DOT__uart__DOT__uartOcpEmu_Data = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ram[__Vi0] = VL_RAND_RESET_I(8);
    }}
    Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ram_io_deq_bits_MPORT_data = VL_RAND_RESET_I(8);
    Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__enq_ptr_value = VL_RAND_RESET_I(4);
    Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__deq_ptr_value = VL_RAND_RESET_I(4);
    Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__maybe_full = VL_RAND_RESET_I(1);
    Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ptr_match = VL_RAND_RESET_I(1);
    Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__empty = VL_RAND_RESET_I(1);
    Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__full = VL_RAND_RESET_I(1);
    Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__do_enq = VL_RAND_RESET_I(1);
    Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__do_deq = VL_RAND_RESET_I(1);
    Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT___value_T_1 = VL_RAND_RESET_I(4);
    Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT___value_T_3 = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<16; ++__Vi0) {
            Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__ram[__Vi0] = VL_RAND_RESET_I(8);
    }}
    Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__enq_ptr_value = VL_RAND_RESET_I(4);
    Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__deq_ptr_value = VL_RAND_RESET_I(4);
    Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__maybe_full = VL_RAND_RESET_I(1);
    Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__ptr_match = VL_RAND_RESET_I(1);
    Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__empty = VL_RAND_RESET_I(1);
    Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__full = VL_RAND_RESET_I(1);
    Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__do_enq = VL_RAND_RESET_I(1);
    Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__do_deq = VL_RAND_RESET_I(1);
    Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT___value_T_1 = VL_RAND_RESET_I(4);
    Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT___value_T_3 = VL_RAND_RESET_I(4);
    Patmos__DOT__CpuInfo__DOT__masterReg_Cmd = VL_RAND_RESET_I(3);
    Patmos__DOT__CpuInfo__DOT__masterReg_Addr = VL_RAND_RESET_I(32);
    Patmos__DOT__CpuInfo__DOT___GEN_13 = VL_RAND_RESET_I(32);
    Patmos__DOT__Leds__DOT__ledReg = VL_RAND_RESET_I(9);
    Patmos__DOT__Leds__DOT__respReg = VL_RAND_RESET_I(2);
    Patmos__DOT__Leds__DOT__REG = VL_RAND_RESET_I(9);
    Patmos__DOT__Keys__DOT__keySyncReg = VL_RAND_RESET_I(4);
    Patmos__DOT__Keys__DOT__keyReg = VL_RAND_RESET_I(4);
    Patmos__DOT__Keys__DOT__respReg = VL_RAND_RESET_I(2);
    Patmos__DOT__Timer__DOT__masterReg_Cmd = VL_RAND_RESET_I(3);
    Patmos__DOT__Timer__DOT__masterReg_Addr = VL_RAND_RESET_I(32);
    Patmos__DOT__Timer__DOT__masterReg_Data = VL_RAND_RESET_I(32);
    Patmos__DOT__Timer__DOT__cycleReg = VL_RAND_RESET_Q(64);
    Patmos__DOT__Timer__DOT__cycleIntrReg = VL_RAND_RESET_Q(64);
    Patmos__DOT__Timer__DOT__usecSubReg = VL_RAND_RESET_I(7);
    Patmos__DOT__Timer__DOT__usecReg = VL_RAND_RESET_Q(64);
    Patmos__DOT__Timer__DOT__usecIntrReg = VL_RAND_RESET_Q(64);
    Patmos__DOT__Timer__DOT__cycleHiReg = VL_RAND_RESET_I(32);
    Patmos__DOT__Timer__DOT__usecHiReg = VL_RAND_RESET_I(32);
    Patmos__DOT__Timer__DOT__cycleLoReg = VL_RAND_RESET_I(32);
    Patmos__DOT__Timer__DOT__usecLoReg = VL_RAND_RESET_I(32);
    Patmos__DOT__Timer__DOT___T_18 = VL_RAND_RESET_Q(64);
    Patmos__DOT__Timer__DOT___T_23 = VL_RAND_RESET_Q(64);
    Patmos__DOT__Timer__DOT___T_25 = VL_RAND_RESET_Q(64);
    Patmos__DOT__Timer__DOT___T_30 = VL_RAND_RESET_I(7);
    Patmos__DOT__Timer__DOT___T_35 = VL_RAND_RESET_Q(64);
    Patmos__DOT__Deadline__DOT__downCountReg = VL_RAND_RESET_I(32);
    Patmos__DOT__Deadline__DOT__downDone = VL_RAND_RESET_I(1);
    Patmos__DOT__Deadline__DOT___T_4 = VL_RAND_RESET_I(32);
    Patmos__DOT__Deadline__DOT__stallReg = VL_RAND_RESET_I(1);
    Patmos__DOT__Deadline__DOT__respReg = VL_RAND_RESET_I(2);
    Patmos__DOT__Deadline__DOT___GEN_3 = VL_RAND_RESET_I(1);
    Patmos__DOT__Spm__DOT__cmdReg = VL_RAND_RESET_I(3);
    Patmos__DOT__Spm__DOT___T_5 = VL_RAND_RESET_I(4);
    { int __Vi0=0; for (; __Vi0<512; ++__Vi0) {
            Patmos__DOT__Spm__DOT__MemBlock__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }}
    Patmos__DOT__Spm__DOT__MemBlock__DOT__rdAddrReg = VL_RAND_RESET_I(9);
    { int __Vi0=0; for (; __Vi0<512; ++__Vi0) {
            Patmos__DOT__Spm__DOT__MemBlock_1__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }}
    Patmos__DOT__Spm__DOT__MemBlock_1__DOT__rdAddrReg = VL_RAND_RESET_I(9);
    { int __Vi0=0; for (; __Vi0<512; ++__Vi0) {
            Patmos__DOT__Spm__DOT__MemBlock_2__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }}
    Patmos__DOT__Spm__DOT__MemBlock_2__DOT__rdAddrReg = VL_RAND_RESET_I(9);
    { int __Vi0=0; for (; __Vi0<512; ++__Vi0) {
            Patmos__DOT__Spm__DOT__MemBlock_3__DOT__mem[__Vi0] = VL_RAND_RESET_I(8);
    }}
    Patmos__DOT__Spm__DOT__MemBlock_3__DOT__rdAddrReg = VL_RAND_RESET_I(9);
    Patmos__DOT__ramCtrl__DOT__stateReg = VL_RAND_RESET_I(3);
    Patmos__DOT__ramCtrl__DOT__mAddrReg = VL_RAND_RESET_I(20);
    Patmos__DOT__ramCtrl__DOT__rdBufferReg_0 = VL_RAND_RESET_I(16);
    Patmos__DOT__ramCtrl__DOT__rdBufferReg_1 = VL_RAND_RESET_I(16);
    Patmos__DOT__ramCtrl__DOT__rdBufferReg_2 = VL_RAND_RESET_I(16);
    Patmos__DOT__ramCtrl__DOT__rdBufferReg_3 = VL_RAND_RESET_I(16);
    Patmos__DOT__ramCtrl__DOT__rdBufferReg_4 = VL_RAND_RESET_I(16);
    Patmos__DOT__ramCtrl__DOT__rdBufferReg_5 = VL_RAND_RESET_I(16);
    Patmos__DOT__ramCtrl__DOT__rdBufferReg_6 = VL_RAND_RESET_I(16);
    Patmos__DOT__ramCtrl__DOT__rdBufferReg_7 = VL_RAND_RESET_I(16);
    Patmos__DOT__ramCtrl__DOT__wrBufferReg_0_byteEna = VL_RAND_RESET_I(2);
    Patmos__DOT__ramCtrl__DOT__wrBufferReg_0_data = VL_RAND_RESET_I(16);
    Patmos__DOT__ramCtrl__DOT__wrBufferReg_1_byteEna = VL_RAND_RESET_I(2);
    Patmos__DOT__ramCtrl__DOT__wrBufferReg_1_data = VL_RAND_RESET_I(16);
    Patmos__DOT__ramCtrl__DOT__wrBufferReg_2_byteEna = VL_RAND_RESET_I(2);
    Patmos__DOT__ramCtrl__DOT__wrBufferReg_2_data = VL_RAND_RESET_I(16);
    Patmos__DOT__ramCtrl__DOT__wrBufferReg_3_byteEna = VL_RAND_RESET_I(2);
    Patmos__DOT__ramCtrl__DOT__wrBufferReg_3_data = VL_RAND_RESET_I(16);
    Patmos__DOT__ramCtrl__DOT__wrBufferReg_4_byteEna = VL_RAND_RESET_I(2);
    Patmos__DOT__ramCtrl__DOT__wrBufferReg_4_data = VL_RAND_RESET_I(16);
    Patmos__DOT__ramCtrl__DOT__wrBufferReg_5_byteEna = VL_RAND_RESET_I(2);
    Patmos__DOT__ramCtrl__DOT__wrBufferReg_5_data = VL_RAND_RESET_I(16);
    Patmos__DOT__ramCtrl__DOT__wrBufferReg_6_byteEna = VL_RAND_RESET_I(2);
    Patmos__DOT__ramCtrl__DOT__wrBufferReg_6_data = VL_RAND_RESET_I(16);
    Patmos__DOT__ramCtrl__DOT__wrBufferReg_7_byteEna = VL_RAND_RESET_I(2);
    Patmos__DOT__ramCtrl__DOT__wrBufferReg_7_data = VL_RAND_RESET_I(16);
    Patmos__DOT__ramCtrl__DOT__transCountReg = VL_RAND_RESET_I(3);
    Patmos__DOT__ramCtrl__DOT__wordCountReg = VL_RAND_RESET_I(2);
    Patmos__DOT__ramCtrl__DOT__waitCountReg = VL_RAND_RESET_I(1);
    Patmos__DOT__ramCtrl__DOT__addrReg = VL_RAND_RESET_I(20);
    Patmos__DOT__ramCtrl__DOT__doutEnaReg = VL_RAND_RESET_I(1);
    Patmos__DOT__ramCtrl__DOT__doutReg = VL_RAND_RESET_I(32);
    Patmos__DOT__ramCtrl__DOT__noeReg = VL_RAND_RESET_I(1);
    Patmos__DOT__ramCtrl__DOT__nweReg = VL_RAND_RESET_I(1);
    Patmos__DOT__ramCtrl__DOT__nlbReg = VL_RAND_RESET_I(1);
    Patmos__DOT__ramCtrl__DOT__nubReg = VL_RAND_RESET_I(1);
    Patmos__DOT__ramCtrl__DOT___T_9 = VL_RAND_RESET_I(3);
    Patmos__DOT__ramCtrl__DOT___T_10 = VL_RAND_RESET_I(3);
    Patmos__DOT__ramCtrl__DOT___GEN_22 = VL_RAND_RESET_I(2);
    Patmos__DOT__ramCtrl__DOT___GEN_23 = VL_RAND_RESET_I(16);
    Patmos__DOT__ramCtrl__DOT___GEN_24 = VL_RAND_RESET_I(2);
    Patmos__DOT__ramCtrl__DOT___GEN_25 = VL_RAND_RESET_I(16);
    Patmos__DOT__ramCtrl__DOT___T_24 = VL_RAND_RESET_I(20);
    Patmos__DOT__ramCtrl__DOT___T_28 = VL_RAND_RESET_I(3);
    Patmos__DOT__ramCtrl__DOT___T_29 = VL_RAND_RESET_I(1);
    Patmos__DOT__ramCtrl__DOT___GEN_34 = VL_RAND_RESET_I(1);
    Patmos__DOT__ramCtrl__DOT___GEN_36 = VL_RAND_RESET_I(20);
    Patmos__DOT__ramCtrl__DOT___GEN_37 = VL_RAND_RESET_I(20);
    Patmos__DOT__ramCtrl__DOT___GEN_46 = VL_RAND_RESET_I(3);
    Patmos__DOT__ramCtrl__DOT___GEN_47 = VL_RAND_RESET_I(3);
    Patmos__DOT__ramCtrl__DOT___GEN_49 = VL_RAND_RESET_I(2);
    Patmos__DOT__ramCtrl__DOT___GEN_51 = VL_RAND_RESET_I(2);
    Patmos__DOT__ramCtrl__DOT___GEN_52 = VL_RAND_RESET_I(3);
    Patmos__DOT__ramCtrl__DOT___GEN_114 = VL_RAND_RESET_I(3);
    Patmos__DOT__ramCtrl__DOT___GEN_115 = VL_RAND_RESET_I(1);
    Patmos__DOT__ramCtrl__DOT___GEN_134 = VL_RAND_RESET_I(2);
    Patmos__DOT__ramCtrl__DOT___GEN_136 = VL_RAND_RESET_I(1);
    Patmos__DOT__ramCtrl__DOT___GEN_139 = VL_RAND_RESET_I(3);
    Patmos__DOT__ramCtrl__DOT___GEN_141 = VL_RAND_RESET_I(1);
    Patmos__DOT__ramCtrl__DOT___GEN_142 = VL_RAND_RESET_I(16);
    Patmos__DOT__ramCtrl__DOT___GEN_143 = VL_RAND_RESET_I(1);
    Patmos__DOT__ramCtrl__DOT___GEN_145 = VL_RAND_RESET_I(1);
    Patmos__DOT__ramCtrl__DOT___GEN_146 = VL_RAND_RESET_I(1);
    Patmos__DOT__ramCtrl__DOT___GEN_162 = VL_RAND_RESET_I(2);
    Patmos__DOT__ramCtrl__DOT___GEN_201 = VL_RAND_RESET_I(1);
    Patmos__DOT__ramCtrl__DOT___GEN_205 = VL_RAND_RESET_I(1);
    Patmos__DOT__ramCtrl__DOT___GEN_206 = VL_RAND_RESET_I(3);
    __Vdly__Patmos__DOT__cores_0__DOT__exc__DOT__excBaseReg = VL_RAND_RESET_I(30);
    __Vdly__Patmos__DOT__cores_0__DOT__exc__DOT__sleepReg = VL_RAND_RESET_I(1);
    __Vdly__Patmos__DOT__cores_0__DOT__exc__DOT__excAddrReg = VL_RAND_RESET_I(30);
    __Vdly__Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr = VL_RAND_RESET_I(32);
    __Vdly__Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__stateReg = VL_RAND_RESET_I(2);
    __Vdly__Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__burstCntReg = VL_RAND_RESET_I(2);
    __Vdly__Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__memTopReg = VL_RAND_RESET_I(32);
    __Vdly__Patmos__DOT__UartCmp__DOT__uart__DOT__rx_baud_tick = VL_RAND_RESET_I(1);
    __Vdly__Patmos__DOT__UartCmp__DOT__uart__DOT__tx_baud_counter = VL_RAND_RESET_I(10);
    __Vdly__Patmos__DOT__Timer__DOT__usecSubReg = VL_RAND_RESET_I(7);
    __Vdly__Patmos__DOT__ramCtrl__DOT__stateReg = VL_RAND_RESET_I(3);
    __Vdly__Patmos__DOT__ramCtrl__DOT__transCountReg = VL_RAND_RESET_I(3);
    { int __Vi0=0; for (; __Vi0<4; ++__Vi0) {
            __Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }}
}
