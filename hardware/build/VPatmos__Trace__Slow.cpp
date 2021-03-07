// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VPatmos__Syms.h"


//======================

void VPatmos::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, __VlSymsp);
    traceRegister(tfp->spTrace());
}

void VPatmos::traceInit(void* userp, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VPatmos__Syms* __restrict vlSymsp = static_cast<VPatmos__Syms*>(userp);
    if (!Verilated::calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
                        "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VPatmos::traceInitTop(vlSymsp, tracep);
    tracep->scopeEscape('.');
}

//======================


void VPatmos::traceInitTop(void* userp, VerilatedVcd* tracep) {
    VPatmos__Syms* __restrict vlSymsp = static_cast<VPatmos__Syms*>(userp);
    VPatmos* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceInitSub0(userp, tracep);
    }
}

void VPatmos::traceInitSub0(void* userp, VerilatedVcd* tracep) {
    VPatmos__Syms* __restrict vlSymsp = static_cast<VPatmos__Syms*>(userp);
    VPatmos* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1353,"clock", false,-1);
        tracep->declBit(c+1354,"reset", false,-1);
        tracep->declBus(c+1355,"io_Leds_led", false,-1, 8,0);
        tracep->declBit(c+1356,"io_UartCmp_tx", false,-1);
        tracep->declBus(c+1357,"io_SRamCtrl_ramOut_addr", false,-1, 19,0);
        tracep->declBit(c+1358,"io_SRamCtrl_ramOut_doutEna", false,-1);
        tracep->declBus(c+1359,"io_SRamCtrl_ramOut_dout", false,-1, 15,0);
        tracep->declBit(c+1360,"io_SRamCtrl_ramOut_nce", false,-1);
        tracep->declBit(c+1361,"io_SRamCtrl_ramOut_noe", false,-1);
        tracep->declBit(c+1362,"io_SRamCtrl_ramOut_nwe", false,-1);
        tracep->declBit(c+1363,"io_SRamCtrl_ramOut_nlb", false,-1);
        tracep->declBit(c+1364,"io_SRamCtrl_ramOut_nub", false,-1);
        tracep->declBus(c+1365,"io_Keys_key", false,-1, 3,0);
        tracep->declBit(c+1366,"io_UartCmp_rx", false,-1);
        tracep->declBus(c+1367,"io_SRamCtrl_ramIn_din", false,-1, 15,0);
        tracep->declBit(c+1353,"Patmos clock", false,-1);
        tracep->declBit(c+1354,"Patmos reset", false,-1);
        tracep->declBus(c+1355,"Patmos io_Leds_led", false,-1, 8,0);
        tracep->declBit(c+1356,"Patmos io_UartCmp_tx", false,-1);
        tracep->declBus(c+1357,"Patmos io_SRamCtrl_ramOut_addr", false,-1, 19,0);
        tracep->declBit(c+1358,"Patmos io_SRamCtrl_ramOut_doutEna", false,-1);
        tracep->declBus(c+1359,"Patmos io_SRamCtrl_ramOut_dout", false,-1, 15,0);
        tracep->declBit(c+1360,"Patmos io_SRamCtrl_ramOut_nce", false,-1);
        tracep->declBit(c+1361,"Patmos io_SRamCtrl_ramOut_noe", false,-1);
        tracep->declBit(c+1362,"Patmos io_SRamCtrl_ramOut_nwe", false,-1);
        tracep->declBit(c+1363,"Patmos io_SRamCtrl_ramOut_nlb", false,-1);
        tracep->declBit(c+1364,"Patmos io_SRamCtrl_ramOut_nub", false,-1);
        tracep->declBus(c+1365,"Patmos io_Keys_key", false,-1, 3,0);
        tracep->declBit(c+1366,"Patmos io_UartCmp_rx", false,-1);
        tracep->declBus(c+1367,"Patmos io_SRamCtrl_ramIn_din", false,-1, 15,0);
        tracep->declBit(c+1353,"Patmos cores_0_clock", false,-1);
        tracep->declBit(c+1354,"Patmos cores_0_reset", false,-1);
        tracep->declBit(c+1,"Patmos cores_0_io_interrupts_0", false,-1);
        tracep->declBit(c+2,"Patmos cores_0_io_interrupts_1", false,-1);
        tracep->declBit(c+3,"Patmos cores_0_io_interrupts_2", false,-1);
        tracep->declBit(c+4,"Patmos cores_0_io_interrupts_3", false,-1);
        tracep->declBit(c+5,"Patmos cores_0_io_interrupts_4", false,-1);
        tracep->declBit(c+6,"Patmos cores_0_io_interrupts_5", false,-1);
        tracep->declBus(c+7,"Patmos cores_0_io_memPort_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+8,"Patmos cores_0_io_memPort_M_Addr", false,-1, 20,0);
        tracep->declBus(c+9,"Patmos cores_0_io_memPort_M_Data", false,-1, 31,0);
        tracep->declBit(c+10,"Patmos cores_0_io_memPort_M_DataValid", false,-1);
        tracep->declBus(c+11,"Patmos cores_0_io_memPort_M_DataByteEn", false,-1, 3,0);
        tracep->declBus(c+12,"Patmos cores_0_io_memPort_S_Resp", false,-1, 1,0);
        tracep->declBus(c+13,"Patmos cores_0_io_memPort_S_Data", false,-1, 31,0);
        tracep->declBus(c+14,"Patmos cores_0_io_memInOut_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+15,"Patmos cores_0_io_memInOut_M_Addr", false,-1, 31,0);
        tracep->declBus(c+16,"Patmos cores_0_io_memInOut_M_Data", false,-1, 31,0);
        tracep->declBus(c+17,"Patmos cores_0_io_memInOut_M_ByteEn", false,-1, 3,0);
        tracep->declBus(c+18,"Patmos cores_0_io_memInOut_S_Resp", false,-1, 1,0);
        tracep->declBus(c+19,"Patmos cores_0_io_memInOut_S_Data", false,-1, 31,0);
        tracep->declBus(c+20,"Patmos cores_0_io_excInOut_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+15,"Patmos cores_0_io_excInOut_M_Addr", false,-1, 31,0);
        tracep->declBus(c+16,"Patmos cores_0_io_excInOut_M_Data", false,-1, 31,0);
        tracep->declBus(c+21,"Patmos cores_0_io_excInOut_S_Resp", false,-1, 1,0);
        tracep->declBus(c+22,"Patmos cores_0_io_excInOut_S_Data", false,-1, 31,0);
        tracep->declBit(c+1353,"Patmos HardlockOCPWrapper_clock", false,-1);
        tracep->declBit(c+1354,"Patmos HardlockOCPWrapper_reset", false,-1);
        tracep->declBus(c+23,"Patmos HardlockOCPWrapper_io_cores_0_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+24,"Patmos HardlockOCPWrapper_io_cores_0_S_Resp", false,-1, 1,0);
        tracep->declBit(c+1353,"Patmos UartCmp_clock", false,-1);
        tracep->declBit(c+1354,"Patmos UartCmp_reset", false,-1);
        tracep->declBus(c+25,"Patmos UartCmp_io_cores_0_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+15,"Patmos UartCmp_io_cores_0_M_Addr", false,-1, 31,0);
        tracep->declBus(c+16,"Patmos UartCmp_io_cores_0_M_Data", false,-1, 31,0);
        tracep->declBus(c+26,"Patmos UartCmp_io_cores_0_S_Resp", false,-1, 1,0);
        tracep->declBus(c+27,"Patmos UartCmp_io_cores_0_S_Data", false,-1, 31,0);
        tracep->declBit(c+28,"Patmos UartCmp_io_pins_tx", false,-1);
        tracep->declBit(c+1366,"Patmos UartCmp_io_pins_rx", false,-1);
        tracep->declBit(c+1353,"Patmos CpuInfo_clock", false,-1);
        tracep->declBus(c+29,"Patmos CpuInfo_io_ocp_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+15,"Patmos CpuInfo_io_ocp_M_Addr", false,-1, 31,0);
        tracep->declBus(c+30,"Patmos CpuInfo_io_ocp_S_Resp", false,-1, 1,0);
        tracep->declBus(c+31,"Patmos CpuInfo_io_ocp_S_Data", false,-1, 31,0);
        tracep->declBit(c+1353,"Patmos Leds_clock", false,-1);
        tracep->declBit(c+1354,"Patmos Leds_reset", false,-1);
        tracep->declBus(c+32,"Patmos Leds_io_ocp_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+16,"Patmos Leds_io_ocp_M_Data", false,-1, 31,0);
        tracep->declBus(c+33,"Patmos Leds_io_ocp_S_Resp", false,-1, 1,0);
        tracep->declBus(c+34,"Patmos Leds_io_ocp_S_Data", false,-1, 31,0);
        tracep->declBus(c+35,"Patmos Leds_io_pins_led", false,-1, 8,0);
        tracep->declBit(c+1353,"Patmos Keys_clock", false,-1);
        tracep->declBit(c+1354,"Patmos Keys_reset", false,-1);
        tracep->declBus(c+36,"Patmos Keys_io_ocp_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+37,"Patmos Keys_io_ocp_S_Resp", false,-1, 1,0);
        tracep->declBus(c+38,"Patmos Keys_io_ocp_S_Data", false,-1, 31,0);
        tracep->declBus(c+1365,"Patmos Keys_io_pins_key", false,-1, 3,0);
        tracep->declBit(c+3,"Patmos Keys_io_interrupts_0", false,-1);
        tracep->declBit(c+4,"Patmos Keys_io_interrupts_1", false,-1);
        tracep->declBit(c+5,"Patmos Keys_io_interrupts_2", false,-1);
        tracep->declBit(c+6,"Patmos Keys_io_interrupts_3", false,-1);
        tracep->declBit(c+1353,"Patmos Timer_clock", false,-1);
        tracep->declBit(c+1354,"Patmos Timer_reset", false,-1);
        tracep->declBus(c+39,"Patmos Timer_io_ocp_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+15,"Patmos Timer_io_ocp_M_Addr", false,-1, 31,0);
        tracep->declBus(c+16,"Patmos Timer_io_ocp_M_Data", false,-1, 31,0);
        tracep->declBus(c+40,"Patmos Timer_io_ocp_S_Resp", false,-1, 1,0);
        tracep->declBus(c+41,"Patmos Timer_io_ocp_S_Data", false,-1, 31,0);
        tracep->declBit(c+1,"Patmos Timer_io_interrupts_0", false,-1);
        tracep->declBit(c+2,"Patmos Timer_io_interrupts_1", false,-1);
        tracep->declBit(c+1353,"Patmos Deadline_clock", false,-1);
        tracep->declBit(c+1354,"Patmos Deadline_reset", false,-1);
        tracep->declBus(c+42,"Patmos Deadline_io_ocp_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+16,"Patmos Deadline_io_ocp_M_Data", false,-1, 31,0);
        tracep->declBus(c+43,"Patmos Deadline_io_ocp_S_Resp", false,-1, 1,0);
        tracep->declBus(c+44,"Patmos Deadline_io_ocp_S_Data", false,-1, 31,0);
        tracep->declBit(c+1353,"Patmos Spm_clock", false,-1);
        tracep->declBus(c+45,"Patmos Spm_io_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+46,"Patmos Spm_io_M_Addr", false,-1, 10,0);
        tracep->declBus(c+16,"Patmos Spm_io_M_Data", false,-1, 31,0);
        tracep->declBus(c+17,"Patmos Spm_io_M_ByteEn", false,-1, 3,0);
        tracep->declBus(c+47,"Patmos Spm_io_S_Resp", false,-1, 1,0);
        tracep->declBus(c+48,"Patmos Spm_io_S_Data", false,-1, 31,0);
        tracep->declBit(c+1353,"Patmos ramCtrl_clock", false,-1);
        tracep->declBit(c+1354,"Patmos ramCtrl_reset", false,-1);
        tracep->declBus(c+7,"Patmos ramCtrl_io_ocp_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+8,"Patmos ramCtrl_io_ocp_M_Addr", false,-1, 20,0);
        tracep->declBus(c+9,"Patmos ramCtrl_io_ocp_M_Data", false,-1, 31,0);
        tracep->declBit(c+10,"Patmos ramCtrl_io_ocp_M_DataValid", false,-1);
        tracep->declBus(c+11,"Patmos ramCtrl_io_ocp_M_DataByteEn", false,-1, 3,0);
        tracep->declBus(c+12,"Patmos ramCtrl_io_ocp_S_Resp", false,-1, 1,0);
        tracep->declBus(c+13,"Patmos ramCtrl_io_ocp_S_Data", false,-1, 31,0);
        tracep->declBus(c+49,"Patmos ramCtrl_io_pins_ramOut_addr", false,-1, 19,0);
        tracep->declBit(c+50,"Patmos ramCtrl_io_pins_ramOut_doutEna", false,-1);
        tracep->declBus(c+51,"Patmos ramCtrl_io_pins_ramOut_dout", false,-1, 15,0);
        tracep->declBit(c+52,"Patmos ramCtrl_io_pins_ramOut_noe", false,-1);
        tracep->declBit(c+53,"Patmos ramCtrl_io_pins_ramOut_nwe", false,-1);
        tracep->declBit(c+54,"Patmos ramCtrl_io_pins_ramOut_nlb", false,-1);
        tracep->declBit(c+55,"Patmos ramCtrl_io_pins_ramOut_nub", false,-1);
        tracep->declBus(c+1367,"Patmos ramCtrl_io_pins_ramIn_din", false,-1, 15,0);
        tracep->declBus(c+56,"Patmos REG", false,-1, 1,0);
        tracep->declBit(c+57,"Patmos REG_1", false,-1);
        tracep->declBit(c+58,"Patmos REG_2", false,-1);
        tracep->declBit(c+59,"Patmos REG_3", false,-1);
        tracep->declBit(c+60,"Patmos REG_4", false,-1);
        tracep->declBit(c+61,"Patmos REG_5", false,-1);
        tracep->declBit(c+62,"Patmos REG_6", false,-1);
        tracep->declBit(c+63,"Patmos REG_7", false,-1);
        tracep->declBit(c+64,"Patmos REG_8", false,-1);
        tracep->declBit(c+65,"Patmos REG_9", false,-1);
        tracep->declBit(c+66,"Patmos REG_10", false,-1);
        tracep->declBus(c+67,"Patmos REG_11", false,-1, 1,0);
        tracep->declBit(c+1353,"Patmos cores_0 clock", false,-1);
        tracep->declBit(c+1354,"Patmos cores_0 reset", false,-1);
        tracep->declBit(c+1,"Patmos cores_0 io_interrupts_0", false,-1);
        tracep->declBit(c+2,"Patmos cores_0 io_interrupts_1", false,-1);
        tracep->declBit(c+3,"Patmos cores_0 io_interrupts_2", false,-1);
        tracep->declBit(c+4,"Patmos cores_0 io_interrupts_3", false,-1);
        tracep->declBit(c+5,"Patmos cores_0 io_interrupts_4", false,-1);
        tracep->declBit(c+6,"Patmos cores_0 io_interrupts_5", false,-1);
        tracep->declBus(c+7,"Patmos cores_0 io_memPort_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+8,"Patmos cores_0 io_memPort_M_Addr", false,-1, 20,0);
        tracep->declBus(c+9,"Patmos cores_0 io_memPort_M_Data", false,-1, 31,0);
        tracep->declBit(c+10,"Patmos cores_0 io_memPort_M_DataValid", false,-1);
        tracep->declBus(c+11,"Patmos cores_0 io_memPort_M_DataByteEn", false,-1, 3,0);
        tracep->declBus(c+12,"Patmos cores_0 io_memPort_S_Resp", false,-1, 1,0);
        tracep->declBus(c+13,"Patmos cores_0 io_memPort_S_Data", false,-1, 31,0);
        tracep->declBus(c+14,"Patmos cores_0 io_memInOut_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+15,"Patmos cores_0 io_memInOut_M_Addr", false,-1, 31,0);
        tracep->declBus(c+16,"Patmos cores_0 io_memInOut_M_Data", false,-1, 31,0);
        tracep->declBus(c+17,"Patmos cores_0 io_memInOut_M_ByteEn", false,-1, 3,0);
        tracep->declBus(c+18,"Patmos cores_0 io_memInOut_S_Resp", false,-1, 1,0);
        tracep->declBus(c+19,"Patmos cores_0 io_memInOut_S_Data", false,-1, 31,0);
        tracep->declBus(c+20,"Patmos cores_0 io_excInOut_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+15,"Patmos cores_0 io_excInOut_M_Addr", false,-1, 31,0);
        tracep->declBus(c+16,"Patmos cores_0 io_excInOut_M_Data", false,-1, 31,0);
        tracep->declBus(c+21,"Patmos cores_0 io_excInOut_S_Resp", false,-1, 1,0);
        tracep->declBus(c+22,"Patmos cores_0 io_excInOut_S_Data", false,-1, 31,0);
        tracep->declBit(c+1353,"Patmos cores_0 icache_clock", false,-1);
        tracep->declBit(c+1354,"Patmos cores_0 icache_reset", false,-1);
        tracep->declBit(c+68,"Patmos cores_0 icache_io_ena_out", false,-1);
        tracep->declBit(c+69,"Patmos cores_0 icache_io_ena_in", false,-1);
        tracep->declBit(c+70,"Patmos cores_0 icache_io_invalidate", false,-1);
        tracep->declBus(c+1347,"Patmos cores_0 icache_io_feicache_addrEven", false,-1, 31,0);
        tracep->declBus(c+1348,"Patmos cores_0 icache_io_feicache_addrOdd", false,-1, 31,0);
        tracep->declBit(c+71,"Patmos cores_0 icache_io_exicache_doCallRet", false,-1);
        tracep->declBus(c+72,"Patmos cores_0 icache_io_exicache_callRetBase", false,-1, 31,0);
        tracep->declBus(c+73,"Patmos cores_0 icache_io_exicache_callRetAddr", false,-1, 31,0);
        tracep->declBus(c+1334,"Patmos cores_0 icache_io_icachefe_instrEven", false,-1, 31,0);
        tracep->declBus(c+1335,"Patmos cores_0 icache_io_icachefe_instrOdd", false,-1, 31,0);
        tracep->declBus(c+74,"Patmos cores_0 icache_io_icachefe_base", false,-1, 31,0);
        tracep->declBus(c+75,"Patmos cores_0 icache_io_icachefe_relBase", false,-1, 10,0);
        tracep->declBus(c+76,"Patmos cores_0 icache_io_icachefe_relPc", false,-1, 11,0);
        tracep->declBus(c+77,"Patmos cores_0 icache_io_icachefe_reloc", false,-1, 31,0);
        tracep->declBus(c+78,"Patmos cores_0 icache_io_icachefe_memSel", false,-1, 1,0);
        tracep->declBus(c+79,"Patmos cores_0 icache_io_ocp_port_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+80,"Patmos cores_0 icache_io_ocp_port_M_Addr", false,-1, 31,0);
        tracep->declBus(c+81,"Patmos cores_0 icache_io_ocp_port_S_Resp", false,-1, 1,0);
        tracep->declBus(c+13,"Patmos cores_0 icache_io_ocp_port_S_Data", false,-1, 31,0);
        tracep->declBit(c+1386,"Patmos cores_0 icache_io_ocp_port_S_CmdAccept", false,-1);
        tracep->declBit(c+82,"Patmos cores_0 icache_io_illMem", false,-1);
        tracep->declBit(c+1353,"Patmos cores_0 fetch_clock", false,-1);
        tracep->declBit(c+1354,"Patmos cores_0 fetch_reset", false,-1);
        tracep->declBit(c+83,"Patmos cores_0 fetch_io_ena", false,-1);
        tracep->declBus(c+1336,"Patmos cores_0 fetch_io_fedec_instr_a", false,-1, 31,0);
        tracep->declBus(c+1337,"Patmos cores_0 fetch_io_fedec_instr_b", false,-1, 31,0);
        tracep->declBus(c+84,"Patmos cores_0 fetch_io_fedec_pc", false,-1, 29,0);
        tracep->declBus(c+85,"Patmos cores_0 fetch_io_fedec_base", false,-1, 29,0);
        tracep->declBus(c+86,"Patmos cores_0 fetch_io_fedec_reloc", false,-1, 31,0);
        tracep->declBus(c+87,"Patmos cores_0 fetch_io_fedec_relPc", false,-1, 29,0);
        tracep->declBus(c+1321,"Patmos cores_0 fetch_io_feex_pc", false,-1, 29,0);
        tracep->declBit(c+88,"Patmos cores_0 fetch_io_exfe_doBranch", false,-1);
        tracep->declBus(c+89,"Patmos cores_0 fetch_io_exfe_branchPc", false,-1, 29,0);
        tracep->declBit(c+90,"Patmos cores_0 fetch_io_memfe_doCallRet", false,-1);
        tracep->declBit(c+91,"Patmos cores_0 fetch_io_memfe_store", false,-1);
        tracep->declBus(c+92,"Patmos cores_0 fetch_io_memfe_addr", false,-1, 31,0);
        tracep->declBus(c+16,"Patmos cores_0 fetch_io_memfe_data", false,-1, 31,0);
        tracep->declBus(c+1347,"Patmos cores_0 fetch_io_feicache_addrEven", false,-1, 31,0);
        tracep->declBus(c+1348,"Patmos cores_0 fetch_io_feicache_addrOdd", false,-1, 31,0);
        tracep->declBus(c+1334,"Patmos cores_0 fetch_io_icachefe_instrEven", false,-1, 31,0);
        tracep->declBus(c+1335,"Patmos cores_0 fetch_io_icachefe_instrOdd", false,-1, 31,0);
        tracep->declBus(c+74,"Patmos cores_0 fetch_io_icachefe_base", false,-1, 31,0);
        tracep->declBus(c+75,"Patmos cores_0 fetch_io_icachefe_relBase", false,-1, 10,0);
        tracep->declBus(c+76,"Patmos cores_0 fetch_io_icachefe_relPc", false,-1, 11,0);
        tracep->declBus(c+77,"Patmos cores_0 fetch_io_icachefe_reloc", false,-1, 31,0);
        tracep->declBus(c+78,"Patmos cores_0 fetch_io_icachefe_memSel", false,-1, 1,0);
        tracep->declBit(c+1353,"Patmos cores_0 decode_clock", false,-1);
        tracep->declBit(c+1354,"Patmos cores_0 decode_reset", false,-1);
        tracep->declBit(c+83,"Patmos cores_0 decode_io_ena", false,-1);
        tracep->declBit(c+93,"Patmos cores_0 decode_io_flush", false,-1);
        tracep->declBus(c+1336,"Patmos cores_0 decode_io_fedec_instr_a", false,-1, 31,0);
        tracep->declBus(c+1337,"Patmos cores_0 decode_io_fedec_instr_b", false,-1, 31,0);
        tracep->declBus(c+84,"Patmos cores_0 decode_io_fedec_pc", false,-1, 29,0);
        tracep->declBus(c+85,"Patmos cores_0 decode_io_fedec_base", false,-1, 29,0);
        tracep->declBus(c+86,"Patmos cores_0 decode_io_fedec_reloc", false,-1, 31,0);
        tracep->declBus(c+87,"Patmos cores_0 decode_io_fedec_relPc", false,-1, 29,0);
        tracep->declBus(c+94,"Patmos cores_0 decode_io_decex_base", false,-1, 29,0);
        tracep->declBus(c+95,"Patmos cores_0 decode_io_decex_relPc", false,-1, 29,0);
        tracep->declBus(c+96,"Patmos cores_0 decode_io_decex_pred_0", false,-1, 3,0);
        tracep->declBus(c+97,"Patmos cores_0 decode_io_decex_pred_1", false,-1, 3,0);
        tracep->declBus(c+98,"Patmos cores_0 decode_io_decex_aluOp_0_func", false,-1, 3,0);
        tracep->declBit(c+99,"Patmos cores_0 decode_io_decex_aluOp_0_isMul", false,-1);
        tracep->declBit(c+100,"Patmos cores_0 decode_io_decex_aluOp_0_isCmp", false,-1);
        tracep->declBit(c+101,"Patmos cores_0 decode_io_decex_aluOp_0_isPred", false,-1);
        tracep->declBit(c+102,"Patmos cores_0 decode_io_decex_aluOp_0_isBCpy", false,-1);
        tracep->declBit(c+103,"Patmos cores_0 decode_io_decex_aluOp_0_isMTS", false,-1);
        tracep->declBit(c+104,"Patmos cores_0 decode_io_decex_aluOp_0_isMFS", false,-1);
        tracep->declBus(c+105,"Patmos cores_0 decode_io_decex_aluOp_1_func", false,-1, 3,0);
        tracep->declBit(c+106,"Patmos cores_0 decode_io_decex_aluOp_1_isCmp", false,-1);
        tracep->declBit(c+107,"Patmos cores_0 decode_io_decex_aluOp_1_isPred", false,-1);
        tracep->declBit(c+108,"Patmos cores_0 decode_io_decex_aluOp_1_isBCpy", false,-1);
        tracep->declBit(c+109,"Patmos cores_0 decode_io_decex_aluOp_1_isMTS", false,-1);
        tracep->declBit(c+110,"Patmos cores_0 decode_io_decex_aluOp_1_isMFS", false,-1);
        tracep->declBus(c+111,"Patmos cores_0 decode_io_decex_predOp_0_func", false,-1, 1,0);
        tracep->declBus(c+112,"Patmos cores_0 decode_io_decex_predOp_0_dest", false,-1, 2,0);
        tracep->declBus(c+113,"Patmos cores_0 decode_io_decex_predOp_0_s1Addr", false,-1, 3,0);
        tracep->declBus(c+114,"Patmos cores_0 decode_io_decex_predOp_0_s2Addr", false,-1, 3,0);
        tracep->declBus(c+115,"Patmos cores_0 decode_io_decex_predOp_1_func", false,-1, 1,0);
        tracep->declBus(c+116,"Patmos cores_0 decode_io_decex_predOp_1_dest", false,-1, 2,0);
        tracep->declBus(c+117,"Patmos cores_0 decode_io_decex_predOp_1_s1Addr", false,-1, 3,0);
        tracep->declBus(c+118,"Patmos cores_0 decode_io_decex_predOp_1_s2Addr", false,-1, 3,0);
        tracep->declBit(c+119,"Patmos cores_0 decode_io_decex_jmpOp_branch", false,-1);
        tracep->declBus(c+120,"Patmos cores_0 decode_io_decex_jmpOp_target", false,-1, 29,0);
        tracep->declBus(c+121,"Patmos cores_0 decode_io_decex_jmpOp_reloc", false,-1, 31,0);
        tracep->declBit(c+122,"Patmos cores_0 decode_io_decex_memOp_load", false,-1);
        tracep->declBit(c+123,"Patmos cores_0 decode_io_decex_memOp_store", false,-1);
        tracep->declBit(c+124,"Patmos cores_0 decode_io_decex_memOp_hword", false,-1);
        tracep->declBit(c+125,"Patmos cores_0 decode_io_decex_memOp_byte", false,-1);
        tracep->declBit(c+126,"Patmos cores_0 decode_io_decex_memOp_zext", false,-1);
        tracep->declBus(c+127,"Patmos cores_0 decode_io_decex_memOp_typ", false,-1, 1,0);
        tracep->declBus(c+128,"Patmos cores_0 decode_io_decex_stackOp", false,-1, 2,0);
        tracep->declBus(c+129,"Patmos cores_0 decode_io_decex_rsAddr_0", false,-1, 4,0);
        tracep->declBus(c+130,"Patmos cores_0 decode_io_decex_rsAddr_1", false,-1, 4,0);
        tracep->declBus(c+131,"Patmos cores_0 decode_io_decex_rsAddr_2", false,-1, 4,0);
        tracep->declBus(c+132,"Patmos cores_0 decode_io_decex_rsAddr_3", false,-1, 4,0);
        tracep->declBus(c+133,"Patmos cores_0 decode_io_decex_rsData_0", false,-1, 31,0);
        tracep->declBus(c+134,"Patmos cores_0 decode_io_decex_rsData_1", false,-1, 31,0);
        tracep->declBus(c+135,"Patmos cores_0 decode_io_decex_rsData_2", false,-1, 31,0);
        tracep->declBus(c+136,"Patmos cores_0 decode_io_decex_rsData_3", false,-1, 31,0);
        tracep->declBus(c+137,"Patmos cores_0 decode_io_decex_rdAddr_0", false,-1, 4,0);
        tracep->declBus(c+138,"Patmos cores_0 decode_io_decex_rdAddr_1", false,-1, 4,0);
        tracep->declBus(c+139,"Patmos cores_0 decode_io_decex_immVal_0", false,-1, 31,0);
        tracep->declBus(c+140,"Patmos cores_0 decode_io_decex_immVal_1", false,-1, 31,0);
        tracep->declBit(c+141,"Patmos cores_0 decode_io_decex_immOp_0", false,-1);
        tracep->declBit(c+142,"Patmos cores_0 decode_io_decex_immOp_1", false,-1);
        tracep->declBit(c+143,"Patmos cores_0 decode_io_decex_wrRd_0", false,-1);
        tracep->declBit(c+144,"Patmos cores_0 decode_io_decex_wrRd_1", false,-1);
        tracep->declBus(c+145,"Patmos cores_0 decode_io_decex_callAddr", false,-1, 31,0);
        tracep->declBit(c+146,"Patmos cores_0 decode_io_decex_call", false,-1);
        tracep->declBit(c+147,"Patmos cores_0 decode_io_decex_ret", false,-1);
        tracep->declBit(c+148,"Patmos cores_0 decode_io_decex_brcf", false,-1);
        tracep->declBit(c+149,"Patmos cores_0 decode_io_decex_trap", false,-1);
        tracep->declBit(c+150,"Patmos cores_0 decode_io_decex_xcall", false,-1);
        tracep->declBit(c+151,"Patmos cores_0 decode_io_decex_xret", false,-1);
        tracep->declBus(c+152,"Patmos cores_0 decode_io_decex_xsrc", false,-1, 4,0);
        tracep->declBit(c+153,"Patmos cores_0 decode_io_decex_nonDelayed", false,-1);
        tracep->declBit(c+154,"Patmos cores_0 decode_io_decex_illOp", false,-1);
        tracep->declBus(c+155,"Patmos cores_0 decode_io_rfWrite_0_addr", false,-1, 4,0);
        tracep->declBus(c+156,"Patmos cores_0 decode_io_rfWrite_0_data", false,-1, 31,0);
        tracep->declBit(c+157,"Patmos cores_0 decode_io_rfWrite_0_valid", false,-1);
        tracep->declBus(c+158,"Patmos cores_0 decode_io_rfWrite_1_addr", false,-1, 4,0);
        tracep->declBus(c+159,"Patmos cores_0 decode_io_rfWrite_1_data", false,-1, 31,0);
        tracep->declBit(c+160,"Patmos cores_0 decode_io_rfWrite_1_valid", false,-1);
        tracep->declBit(c+161,"Patmos cores_0 decode_io_exc_exc", false,-1);
        tracep->declBus(c+162,"Patmos cores_0 decode_io_exc_excBase", false,-1, 29,0);
        tracep->declBus(c+163,"Patmos cores_0 decode_io_exc_excAddr", false,-1, 29,0);
        tracep->declBit(c+164,"Patmos cores_0 decode_io_exc_intr", false,-1);
        tracep->declBus(c+165,"Patmos cores_0 decode_io_exc_addr", false,-1, 31,0);
        tracep->declBus(c+166,"Patmos cores_0 decode_io_exc_src", false,-1, 4,0);
        tracep->declBit(c+167,"Patmos cores_0 decode_io_exc_local", false,-1);
        tracep->declBit(c+1353,"Patmos cores_0 execute_clock", false,-1);
        tracep->declBit(c+1354,"Patmos cores_0 execute_reset", false,-1);
        tracep->declBit(c+83,"Patmos cores_0 execute_io_ena", false,-1);
        tracep->declBit(c+168,"Patmos cores_0 execute_io_flush", false,-1);
        tracep->declBit(c+169,"Patmos cores_0 execute_io_brflush", false,-1);
        tracep->declBus(c+94,"Patmos cores_0 execute_io_decex_base", false,-1, 29,0);
        tracep->declBus(c+95,"Patmos cores_0 execute_io_decex_relPc", false,-1, 29,0);
        tracep->declBus(c+96,"Patmos cores_0 execute_io_decex_pred_0", false,-1, 3,0);
        tracep->declBus(c+97,"Patmos cores_0 execute_io_decex_pred_1", false,-1, 3,0);
        tracep->declBus(c+98,"Patmos cores_0 execute_io_decex_aluOp_0_func", false,-1, 3,0);
        tracep->declBit(c+99,"Patmos cores_0 execute_io_decex_aluOp_0_isMul", false,-1);
        tracep->declBit(c+100,"Patmos cores_0 execute_io_decex_aluOp_0_isCmp", false,-1);
        tracep->declBit(c+101,"Patmos cores_0 execute_io_decex_aluOp_0_isPred", false,-1);
        tracep->declBit(c+102,"Patmos cores_0 execute_io_decex_aluOp_0_isBCpy", false,-1);
        tracep->declBit(c+103,"Patmos cores_0 execute_io_decex_aluOp_0_isMTS", false,-1);
        tracep->declBit(c+104,"Patmos cores_0 execute_io_decex_aluOp_0_isMFS", false,-1);
        tracep->declBus(c+105,"Patmos cores_0 execute_io_decex_aluOp_1_func", false,-1, 3,0);
        tracep->declBit(c+106,"Patmos cores_0 execute_io_decex_aluOp_1_isCmp", false,-1);
        tracep->declBit(c+107,"Patmos cores_0 execute_io_decex_aluOp_1_isPred", false,-1);
        tracep->declBit(c+108,"Patmos cores_0 execute_io_decex_aluOp_1_isBCpy", false,-1);
        tracep->declBit(c+109,"Patmos cores_0 execute_io_decex_aluOp_1_isMTS", false,-1);
        tracep->declBit(c+110,"Patmos cores_0 execute_io_decex_aluOp_1_isMFS", false,-1);
        tracep->declBus(c+111,"Patmos cores_0 execute_io_decex_predOp_0_func", false,-1, 1,0);
        tracep->declBus(c+112,"Patmos cores_0 execute_io_decex_predOp_0_dest", false,-1, 2,0);
        tracep->declBus(c+113,"Patmos cores_0 execute_io_decex_predOp_0_s1Addr", false,-1, 3,0);
        tracep->declBus(c+114,"Patmos cores_0 execute_io_decex_predOp_0_s2Addr", false,-1, 3,0);
        tracep->declBus(c+115,"Patmos cores_0 execute_io_decex_predOp_1_func", false,-1, 1,0);
        tracep->declBus(c+116,"Patmos cores_0 execute_io_decex_predOp_1_dest", false,-1, 2,0);
        tracep->declBus(c+117,"Patmos cores_0 execute_io_decex_predOp_1_s1Addr", false,-1, 3,0);
        tracep->declBus(c+118,"Patmos cores_0 execute_io_decex_predOp_1_s2Addr", false,-1, 3,0);
        tracep->declBit(c+119,"Patmos cores_0 execute_io_decex_jmpOp_branch", false,-1);
        tracep->declBus(c+120,"Patmos cores_0 execute_io_decex_jmpOp_target", false,-1, 29,0);
        tracep->declBus(c+121,"Patmos cores_0 execute_io_decex_jmpOp_reloc", false,-1, 31,0);
        tracep->declBit(c+122,"Patmos cores_0 execute_io_decex_memOp_load", false,-1);
        tracep->declBit(c+123,"Patmos cores_0 execute_io_decex_memOp_store", false,-1);
        tracep->declBit(c+124,"Patmos cores_0 execute_io_decex_memOp_hword", false,-1);
        tracep->declBit(c+125,"Patmos cores_0 execute_io_decex_memOp_byte", false,-1);
        tracep->declBit(c+126,"Patmos cores_0 execute_io_decex_memOp_zext", false,-1);
        tracep->declBus(c+127,"Patmos cores_0 execute_io_decex_memOp_typ", false,-1, 1,0);
        tracep->declBus(c+128,"Patmos cores_0 execute_io_decex_stackOp", false,-1, 2,0);
        tracep->declBus(c+129,"Patmos cores_0 execute_io_decex_rsAddr_0", false,-1, 4,0);
        tracep->declBus(c+130,"Patmos cores_0 execute_io_decex_rsAddr_1", false,-1, 4,0);
        tracep->declBus(c+131,"Patmos cores_0 execute_io_decex_rsAddr_2", false,-1, 4,0);
        tracep->declBus(c+132,"Patmos cores_0 execute_io_decex_rsAddr_3", false,-1, 4,0);
        tracep->declBus(c+133,"Patmos cores_0 execute_io_decex_rsData_0", false,-1, 31,0);
        tracep->declBus(c+134,"Patmos cores_0 execute_io_decex_rsData_1", false,-1, 31,0);
        tracep->declBus(c+135,"Patmos cores_0 execute_io_decex_rsData_2", false,-1, 31,0);
        tracep->declBus(c+136,"Patmos cores_0 execute_io_decex_rsData_3", false,-1, 31,0);
        tracep->declBus(c+137,"Patmos cores_0 execute_io_decex_rdAddr_0", false,-1, 4,0);
        tracep->declBus(c+138,"Patmos cores_0 execute_io_decex_rdAddr_1", false,-1, 4,0);
        tracep->declBus(c+139,"Patmos cores_0 execute_io_decex_immVal_0", false,-1, 31,0);
        tracep->declBus(c+140,"Patmos cores_0 execute_io_decex_immVal_1", false,-1, 31,0);
        tracep->declBit(c+141,"Patmos cores_0 execute_io_decex_immOp_0", false,-1);
        tracep->declBit(c+142,"Patmos cores_0 execute_io_decex_immOp_1", false,-1);
        tracep->declBit(c+143,"Patmos cores_0 execute_io_decex_wrRd_0", false,-1);
        tracep->declBit(c+144,"Patmos cores_0 execute_io_decex_wrRd_1", false,-1);
        tracep->declBus(c+145,"Patmos cores_0 execute_io_decex_callAddr", false,-1, 31,0);
        tracep->declBit(c+146,"Patmos cores_0 execute_io_decex_call", false,-1);
        tracep->declBit(c+147,"Patmos cores_0 execute_io_decex_ret", false,-1);
        tracep->declBit(c+148,"Patmos cores_0 execute_io_decex_brcf", false,-1);
        tracep->declBit(c+149,"Patmos cores_0 execute_io_decex_trap", false,-1);
        tracep->declBit(c+150,"Patmos cores_0 execute_io_decex_xcall", false,-1);
        tracep->declBit(c+151,"Patmos cores_0 execute_io_decex_xret", false,-1);
        tracep->declBus(c+152,"Patmos cores_0 execute_io_decex_xsrc", false,-1, 4,0);
        tracep->declBit(c+153,"Patmos cores_0 execute_io_decex_nonDelayed", false,-1);
        tracep->declBit(c+154,"Patmos cores_0 execute_io_decex_illOp", false,-1);
        tracep->declBus(c+170,"Patmos cores_0 execute_io_exmem_rd_0_addr", false,-1, 4,0);
        tracep->declBus(c+171,"Patmos cores_0 execute_io_exmem_rd_0_data", false,-1, 31,0);
        tracep->declBit(c+172,"Patmos cores_0 execute_io_exmem_rd_0_valid", false,-1);
        tracep->declBus(c+173,"Patmos cores_0 execute_io_exmem_rd_1_addr", false,-1, 4,0);
        tracep->declBus(c+174,"Patmos cores_0 execute_io_exmem_rd_1_data", false,-1, 31,0);
        tracep->declBit(c+175,"Patmos cores_0 execute_io_exmem_rd_1_valid", false,-1);
        tracep->declBit(c+176,"Patmos cores_0 execute_io_exmem_mem_load", false,-1);
        tracep->declBit(c+177,"Patmos cores_0 execute_io_exmem_mem_store", false,-1);
        tracep->declBit(c+178,"Patmos cores_0 execute_io_exmem_mem_hword", false,-1);
        tracep->declBit(c+179,"Patmos cores_0 execute_io_exmem_mem_byte", false,-1);
        tracep->declBit(c+180,"Patmos cores_0 execute_io_exmem_mem_zext", false,-1);
        tracep->declBus(c+181,"Patmos cores_0 execute_io_exmem_mem_typ", false,-1, 1,0);
        tracep->declBus(c+92,"Patmos cores_0 execute_io_exmem_mem_addr", false,-1, 31,0);
        tracep->declBus(c+182,"Patmos cores_0 execute_io_exmem_mem_data", false,-1, 31,0);
        tracep->declBit(c+183,"Patmos cores_0 execute_io_exmem_mem_call", false,-1);
        tracep->declBit(c+184,"Patmos cores_0 execute_io_exmem_mem_ret", false,-1);
        tracep->declBit(c+185,"Patmos cores_0 execute_io_exmem_mem_brcf", false,-1);
        tracep->declBit(c+186,"Patmos cores_0 execute_io_exmem_mem_trap", false,-1);
        tracep->declBit(c+187,"Patmos cores_0 execute_io_exmem_mem_xcall", false,-1);
        tracep->declBit(c+188,"Patmos cores_0 execute_io_exmem_mem_xret", false,-1);
        tracep->declBus(c+189,"Patmos cores_0 execute_io_exmem_mem_xsrc", false,-1, 4,0);
        tracep->declBit(c+190,"Patmos cores_0 execute_io_exmem_mem_illOp", false,-1);
        tracep->declBit(c+191,"Patmos cores_0 execute_io_exmem_mem_nonDelayed", false,-1);
        tracep->declBus(c+192,"Patmos cores_0 execute_io_exmem_base", false,-1, 29,0);
        tracep->declBus(c+193,"Patmos cores_0 execute_io_exmem_relPc", false,-1, 29,0);
        tracep->declBit(c+71,"Patmos cores_0 execute_io_exicache_doCallRet", false,-1);
        tracep->declBus(c+72,"Patmos cores_0 execute_io_exicache_callRetBase", false,-1, 31,0);
        tracep->declBus(c+73,"Patmos cores_0 execute_io_exicache_callRetAddr", false,-1, 31,0);
        tracep->declBus(c+1321,"Patmos cores_0 execute_io_feex_pc", false,-1, 29,0);
        tracep->declBus(c+170,"Patmos cores_0 execute_io_exResult_0_addr", false,-1, 4,0);
        tracep->declBus(c+171,"Patmos cores_0 execute_io_exResult_0_data", false,-1, 31,0);
        tracep->declBit(c+172,"Patmos cores_0 execute_io_exResult_0_valid", false,-1);
        tracep->declBus(c+173,"Patmos cores_0 execute_io_exResult_1_addr", false,-1, 4,0);
        tracep->declBus(c+174,"Patmos cores_0 execute_io_exResult_1_data", false,-1, 31,0);
        tracep->declBit(c+175,"Patmos cores_0 execute_io_exResult_1_valid", false,-1);
        tracep->declBus(c+155,"Patmos cores_0 execute_io_memResult_0_addr", false,-1, 4,0);
        tracep->declBus(c+156,"Patmos cores_0 execute_io_memResult_0_data", false,-1, 31,0);
        tracep->declBit(c+157,"Patmos cores_0 execute_io_memResult_0_valid", false,-1);
        tracep->declBus(c+158,"Patmos cores_0 execute_io_memResult_1_addr", false,-1, 4,0);
        tracep->declBus(c+159,"Patmos cores_0 execute_io_memResult_1_data", false,-1, 31,0);
        tracep->declBit(c+160,"Patmos cores_0 execute_io_memResult_1_valid", false,-1);
        tracep->declBit(c+88,"Patmos cores_0 execute_io_exfe_doBranch", false,-1);
        tracep->declBus(c+89,"Patmos cores_0 execute_io_exfe_branchPc", false,-1, 29,0);
        tracep->declBus(c+194,"Patmos cores_0 execute_io_exsc_op", false,-1, 2,0);
        tracep->declBus(c+195,"Patmos cores_0 execute_io_exsc_opData", false,-1, 31,0);
        tracep->declBus(c+196,"Patmos cores_0 execute_io_exsc_opOff", false,-1, 31,0);
        tracep->declBus(c+197,"Patmos cores_0 execute_io_scex_stackTop", false,-1, 31,0);
        tracep->declBus(c+198,"Patmos cores_0 execute_io_scex_memTop", false,-1, 31,0);
        tracep->declBit(c+1353,"Patmos cores_0 memory_clock", false,-1);
        tracep->declBit(c+1354,"Patmos cores_0 memory_reset", false,-1);
        tracep->declBit(c+199,"Patmos cores_0 memory_io_ena_out", false,-1);
        tracep->declBit(c+200,"Patmos cores_0 memory_io_ena_in", false,-1);
        tracep->declBit(c+168,"Patmos cores_0 memory_io_flush", false,-1);
        tracep->declBus(c+170,"Patmos cores_0 memory_io_exmem_rd_0_addr", false,-1, 4,0);
        tracep->declBus(c+171,"Patmos cores_0 memory_io_exmem_rd_0_data", false,-1, 31,0);
        tracep->declBit(c+172,"Patmos cores_0 memory_io_exmem_rd_0_valid", false,-1);
        tracep->declBus(c+173,"Patmos cores_0 memory_io_exmem_rd_1_addr", false,-1, 4,0);
        tracep->declBus(c+174,"Patmos cores_0 memory_io_exmem_rd_1_data", false,-1, 31,0);
        tracep->declBit(c+175,"Patmos cores_0 memory_io_exmem_rd_1_valid", false,-1);
        tracep->declBit(c+176,"Patmos cores_0 memory_io_exmem_mem_load", false,-1);
        tracep->declBit(c+177,"Patmos cores_0 memory_io_exmem_mem_store", false,-1);
        tracep->declBit(c+178,"Patmos cores_0 memory_io_exmem_mem_hword", false,-1);
        tracep->declBit(c+179,"Patmos cores_0 memory_io_exmem_mem_byte", false,-1);
        tracep->declBit(c+180,"Patmos cores_0 memory_io_exmem_mem_zext", false,-1);
        tracep->declBus(c+181,"Patmos cores_0 memory_io_exmem_mem_typ", false,-1, 1,0);
        tracep->declBus(c+92,"Patmos cores_0 memory_io_exmem_mem_addr", false,-1, 31,0);
        tracep->declBus(c+182,"Patmos cores_0 memory_io_exmem_mem_data", false,-1, 31,0);
        tracep->declBit(c+183,"Patmos cores_0 memory_io_exmem_mem_call", false,-1);
        tracep->declBit(c+184,"Patmos cores_0 memory_io_exmem_mem_ret", false,-1);
        tracep->declBit(c+185,"Patmos cores_0 memory_io_exmem_mem_brcf", false,-1);
        tracep->declBit(c+186,"Patmos cores_0 memory_io_exmem_mem_trap", false,-1);
        tracep->declBit(c+187,"Patmos cores_0 memory_io_exmem_mem_xcall", false,-1);
        tracep->declBit(c+188,"Patmos cores_0 memory_io_exmem_mem_xret", false,-1);
        tracep->declBus(c+189,"Patmos cores_0 memory_io_exmem_mem_xsrc", false,-1, 4,0);
        tracep->declBit(c+190,"Patmos cores_0 memory_io_exmem_mem_illOp", false,-1);
        tracep->declBit(c+191,"Patmos cores_0 memory_io_exmem_mem_nonDelayed", false,-1);
        tracep->declBus(c+192,"Patmos cores_0 memory_io_exmem_base", false,-1, 29,0);
        tracep->declBus(c+193,"Patmos cores_0 memory_io_exmem_relPc", false,-1, 29,0);
        tracep->declBus(c+155,"Patmos cores_0 memory_io_memwb_rd_0_addr", false,-1, 4,0);
        tracep->declBus(c+156,"Patmos cores_0 memory_io_memwb_rd_0_data", false,-1, 31,0);
        tracep->declBit(c+157,"Patmos cores_0 memory_io_memwb_rd_0_valid", false,-1);
        tracep->declBus(c+158,"Patmos cores_0 memory_io_memwb_rd_1_addr", false,-1, 4,0);
        tracep->declBus(c+159,"Patmos cores_0 memory_io_memwb_rd_1_data", false,-1, 31,0);
        tracep->declBit(c+160,"Patmos cores_0 memory_io_memwb_rd_1_valid", false,-1);
        tracep->declBit(c+90,"Patmos cores_0 memory_io_memfe_doCallRet", false,-1);
        tracep->declBit(c+91,"Patmos cores_0 memory_io_memfe_store", false,-1);
        tracep->declBus(c+92,"Patmos cores_0 memory_io_memfe_addr", false,-1, 31,0);
        tracep->declBus(c+16,"Patmos cores_0 memory_io_memfe_data", false,-1, 31,0);
        tracep->declBus(c+170,"Patmos cores_0 memory_io_exResult_0_addr", false,-1, 4,0);
        tracep->declBus(c+171,"Patmos cores_0 memory_io_exResult_0_data", false,-1, 31,0);
        tracep->declBit(c+172,"Patmos cores_0 memory_io_exResult_0_valid", false,-1);
        tracep->declBus(c+173,"Patmos cores_0 memory_io_exResult_1_addr", false,-1, 4,0);
        tracep->declBus(c+174,"Patmos cores_0 memory_io_exResult_1_data", false,-1, 31,0);
        tracep->declBit(c+175,"Patmos cores_0 memory_io_exResult_1_valid", false,-1);
        tracep->declBus(c+14,"Patmos cores_0 memory_io_localInOut_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+15,"Patmos cores_0 memory_io_localInOut_M_Addr", false,-1, 31,0);
        tracep->declBus(c+16,"Patmos cores_0 memory_io_localInOut_M_Data", false,-1, 31,0);
        tracep->declBus(c+17,"Patmos cores_0 memory_io_localInOut_M_ByteEn", false,-1, 3,0);
        tracep->declBus(c+18,"Patmos cores_0 memory_io_localInOut_S_Resp", false,-1, 1,0);
        tracep->declBus(c+19,"Patmos cores_0 memory_io_localInOut_S_Data", false,-1, 31,0);
        tracep->declBus(c+201,"Patmos cores_0 memory_io_globalInOut_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+15,"Patmos cores_0 memory_io_globalInOut_M_Addr", false,-1, 31,0);
        tracep->declBus(c+16,"Patmos cores_0 memory_io_globalInOut_M_Data", false,-1, 31,0);
        tracep->declBus(c+202,"Patmos cores_0 memory_io_globalInOut_M_ByteEn", false,-1, 3,0);
        tracep->declBus(c+203,"Patmos cores_0 memory_io_globalInOut_M_AddrSpace", false,-1, 1,0);
        tracep->declBus(c+204,"Patmos cores_0 memory_io_globalInOut_S_Resp", false,-1, 1,0);
        tracep->declBus(c+205,"Patmos cores_0 memory_io_globalInOut_S_Data", false,-1, 31,0);
        tracep->declBit(c+82,"Patmos cores_0 memory_io_icacheIllMem", false,-1);
        tracep->declBit(c+206,"Patmos cores_0 memory_io_scacheIllMem", false,-1);
        tracep->declBit(c+207,"Patmos cores_0 memory_io_exc_call", false,-1);
        tracep->declBit(c+208,"Patmos cores_0 memory_io_exc_ret", false,-1);
        tracep->declBus(c+209,"Patmos cores_0 memory_io_exc_src", false,-1, 4,0);
        tracep->declBit(c+210,"Patmos cores_0 memory_io_exc_exc", false,-1);
        tracep->declBus(c+211,"Patmos cores_0 memory_io_exc_excBase", false,-1, 29,0);
        tracep->declBus(c+212,"Patmos cores_0 memory_io_exc_excAddr", false,-1, 29,0);
        tracep->declBus(c+155,"Patmos cores_0 writeback_io_memwb_rd_0_addr", false,-1, 4,0);
        tracep->declBus(c+156,"Patmos cores_0 writeback_io_memwb_rd_0_data", false,-1, 31,0);
        tracep->declBit(c+157,"Patmos cores_0 writeback_io_memwb_rd_0_valid", false,-1);
        tracep->declBus(c+158,"Patmos cores_0 writeback_io_memwb_rd_1_addr", false,-1, 4,0);
        tracep->declBus(c+159,"Patmos cores_0 writeback_io_memwb_rd_1_data", false,-1, 31,0);
        tracep->declBit(c+160,"Patmos cores_0 writeback_io_memwb_rd_1_valid", false,-1);
        tracep->declBus(c+155,"Patmos cores_0 writeback_io_rfWrite_0_addr", false,-1, 4,0);
        tracep->declBus(c+156,"Patmos cores_0 writeback_io_rfWrite_0_data", false,-1, 31,0);
        tracep->declBit(c+157,"Patmos cores_0 writeback_io_rfWrite_0_valid", false,-1);
        tracep->declBus(c+158,"Patmos cores_0 writeback_io_rfWrite_1_addr", false,-1, 4,0);
        tracep->declBus(c+159,"Patmos cores_0 writeback_io_rfWrite_1_data", false,-1, 31,0);
        tracep->declBit(c+160,"Patmos cores_0 writeback_io_rfWrite_1_valid", false,-1);
        tracep->declBus(c+155,"Patmos cores_0 writeback_io_memResult_0_addr", false,-1, 4,0);
        tracep->declBus(c+156,"Patmos cores_0 writeback_io_memResult_0_data", false,-1, 31,0);
        tracep->declBit(c+157,"Patmos cores_0 writeback_io_memResult_0_valid", false,-1);
        tracep->declBus(c+158,"Patmos cores_0 writeback_io_memResult_1_addr", false,-1, 4,0);
        tracep->declBus(c+159,"Patmos cores_0 writeback_io_memResult_1_data", false,-1, 31,0);
        tracep->declBit(c+160,"Patmos cores_0 writeback_io_memResult_1_valid", false,-1);
        tracep->declBit(c+1353,"Patmos cores_0 exc_clock", false,-1);
        tracep->declBit(c+1354,"Patmos cores_0 exc_reset", false,-1);
        tracep->declBit(c+213,"Patmos cores_0 exc_io_ena", false,-1);
        tracep->declBus(c+20,"Patmos cores_0 exc_io_ocp_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+15,"Patmos cores_0 exc_io_ocp_M_Addr", false,-1, 31,0);
        tracep->declBus(c+16,"Patmos cores_0 exc_io_ocp_M_Data", false,-1, 31,0);
        tracep->declBus(c+21,"Patmos cores_0 exc_io_ocp_S_Resp", false,-1, 1,0);
        tracep->declBus(c+22,"Patmos cores_0 exc_io_ocp_S_Data", false,-1, 31,0);
        tracep->declBit(c+1,"Patmos cores_0 exc_io_intrs_0", false,-1);
        tracep->declBit(c+2,"Patmos cores_0 exc_io_intrs_1", false,-1);
        tracep->declBit(c+3,"Patmos cores_0 exc_io_intrs_2", false,-1);
        tracep->declBit(c+4,"Patmos cores_0 exc_io_intrs_3", false,-1);
        tracep->declBit(c+5,"Patmos cores_0 exc_io_intrs_4", false,-1);
        tracep->declBit(c+6,"Patmos cores_0 exc_io_intrs_5", false,-1);
        tracep->declBit(c+161,"Patmos cores_0 exc_io_excdec_exc", false,-1);
        tracep->declBus(c+162,"Patmos cores_0 exc_io_excdec_excBase", false,-1, 29,0);
        tracep->declBus(c+163,"Patmos cores_0 exc_io_excdec_excAddr", false,-1, 29,0);
        tracep->declBit(c+164,"Patmos cores_0 exc_io_excdec_intr", false,-1);
        tracep->declBus(c+165,"Patmos cores_0 exc_io_excdec_addr", false,-1, 31,0);
        tracep->declBus(c+166,"Patmos cores_0 exc_io_excdec_src", false,-1, 4,0);
        tracep->declBit(c+167,"Patmos cores_0 exc_io_excdec_local", false,-1);
        tracep->declBit(c+207,"Patmos cores_0 exc_io_memexc_call", false,-1);
        tracep->declBit(c+208,"Patmos cores_0 exc_io_memexc_ret", false,-1);
        tracep->declBus(c+209,"Patmos cores_0 exc_io_memexc_src", false,-1, 4,0);
        tracep->declBit(c+210,"Patmos cores_0 exc_io_memexc_exc", false,-1);
        tracep->declBus(c+211,"Patmos cores_0 exc_io_memexc_excBase", false,-1, 29,0);
        tracep->declBus(c+212,"Patmos cores_0 exc_io_memexc_excAddr", false,-1, 29,0);
        tracep->declBit(c+70,"Patmos cores_0 exc_io_invalICache", false,-1);
        tracep->declBit(c+214,"Patmos cores_0 exc_io_invalDCache", false,-1);
        tracep->declBit(c+1353,"Patmos cores_0 dcache_clock", false,-1);
        tracep->declBit(c+1354,"Patmos cores_0 dcache_reset", false,-1);
        tracep->declBus(c+201,"Patmos cores_0 dcache_io_master_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+15,"Patmos cores_0 dcache_io_master_M_Addr", false,-1, 31,0);
        tracep->declBus(c+16,"Patmos cores_0 dcache_io_master_M_Data", false,-1, 31,0);
        tracep->declBus(c+202,"Patmos cores_0 dcache_io_master_M_ByteEn", false,-1, 3,0);
        tracep->declBus(c+203,"Patmos cores_0 dcache_io_master_M_AddrSpace", false,-1, 1,0);
        tracep->declBus(c+204,"Patmos cores_0 dcache_io_master_S_Resp", false,-1, 1,0);
        tracep->declBus(c+205,"Patmos cores_0 dcache_io_master_S_Data", false,-1, 31,0);
        tracep->declBus(c+215,"Patmos cores_0 dcache_io_slave_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+216,"Patmos cores_0 dcache_io_slave_M_Addr", false,-1, 31,0);
        tracep->declBus(c+217,"Patmos cores_0 dcache_io_slave_M_Data", false,-1, 31,0);
        tracep->declBit(c+218,"Patmos cores_0 dcache_io_slave_M_DataValid", false,-1);
        tracep->declBus(c+219,"Patmos cores_0 dcache_io_slave_M_DataByteEn", false,-1, 3,0);
        tracep->declBus(c+220,"Patmos cores_0 dcache_io_slave_S_Resp", false,-1, 1,0);
        tracep->declBus(c+13,"Patmos cores_0 dcache_io_slave_S_Data", false,-1, 31,0);
        tracep->declBit(c+1386,"Patmos cores_0 dcache_io_slave_S_CmdAccept", false,-1);
        tracep->declBit(c+1386,"Patmos cores_0 dcache_io_slave_S_DataAccept", false,-1);
        tracep->declBit(c+221,"Patmos cores_0 dcache_io_scIO_ena_in", false,-1);
        tracep->declBus(c+194,"Patmos cores_0 dcache_io_scIO_exsc_op", false,-1, 2,0);
        tracep->declBus(c+195,"Patmos cores_0 dcache_io_scIO_exsc_opData", false,-1, 31,0);
        tracep->declBus(c+196,"Patmos cores_0 dcache_io_scIO_exsc_opOff", false,-1, 31,0);
        tracep->declBus(c+197,"Patmos cores_0 dcache_io_scIO_scex_stackTop", false,-1, 31,0);
        tracep->declBus(c+198,"Patmos cores_0 dcache_io_scIO_scex_memTop", false,-1, 31,0);
        tracep->declBit(c+206,"Patmos cores_0 dcache_io_scIO_illMem", false,-1);
        tracep->declBit(c+222,"Patmos cores_0 dcache_io_scIO_stall", false,-1);
        tracep->declBit(c+214,"Patmos cores_0 dcache_io_invalDCache", false,-1);
        tracep->declBus(c+7,"Patmos cores_0 burstBus_io_master_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+223,"Patmos cores_0 burstBus_io_master_M_Addr", false,-1, 31,0);
        tracep->declBus(c+9,"Patmos cores_0 burstBus_io_master_M_Data", false,-1, 31,0);
        tracep->declBit(c+10,"Patmos cores_0 burstBus_io_master_M_DataValid", false,-1);
        tracep->declBus(c+11,"Patmos cores_0 burstBus_io_master_M_DataByteEn", false,-1, 3,0);
        tracep->declBus(c+12,"Patmos cores_0 burstBus_io_master_S_Resp", false,-1, 1,0);
        tracep->declBus(c+13,"Patmos cores_0 burstBus_io_master_S_Data", false,-1, 31,0);
        tracep->declBit(c+1386,"Patmos cores_0 burstBus_io_master_S_CmdAccept", false,-1);
        tracep->declBit(c+1386,"Patmos cores_0 burstBus_io_master_S_DataAccept", false,-1);
        tracep->declBus(c+7,"Patmos cores_0 burstBus_io_slave_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+223,"Patmos cores_0 burstBus_io_slave_M_Addr", false,-1, 31,0);
        tracep->declBus(c+9,"Patmos cores_0 burstBus_io_slave_M_Data", false,-1, 31,0);
        tracep->declBit(c+10,"Patmos cores_0 burstBus_io_slave_M_DataValid", false,-1);
        tracep->declBus(c+11,"Patmos cores_0 burstBus_io_slave_M_DataByteEn", false,-1, 3,0);
        tracep->declBus(c+12,"Patmos cores_0 burstBus_io_slave_S_Resp", false,-1, 1,0);
        tracep->declBus(c+13,"Patmos cores_0 burstBus_io_slave_S_Data", false,-1, 31,0);
        tracep->declBit(c+1386,"Patmos cores_0 burstBus_io_slave_S_CmdAccept", false,-1);
        tracep->declBit(c+1386,"Patmos cores_0 burstBus_io_slave_S_DataAccept", false,-1);
        tracep->declBus(c+7,"Patmos cores_0 mmu_io_virt_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+223,"Patmos cores_0 mmu_io_virt_M_Addr", false,-1, 31,0);
        tracep->declBus(c+9,"Patmos cores_0 mmu_io_virt_M_Data", false,-1, 31,0);
        tracep->declBit(c+10,"Patmos cores_0 mmu_io_virt_M_DataValid", false,-1);
        tracep->declBus(c+11,"Patmos cores_0 mmu_io_virt_M_DataByteEn", false,-1, 3,0);
        tracep->declBus(c+12,"Patmos cores_0 mmu_io_virt_S_Resp", false,-1, 1,0);
        tracep->declBus(c+13,"Patmos cores_0 mmu_io_virt_S_Data", false,-1, 31,0);
        tracep->declBus(c+7,"Patmos cores_0 mmu_io_phys_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+8,"Patmos cores_0 mmu_io_phys_M_Addr", false,-1, 20,0);
        tracep->declBus(c+9,"Patmos cores_0 mmu_io_phys_M_Data", false,-1, 31,0);
        tracep->declBit(c+10,"Patmos cores_0 mmu_io_phys_M_DataValid", false,-1);
        tracep->declBus(c+11,"Patmos cores_0 mmu_io_phys_M_DataByteEn", false,-1, 3,0);
        tracep->declBus(c+12,"Patmos cores_0 mmu_io_phys_S_Resp", false,-1, 1,0);
        tracep->declBus(c+13,"Patmos cores_0 mmu_io_phys_S_Data", false,-1, 31,0);
        tracep->declBit(c+224,"Patmos cores_0 REG", false,-1);
        tracep->declBit(c+225,"Patmos cores_0 enableReg", false,-1);
        tracep->declBit(c+1353,"Patmos cores_0 icache clock", false,-1);
        tracep->declBit(c+1354,"Patmos cores_0 icache reset", false,-1);
        tracep->declBit(c+68,"Patmos cores_0 icache io_ena_out", false,-1);
        tracep->declBit(c+69,"Patmos cores_0 icache io_ena_in", false,-1);
        tracep->declBit(c+70,"Patmos cores_0 icache io_invalidate", false,-1);
        tracep->declBus(c+1347,"Patmos cores_0 icache io_feicache_addrEven", false,-1, 31,0);
        tracep->declBus(c+1348,"Patmos cores_0 icache io_feicache_addrOdd", false,-1, 31,0);
        tracep->declBit(c+71,"Patmos cores_0 icache io_exicache_doCallRet", false,-1);
        tracep->declBus(c+72,"Patmos cores_0 icache io_exicache_callRetBase", false,-1, 31,0);
        tracep->declBus(c+73,"Patmos cores_0 icache io_exicache_callRetAddr", false,-1, 31,0);
        tracep->declBus(c+1334,"Patmos cores_0 icache io_icachefe_instrEven", false,-1, 31,0);
        tracep->declBus(c+1335,"Patmos cores_0 icache io_icachefe_instrOdd", false,-1, 31,0);
        tracep->declBus(c+74,"Patmos cores_0 icache io_icachefe_base", false,-1, 31,0);
        tracep->declBus(c+75,"Patmos cores_0 icache io_icachefe_relBase", false,-1, 10,0);
        tracep->declBus(c+76,"Patmos cores_0 icache io_icachefe_relPc", false,-1, 11,0);
        tracep->declBus(c+77,"Patmos cores_0 icache io_icachefe_reloc", false,-1, 31,0);
        tracep->declBus(c+78,"Patmos cores_0 icache io_icachefe_memSel", false,-1, 1,0);
        tracep->declBus(c+79,"Patmos cores_0 icache io_ocp_port_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+80,"Patmos cores_0 icache io_ocp_port_M_Addr", false,-1, 31,0);
        tracep->declBus(c+81,"Patmos cores_0 icache io_ocp_port_S_Resp", false,-1, 1,0);
        tracep->declBus(c+13,"Patmos cores_0 icache io_ocp_port_S_Data", false,-1, 31,0);
        tracep->declBit(c+1386,"Patmos cores_0 icache io_ocp_port_S_CmdAccept", false,-1);
        tracep->declBit(c+82,"Patmos cores_0 icache io_illMem", false,-1);
        tracep->declBit(c+1353,"Patmos cores_0 icache ctrl_clock", false,-1);
        tracep->declBit(c+1354,"Patmos cores_0 icache ctrl_reset", false,-1);
        tracep->declBit(c+226,"Patmos cores_0 icache ctrl_io_fetchEna", false,-1);
        tracep->declBit(c+227,"Patmos cores_0 icache ctrl_io_ctrlrepl_wEna", false,-1);
        tracep->declBus(c+228,"Patmos cores_0 icache ctrl_io_ctrlrepl_wData", false,-1, 31,0);
        tracep->declBus(c+229,"Patmos cores_0 icache ctrl_io_ctrlrepl_wAddr", false,-1, 31,0);
        tracep->declBit(c+230,"Patmos cores_0 icache ctrl_io_ctrlrepl_wTag", false,-1);
        tracep->declBus(c+1328,"Patmos cores_0 icache ctrl_io_ctrlrepl_addrEven", false,-1, 10,0);
        tracep->declBus(c+1329,"Patmos cores_0 icache ctrl_io_ctrlrepl_addrOdd", false,-1, 10,0);
        tracep->declBit(c+231,"Patmos cores_0 icache ctrl_io_ctrlrepl_instrStall", false,-1);
        tracep->declBit(c+232,"Patmos cores_0 icache ctrl_io_replctrl_hit", false,-1);
        tracep->declBus(c+1347,"Patmos cores_0 icache ctrl_io_femcache_addrEven", false,-1, 31,0);
        tracep->declBus(c+1348,"Patmos cores_0 icache ctrl_io_femcache_addrOdd", false,-1, 31,0);
        tracep->declBit(c+71,"Patmos cores_0 icache ctrl_io_exmcache_doCallRet", false,-1);
        tracep->declBus(c+72,"Patmos cores_0 icache ctrl_io_exmcache_callRetBase", false,-1, 31,0);
        tracep->declBus(c+79,"Patmos cores_0 icache ctrl_io_ocp_port_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+80,"Patmos cores_0 icache ctrl_io_ocp_port_M_Addr", false,-1, 31,0);
        tracep->declBus(c+81,"Patmos cores_0 icache ctrl_io_ocp_port_S_Resp", false,-1, 1,0);
        tracep->declBus(c+13,"Patmos cores_0 icache ctrl_io_ocp_port_S_Data", false,-1, 31,0);
        tracep->declBit(c+1386,"Patmos cores_0 icache ctrl_io_ocp_port_S_CmdAccept", false,-1);
        tracep->declBit(c+82,"Patmos cores_0 icache ctrl_io_illMem", false,-1);
        tracep->declBit(c+233,"Patmos cores_0 icache ctrl_io_forceHit", false,-1);
        tracep->declBit(c+1353,"Patmos cores_0 icache repl_clock", false,-1);
        tracep->declBit(c+1354,"Patmos cores_0 icache repl_reset", false,-1);
        tracep->declBit(c+69,"Patmos cores_0 icache repl_io_ena_in", false,-1);
        tracep->declBit(c+234,"Patmos cores_0 icache repl_io_invalidate", false,-1);
        tracep->declBit(c+232,"Patmos cores_0 icache repl_io_hitEna", false,-1);
        tracep->declBit(c+71,"Patmos cores_0 icache repl_io_exmcache_doCallRet", false,-1);
        tracep->declBus(c+72,"Patmos cores_0 icache repl_io_exmcache_callRetBase", false,-1, 31,0);
        tracep->declBus(c+73,"Patmos cores_0 icache repl_io_exmcache_callRetAddr", false,-1, 31,0);
        tracep->declBus(c+1334,"Patmos cores_0 icache repl_io_mcachefe_instrEven", false,-1, 31,0);
        tracep->declBus(c+1335,"Patmos cores_0 icache repl_io_mcachefe_instrOdd", false,-1, 31,0);
        tracep->declBus(c+74,"Patmos cores_0 icache repl_io_mcachefe_base", false,-1, 31,0);
        tracep->declBus(c+75,"Patmos cores_0 icache repl_io_mcachefe_relBase", false,-1, 10,0);
        tracep->declBus(c+76,"Patmos cores_0 icache repl_io_mcachefe_relPc", false,-1, 11,0);
        tracep->declBus(c+77,"Patmos cores_0 icache repl_io_mcachefe_reloc", false,-1, 31,0);
        tracep->declBus(c+78,"Patmos cores_0 icache repl_io_mcachefe_memSel", false,-1, 1,0);
        tracep->declBit(c+227,"Patmos cores_0 icache repl_io_ctrlrepl_wEna", false,-1);
        tracep->declBus(c+228,"Patmos cores_0 icache repl_io_ctrlrepl_wData", false,-1, 31,0);
        tracep->declBus(c+229,"Patmos cores_0 icache repl_io_ctrlrepl_wAddr", false,-1, 31,0);
        tracep->declBit(c+230,"Patmos cores_0 icache repl_io_ctrlrepl_wTag", false,-1);
        tracep->declBus(c+1328,"Patmos cores_0 icache repl_io_ctrlrepl_addrEven", false,-1, 10,0);
        tracep->declBus(c+1329,"Patmos cores_0 icache repl_io_ctrlrepl_addrOdd", false,-1, 10,0);
        tracep->declBit(c+231,"Patmos cores_0 icache repl_io_ctrlrepl_instrStall", false,-1);
        tracep->declBit(c+232,"Patmos cores_0 icache repl_io_replctrl_hit", false,-1);
        tracep->declBit(c+235,"Patmos cores_0 icache repl_io_memIn_wEven", false,-1);
        tracep->declBit(c+236,"Patmos cores_0 icache repl_io_memIn_wOdd", false,-1);
        tracep->declBus(c+228,"Patmos cores_0 icache repl_io_memIn_wData", false,-1, 31,0);
        tracep->declBus(c+237,"Patmos cores_0 icache repl_io_memIn_wAddr", false,-1, 9,0);
        tracep->declBus(c+1330,"Patmos cores_0 icache repl_io_memIn_addrEven", false,-1, 9,0);
        tracep->declBus(c+1331,"Patmos cores_0 icache repl_io_memIn_addrOdd", false,-1, 9,0);
        tracep->declBus(c+1368,"Patmos cores_0 icache repl_io_memOut_instrEven", false,-1, 31,0);
        tracep->declBus(c+1369,"Patmos cores_0 icache repl_io_memOut_instrOdd", false,-1, 31,0);
        tracep->declBit(c+1353,"Patmos cores_0 icache mem_clock", false,-1);
        tracep->declBit(c+235,"Patmos cores_0 icache mem_io_memIn_wEven", false,-1);
        tracep->declBit(c+236,"Patmos cores_0 icache mem_io_memIn_wOdd", false,-1);
        tracep->declBus(c+228,"Patmos cores_0 icache mem_io_memIn_wData", false,-1, 31,0);
        tracep->declBus(c+237,"Patmos cores_0 icache mem_io_memIn_wAddr", false,-1, 9,0);
        tracep->declBus(c+1330,"Patmos cores_0 icache mem_io_memIn_addrEven", false,-1, 9,0);
        tracep->declBus(c+1331,"Patmos cores_0 icache mem_io_memIn_addrOdd", false,-1, 9,0);
        tracep->declBus(c+1368,"Patmos cores_0 icache mem_io_memOut_instrEven", false,-1, 31,0);
        tracep->declBus(c+1369,"Patmos cores_0 icache mem_io_memOut_instrOdd", false,-1, 31,0);
        tracep->declBit(c+1353,"Patmos cores_0 icache ctrl clock", false,-1);
        tracep->declBit(c+1354,"Patmos cores_0 icache ctrl reset", false,-1);
        tracep->declBit(c+226,"Patmos cores_0 icache ctrl io_fetchEna", false,-1);
        tracep->declBit(c+227,"Patmos cores_0 icache ctrl io_ctrlrepl_wEna", false,-1);
        tracep->declBus(c+228,"Patmos cores_0 icache ctrl io_ctrlrepl_wData", false,-1, 31,0);
        tracep->declBus(c+229,"Patmos cores_0 icache ctrl io_ctrlrepl_wAddr", false,-1, 31,0);
        tracep->declBit(c+230,"Patmos cores_0 icache ctrl io_ctrlrepl_wTag", false,-1);
        tracep->declBus(c+1328,"Patmos cores_0 icache ctrl io_ctrlrepl_addrEven", false,-1, 10,0);
        tracep->declBus(c+1329,"Patmos cores_0 icache ctrl io_ctrlrepl_addrOdd", false,-1, 10,0);
        tracep->declBit(c+231,"Patmos cores_0 icache ctrl io_ctrlrepl_instrStall", false,-1);
        tracep->declBit(c+232,"Patmos cores_0 icache ctrl io_replctrl_hit", false,-1);
        tracep->declBus(c+1347,"Patmos cores_0 icache ctrl io_femcache_addrEven", false,-1, 31,0);
        tracep->declBus(c+1348,"Patmos cores_0 icache ctrl io_femcache_addrOdd", false,-1, 31,0);
        tracep->declBit(c+71,"Patmos cores_0 icache ctrl io_exmcache_doCallRet", false,-1);
        tracep->declBus(c+72,"Patmos cores_0 icache ctrl io_exmcache_callRetBase", false,-1, 31,0);
        tracep->declBus(c+79,"Patmos cores_0 icache ctrl io_ocp_port_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+80,"Patmos cores_0 icache ctrl io_ocp_port_M_Addr", false,-1, 31,0);
        tracep->declBus(c+81,"Patmos cores_0 icache ctrl io_ocp_port_S_Resp", false,-1, 1,0);
        tracep->declBus(c+13,"Patmos cores_0 icache ctrl io_ocp_port_S_Data", false,-1, 31,0);
        tracep->declBit(c+1386,"Patmos cores_0 icache ctrl io_ocp_port_S_CmdAccept", false,-1);
        tracep->declBit(c+82,"Patmos cores_0 icache ctrl io_illMem", false,-1);
        tracep->declBit(c+233,"Patmos cores_0 icache ctrl io_forceHit", false,-1);
        tracep->declBus(c+238,"Patmos cores_0 icache ctrl stateReg", false,-1, 2,0);
        tracep->declBus(c+239,"Patmos cores_0 icache ctrl ocpCmdReg", false,-1, 2,0);
        tracep->declBus(c+240,"Patmos cores_0 icache ctrl ocpAddrReg", false,-1, 31,0);
        tracep->declBus(c+241,"Patmos cores_0 icache ctrl transferSizeReg", false,-1, 10,0);
        tracep->declBus(c+242,"Patmos cores_0 icache ctrl fetchCntReg", false,-1, 10,0);
        tracep->declBus(c+243,"Patmos cores_0 icache ctrl burstCntReg", false,-1, 1,0);
        tracep->declBus(c+244,"Patmos cores_0 icache ctrl callRetBaseReg", false,-1, 31,0);
        tracep->declBus(c+245,"Patmos cores_0 icache ctrl msizeAddr", false,-1, 31,0);
        tracep->declBus(c+246,"Patmos cores_0 icache ctrl addrEvenReg", false,-1, 31,0);
        tracep->declBus(c+247,"Patmos cores_0 icache ctrl addrOddReg", false,-1, 31,0);
        tracep->declBus(c+248,"Patmos cores_0 icache ctrl ocpSlaveReg_Resp", false,-1, 1,0);
        tracep->declBus(c+249,"Patmos cores_0 icache ctrl ocpSlaveReg_Data", false,-1, 31,0);
        tracep->declBus(c+250,"Patmos cores_0 icache ctrl hi", false,-1, 29,0);
        tracep->declBus(c+251,"Patmos cores_0 icache ctrl hi_1", false,-1, 31,0);
        tracep->declBus(c+1332,"Patmos cores_0 icache ctrl addrEven", false,-1, 31,0);
        tracep->declBus(c+1333,"Patmos cores_0 icache ctrl addrOdd", false,-1, 31,0);
        tracep->declBus(c+1370,"Patmos cores_0 icache ctrl callRetBaseNext", false,-1, 31,0);
        tracep->declBit(c+1353,"Patmos cores_0 icache repl clock", false,-1);
        tracep->declBit(c+1354,"Patmos cores_0 icache repl reset", false,-1);
        tracep->declBit(c+69,"Patmos cores_0 icache repl io_ena_in", false,-1);
        tracep->declBit(c+234,"Patmos cores_0 icache repl io_invalidate", false,-1);
        tracep->declBit(c+232,"Patmos cores_0 icache repl io_hitEna", false,-1);
        tracep->declBit(c+71,"Patmos cores_0 icache repl io_exmcache_doCallRet", false,-1);
        tracep->declBus(c+72,"Patmos cores_0 icache repl io_exmcache_callRetBase", false,-1, 31,0);
        tracep->declBus(c+73,"Patmos cores_0 icache repl io_exmcache_callRetAddr", false,-1, 31,0);
        tracep->declBus(c+1334,"Patmos cores_0 icache repl io_mcachefe_instrEven", false,-1, 31,0);
        tracep->declBus(c+1335,"Patmos cores_0 icache repl io_mcachefe_instrOdd", false,-1, 31,0);
        tracep->declBus(c+74,"Patmos cores_0 icache repl io_mcachefe_base", false,-1, 31,0);
        tracep->declBus(c+75,"Patmos cores_0 icache repl io_mcachefe_relBase", false,-1, 10,0);
        tracep->declBus(c+76,"Patmos cores_0 icache repl io_mcachefe_relPc", false,-1, 11,0);
        tracep->declBus(c+77,"Patmos cores_0 icache repl io_mcachefe_reloc", false,-1, 31,0);
        tracep->declBus(c+78,"Patmos cores_0 icache repl io_mcachefe_memSel", false,-1, 1,0);
        tracep->declBit(c+227,"Patmos cores_0 icache repl io_ctrlrepl_wEna", false,-1);
        tracep->declBus(c+228,"Patmos cores_0 icache repl io_ctrlrepl_wData", false,-1, 31,0);
        tracep->declBus(c+229,"Patmos cores_0 icache repl io_ctrlrepl_wAddr", false,-1, 31,0);
        tracep->declBit(c+230,"Patmos cores_0 icache repl io_ctrlrepl_wTag", false,-1);
        tracep->declBus(c+1328,"Patmos cores_0 icache repl io_ctrlrepl_addrEven", false,-1, 10,0);
        tracep->declBus(c+1329,"Patmos cores_0 icache repl io_ctrlrepl_addrOdd", false,-1, 10,0);
        tracep->declBit(c+231,"Patmos cores_0 icache repl io_ctrlrepl_instrStall", false,-1);
        tracep->declBit(c+232,"Patmos cores_0 icache repl io_replctrl_hit", false,-1);
        tracep->declBit(c+235,"Patmos cores_0 icache repl io_memIn_wEven", false,-1);
        tracep->declBit(c+236,"Patmos cores_0 icache repl io_memIn_wOdd", false,-1);
        tracep->declBus(c+228,"Patmos cores_0 icache repl io_memIn_wData", false,-1, 31,0);
        tracep->declBus(c+237,"Patmos cores_0 icache repl io_memIn_wAddr", false,-1, 9,0);
        tracep->declBus(c+1330,"Patmos cores_0 icache repl io_memIn_addrEven", false,-1, 9,0);
        tracep->declBus(c+1331,"Patmos cores_0 icache repl io_memIn_addrOdd", false,-1, 9,0);
        tracep->declBus(c+1368,"Patmos cores_0 icache repl io_memOut_instrEven", false,-1, 31,0);
        tracep->declBus(c+1369,"Patmos cores_0 icache repl io_memOut_instrOdd", false,-1, 31,0);
        tracep->declBus(c+252,"Patmos cores_0 icache repl nextIndexReg", false,-1, 3,0);
        tracep->declBus(c+253,"Patmos cores_0 icache repl nextTagReg", false,-1, 3,0);
        tracep->declBus(c+254,"Patmos cores_0 icache repl nextPosReg", false,-1, 10,0);
        tracep->declBus(c+255,"Patmos cores_0 icache repl freeSpaceReg", false,-1, 12,0);
        tracep->declBus(c+256,"Patmos cores_0 icache repl posReg", false,-1, 10,0);
        tracep->declBit(c+232,"Patmos cores_0 icache repl hitReg", false,-1);
        tracep->declBus(c+257,"Patmos cores_0 icache repl wrPosReg", false,-1, 10,0);
        tracep->declBus(c+74,"Patmos cores_0 icache repl callRetBaseReg", false,-1, 31,0);
        tracep->declBus(c+258,"Patmos cores_0 icache repl callAddrReg", false,-1, 31,0);
        tracep->declBit(c+259,"Patmos cores_0 icache repl selSpmReg", false,-1);
        tracep->declBit(c+260,"Patmos cores_0 icache repl selCacheReg", false,-1);
        tracep->declBus(c+261,"Patmos cores_0 icache repl addrVec_0", false,-1, 31,0);
        tracep->declBit(c+262,"Patmos cores_0 icache repl validVec_0", false,-1);
        tracep->declBit(c+263,"Patmos cores_0 icache repl hitVec_0", false,-1);
        tracep->declBus(c+264,"Patmos cores_0 icache repl posVec_0", false,-1, 10,0);
        tracep->declBus(c+265,"Patmos cores_0 icache repl mergePosVec_0", false,-1, 10,0);
        tracep->declBus(c+266,"Patmos cores_0 icache repl addrVec_1", false,-1, 31,0);
        tracep->declBit(c+267,"Patmos cores_0 icache repl validVec_1", false,-1);
        tracep->declBit(c+268,"Patmos cores_0 icache repl hitVec_1", false,-1);
        tracep->declBus(c+269,"Patmos cores_0 icache repl posVec_1", false,-1, 10,0);
        tracep->declBus(c+270,"Patmos cores_0 icache repl mergePosVec_1", false,-1, 10,0);
        tracep->declBus(c+271,"Patmos cores_0 icache repl addrVec_2", false,-1, 31,0);
        tracep->declBit(c+272,"Patmos cores_0 icache repl validVec_2", false,-1);
        tracep->declBit(c+273,"Patmos cores_0 icache repl hitVec_2", false,-1);
        tracep->declBus(c+274,"Patmos cores_0 icache repl posVec_2", false,-1, 10,0);
        tracep->declBus(c+275,"Patmos cores_0 icache repl mergePosVec_2", false,-1, 10,0);
        tracep->declBus(c+276,"Patmos cores_0 icache repl addrVec_3", false,-1, 31,0);
        tracep->declBit(c+277,"Patmos cores_0 icache repl validVec_3", false,-1);
        tracep->declBit(c+278,"Patmos cores_0 icache repl hitVec_3", false,-1);
        tracep->declBus(c+279,"Patmos cores_0 icache repl posVec_3", false,-1, 10,0);
        tracep->declBus(c+280,"Patmos cores_0 icache repl mergePosVec_3", false,-1, 10,0);
        tracep->declBus(c+281,"Patmos cores_0 icache repl addrVec_4", false,-1, 31,0);
        tracep->declBit(c+282,"Patmos cores_0 icache repl validVec_4", false,-1);
        tracep->declBit(c+283,"Patmos cores_0 icache repl hitVec_4", false,-1);
        tracep->declBus(c+284,"Patmos cores_0 icache repl posVec_4", false,-1, 10,0);
        tracep->declBus(c+285,"Patmos cores_0 icache repl mergePosVec_4", false,-1, 10,0);
        tracep->declBus(c+286,"Patmos cores_0 icache repl addrVec_5", false,-1, 31,0);
        tracep->declBit(c+287,"Patmos cores_0 icache repl validVec_5", false,-1);
        tracep->declBit(c+288,"Patmos cores_0 icache repl hitVec_5", false,-1);
        tracep->declBus(c+289,"Patmos cores_0 icache repl posVec_5", false,-1, 10,0);
        tracep->declBus(c+290,"Patmos cores_0 icache repl mergePosVec_5", false,-1, 10,0);
        tracep->declBus(c+291,"Patmos cores_0 icache repl addrVec_6", false,-1, 31,0);
        tracep->declBit(c+292,"Patmos cores_0 icache repl validVec_6", false,-1);
        tracep->declBit(c+293,"Patmos cores_0 icache repl hitVec_6", false,-1);
        tracep->declBus(c+294,"Patmos cores_0 icache repl posVec_6", false,-1, 10,0);
        tracep->declBus(c+295,"Patmos cores_0 icache repl mergePosVec_6", false,-1, 10,0);
        tracep->declBus(c+296,"Patmos cores_0 icache repl addrVec_7", false,-1, 31,0);
        tracep->declBit(c+297,"Patmos cores_0 icache repl validVec_7", false,-1);
        tracep->declBit(c+298,"Patmos cores_0 icache repl hitVec_7", false,-1);
        tracep->declBus(c+299,"Patmos cores_0 icache repl posVec_7", false,-1, 10,0);
        tracep->declBus(c+300,"Patmos cores_0 icache repl mergePosVec_7", false,-1, 10,0);
        tracep->declBus(c+301,"Patmos cores_0 icache repl addrVec_8", false,-1, 31,0);
        tracep->declBit(c+302,"Patmos cores_0 icache repl validVec_8", false,-1);
        tracep->declBit(c+303,"Patmos cores_0 icache repl hitVec_8", false,-1);
        tracep->declBus(c+304,"Patmos cores_0 icache repl posVec_8", false,-1, 10,0);
        tracep->declBus(c+305,"Patmos cores_0 icache repl mergePosVec_8", false,-1, 10,0);
        tracep->declBus(c+306,"Patmos cores_0 icache repl addrVec_9", false,-1, 31,0);
        tracep->declBit(c+307,"Patmos cores_0 icache repl validVec_9", false,-1);
        tracep->declBit(c+308,"Patmos cores_0 icache repl hitVec_9", false,-1);
        tracep->declBus(c+309,"Patmos cores_0 icache repl posVec_9", false,-1, 10,0);
        tracep->declBus(c+310,"Patmos cores_0 icache repl mergePosVec_9", false,-1, 10,0);
        tracep->declBus(c+311,"Patmos cores_0 icache repl addrVec_10", false,-1, 31,0);
        tracep->declBit(c+312,"Patmos cores_0 icache repl validVec_10", false,-1);
        tracep->declBit(c+313,"Patmos cores_0 icache repl hitVec_10", false,-1);
        tracep->declBus(c+314,"Patmos cores_0 icache repl posVec_10", false,-1, 10,0);
        tracep->declBus(c+315,"Patmos cores_0 icache repl mergePosVec_10", false,-1, 10,0);
        tracep->declBus(c+316,"Patmos cores_0 icache repl addrVec_11", false,-1, 31,0);
        tracep->declBit(c+317,"Patmos cores_0 icache repl validVec_11", false,-1);
        tracep->declBit(c+318,"Patmos cores_0 icache repl hitVec_11", false,-1);
        tracep->declBus(c+319,"Patmos cores_0 icache repl posVec_11", false,-1, 10,0);
        tracep->declBus(c+320,"Patmos cores_0 icache repl mergePosVec_11", false,-1, 10,0);
        tracep->declBus(c+321,"Patmos cores_0 icache repl addrVec_12", false,-1, 31,0);
        tracep->declBit(c+322,"Patmos cores_0 icache repl validVec_12", false,-1);
        tracep->declBit(c+323,"Patmos cores_0 icache repl hitVec_12", false,-1);
        tracep->declBus(c+324,"Patmos cores_0 icache repl posVec_12", false,-1, 10,0);
        tracep->declBus(c+325,"Patmos cores_0 icache repl mergePosVec_12", false,-1, 10,0);
        tracep->declBus(c+326,"Patmos cores_0 icache repl addrVec_13", false,-1, 31,0);
        tracep->declBit(c+327,"Patmos cores_0 icache repl validVec_13", false,-1);
        tracep->declBit(c+328,"Patmos cores_0 icache repl hitVec_13", false,-1);
        tracep->declBus(c+329,"Patmos cores_0 icache repl posVec_13", false,-1, 10,0);
        tracep->declBus(c+330,"Patmos cores_0 icache repl mergePosVec_13", false,-1, 10,0);
        tracep->declBus(c+331,"Patmos cores_0 icache repl addrVec_14", false,-1, 31,0);
        tracep->declBit(c+332,"Patmos cores_0 icache repl validVec_14", false,-1);
        tracep->declBit(c+333,"Patmos cores_0 icache repl hitVec_14", false,-1);
        tracep->declBus(c+334,"Patmos cores_0 icache repl posVec_14", false,-1, 10,0);
        tracep->declBus(c+335,"Patmos cores_0 icache repl mergePosVec_14", false,-1, 10,0);
        tracep->declBus(c+336,"Patmos cores_0 icache repl addrVec_15", false,-1, 31,0);
        tracep->declBit(c+337,"Patmos cores_0 icache repl validVec_15", false,-1);
        tracep->declBit(c+338,"Patmos cores_0 icache repl hitVec_15", false,-1);
        tracep->declBus(c+339,"Patmos cores_0 icache repl posVec_15", false,-1, 10,0);
        tracep->declBus(c+340,"Patmos cores_0 icache repl mergePosVec_15", false,-1, 10,0);
        tracep->declBit(c+341,"Patmos cores_0 icache repl hit", false,-1);
        tracep->declBus(c+342,"Patmos cores_0 icache repl relBase", false,-1, 13,0);
        tracep->declBus(c+343,"Patmos cores_0 icache repl relPc", false,-1, 31,0);
        tracep->declBus(c+344,"Patmos cores_0 icache repl sizeVec_0", false,-1, 11,0);
        tracep->declBus(c+345,"Patmos cores_0 icache repl sizeVec_1", false,-1, 11,0);
        tracep->declBus(c+346,"Patmos cores_0 icache repl sizeVec_2", false,-1, 11,0);
        tracep->declBus(c+347,"Patmos cores_0 icache repl sizeVec_3", false,-1, 11,0);
        tracep->declBus(c+348,"Patmos cores_0 icache repl sizeVec_4", false,-1, 11,0);
        tracep->declBus(c+349,"Patmos cores_0 icache repl sizeVec_5", false,-1, 11,0);
        tracep->declBus(c+350,"Patmos cores_0 icache repl sizeVec_6", false,-1, 11,0);
        tracep->declBus(c+351,"Patmos cores_0 icache repl sizeVec_7", false,-1, 11,0);
        tracep->declBus(c+352,"Patmos cores_0 icache repl sizeVec_8", false,-1, 11,0);
        tracep->declBus(c+353,"Patmos cores_0 icache repl sizeVec_9", false,-1, 11,0);
        tracep->declBus(c+354,"Patmos cores_0 icache repl sizeVec_10", false,-1, 11,0);
        tracep->declBus(c+355,"Patmos cores_0 icache repl sizeVec_11", false,-1, 11,0);
        tracep->declBus(c+356,"Patmos cores_0 icache repl sizeVec_12", false,-1, 11,0);
        tracep->declBus(c+357,"Patmos cores_0 icache repl sizeVec_13", false,-1, 11,0);
        tracep->declBus(c+358,"Patmos cores_0 icache repl sizeVec_14", false,-1, 11,0);
        tracep->declBus(c+359,"Patmos cores_0 icache repl sizeVec_15", false,-1, 11,0);
        tracep->declBit(c+360,"Patmos cores_0 icache repl wParity", false,-1);
        tracep->declBus(c+361,"Patmos cores_0 icache repl instrEvenReg", false,-1, 31,0);
        tracep->declBus(c+362,"Patmos cores_0 icache repl instrOddReg", false,-1, 31,0);
        tracep->declBit(c+1371,"Patmos cores_0 icache repl hitNext", false,-1);
        tracep->declBus(c+1372,"Patmos cores_0 icache repl callRetBaseNext", false,-1, 31,0);
        tracep->declBit(c+1373,"Patmos cores_0 icache repl selSpmNext", false,-1);
        tracep->declBit(c+1374,"Patmos cores_0 icache repl selCacheNext", false,-1);
        tracep->declBit(c+1353,"Patmos cores_0 icache mem clock", false,-1);
        tracep->declBit(c+235,"Patmos cores_0 icache mem io_memIn_wEven", false,-1);
        tracep->declBit(c+236,"Patmos cores_0 icache mem io_memIn_wOdd", false,-1);
        tracep->declBus(c+228,"Patmos cores_0 icache mem io_memIn_wData", false,-1, 31,0);
        tracep->declBus(c+237,"Patmos cores_0 icache mem io_memIn_wAddr", false,-1, 9,0);
        tracep->declBus(c+1330,"Patmos cores_0 icache mem io_memIn_addrEven", false,-1, 9,0);
        tracep->declBus(c+1331,"Patmos cores_0 icache mem io_memIn_addrOdd", false,-1, 9,0);
        tracep->declBus(c+1368,"Patmos cores_0 icache mem io_memOut_instrEven", false,-1, 31,0);
        tracep->declBus(c+1369,"Patmos cores_0 icache mem io_memOut_instrOdd", false,-1, 31,0);
        tracep->declBit(c+1353,"Patmos cores_0 icache mem mcacheEven_clock", false,-1);
        tracep->declBus(c+1330,"Patmos cores_0 icache mem mcacheEven_io_rdAddr", false,-1, 9,0);
        tracep->declBus(c+1368,"Patmos cores_0 icache mem mcacheEven_io_rdData", false,-1, 31,0);
        tracep->declBus(c+237,"Patmos cores_0 icache mem mcacheEven_io_wrAddr", false,-1, 9,0);
        tracep->declBit(c+235,"Patmos cores_0 icache mem mcacheEven_io_wrEna", false,-1);
        tracep->declBus(c+228,"Patmos cores_0 icache mem mcacheEven_io_wrData", false,-1, 31,0);
        tracep->declBit(c+1353,"Patmos cores_0 icache mem mcacheOdd_clock", false,-1);
        tracep->declBus(c+1331,"Patmos cores_0 icache mem mcacheOdd_io_rdAddr", false,-1, 9,0);
        tracep->declBus(c+1369,"Patmos cores_0 icache mem mcacheOdd_io_rdData", false,-1, 31,0);
        tracep->declBus(c+237,"Patmos cores_0 icache mem mcacheOdd_io_wrAddr", false,-1, 9,0);
        tracep->declBit(c+236,"Patmos cores_0 icache mem mcacheOdd_io_wrEna", false,-1);
        tracep->declBus(c+228,"Patmos cores_0 icache mem mcacheOdd_io_wrData", false,-1, 31,0);
        tracep->declBit(c+1353,"Patmos cores_0 icache mem mcacheEven clock", false,-1);
        tracep->declBus(c+1330,"Patmos cores_0 icache mem mcacheEven io_rdAddr", false,-1, 9,0);
        tracep->declBus(c+1368,"Patmos cores_0 icache mem mcacheEven io_rdData", false,-1, 31,0);
        tracep->declBus(c+237,"Patmos cores_0 icache mem mcacheEven io_wrAddr", false,-1, 9,0);
        tracep->declBit(c+235,"Patmos cores_0 icache mem mcacheEven io_wrEna", false,-1);
        tracep->declBus(c+228,"Patmos cores_0 icache mem mcacheEven io_wrData", false,-1, 31,0);
        tracep->declBus(c+1375,"Patmos cores_0 icache mem mcacheEven mem_MPORT_1_data", false,-1, 31,0);
        tracep->declBus(c+363,"Patmos cores_0 icache mem mcacheEven mem_MPORT_1_addr", false,-1, 9,0);
        tracep->declBus(c+228,"Patmos cores_0 icache mem mcacheEven mem_MPORT_data", false,-1, 31,0);
        tracep->declBus(c+237,"Patmos cores_0 icache mem mcacheEven mem_MPORT_addr", false,-1, 9,0);
        tracep->declBit(c+1386,"Patmos cores_0 icache mem mcacheEven mem_MPORT_mask", false,-1);
        tracep->declBit(c+235,"Patmos cores_0 icache mem mcacheEven mem_MPORT_en", false,-1);
        tracep->declBus(c+363,"Patmos cores_0 icache mem mcacheEven rdAddrReg", false,-1, 9,0);
        tracep->declBit(c+364,"Patmos cores_0 icache mem mcacheEven REG", false,-1);
        tracep->declBus(c+365,"Patmos cores_0 icache mem mcacheEven REG_1", false,-1, 9,0);
        tracep->declBus(c+366,"Patmos cores_0 icache mem mcacheEven REG_2", false,-1, 31,0);
        tracep->declBit(c+1353,"Patmos cores_0 icache mem mcacheOdd clock", false,-1);
        tracep->declBus(c+1331,"Patmos cores_0 icache mem mcacheOdd io_rdAddr", false,-1, 9,0);
        tracep->declBus(c+1369,"Patmos cores_0 icache mem mcacheOdd io_rdData", false,-1, 31,0);
        tracep->declBus(c+237,"Patmos cores_0 icache mem mcacheOdd io_wrAddr", false,-1, 9,0);
        tracep->declBit(c+236,"Patmos cores_0 icache mem mcacheOdd io_wrEna", false,-1);
        tracep->declBus(c+228,"Patmos cores_0 icache mem mcacheOdd io_wrData", false,-1, 31,0);
        tracep->declBus(c+1376,"Patmos cores_0 icache mem mcacheOdd mem_MPORT_1_data", false,-1, 31,0);
        tracep->declBus(c+367,"Patmos cores_0 icache mem mcacheOdd mem_MPORT_1_addr", false,-1, 9,0);
        tracep->declBus(c+228,"Patmos cores_0 icache mem mcacheOdd mem_MPORT_data", false,-1, 31,0);
        tracep->declBus(c+237,"Patmos cores_0 icache mem mcacheOdd mem_MPORT_addr", false,-1, 9,0);
        tracep->declBit(c+1386,"Patmos cores_0 icache mem mcacheOdd mem_MPORT_mask", false,-1);
        tracep->declBit(c+236,"Patmos cores_0 icache mem mcacheOdd mem_MPORT_en", false,-1);
        tracep->declBus(c+367,"Patmos cores_0 icache mem mcacheOdd rdAddrReg", false,-1, 9,0);
        tracep->declBit(c+368,"Patmos cores_0 icache mem mcacheOdd REG", false,-1);
        tracep->declBus(c+369,"Patmos cores_0 icache mem mcacheOdd REG_1", false,-1, 9,0);
        tracep->declBus(c+370,"Patmos cores_0 icache mem mcacheOdd REG_2", false,-1, 31,0);
        tracep->declBit(c+1353,"Patmos cores_0 fetch clock", false,-1);
        tracep->declBit(c+1354,"Patmos cores_0 fetch reset", false,-1);
        tracep->declBit(c+83,"Patmos cores_0 fetch io_ena", false,-1);
        tracep->declBus(c+1336,"Patmos cores_0 fetch io_fedec_instr_a", false,-1, 31,0);
        tracep->declBus(c+1337,"Patmos cores_0 fetch io_fedec_instr_b", false,-1, 31,0);
        tracep->declBus(c+84,"Patmos cores_0 fetch io_fedec_pc", false,-1, 29,0);
        tracep->declBus(c+85,"Patmos cores_0 fetch io_fedec_base", false,-1, 29,0);
        tracep->declBus(c+86,"Patmos cores_0 fetch io_fedec_reloc", false,-1, 31,0);
        tracep->declBus(c+87,"Patmos cores_0 fetch io_fedec_relPc", false,-1, 29,0);
        tracep->declBus(c+1321,"Patmos cores_0 fetch io_feex_pc", false,-1, 29,0);
        tracep->declBit(c+88,"Patmos cores_0 fetch io_exfe_doBranch", false,-1);
        tracep->declBus(c+89,"Patmos cores_0 fetch io_exfe_branchPc", false,-1, 29,0);
        tracep->declBit(c+90,"Patmos cores_0 fetch io_memfe_doCallRet", false,-1);
        tracep->declBit(c+91,"Patmos cores_0 fetch io_memfe_store", false,-1);
        tracep->declBus(c+92,"Patmos cores_0 fetch io_memfe_addr", false,-1, 31,0);
        tracep->declBus(c+16,"Patmos cores_0 fetch io_memfe_data", false,-1, 31,0);
        tracep->declBus(c+1347,"Patmos cores_0 fetch io_feicache_addrEven", false,-1, 31,0);
        tracep->declBus(c+1348,"Patmos cores_0 fetch io_feicache_addrOdd", false,-1, 31,0);
        tracep->declBus(c+1334,"Patmos cores_0 fetch io_icachefe_instrEven", false,-1, 31,0);
        tracep->declBus(c+1335,"Patmos cores_0 fetch io_icachefe_instrOdd", false,-1, 31,0);
        tracep->declBus(c+74,"Patmos cores_0 fetch io_icachefe_base", false,-1, 31,0);
        tracep->declBus(c+75,"Patmos cores_0 fetch io_icachefe_relBase", false,-1, 10,0);
        tracep->declBus(c+76,"Patmos cores_0 fetch io_icachefe_relPc", false,-1, 11,0);
        tracep->declBus(c+77,"Patmos cores_0 fetch io_icachefe_reloc", false,-1, 31,0);
        tracep->declBus(c+78,"Patmos cores_0 fetch io_icachefe_memSel", false,-1, 1,0);
        tracep->declBit(c+1353,"Patmos cores_0 fetch MemBlock_clock", false,-1);
        tracep->declBus(c+1349,"Patmos cores_0 fetch MemBlock_io_rdAddr", false,-1, 6,0);
        tracep->declBus(c+371,"Patmos cores_0 fetch MemBlock_io_rdData", false,-1, 31,0);
        tracep->declBus(c+372,"Patmos cores_0 fetch MemBlock_io_wrAddr", false,-1, 6,0);
        tracep->declBit(c+373,"Patmos cores_0 fetch MemBlock_io_wrEna", false,-1);
        tracep->declBus(c+16,"Patmos cores_0 fetch MemBlock_io_wrData", false,-1, 31,0);
        tracep->declBit(c+1353,"Patmos cores_0 fetch MemBlock_1_clock", false,-1);
        tracep->declBus(c+1350,"Patmos cores_0 fetch MemBlock_1_io_rdAddr", false,-1, 6,0);
        tracep->declBus(c+374,"Patmos cores_0 fetch MemBlock_1_io_rdData", false,-1, 31,0);
        tracep->declBus(c+372,"Patmos cores_0 fetch MemBlock_1_io_wrAddr", false,-1, 6,0);
        tracep->declBit(c+375,"Patmos cores_0 fetch MemBlock_1_io_wrEna", false,-1);
        tracep->declBus(c+16,"Patmos cores_0 fetch MemBlock_1_io_wrData", false,-1, 31,0);
        tracep->declBus(c+84,"Patmos cores_0 fetch pcReg", false,-1, 29,0);
        tracep->declBus(c+376,"Patmos cores_0 fetch addrEvenReg", false,-1, 29,0);
        tracep->declBus(c+377,"Patmos cores_0 fetch addrOddReg", false,-1, 29,0);
        tracep->declBit(c+378,"Patmos cores_0 fetch selSpm", false,-1);
        tracep->declBus(c+379,"Patmos cores_0 fetch instr_a_ispm", false,-1, 31,0);
        tracep->declBit(c+380,"Patmos cores_0 fetch selCache", false,-1);
        tracep->declBus(c+1322,"Patmos cores_0 fetch instr_a_cache", false,-1, 31,0);
        tracep->declBus(c+381,"Patmos cores_0 fetch data_even", false,-1, 31,0);
        tracep->declBus(c+382,"Patmos cores_0 fetch data_odd", false,-1, 31,0);
        tracep->declBus(c+383,"Patmos cores_0 fetch instr_a_rom", false,-1, 31,0);
        tracep->declBus(c+1336,"Patmos cores_0 fetch instr_a", false,-1, 31,0);
        tracep->declBit(c+1338,"Patmos cores_0 fetch b_valid", false,-1);
        tracep->declBus(c+1323,"Patmos cores_0 fetch pc_cont", false,-1, 29,0);
        tracep->declBus(c+1339,"Patmos cores_0 fetch pc_next", false,-1, 29,0);
        tracep->declBus(c+1324,"Patmos cores_0 fetch pc_cont2", false,-1, 29,0);
        tracep->declBus(c+1325,"Patmos cores_0 fetch pc_next2", false,-1, 29,0);
        tracep->declBus(c+1340,"Patmos cores_0 fetch pc_inc", false,-1, 29,0);
        tracep->declBus(c+1341,"Patmos cores_0 fetch hi", false,-1, 28,0);
        tracep->declBus(c+1351,"Patmos cores_0 fetch addrEven", false,-1, 29,0);
        tracep->declBus(c+1342,"Patmos cores_0 fetch hi_1", false,-1, 28,0);
        tracep->declBus(c+1352,"Patmos cores_0 fetch addrOdd", false,-1, 29,0);
        tracep->declBus(c+384,"Patmos cores_0 fetch instr_b_ispm", false,-1, 31,0);
        tracep->declBus(c+385,"Patmos cores_0 fetch baseReg", false,-1, 31,0);
        tracep->declBus(c+386,"Patmos cores_0 fetch relBaseReg", false,-1, 10,0);
        tracep->declBus(c+86,"Patmos cores_0 fetch relocReg", false,-1, 31,0);
        tracep->declBus(c+387,"Patmos cores_0 fetch instr_b_rom", false,-1, 31,0);
        tracep->declBus(c+1326,"Patmos cores_0 fetch instr_b_cache", false,-1, 31,0);
        tracep->declBus(c+1377,"Patmos cores_0 fetch pcNext", false,-1, 29,0);
        tracep->declBus(c+388,"Patmos cores_0 fetch relPc", false,-1, 29,0);
        tracep->declBit(c+1378,"Patmos cores_0 fetch selSpmNext", false,-1);
        tracep->declBit(c+1379,"Patmos cores_0 fetch selCacheNext", false,-1);
        tracep->declBus(c+1380,"Patmos cores_0 fetch relBaseNext", false,-1, 10,0);
        tracep->declBus(c+1381,"Patmos cores_0 fetch relocNext", false,-1, 31,0);
        tracep->declBit(c+1353,"Patmos cores_0 fetch MemBlock clock", false,-1);
        tracep->declBus(c+1349,"Patmos cores_0 fetch MemBlock io_rdAddr", false,-1, 6,0);
        tracep->declBus(c+371,"Patmos cores_0 fetch MemBlock io_rdData", false,-1, 31,0);
        tracep->declBus(c+372,"Patmos cores_0 fetch MemBlock io_wrAddr", false,-1, 6,0);
        tracep->declBit(c+373,"Patmos cores_0 fetch MemBlock io_wrEna", false,-1);
        tracep->declBus(c+16,"Patmos cores_0 fetch MemBlock io_wrData", false,-1, 31,0);
        tracep->declBus(c+371,"Patmos cores_0 fetch MemBlock mem_MPORT_1_data", false,-1, 31,0);
        tracep->declBus(c+389,"Patmos cores_0 fetch MemBlock mem_MPORT_1_addr", false,-1, 6,0);
        tracep->declBus(c+16,"Patmos cores_0 fetch MemBlock mem_MPORT_data", false,-1, 31,0);
        tracep->declBus(c+372,"Patmos cores_0 fetch MemBlock mem_MPORT_addr", false,-1, 6,0);
        tracep->declBit(c+1386,"Patmos cores_0 fetch MemBlock mem_MPORT_mask", false,-1);
        tracep->declBit(c+373,"Patmos cores_0 fetch MemBlock mem_MPORT_en", false,-1);
        tracep->declBus(c+389,"Patmos cores_0 fetch MemBlock rdAddrReg", false,-1, 6,0);
        tracep->declBit(c+1353,"Patmos cores_0 fetch MemBlock_1 clock", false,-1);
        tracep->declBus(c+1350,"Patmos cores_0 fetch MemBlock_1 io_rdAddr", false,-1, 6,0);
        tracep->declBus(c+374,"Patmos cores_0 fetch MemBlock_1 io_rdData", false,-1, 31,0);
        tracep->declBus(c+372,"Patmos cores_0 fetch MemBlock_1 io_wrAddr", false,-1, 6,0);
        tracep->declBit(c+375,"Patmos cores_0 fetch MemBlock_1 io_wrEna", false,-1);
        tracep->declBus(c+16,"Patmos cores_0 fetch MemBlock_1 io_wrData", false,-1, 31,0);
        tracep->declBus(c+374,"Patmos cores_0 fetch MemBlock_1 mem_MPORT_1_data", false,-1, 31,0);
        tracep->declBus(c+390,"Patmos cores_0 fetch MemBlock_1 mem_MPORT_1_addr", false,-1, 6,0);
        tracep->declBus(c+16,"Patmos cores_0 fetch MemBlock_1 mem_MPORT_data", false,-1, 31,0);
        tracep->declBus(c+372,"Patmos cores_0 fetch MemBlock_1 mem_MPORT_addr", false,-1, 6,0);
        tracep->declBit(c+1386,"Patmos cores_0 fetch MemBlock_1 mem_MPORT_mask", false,-1);
        tracep->declBit(c+375,"Patmos cores_0 fetch MemBlock_1 mem_MPORT_en", false,-1);
        tracep->declBus(c+390,"Patmos cores_0 fetch MemBlock_1 rdAddrReg", false,-1, 6,0);
        tracep->declBit(c+1353,"Patmos cores_0 decode clock", false,-1);
        tracep->declBit(c+1354,"Patmos cores_0 decode reset", false,-1);
        tracep->declBit(c+83,"Patmos cores_0 decode io_ena", false,-1);
        tracep->declBit(c+93,"Patmos cores_0 decode io_flush", false,-1);
        tracep->declBus(c+1336,"Patmos cores_0 decode io_fedec_instr_a", false,-1, 31,0);
        tracep->declBus(c+1337,"Patmos cores_0 decode io_fedec_instr_b", false,-1, 31,0);
        tracep->declBus(c+84,"Patmos cores_0 decode io_fedec_pc", false,-1, 29,0);
        tracep->declBus(c+85,"Patmos cores_0 decode io_fedec_base", false,-1, 29,0);
        tracep->declBus(c+86,"Patmos cores_0 decode io_fedec_reloc", false,-1, 31,0);
        tracep->declBus(c+87,"Patmos cores_0 decode io_fedec_relPc", false,-1, 29,0);
        tracep->declBus(c+94,"Patmos cores_0 decode io_decex_base", false,-1, 29,0);
        tracep->declBus(c+95,"Patmos cores_0 decode io_decex_relPc", false,-1, 29,0);
        tracep->declBus(c+96,"Patmos cores_0 decode io_decex_pred_0", false,-1, 3,0);
        tracep->declBus(c+97,"Patmos cores_0 decode io_decex_pred_1", false,-1, 3,0);
        tracep->declBus(c+98,"Patmos cores_0 decode io_decex_aluOp_0_func", false,-1, 3,0);
        tracep->declBit(c+99,"Patmos cores_0 decode io_decex_aluOp_0_isMul", false,-1);
        tracep->declBit(c+100,"Patmos cores_0 decode io_decex_aluOp_0_isCmp", false,-1);
        tracep->declBit(c+101,"Patmos cores_0 decode io_decex_aluOp_0_isPred", false,-1);
        tracep->declBit(c+102,"Patmos cores_0 decode io_decex_aluOp_0_isBCpy", false,-1);
        tracep->declBit(c+103,"Patmos cores_0 decode io_decex_aluOp_0_isMTS", false,-1);
        tracep->declBit(c+104,"Patmos cores_0 decode io_decex_aluOp_0_isMFS", false,-1);
        tracep->declBus(c+105,"Patmos cores_0 decode io_decex_aluOp_1_func", false,-1, 3,0);
        tracep->declBit(c+106,"Patmos cores_0 decode io_decex_aluOp_1_isCmp", false,-1);
        tracep->declBit(c+107,"Patmos cores_0 decode io_decex_aluOp_1_isPred", false,-1);
        tracep->declBit(c+108,"Patmos cores_0 decode io_decex_aluOp_1_isBCpy", false,-1);
        tracep->declBit(c+109,"Patmos cores_0 decode io_decex_aluOp_1_isMTS", false,-1);
        tracep->declBit(c+110,"Patmos cores_0 decode io_decex_aluOp_1_isMFS", false,-1);
        tracep->declBus(c+111,"Patmos cores_0 decode io_decex_predOp_0_func", false,-1, 1,0);
        tracep->declBus(c+112,"Patmos cores_0 decode io_decex_predOp_0_dest", false,-1, 2,0);
        tracep->declBus(c+113,"Patmos cores_0 decode io_decex_predOp_0_s1Addr", false,-1, 3,0);
        tracep->declBus(c+114,"Patmos cores_0 decode io_decex_predOp_0_s2Addr", false,-1, 3,0);
        tracep->declBus(c+115,"Patmos cores_0 decode io_decex_predOp_1_func", false,-1, 1,0);
        tracep->declBus(c+116,"Patmos cores_0 decode io_decex_predOp_1_dest", false,-1, 2,0);
        tracep->declBus(c+117,"Patmos cores_0 decode io_decex_predOp_1_s1Addr", false,-1, 3,0);
        tracep->declBus(c+118,"Patmos cores_0 decode io_decex_predOp_1_s2Addr", false,-1, 3,0);
        tracep->declBit(c+119,"Patmos cores_0 decode io_decex_jmpOp_branch", false,-1);
        tracep->declBus(c+120,"Patmos cores_0 decode io_decex_jmpOp_target", false,-1, 29,0);
        tracep->declBus(c+121,"Patmos cores_0 decode io_decex_jmpOp_reloc", false,-1, 31,0);
        tracep->declBit(c+122,"Patmos cores_0 decode io_decex_memOp_load", false,-1);
        tracep->declBit(c+123,"Patmos cores_0 decode io_decex_memOp_store", false,-1);
        tracep->declBit(c+124,"Patmos cores_0 decode io_decex_memOp_hword", false,-1);
        tracep->declBit(c+125,"Patmos cores_0 decode io_decex_memOp_byte", false,-1);
        tracep->declBit(c+126,"Patmos cores_0 decode io_decex_memOp_zext", false,-1);
        tracep->declBus(c+127,"Patmos cores_0 decode io_decex_memOp_typ", false,-1, 1,0);
        tracep->declBus(c+128,"Patmos cores_0 decode io_decex_stackOp", false,-1, 2,0);
        tracep->declBus(c+129,"Patmos cores_0 decode io_decex_rsAddr_0", false,-1, 4,0);
        tracep->declBus(c+130,"Patmos cores_0 decode io_decex_rsAddr_1", false,-1, 4,0);
        tracep->declBus(c+131,"Patmos cores_0 decode io_decex_rsAddr_2", false,-1, 4,0);
        tracep->declBus(c+132,"Patmos cores_0 decode io_decex_rsAddr_3", false,-1, 4,0);
        tracep->declBus(c+133,"Patmos cores_0 decode io_decex_rsData_0", false,-1, 31,0);
        tracep->declBus(c+134,"Patmos cores_0 decode io_decex_rsData_1", false,-1, 31,0);
        tracep->declBus(c+135,"Patmos cores_0 decode io_decex_rsData_2", false,-1, 31,0);
        tracep->declBus(c+136,"Patmos cores_0 decode io_decex_rsData_3", false,-1, 31,0);
        tracep->declBus(c+137,"Patmos cores_0 decode io_decex_rdAddr_0", false,-1, 4,0);
        tracep->declBus(c+138,"Patmos cores_0 decode io_decex_rdAddr_1", false,-1, 4,0);
        tracep->declBus(c+139,"Patmos cores_0 decode io_decex_immVal_0", false,-1, 31,0);
        tracep->declBus(c+140,"Patmos cores_0 decode io_decex_immVal_1", false,-1, 31,0);
        tracep->declBit(c+141,"Patmos cores_0 decode io_decex_immOp_0", false,-1);
        tracep->declBit(c+142,"Patmos cores_0 decode io_decex_immOp_1", false,-1);
        tracep->declBit(c+143,"Patmos cores_0 decode io_decex_wrRd_0", false,-1);
        tracep->declBit(c+144,"Patmos cores_0 decode io_decex_wrRd_1", false,-1);
        tracep->declBus(c+145,"Patmos cores_0 decode io_decex_callAddr", false,-1, 31,0);
        tracep->declBit(c+146,"Patmos cores_0 decode io_decex_call", false,-1);
        tracep->declBit(c+147,"Patmos cores_0 decode io_decex_ret", false,-1);
        tracep->declBit(c+148,"Patmos cores_0 decode io_decex_brcf", false,-1);
        tracep->declBit(c+149,"Patmos cores_0 decode io_decex_trap", false,-1);
        tracep->declBit(c+150,"Patmos cores_0 decode io_decex_xcall", false,-1);
        tracep->declBit(c+151,"Patmos cores_0 decode io_decex_xret", false,-1);
        tracep->declBus(c+152,"Patmos cores_0 decode io_decex_xsrc", false,-1, 4,0);
        tracep->declBit(c+153,"Patmos cores_0 decode io_decex_nonDelayed", false,-1);
        tracep->declBit(c+154,"Patmos cores_0 decode io_decex_illOp", false,-1);
        tracep->declBus(c+155,"Patmos cores_0 decode io_rfWrite_0_addr", false,-1, 4,0);
        tracep->declBus(c+156,"Patmos cores_0 decode io_rfWrite_0_data", false,-1, 31,0);
        tracep->declBit(c+157,"Patmos cores_0 decode io_rfWrite_0_valid", false,-1);
        tracep->declBus(c+158,"Patmos cores_0 decode io_rfWrite_1_addr", false,-1, 4,0);
        tracep->declBus(c+159,"Patmos cores_0 decode io_rfWrite_1_data", false,-1, 31,0);
        tracep->declBit(c+160,"Patmos cores_0 decode io_rfWrite_1_valid", false,-1);
        tracep->declBit(c+161,"Patmos cores_0 decode io_exc_exc", false,-1);
        tracep->declBus(c+162,"Patmos cores_0 decode io_exc_excBase", false,-1, 29,0);
        tracep->declBus(c+163,"Patmos cores_0 decode io_exc_excAddr", false,-1, 29,0);
        tracep->declBit(c+164,"Patmos cores_0 decode io_exc_intr", false,-1);
        tracep->declBus(c+165,"Patmos cores_0 decode io_exc_addr", false,-1, 31,0);
        tracep->declBus(c+166,"Patmos cores_0 decode io_exc_src", false,-1, 4,0);
        tracep->declBit(c+167,"Patmos cores_0 decode io_exc_local", false,-1);
        tracep->declBit(c+1353,"Patmos cores_0 decode rf_clock", false,-1);
        tracep->declBit(c+83,"Patmos cores_0 decode rf_io_ena", false,-1);
        tracep->declBus(c+1343,"Patmos cores_0 decode rf_io_rfRead_rsAddr_0", false,-1, 4,0);
        tracep->declBus(c+1344,"Patmos cores_0 decode rf_io_rfRead_rsAddr_1", false,-1, 4,0);
        tracep->declBus(c+1345,"Patmos cores_0 decode rf_io_rfRead_rsAddr_2", false,-1, 4,0);
        tracep->declBus(c+1346,"Patmos cores_0 decode rf_io_rfRead_rsAddr_3", false,-1, 4,0);
        tracep->declBus(c+391,"Patmos cores_0 decode rf_io_rfRead_rsData_0", false,-1, 31,0);
        tracep->declBus(c+392,"Patmos cores_0 decode rf_io_rfRead_rsData_1", false,-1, 31,0);
        tracep->declBus(c+393,"Patmos cores_0 decode rf_io_rfRead_rsData_2", false,-1, 31,0);
        tracep->declBus(c+394,"Patmos cores_0 decode rf_io_rfRead_rsData_3", false,-1, 31,0);
        tracep->declBus(c+155,"Patmos cores_0 decode rf_io_rfWrite_0_addr", false,-1, 4,0);
        tracep->declBus(c+156,"Patmos cores_0 decode rf_io_rfWrite_0_data", false,-1, 31,0);
        tracep->declBit(c+157,"Patmos cores_0 decode rf_io_rfWrite_0_valid", false,-1);
        tracep->declBus(c+158,"Patmos cores_0 decode rf_io_rfWrite_1_addr", false,-1, 4,0);
        tracep->declBus(c+159,"Patmos cores_0 decode rf_io_rfWrite_1_data", false,-1, 31,0);
        tracep->declBit(c+160,"Patmos cores_0 decode rf_io_rfWrite_1_valid", false,-1);
        tracep->declBus(c+395,"Patmos cores_0 decode decReg_instr_a", false,-1, 31,0);
        tracep->declBus(c+396,"Patmos cores_0 decode decReg_instr_b", false,-1, 31,0);
        tracep->declBus(c+397,"Patmos cores_0 decode decReg_pc", false,-1, 29,0);
        tracep->declBus(c+398,"Patmos cores_0 decode decReg_base", false,-1, 29,0);
        tracep->declBus(c+399,"Patmos cores_0 decode decReg_reloc", false,-1, 31,0);
        tracep->declBus(c+400,"Patmos cores_0 decode decReg_relPc", false,-1, 29,0);
        tracep->declBit(c+401,"Patmos cores_0 decode dual", false,-1);
        tracep->declBus(c+402,"Patmos cores_0 decode lo", false,-1, 11,0);
        tracep->declBus(c+403,"Patmos cores_0 decode lo_1", false,-1, 2,0);
        tracep->declBit(c+404,"Patmos cores_0 decode hi", false,-1);
        tracep->declBit(c+405,"Patmos cores_0 decode lo_4", false,-1);
        tracep->declBus(c+406,"Patmos cores_0 decode lo_5", false,-1, 11,0);
        tracep->declBus(c+407,"Patmos cores_0 decode lo_6", false,-1, 2,0);
        tracep->declBit(c+408,"Patmos cores_0 decode decoded_1", false,-1);
        tracep->declBit(c+409,"Patmos cores_0 decode hi_1", false,-1);
        tracep->declBit(c+410,"Patmos cores_0 decode lo_9", false,-1);
        tracep->declBus(c+411,"Patmos cores_0 decode ldsize", false,-1, 2,0);
        tracep->declBus(c+412,"Patmos cores_0 decode ldtype", false,-1, 1,0);
        tracep->declBus(c+413,"Patmos cores_0 decode stsize", false,-1, 2,0);
        tracep->declBus(c+414,"Patmos cores_0 decode sttype", false,-1, 1,0);
        tracep->declBus(c+415,"Patmos cores_0 decode stcfun", false,-1, 3,0);
        tracep->declBus(c+416,"Patmos cores_0 decode hi_lo", false,-1, 17,0);
        tracep->declBus(c+417,"Patmos cores_0 decode stcImm", false,-1, 20,0);
        tracep->declBit(c+418,"Patmos cores_0 decode longImm", false,-1);
        tracep->declBit(c+419,"Patmos cores_0 decode isSTC", false,-1);
        tracep->declBit(c+420,"Patmos cores_0 decode isMem", false,-1);
        tracep->declBus(c+421,"Patmos cores_0 decode shamt", false,-1, 1,0);
        tracep->declBit(c+422,"Patmos cores_0 decode isStack", false,-1);
        tracep->declBit(c+423,"Patmos cores_0 decode decoded_0", false,-1);
        tracep->declBus(c+424,"Patmos cores_0 decode lo_10", false,-1, 6,0);
        tracep->declBus(c+425,"Patmos cores_0 decode addrImm", false,-1, 9,0);
        tracep->declBus(c+426,"Patmos cores_0 decode hi_lo_3", false,-1, 21,0);
        tracep->declBus(c+427,"Patmos cores_0 decode hi_6", false,-1, 7,0);
        tracep->declBus(c+428,"Patmos cores_0 decode inDelaySlot", false,-1, 1,0);
        tracep->declBit(c+1353,"Patmos cores_0 decode rf clock", false,-1);
        tracep->declBit(c+83,"Patmos cores_0 decode rf io_ena", false,-1);
        tracep->declBus(c+1343,"Patmos cores_0 decode rf io_rfRead_rsAddr_0", false,-1, 4,0);
        tracep->declBus(c+1344,"Patmos cores_0 decode rf io_rfRead_rsAddr_1", false,-1, 4,0);
        tracep->declBus(c+1345,"Patmos cores_0 decode rf io_rfRead_rsAddr_2", false,-1, 4,0);
        tracep->declBus(c+1346,"Patmos cores_0 decode rf io_rfRead_rsAddr_3", false,-1, 4,0);
        tracep->declBus(c+391,"Patmos cores_0 decode rf io_rfRead_rsData_0", false,-1, 31,0);
        tracep->declBus(c+392,"Patmos cores_0 decode rf io_rfRead_rsData_1", false,-1, 31,0);
        tracep->declBus(c+393,"Patmos cores_0 decode rf io_rfRead_rsData_2", false,-1, 31,0);
        tracep->declBus(c+394,"Patmos cores_0 decode rf io_rfRead_rsData_3", false,-1, 31,0);
        tracep->declBus(c+155,"Patmos cores_0 decode rf io_rfWrite_0_addr", false,-1, 4,0);
        tracep->declBus(c+156,"Patmos cores_0 decode rf io_rfWrite_0_data", false,-1, 31,0);
        tracep->declBit(c+157,"Patmos cores_0 decode rf io_rfWrite_0_valid", false,-1);
        tracep->declBus(c+158,"Patmos cores_0 decode rf io_rfWrite_1_addr", false,-1, 4,0);
        tracep->declBus(c+159,"Patmos cores_0 decode rf io_rfWrite_1_data", false,-1, 31,0);
        tracep->declBit(c+160,"Patmos cores_0 decode rf io_rfWrite_1_valid", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+429+i*1,"Patmos cores_0 decode rf rf", true,(i+0), 31,0);}}
        tracep->declBus(c+461,"Patmos cores_0 decode rf rf_MPORT_data", false,-1, 31,0);
        tracep->declBus(c+462,"Patmos cores_0 decode rf rf_MPORT_addr", false,-1, 4,0);
        tracep->declBus(c+463,"Patmos cores_0 decode rf rf_MPORT_1_data", false,-1, 31,0);
        tracep->declBus(c+464,"Patmos cores_0 decode rf rf_MPORT_1_addr", false,-1, 4,0);
        tracep->declBus(c+465,"Patmos cores_0 decode rf rf_MPORT_2_data", false,-1, 31,0);
        tracep->declBus(c+466,"Patmos cores_0 decode rf rf_MPORT_2_addr", false,-1, 4,0);
        tracep->declBus(c+467,"Patmos cores_0 decode rf rf_MPORT_3_data", false,-1, 31,0);
        tracep->declBus(c+468,"Patmos cores_0 decode rf rf_MPORT_3_addr", false,-1, 4,0);
        tracep->declBus(c+159,"Patmos cores_0 decode rf rf_MPORT_4_data", false,-1, 31,0);
        tracep->declBus(c+158,"Patmos cores_0 decode rf rf_MPORT_4_addr", false,-1, 4,0);
        tracep->declBit(c+1386,"Patmos cores_0 decode rf rf_MPORT_4_mask", false,-1);
        tracep->declBit(c+160,"Patmos cores_0 decode rf rf_MPORT_4_en", false,-1);
        tracep->declBus(c+156,"Patmos cores_0 decode rf rf_MPORT_5_data", false,-1, 31,0);
        tracep->declBus(c+155,"Patmos cores_0 decode rf rf_MPORT_5_addr", false,-1, 4,0);
        tracep->declBit(c+1386,"Patmos cores_0 decode rf rf_MPORT_5_mask", false,-1);
        tracep->declBit(c+157,"Patmos cores_0 decode rf rf_MPORT_5_en", false,-1);
        tracep->declBus(c+462,"Patmos cores_0 decode rf addrReg_0", false,-1, 4,0);
        tracep->declBus(c+464,"Patmos cores_0 decode rf addrReg_1", false,-1, 4,0);
        tracep->declBus(c+466,"Patmos cores_0 decode rf addrReg_2", false,-1, 4,0);
        tracep->declBus(c+468,"Patmos cores_0 decode rf addrReg_3", false,-1, 4,0);
        tracep->declBus(c+469,"Patmos cores_0 decode rf wrReg_0_data", false,-1, 31,0);
        tracep->declBus(c+470,"Patmos cores_0 decode rf wrReg_1_data", false,-1, 31,0);
        tracep->declBit(c+471,"Patmos cores_0 decode rf fwReg_0_0", false,-1);
        tracep->declBit(c+472,"Patmos cores_0 decode rf fwReg_0_1", false,-1);
        tracep->declBit(c+473,"Patmos cores_0 decode rf fwReg_1_0", false,-1);
        tracep->declBit(c+474,"Patmos cores_0 decode rf fwReg_1_1", false,-1);
        tracep->declBit(c+475,"Patmos cores_0 decode rf fwReg_2_0", false,-1);
        tracep->declBit(c+476,"Patmos cores_0 decode rf fwReg_2_1", false,-1);
        tracep->declBit(c+477,"Patmos cores_0 decode rf fwReg_3_0", false,-1);
        tracep->declBit(c+478,"Patmos cores_0 decode rf fwReg_3_1", false,-1);
        tracep->declBit(c+1353,"Patmos cores_0 execute clock", false,-1);
        tracep->declBit(c+1354,"Patmos cores_0 execute reset", false,-1);
        tracep->declBit(c+83,"Patmos cores_0 execute io_ena", false,-1);
        tracep->declBit(c+168,"Patmos cores_0 execute io_flush", false,-1);
        tracep->declBit(c+169,"Patmos cores_0 execute io_brflush", false,-1);
        tracep->declBus(c+94,"Patmos cores_0 execute io_decex_base", false,-1, 29,0);
        tracep->declBus(c+95,"Patmos cores_0 execute io_decex_relPc", false,-1, 29,0);
        tracep->declBus(c+96,"Patmos cores_0 execute io_decex_pred_0", false,-1, 3,0);
        tracep->declBus(c+97,"Patmos cores_0 execute io_decex_pred_1", false,-1, 3,0);
        tracep->declBus(c+98,"Patmos cores_0 execute io_decex_aluOp_0_func", false,-1, 3,0);
        tracep->declBit(c+99,"Patmos cores_0 execute io_decex_aluOp_0_isMul", false,-1);
        tracep->declBit(c+100,"Patmos cores_0 execute io_decex_aluOp_0_isCmp", false,-1);
        tracep->declBit(c+101,"Patmos cores_0 execute io_decex_aluOp_0_isPred", false,-1);
        tracep->declBit(c+102,"Patmos cores_0 execute io_decex_aluOp_0_isBCpy", false,-1);
        tracep->declBit(c+103,"Patmos cores_0 execute io_decex_aluOp_0_isMTS", false,-1);
        tracep->declBit(c+104,"Patmos cores_0 execute io_decex_aluOp_0_isMFS", false,-1);
        tracep->declBus(c+105,"Patmos cores_0 execute io_decex_aluOp_1_func", false,-1, 3,0);
        tracep->declBit(c+106,"Patmos cores_0 execute io_decex_aluOp_1_isCmp", false,-1);
        tracep->declBit(c+107,"Patmos cores_0 execute io_decex_aluOp_1_isPred", false,-1);
        tracep->declBit(c+108,"Patmos cores_0 execute io_decex_aluOp_1_isBCpy", false,-1);
        tracep->declBit(c+109,"Patmos cores_0 execute io_decex_aluOp_1_isMTS", false,-1);
        tracep->declBit(c+110,"Patmos cores_0 execute io_decex_aluOp_1_isMFS", false,-1);
        tracep->declBus(c+111,"Patmos cores_0 execute io_decex_predOp_0_func", false,-1, 1,0);
        tracep->declBus(c+112,"Patmos cores_0 execute io_decex_predOp_0_dest", false,-1, 2,0);
        tracep->declBus(c+113,"Patmos cores_0 execute io_decex_predOp_0_s1Addr", false,-1, 3,0);
        tracep->declBus(c+114,"Patmos cores_0 execute io_decex_predOp_0_s2Addr", false,-1, 3,0);
        tracep->declBus(c+115,"Patmos cores_0 execute io_decex_predOp_1_func", false,-1, 1,0);
        tracep->declBus(c+116,"Patmos cores_0 execute io_decex_predOp_1_dest", false,-1, 2,0);
        tracep->declBus(c+117,"Patmos cores_0 execute io_decex_predOp_1_s1Addr", false,-1, 3,0);
        tracep->declBus(c+118,"Patmos cores_0 execute io_decex_predOp_1_s2Addr", false,-1, 3,0);
        tracep->declBit(c+119,"Patmos cores_0 execute io_decex_jmpOp_branch", false,-1);
        tracep->declBus(c+120,"Patmos cores_0 execute io_decex_jmpOp_target", false,-1, 29,0);
        tracep->declBus(c+121,"Patmos cores_0 execute io_decex_jmpOp_reloc", false,-1, 31,0);
        tracep->declBit(c+122,"Patmos cores_0 execute io_decex_memOp_load", false,-1);
        tracep->declBit(c+123,"Patmos cores_0 execute io_decex_memOp_store", false,-1);
        tracep->declBit(c+124,"Patmos cores_0 execute io_decex_memOp_hword", false,-1);
        tracep->declBit(c+125,"Patmos cores_0 execute io_decex_memOp_byte", false,-1);
        tracep->declBit(c+126,"Patmos cores_0 execute io_decex_memOp_zext", false,-1);
        tracep->declBus(c+127,"Patmos cores_0 execute io_decex_memOp_typ", false,-1, 1,0);
        tracep->declBus(c+128,"Patmos cores_0 execute io_decex_stackOp", false,-1, 2,0);
        tracep->declBus(c+129,"Patmos cores_0 execute io_decex_rsAddr_0", false,-1, 4,0);
        tracep->declBus(c+130,"Patmos cores_0 execute io_decex_rsAddr_1", false,-1, 4,0);
        tracep->declBus(c+131,"Patmos cores_0 execute io_decex_rsAddr_2", false,-1, 4,0);
        tracep->declBus(c+132,"Patmos cores_0 execute io_decex_rsAddr_3", false,-1, 4,0);
        tracep->declBus(c+133,"Patmos cores_0 execute io_decex_rsData_0", false,-1, 31,0);
        tracep->declBus(c+134,"Patmos cores_0 execute io_decex_rsData_1", false,-1, 31,0);
        tracep->declBus(c+135,"Patmos cores_0 execute io_decex_rsData_2", false,-1, 31,0);
        tracep->declBus(c+136,"Patmos cores_0 execute io_decex_rsData_3", false,-1, 31,0);
        tracep->declBus(c+137,"Patmos cores_0 execute io_decex_rdAddr_0", false,-1, 4,0);
        tracep->declBus(c+138,"Patmos cores_0 execute io_decex_rdAddr_1", false,-1, 4,0);
        tracep->declBus(c+139,"Patmos cores_0 execute io_decex_immVal_0", false,-1, 31,0);
        tracep->declBus(c+140,"Patmos cores_0 execute io_decex_immVal_1", false,-1, 31,0);
        tracep->declBit(c+141,"Patmos cores_0 execute io_decex_immOp_0", false,-1);
        tracep->declBit(c+142,"Patmos cores_0 execute io_decex_immOp_1", false,-1);
        tracep->declBit(c+143,"Patmos cores_0 execute io_decex_wrRd_0", false,-1);
        tracep->declBit(c+144,"Patmos cores_0 execute io_decex_wrRd_1", false,-1);
        tracep->declBus(c+145,"Patmos cores_0 execute io_decex_callAddr", false,-1, 31,0);
        tracep->declBit(c+146,"Patmos cores_0 execute io_decex_call", false,-1);
        tracep->declBit(c+147,"Patmos cores_0 execute io_decex_ret", false,-1);
        tracep->declBit(c+148,"Patmos cores_0 execute io_decex_brcf", false,-1);
        tracep->declBit(c+149,"Patmos cores_0 execute io_decex_trap", false,-1);
        tracep->declBit(c+150,"Patmos cores_0 execute io_decex_xcall", false,-1);
        tracep->declBit(c+151,"Patmos cores_0 execute io_decex_xret", false,-1);
        tracep->declBus(c+152,"Patmos cores_0 execute io_decex_xsrc", false,-1, 4,0);
        tracep->declBit(c+153,"Patmos cores_0 execute io_decex_nonDelayed", false,-1);
        tracep->declBit(c+154,"Patmos cores_0 execute io_decex_illOp", false,-1);
        tracep->declBus(c+170,"Patmos cores_0 execute io_exmem_rd_0_addr", false,-1, 4,0);
        tracep->declBus(c+171,"Patmos cores_0 execute io_exmem_rd_0_data", false,-1, 31,0);
        tracep->declBit(c+172,"Patmos cores_0 execute io_exmem_rd_0_valid", false,-1);
        tracep->declBus(c+173,"Patmos cores_0 execute io_exmem_rd_1_addr", false,-1, 4,0);
        tracep->declBus(c+174,"Patmos cores_0 execute io_exmem_rd_1_data", false,-1, 31,0);
        tracep->declBit(c+175,"Patmos cores_0 execute io_exmem_rd_1_valid", false,-1);
        tracep->declBit(c+176,"Patmos cores_0 execute io_exmem_mem_load", false,-1);
        tracep->declBit(c+177,"Patmos cores_0 execute io_exmem_mem_store", false,-1);
        tracep->declBit(c+178,"Patmos cores_0 execute io_exmem_mem_hword", false,-1);
        tracep->declBit(c+179,"Patmos cores_0 execute io_exmem_mem_byte", false,-1);
        tracep->declBit(c+180,"Patmos cores_0 execute io_exmem_mem_zext", false,-1);
        tracep->declBus(c+181,"Patmos cores_0 execute io_exmem_mem_typ", false,-1, 1,0);
        tracep->declBus(c+92,"Patmos cores_0 execute io_exmem_mem_addr", false,-1, 31,0);
        tracep->declBus(c+182,"Patmos cores_0 execute io_exmem_mem_data", false,-1, 31,0);
        tracep->declBit(c+183,"Patmos cores_0 execute io_exmem_mem_call", false,-1);
        tracep->declBit(c+184,"Patmos cores_0 execute io_exmem_mem_ret", false,-1);
        tracep->declBit(c+185,"Patmos cores_0 execute io_exmem_mem_brcf", false,-1);
        tracep->declBit(c+186,"Patmos cores_0 execute io_exmem_mem_trap", false,-1);
        tracep->declBit(c+187,"Patmos cores_0 execute io_exmem_mem_xcall", false,-1);
        tracep->declBit(c+188,"Patmos cores_0 execute io_exmem_mem_xret", false,-1);
        tracep->declBus(c+189,"Patmos cores_0 execute io_exmem_mem_xsrc", false,-1, 4,0);
        tracep->declBit(c+190,"Patmos cores_0 execute io_exmem_mem_illOp", false,-1);
        tracep->declBit(c+191,"Patmos cores_0 execute io_exmem_mem_nonDelayed", false,-1);
        tracep->declBus(c+192,"Patmos cores_0 execute io_exmem_base", false,-1, 29,0);
        tracep->declBus(c+193,"Patmos cores_0 execute io_exmem_relPc", false,-1, 29,0);
        tracep->declBit(c+71,"Patmos cores_0 execute io_exicache_doCallRet", false,-1);
        tracep->declBus(c+72,"Patmos cores_0 execute io_exicache_callRetBase", false,-1, 31,0);
        tracep->declBus(c+73,"Patmos cores_0 execute io_exicache_callRetAddr", false,-1, 31,0);
        tracep->declBus(c+1321,"Patmos cores_0 execute io_feex_pc", false,-1, 29,0);
        tracep->declBus(c+170,"Patmos cores_0 execute io_exResult_0_addr", false,-1, 4,0);
        tracep->declBus(c+171,"Patmos cores_0 execute io_exResult_0_data", false,-1, 31,0);
        tracep->declBit(c+172,"Patmos cores_0 execute io_exResult_0_valid", false,-1);
        tracep->declBus(c+173,"Patmos cores_0 execute io_exResult_1_addr", false,-1, 4,0);
        tracep->declBus(c+174,"Patmos cores_0 execute io_exResult_1_data", false,-1, 31,0);
        tracep->declBit(c+175,"Patmos cores_0 execute io_exResult_1_valid", false,-1);
        tracep->declBus(c+155,"Patmos cores_0 execute io_memResult_0_addr", false,-1, 4,0);
        tracep->declBus(c+156,"Patmos cores_0 execute io_memResult_0_data", false,-1, 31,0);
        tracep->declBit(c+157,"Patmos cores_0 execute io_memResult_0_valid", false,-1);
        tracep->declBus(c+158,"Patmos cores_0 execute io_memResult_1_addr", false,-1, 4,0);
        tracep->declBus(c+159,"Patmos cores_0 execute io_memResult_1_data", false,-1, 31,0);
        tracep->declBit(c+160,"Patmos cores_0 execute io_memResult_1_valid", false,-1);
        tracep->declBit(c+88,"Patmos cores_0 execute io_exfe_doBranch", false,-1);
        tracep->declBus(c+89,"Patmos cores_0 execute io_exfe_branchPc", false,-1, 29,0);
        tracep->declBus(c+194,"Patmos cores_0 execute io_exsc_op", false,-1, 2,0);
        tracep->declBus(c+195,"Patmos cores_0 execute io_exsc_opData", false,-1, 31,0);
        tracep->declBus(c+196,"Patmos cores_0 execute io_exsc_opOff", false,-1, 31,0);
        tracep->declBus(c+197,"Patmos cores_0 execute io_scex_stackTop", false,-1, 31,0);
        tracep->declBus(c+198,"Patmos cores_0 execute io_scex_memTop", false,-1, 31,0);
        tracep->declBus(c+192,"Patmos cores_0 execute exReg_base", false,-1, 29,0);
        tracep->declBus(c+193,"Patmos cores_0 execute exReg_relPc", false,-1, 29,0);
        tracep->declBus(c+479,"Patmos cores_0 execute exReg_pred_0", false,-1, 3,0);
        tracep->declBus(c+480,"Patmos cores_0 execute exReg_pred_1", false,-1, 3,0);
        tracep->declBus(c+481,"Patmos cores_0 execute exReg_aluOp_0_func", false,-1, 3,0);
        tracep->declBit(c+482,"Patmos cores_0 execute exReg_aluOp_0_isMul", false,-1);
        tracep->declBit(c+483,"Patmos cores_0 execute exReg_aluOp_0_isCmp", false,-1);
        tracep->declBit(c+484,"Patmos cores_0 execute exReg_aluOp_0_isPred", false,-1);
        tracep->declBit(c+485,"Patmos cores_0 execute exReg_aluOp_0_isBCpy", false,-1);
        tracep->declBit(c+486,"Patmos cores_0 execute exReg_aluOp_0_isMTS", false,-1);
        tracep->declBit(c+487,"Patmos cores_0 execute exReg_aluOp_0_isMFS", false,-1);
        tracep->declBus(c+488,"Patmos cores_0 execute exReg_aluOp_1_func", false,-1, 3,0);
        tracep->declBit(c+489,"Patmos cores_0 execute exReg_aluOp_1_isCmp", false,-1);
        tracep->declBit(c+490,"Patmos cores_0 execute exReg_aluOp_1_isPred", false,-1);
        tracep->declBit(c+491,"Patmos cores_0 execute exReg_aluOp_1_isBCpy", false,-1);
        tracep->declBit(c+492,"Patmos cores_0 execute exReg_aluOp_1_isMTS", false,-1);
        tracep->declBit(c+493,"Patmos cores_0 execute exReg_aluOp_1_isMFS", false,-1);
        tracep->declBus(c+494,"Patmos cores_0 execute exReg_predOp_0_func", false,-1, 1,0);
        tracep->declBus(c+495,"Patmos cores_0 execute exReg_predOp_0_dest", false,-1, 2,0);
        tracep->declBus(c+496,"Patmos cores_0 execute exReg_predOp_0_s1Addr", false,-1, 3,0);
        tracep->declBus(c+497,"Patmos cores_0 execute exReg_predOp_0_s2Addr", false,-1, 3,0);
        tracep->declBus(c+498,"Patmos cores_0 execute exReg_predOp_1_func", false,-1, 1,0);
        tracep->declBus(c+499,"Patmos cores_0 execute exReg_predOp_1_dest", false,-1, 2,0);
        tracep->declBus(c+500,"Patmos cores_0 execute exReg_predOp_1_s1Addr", false,-1, 3,0);
        tracep->declBus(c+501,"Patmos cores_0 execute exReg_predOp_1_s2Addr", false,-1, 3,0);
        tracep->declBit(c+502,"Patmos cores_0 execute exReg_jmpOp_branch", false,-1);
        tracep->declBus(c+503,"Patmos cores_0 execute exReg_jmpOp_target", false,-1, 29,0);
        tracep->declBus(c+504,"Patmos cores_0 execute exReg_jmpOp_reloc", false,-1, 31,0);
        tracep->declBit(c+505,"Patmos cores_0 execute exReg_memOp_load", false,-1);
        tracep->declBit(c+506,"Patmos cores_0 execute exReg_memOp_store", false,-1);
        tracep->declBit(c+178,"Patmos cores_0 execute exReg_memOp_hword", false,-1);
        tracep->declBit(c+179,"Patmos cores_0 execute exReg_memOp_byte", false,-1);
        tracep->declBit(c+180,"Patmos cores_0 execute exReg_memOp_zext", false,-1);
        tracep->declBus(c+181,"Patmos cores_0 execute exReg_memOp_typ", false,-1, 1,0);
        tracep->declBus(c+507,"Patmos cores_0 execute exReg_stackOp", false,-1, 2,0);
        tracep->declBus(c+508,"Patmos cores_0 execute exReg_rsData_0", false,-1, 31,0);
        tracep->declBus(c+509,"Patmos cores_0 execute exReg_rsData_1", false,-1, 31,0);
        tracep->declBus(c+510,"Patmos cores_0 execute exReg_rsData_2", false,-1, 31,0);
        tracep->declBus(c+511,"Patmos cores_0 execute exReg_rsData_3", false,-1, 31,0);
        tracep->declBus(c+170,"Patmos cores_0 execute exReg_rdAddr_0", false,-1, 4,0);
        tracep->declBus(c+173,"Patmos cores_0 execute exReg_rdAddr_1", false,-1, 4,0);
        tracep->declBus(c+512,"Patmos cores_0 execute exReg_immVal_0", false,-1, 31,0);
        tracep->declBus(c+513,"Patmos cores_0 execute exReg_immVal_1", false,-1, 31,0);
        tracep->declBit(c+514,"Patmos cores_0 execute exReg_immOp_0", false,-1);
        tracep->declBit(c+515,"Patmos cores_0 execute exReg_wrRd_0", false,-1);
        tracep->declBit(c+516,"Patmos cores_0 execute exReg_wrRd_1", false,-1);
        tracep->declBus(c+517,"Patmos cores_0 execute exReg_callAddr", false,-1, 31,0);
        tracep->declBit(c+518,"Patmos cores_0 execute exReg_call", false,-1);
        tracep->declBit(c+519,"Patmos cores_0 execute exReg_ret", false,-1);
        tracep->declBit(c+520,"Patmos cores_0 execute exReg_brcf", false,-1);
        tracep->declBit(c+521,"Patmos cores_0 execute exReg_trap", false,-1);
        tracep->declBit(c+522,"Patmos cores_0 execute exReg_xcall", false,-1);
        tracep->declBit(c+523,"Patmos cores_0 execute exReg_xret", false,-1);
        tracep->declBus(c+189,"Patmos cores_0 execute exReg_xsrc", false,-1, 4,0);
        tracep->declBit(c+191,"Patmos cores_0 execute exReg_nonDelayed", false,-1);
        tracep->declBit(c+190,"Patmos cores_0 execute exReg_illOp", false,-1);
        tracep->declBus(c+524,"Patmos cores_0 execute fwReg_0", false,-1, 2,0);
        tracep->declBus(c+525,"Patmos cores_0 execute fwReg_1", false,-1, 2,0);
        tracep->declBus(c+526,"Patmos cores_0 execute fwReg_2", false,-1, 2,0);
        tracep->declBus(c+527,"Patmos cores_0 execute fwReg_3", false,-1, 2,0);
        tracep->declBit(c+528,"Patmos cores_0 execute fwSrcReg_0", false,-1);
        tracep->declBit(c+529,"Patmos cores_0 execute fwSrcReg_1", false,-1);
        tracep->declBit(c+530,"Patmos cores_0 execute fwSrcReg_2", false,-1);
        tracep->declBit(c+531,"Patmos cores_0 execute fwSrcReg_3", false,-1);
        tracep->declBus(c+532,"Patmos cores_0 execute memResultDataReg_0", false,-1, 31,0);
        tracep->declBus(c+533,"Patmos cores_0 execute memResultDataReg_1", false,-1, 31,0);
        tracep->declBus(c+534,"Patmos cores_0 execute exResultDataReg_0", false,-1, 31,0);
        tracep->declBus(c+535,"Patmos cores_0 execute exResultDataReg_1", false,-1, 31,0);
        tracep->declBus(c+536,"Patmos cores_0 execute op_0", false,-1, 31,0);
        tracep->declBus(c+182,"Patmos cores_0 execute op_1", false,-1, 31,0);
        tracep->declBus(c+537,"Patmos cores_0 execute op_2", false,-1, 31,0);
        tracep->declBus(c+538,"Patmos cores_0 execute op_3", false,-1, 31,0);
        tracep->declBit(c+539,"Patmos cores_0 execute predReg_1", false,-1);
        tracep->declBit(c+540,"Patmos cores_0 execute predReg_2", false,-1);
        tracep->declBit(c+541,"Patmos cores_0 execute predReg_3", false,-1);
        tracep->declBit(c+542,"Patmos cores_0 execute predReg_4", false,-1);
        tracep->declBit(c+543,"Patmos cores_0 execute predReg_5", false,-1);
        tracep->declBit(c+544,"Patmos cores_0 execute predReg_6", false,-1);
        tracep->declBit(c+545,"Patmos cores_0 execute predReg_7", false,-1);
        tracep->declBit(c+546,"Patmos cores_0 execute doExecute_0", false,-1);
        tracep->declBit(c+547,"Patmos cores_0 execute doExecute_1", false,-1);
        tracep->declBus(c+548,"Patmos cores_0 execute retBaseReg", false,-1, 31,0);
        tracep->declBus(c+549,"Patmos cores_0 execute retOffReg", false,-1, 31,0);
        tracep->declBit(c+550,"Patmos cores_0 execute saveRetOff", false,-1);
        tracep->declBit(c+551,"Patmos cores_0 execute saveND", false,-1);
        tracep->declBus(c+552,"Patmos cores_0 execute excBaseReg", false,-1, 31,0);
        tracep->declBus(c+553,"Patmos cores_0 execute excOffReg", false,-1, 31,0);
        tracep->declBus(c+554,"Patmos cores_0 execute mulLoReg", false,-1, 31,0);
        tracep->declBus(c+555,"Patmos cores_0 execute mulHiReg", false,-1, 31,0);
        tracep->declBus(c+556,"Patmos cores_0 execute mulLLReg", false,-1, 31,0);
        tracep->declQuad(c+557,"Patmos cores_0 execute mulLHReg", false,-1, 32,0);
        tracep->declQuad(c+559,"Patmos cores_0 execute mulHLReg", false,-1, 32,0);
        tracep->declBus(c+561,"Patmos cores_0 execute mulHHReg", false,-1, 31,0);
        tracep->declBit(c+562,"Patmos cores_0 execute mulPipeReg", false,-1);
        tracep->declBit(c+563,"Patmos cores_0 execute hi", false,-1);
        tracep->declBus(c+564,"Patmos cores_0 execute lo", false,-1, 15,0);
        tracep->declBit(c+565,"Patmos cores_0 execute hi_1", false,-1);
        tracep->declBus(c+566,"Patmos cores_0 execute lo_1", false,-1, 15,0);
        tracep->declBus(c+567,"Patmos cores_0 execute brcfOff", false,-1, 31,0);
        tracep->declBus(c+568,"Patmos cores_0 execute callRetAddr", false,-1, 31,0);
        tracep->declBus(c+569,"Patmos cores_0 execute callBase", false,-1, 31,0);
        tracep->declBus(c+570,"Patmos cores_0 execute callRetBase", false,-1, 31,0);
        tracep->declBus(c+571,"Patmos cores_0 execute target", false,-1, 31,0);
        tracep->declBus(c+1327,"Patmos cores_0 execute hi_6", false,-1, 29,0);
        tracep->declBit(c+1353,"Patmos cores_0 memory clock", false,-1);
        tracep->declBit(c+1354,"Patmos cores_0 memory reset", false,-1);
        tracep->declBit(c+199,"Patmos cores_0 memory io_ena_out", false,-1);
        tracep->declBit(c+200,"Patmos cores_0 memory io_ena_in", false,-1);
        tracep->declBit(c+168,"Patmos cores_0 memory io_flush", false,-1);
        tracep->declBus(c+170,"Patmos cores_0 memory io_exmem_rd_0_addr", false,-1, 4,0);
        tracep->declBus(c+171,"Patmos cores_0 memory io_exmem_rd_0_data", false,-1, 31,0);
        tracep->declBit(c+172,"Patmos cores_0 memory io_exmem_rd_0_valid", false,-1);
        tracep->declBus(c+173,"Patmos cores_0 memory io_exmem_rd_1_addr", false,-1, 4,0);
        tracep->declBus(c+174,"Patmos cores_0 memory io_exmem_rd_1_data", false,-1, 31,0);
        tracep->declBit(c+175,"Patmos cores_0 memory io_exmem_rd_1_valid", false,-1);
        tracep->declBit(c+176,"Patmos cores_0 memory io_exmem_mem_load", false,-1);
        tracep->declBit(c+177,"Patmos cores_0 memory io_exmem_mem_store", false,-1);
        tracep->declBit(c+178,"Patmos cores_0 memory io_exmem_mem_hword", false,-1);
        tracep->declBit(c+179,"Patmos cores_0 memory io_exmem_mem_byte", false,-1);
        tracep->declBit(c+180,"Patmos cores_0 memory io_exmem_mem_zext", false,-1);
        tracep->declBus(c+181,"Patmos cores_0 memory io_exmem_mem_typ", false,-1, 1,0);
        tracep->declBus(c+92,"Patmos cores_0 memory io_exmem_mem_addr", false,-1, 31,0);
        tracep->declBus(c+182,"Patmos cores_0 memory io_exmem_mem_data", false,-1, 31,0);
        tracep->declBit(c+183,"Patmos cores_0 memory io_exmem_mem_call", false,-1);
        tracep->declBit(c+184,"Patmos cores_0 memory io_exmem_mem_ret", false,-1);
        tracep->declBit(c+185,"Patmos cores_0 memory io_exmem_mem_brcf", false,-1);
        tracep->declBit(c+186,"Patmos cores_0 memory io_exmem_mem_trap", false,-1);
        tracep->declBit(c+187,"Patmos cores_0 memory io_exmem_mem_xcall", false,-1);
        tracep->declBit(c+188,"Patmos cores_0 memory io_exmem_mem_xret", false,-1);
        tracep->declBus(c+189,"Patmos cores_0 memory io_exmem_mem_xsrc", false,-1, 4,0);
        tracep->declBit(c+190,"Patmos cores_0 memory io_exmem_mem_illOp", false,-1);
        tracep->declBit(c+191,"Patmos cores_0 memory io_exmem_mem_nonDelayed", false,-1);
        tracep->declBus(c+192,"Patmos cores_0 memory io_exmem_base", false,-1, 29,0);
        tracep->declBus(c+193,"Patmos cores_0 memory io_exmem_relPc", false,-1, 29,0);
        tracep->declBus(c+155,"Patmos cores_0 memory io_memwb_rd_0_addr", false,-1, 4,0);
        tracep->declBus(c+156,"Patmos cores_0 memory io_memwb_rd_0_data", false,-1, 31,0);
        tracep->declBit(c+157,"Patmos cores_0 memory io_memwb_rd_0_valid", false,-1);
        tracep->declBus(c+158,"Patmos cores_0 memory io_memwb_rd_1_addr", false,-1, 4,0);
        tracep->declBus(c+159,"Patmos cores_0 memory io_memwb_rd_1_data", false,-1, 31,0);
        tracep->declBit(c+160,"Patmos cores_0 memory io_memwb_rd_1_valid", false,-1);
        tracep->declBit(c+90,"Patmos cores_0 memory io_memfe_doCallRet", false,-1);
        tracep->declBit(c+91,"Patmos cores_0 memory io_memfe_store", false,-1);
        tracep->declBus(c+92,"Patmos cores_0 memory io_memfe_addr", false,-1, 31,0);
        tracep->declBus(c+16,"Patmos cores_0 memory io_memfe_data", false,-1, 31,0);
        tracep->declBus(c+170,"Patmos cores_0 memory io_exResult_0_addr", false,-1, 4,0);
        tracep->declBus(c+171,"Patmos cores_0 memory io_exResult_0_data", false,-1, 31,0);
        tracep->declBit(c+172,"Patmos cores_0 memory io_exResult_0_valid", false,-1);
        tracep->declBus(c+173,"Patmos cores_0 memory io_exResult_1_addr", false,-1, 4,0);
        tracep->declBus(c+174,"Patmos cores_0 memory io_exResult_1_data", false,-1, 31,0);
        tracep->declBit(c+175,"Patmos cores_0 memory io_exResult_1_valid", false,-1);
        tracep->declBus(c+14,"Patmos cores_0 memory io_localInOut_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+15,"Patmos cores_0 memory io_localInOut_M_Addr", false,-1, 31,0);
        tracep->declBus(c+16,"Patmos cores_0 memory io_localInOut_M_Data", false,-1, 31,0);
        tracep->declBus(c+17,"Patmos cores_0 memory io_localInOut_M_ByteEn", false,-1, 3,0);
        tracep->declBus(c+18,"Patmos cores_0 memory io_localInOut_S_Resp", false,-1, 1,0);
        tracep->declBus(c+19,"Patmos cores_0 memory io_localInOut_S_Data", false,-1, 31,0);
        tracep->declBus(c+201,"Patmos cores_0 memory io_globalInOut_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+15,"Patmos cores_0 memory io_globalInOut_M_Addr", false,-1, 31,0);
        tracep->declBus(c+16,"Patmos cores_0 memory io_globalInOut_M_Data", false,-1, 31,0);
        tracep->declBus(c+202,"Patmos cores_0 memory io_globalInOut_M_ByteEn", false,-1, 3,0);
        tracep->declBus(c+203,"Patmos cores_0 memory io_globalInOut_M_AddrSpace", false,-1, 1,0);
        tracep->declBus(c+204,"Patmos cores_0 memory io_globalInOut_S_Resp", false,-1, 1,0);
        tracep->declBus(c+205,"Patmos cores_0 memory io_globalInOut_S_Data", false,-1, 31,0);
        tracep->declBit(c+82,"Patmos cores_0 memory io_icacheIllMem", false,-1);
        tracep->declBit(c+206,"Patmos cores_0 memory io_scacheIllMem", false,-1);
        tracep->declBit(c+207,"Patmos cores_0 memory io_exc_call", false,-1);
        tracep->declBit(c+208,"Patmos cores_0 memory io_exc_ret", false,-1);
        tracep->declBus(c+209,"Patmos cores_0 memory io_exc_src", false,-1, 4,0);
        tracep->declBit(c+210,"Patmos cores_0 memory io_exc_exc", false,-1);
        tracep->declBus(c+211,"Patmos cores_0 memory io_exc_excBase", false,-1, 29,0);
        tracep->declBus(c+212,"Patmos cores_0 memory io_exc_excAddr", false,-1, 29,0);
        tracep->declBus(c+155,"Patmos cores_0 memory memReg_rd_0_addr", false,-1, 4,0);
        tracep->declBus(c+572,"Patmos cores_0 memory memReg_rd_0_data", false,-1, 31,0);
        tracep->declBit(c+157,"Patmos cores_0 memory memReg_rd_0_valid", false,-1);
        tracep->declBus(c+158,"Patmos cores_0 memory memReg_rd_1_addr", false,-1, 4,0);
        tracep->declBus(c+159,"Patmos cores_0 memory memReg_rd_1_data", false,-1, 31,0);
        tracep->declBit(c+160,"Patmos cores_0 memory memReg_rd_1_valid", false,-1);
        tracep->declBit(c+573,"Patmos cores_0 memory memReg_mem_load", false,-1);
        tracep->declBit(c+574,"Patmos cores_0 memory memReg_mem_hword", false,-1);
        tracep->declBit(c+575,"Patmos cores_0 memory memReg_mem_byte", false,-1);
        tracep->declBit(c+576,"Patmos cores_0 memory memReg_mem_zext", false,-1);
        tracep->declBus(c+577,"Patmos cores_0 memory memReg_mem_typ", false,-1, 1,0);
        tracep->declBus(c+578,"Patmos cores_0 memory memReg_mem_addr", false,-1, 31,0);
        tracep->declBit(c+579,"Patmos cores_0 memory memReg_mem_call", false,-1);
        tracep->declBit(c+580,"Patmos cores_0 memory memReg_mem_ret", false,-1);
        tracep->declBit(c+581,"Patmos cores_0 memory memReg_mem_brcf", false,-1);
        tracep->declBit(c+582,"Patmos cores_0 memory memReg_mem_trap", false,-1);
        tracep->declBit(c+207,"Patmos cores_0 memory memReg_mem_xcall", false,-1);
        tracep->declBit(c+208,"Patmos cores_0 memory memReg_mem_xret", false,-1);
        tracep->declBus(c+583,"Patmos cores_0 memory memReg_mem_xsrc", false,-1, 4,0);
        tracep->declBit(c+584,"Patmos cores_0 memory memReg_mem_illOp", false,-1);
        tracep->declBit(c+585,"Patmos cores_0 memory memReg_mem_nonDelayed", false,-1);
        tracep->declBus(c+211,"Patmos cores_0 memory memReg_base", false,-1, 29,0);
        tracep->declBus(c+586,"Patmos cores_0 memory memReg_relPc", false,-1, 29,0);
        tracep->declBit(c+587,"Patmos cores_0 memory illMem", false,-1);
        tracep->declBit(c+588,"Patmos cores_0 memory illMemReg", false,-1);
        tracep->declBit(c+168,"Patmos cores_0 memory flush", false,-1);
        tracep->declBit(c+589,"Patmos cores_0 memory mayStallReg", false,-1);
        tracep->declBit(c+199,"Patmos cores_0 memory enable", false,-1);
        tracep->declBus(c+590,"Patmos cores_0 memory wrData_3", false,-1, 7,0);
        tracep->declBus(c+591,"Patmos cores_0 memory wrData_2", false,-1, 7,0);
        tracep->declBus(c+592,"Patmos cores_0 memory wrData_1", false,-1, 7,0);
        tracep->declBus(c+593,"Patmos cores_0 memory wrData_0", false,-1, 7,0);
        tracep->declBus(c+594,"Patmos cores_0 memory cmd", false,-1, 2,0);
        tracep->declBus(c+595,"Patmos cores_0 memory hi", false,-1, 29,0);
        tracep->declBus(c+596,"Patmos cores_0 memory lo", false,-1, 15,0);
        tracep->declBus(c+597,"Patmos cores_0 memory hi_1", false,-1, 15,0);
        tracep->declBus(c+598,"Patmos cores_0 memory rdData_0", false,-1, 7,0);
        tracep->declBus(c+599,"Patmos cores_0 memory rdData_1", false,-1, 7,0);
        tracep->declBus(c+600,"Patmos cores_0 memory rdData_2", false,-1, 7,0);
        tracep->declBus(c+601,"Patmos cores_0 memory rdData_3", false,-1, 7,0);
        tracep->declBus(c+602,"Patmos cores_0 memory lo_2", false,-1, 15,0);
        tracep->declBus(c+603,"Patmos cores_0 memory hi_4", false,-1, 15,0);
        tracep->declBus(c+604,"Patmos cores_0 memory bval", false,-1, 7,0);
        tracep->declBus(c+605,"Patmos cores_0 memory hval", false,-1, 15,0);
        tracep->declBus(c+606,"Patmos cores_0 memory dout", false,-1, 31,0);
        tracep->declBus(c+155,"Patmos cores_0 writeback io_memwb_rd_0_addr", false,-1, 4,0);
        tracep->declBus(c+156,"Patmos cores_0 writeback io_memwb_rd_0_data", false,-1, 31,0);
        tracep->declBit(c+157,"Patmos cores_0 writeback io_memwb_rd_0_valid", false,-1);
        tracep->declBus(c+158,"Patmos cores_0 writeback io_memwb_rd_1_addr", false,-1, 4,0);
        tracep->declBus(c+159,"Patmos cores_0 writeback io_memwb_rd_1_data", false,-1, 31,0);
        tracep->declBit(c+160,"Patmos cores_0 writeback io_memwb_rd_1_valid", false,-1);
        tracep->declBus(c+155,"Patmos cores_0 writeback io_rfWrite_0_addr", false,-1, 4,0);
        tracep->declBus(c+156,"Patmos cores_0 writeback io_rfWrite_0_data", false,-1, 31,0);
        tracep->declBit(c+157,"Patmos cores_0 writeback io_rfWrite_0_valid", false,-1);
        tracep->declBus(c+158,"Patmos cores_0 writeback io_rfWrite_1_addr", false,-1, 4,0);
        tracep->declBus(c+159,"Patmos cores_0 writeback io_rfWrite_1_data", false,-1, 31,0);
        tracep->declBit(c+160,"Patmos cores_0 writeback io_rfWrite_1_valid", false,-1);
        tracep->declBus(c+155,"Patmos cores_0 writeback io_memResult_0_addr", false,-1, 4,0);
        tracep->declBus(c+156,"Patmos cores_0 writeback io_memResult_0_data", false,-1, 31,0);
        tracep->declBit(c+157,"Patmos cores_0 writeback io_memResult_0_valid", false,-1);
        tracep->declBus(c+158,"Patmos cores_0 writeback io_memResult_1_addr", false,-1, 4,0);
        tracep->declBus(c+159,"Patmos cores_0 writeback io_memResult_1_data", false,-1, 31,0);
        tracep->declBit(c+160,"Patmos cores_0 writeback io_memResult_1_valid", false,-1);
        tracep->declBit(c+1353,"Patmos cores_0 exc clock", false,-1);
        tracep->declBit(c+1354,"Patmos cores_0 exc reset", false,-1);
        tracep->declBit(c+213,"Patmos cores_0 exc io_ena", false,-1);
        tracep->declBus(c+20,"Patmos cores_0 exc io_ocp_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+15,"Patmos cores_0 exc io_ocp_M_Addr", false,-1, 31,0);
        tracep->declBus(c+16,"Patmos cores_0 exc io_ocp_M_Data", false,-1, 31,0);
        tracep->declBus(c+21,"Patmos cores_0 exc io_ocp_S_Resp", false,-1, 1,0);
        tracep->declBus(c+22,"Patmos cores_0 exc io_ocp_S_Data", false,-1, 31,0);
        tracep->declBit(c+1,"Patmos cores_0 exc io_intrs_0", false,-1);
        tracep->declBit(c+2,"Patmos cores_0 exc io_intrs_1", false,-1);
        tracep->declBit(c+3,"Patmos cores_0 exc io_intrs_2", false,-1);
        tracep->declBit(c+4,"Patmos cores_0 exc io_intrs_3", false,-1);
        tracep->declBit(c+5,"Patmos cores_0 exc io_intrs_4", false,-1);
        tracep->declBit(c+6,"Patmos cores_0 exc io_intrs_5", false,-1);
        tracep->declBit(c+161,"Patmos cores_0 exc io_excdec_exc", false,-1);
        tracep->declBus(c+162,"Patmos cores_0 exc io_excdec_excBase", false,-1, 29,0);
        tracep->declBus(c+163,"Patmos cores_0 exc io_excdec_excAddr", false,-1, 29,0);
        tracep->declBit(c+164,"Patmos cores_0 exc io_excdec_intr", false,-1);
        tracep->declBus(c+165,"Patmos cores_0 exc io_excdec_addr", false,-1, 31,0);
        tracep->declBus(c+166,"Patmos cores_0 exc io_excdec_src", false,-1, 4,0);
        tracep->declBit(c+167,"Patmos cores_0 exc io_excdec_local", false,-1);
        tracep->declBit(c+207,"Patmos cores_0 exc io_memexc_call", false,-1);
        tracep->declBit(c+208,"Patmos cores_0 exc io_memexc_ret", false,-1);
        tracep->declBus(c+209,"Patmos cores_0 exc io_memexc_src", false,-1, 4,0);
        tracep->declBit(c+210,"Patmos cores_0 exc io_memexc_exc", false,-1);
        tracep->declBus(c+211,"Patmos cores_0 exc io_memexc_excBase", false,-1, 29,0);
        tracep->declBus(c+212,"Patmos cores_0 exc io_memexc_excAddr", false,-1, 29,0);
        tracep->declBit(c+70,"Patmos cores_0 exc io_invalICache", false,-1);
        tracep->declBit(c+214,"Patmos cores_0 exc io_invalDCache", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+607+i*1,"Patmos cores_0 exc vec", true,(i+0), 31,0);}}
        tracep->declBus(c+639,"Patmos cores_0 exc vec_MPORT_data", false,-1, 31,0);
        tracep->declBus(c+640,"Patmos cores_0 exc vec_MPORT_addr", false,-1, 4,0);
        tracep->declBus(c+641,"Patmos cores_0 exc vec_MPORT_1_data", false,-1, 31,0);
        tracep->declBus(c+640,"Patmos cores_0 exc vec_MPORT_1_addr", false,-1, 4,0);
        tracep->declBit(c+1386,"Patmos cores_0 exc vec_MPORT_1_mask", false,-1);
        tracep->declBit(c+642,"Patmos cores_0 exc vec_MPORT_1_en", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+643+i*1,"Patmos cores_0 exc vecDup", true,(i+0), 31,0);}}
        tracep->declBus(c+165,"Patmos cores_0 exc vecDup_MPORT_3_data", false,-1, 31,0);
        tracep->declBus(c+166,"Patmos cores_0 exc vecDup_MPORT_3_addr", false,-1, 4,0);
        tracep->declBus(c+641,"Patmos cores_0 exc vecDup_MPORT_2_data", false,-1, 31,0);
        tracep->declBus(c+640,"Patmos cores_0 exc vecDup_MPORT_2_addr", false,-1, 4,0);
        tracep->declBit(c+1386,"Patmos cores_0 exc vecDup_MPORT_2_mask", false,-1);
        tracep->declBit(c+642,"Patmos cores_0 exc vecDup_MPORT_2_en", false,-1);
        tracep->declBus(c+675,"Patmos cores_0 exc masterReg_Cmd", false,-1, 2,0);
        tracep->declBus(c+676,"Patmos cores_0 exc masterReg_Addr", false,-1, 31,0);
        tracep->declBus(c+641,"Patmos cores_0 exc masterReg_Data", false,-1, 31,0);
        tracep->declBus(c+677,"Patmos cores_0 exc statusReg", false,-1, 31,0);
        tracep->declBus(c+678,"Patmos cores_0 exc maskReg", false,-1, 31,0);
        tracep->declBus(c+679,"Patmos cores_0 exc sourceReg", false,-1, 31,0);
        tracep->declBit(c+680,"Patmos cores_0 exc intrEna", false,-1);
        tracep->declBit(c+681,"Patmos cores_0 exc superMode", false,-1);
        tracep->declBit(c+167,"Patmos cores_0 exc localModeReg", false,-1);
        tracep->declBit(c+682,"Patmos cores_0 exc sleepReg", false,-1);
        tracep->declBit(c+683,"Patmos cores_0 exc excPendReg_0", false,-1);
        tracep->declBit(c+684,"Patmos cores_0 exc excPendReg_1", false,-1);
        tracep->declBit(c+685,"Patmos cores_0 exc excPendReg_2", false,-1);
        tracep->declBit(c+686,"Patmos cores_0 exc excPendReg_3", false,-1);
        tracep->declBit(c+687,"Patmos cores_0 exc excPendReg_4", false,-1);
        tracep->declBit(c+688,"Patmos cores_0 exc excPendReg_5", false,-1);
        tracep->declBit(c+689,"Patmos cores_0 exc excPendReg_6", false,-1);
        tracep->declBit(c+690,"Patmos cores_0 exc excPendReg_7", false,-1);
        tracep->declBit(c+691,"Patmos cores_0 exc excPendReg_8", false,-1);
        tracep->declBit(c+692,"Patmos cores_0 exc excPendReg_9", false,-1);
        tracep->declBit(c+693,"Patmos cores_0 exc excPendReg_10", false,-1);
        tracep->declBit(c+694,"Patmos cores_0 exc excPendReg_11", false,-1);
        tracep->declBit(c+695,"Patmos cores_0 exc excPendReg_12", false,-1);
        tracep->declBit(c+696,"Patmos cores_0 exc excPendReg_13", false,-1);
        tracep->declBit(c+697,"Patmos cores_0 exc excPendReg_14", false,-1);
        tracep->declBit(c+698,"Patmos cores_0 exc excPendReg_15", false,-1);
        tracep->declBit(c+699,"Patmos cores_0 exc excPendReg_16", false,-1);
        tracep->declBit(c+700,"Patmos cores_0 exc excPendReg_17", false,-1);
        tracep->declBit(c+701,"Patmos cores_0 exc excPendReg_18", false,-1);
        tracep->declBit(c+702,"Patmos cores_0 exc excPendReg_19", false,-1);
        tracep->declBit(c+703,"Patmos cores_0 exc excPendReg_20", false,-1);
        tracep->declBit(c+704,"Patmos cores_0 exc excPendReg_21", false,-1);
        tracep->declBit(c+705,"Patmos cores_0 exc excPendReg_22", false,-1);
        tracep->declBit(c+706,"Patmos cores_0 exc excPendReg_23", false,-1);
        tracep->declBit(c+707,"Patmos cores_0 exc excPendReg_24", false,-1);
        tracep->declBit(c+708,"Patmos cores_0 exc excPendReg_25", false,-1);
        tracep->declBit(c+709,"Patmos cores_0 exc excPendReg_26", false,-1);
        tracep->declBit(c+710,"Patmos cores_0 exc excPendReg_27", false,-1);
        tracep->declBit(c+711,"Patmos cores_0 exc excPendReg_28", false,-1);
        tracep->declBit(c+712,"Patmos cores_0 exc excPendReg_29", false,-1);
        tracep->declBit(c+713,"Patmos cores_0 exc excPendReg_30", false,-1);
        tracep->declBit(c+714,"Patmos cores_0 exc excPendReg_31", false,-1);
        tracep->declBit(c+715,"Patmos cores_0 exc intrPendReg_16", false,-1);
        tracep->declBit(c+716,"Patmos cores_0 exc intrPendReg_17", false,-1);
        tracep->declBit(c+717,"Patmos cores_0 exc intrPendReg_18", false,-1);
        tracep->declBit(c+718,"Patmos cores_0 exc intrPendReg_19", false,-1);
        tracep->declBit(c+719,"Patmos cores_0 exc intrPendReg_20", false,-1);
        tracep->declBit(c+720,"Patmos cores_0 exc intrPendReg_21", false,-1);
        tracep->declBit(c+721,"Patmos cores_0 exc REG", false,-1);
        tracep->declBit(c+722,"Patmos cores_0 exc intrPend_16", false,-1);
        tracep->declBit(c+723,"Patmos cores_0 exc REG_1", false,-1);
        tracep->declBit(c+724,"Patmos cores_0 exc intrPend_17", false,-1);
        tracep->declBit(c+725,"Patmos cores_0 exc REG_2", false,-1);
        tracep->declBit(c+726,"Patmos cores_0 exc intrPend_18", false,-1);
        tracep->declBit(c+727,"Patmos cores_0 exc REG_3", false,-1);
        tracep->declBit(c+728,"Patmos cores_0 exc intrPend_19", false,-1);
        tracep->declBit(c+729,"Patmos cores_0 exc REG_4", false,-1);
        tracep->declBit(c+730,"Patmos cores_0 exc intrPend_20", false,-1);
        tracep->declBit(c+731,"Patmos cores_0 exc REG_5", false,-1);
        tracep->declBit(c+732,"Patmos cores_0 exc intrPend_21", false,-1);
        tracep->declBus(c+162,"Patmos cores_0 exc excBaseReg", false,-1, 29,0);
        tracep->declBus(c+163,"Patmos cores_0 exc excAddrReg", false,-1, 29,0);
        tracep->declBit(c+733,"Patmos cores_0 exc excPend_0", false,-1);
        tracep->declBit(c+734,"Patmos cores_0 exc excPend_1", false,-1);
        tracep->declBit(c+735,"Patmos cores_0 exc excPend_2", false,-1);
        tracep->declBit(c+736,"Patmos cores_0 exc excPend_3", false,-1);
        tracep->declBit(c+737,"Patmos cores_0 exc excPend_4", false,-1);
        tracep->declBit(c+738,"Patmos cores_0 exc excPend_5", false,-1);
        tracep->declBit(c+739,"Patmos cores_0 exc excPend_6", false,-1);
        tracep->declBit(c+740,"Patmos cores_0 exc excPend_7", false,-1);
        tracep->declBit(c+741,"Patmos cores_0 exc excPend_8", false,-1);
        tracep->declBit(c+742,"Patmos cores_0 exc excPend_9", false,-1);
        tracep->declBit(c+743,"Patmos cores_0 exc excPend_10", false,-1);
        tracep->declBit(c+744,"Patmos cores_0 exc excPend_11", false,-1);
        tracep->declBit(c+745,"Patmos cores_0 exc excPend_12", false,-1);
        tracep->declBit(c+746,"Patmos cores_0 exc excPend_13", false,-1);
        tracep->declBit(c+747,"Patmos cores_0 exc excPend_14", false,-1);
        tracep->declBit(c+748,"Patmos cores_0 exc excPend_15", false,-1);
        tracep->declBit(c+749,"Patmos cores_0 exc excPend_16", false,-1);
        tracep->declBit(c+750,"Patmos cores_0 exc excPend_17", false,-1);
        tracep->declBit(c+751,"Patmos cores_0 exc excPend_18", false,-1);
        tracep->declBit(c+752,"Patmos cores_0 exc excPend_19", false,-1);
        tracep->declBit(c+753,"Patmos cores_0 exc excPend_20", false,-1);
        tracep->declBit(c+754,"Patmos cores_0 exc excPend_21", false,-1);
        tracep->declBit(c+755,"Patmos cores_0 exc excPend_22", false,-1);
        tracep->declBit(c+756,"Patmos cores_0 exc excPend_23", false,-1);
        tracep->declBit(c+757,"Patmos cores_0 exc excPend_24", false,-1);
        tracep->declBit(c+758,"Patmos cores_0 exc excPend_25", false,-1);
        tracep->declBit(c+759,"Patmos cores_0 exc excPend_26", false,-1);
        tracep->declBit(c+760,"Patmos cores_0 exc excPend_27", false,-1);
        tracep->declBit(c+761,"Patmos cores_0 exc excPend_28", false,-1);
        tracep->declBit(c+762,"Patmos cores_0 exc excPend_29", false,-1);
        tracep->declBit(c+763,"Patmos cores_0 exc excPend_30", false,-1);
        tracep->declBit(c+764,"Patmos cores_0 exc excPend_31", false,-1);
        tracep->declBus(c+166,"Patmos cores_0 exc srcReg", false,-1, 4,0);
        tracep->declBus(c+765,"Patmos cores_0 exc lo_lo_1", false,-1, 7,0);
        tracep->declBus(c+766,"Patmos cores_0 exc lo_1", false,-1, 15,0);
        tracep->declBus(c+767,"Patmos cores_0 exc hi_lo_1", false,-1, 7,0);
        tracep->declBit(c+161,"Patmos cores_0 exc exc", false,-1);
        tracep->declBit(c+768,"Patmos cores_0 exc intr", false,-1);
        tracep->declBit(c+1353,"Patmos cores_0 dcache clock", false,-1);
        tracep->declBit(c+1354,"Patmos cores_0 dcache reset", false,-1);
        tracep->declBus(c+201,"Patmos cores_0 dcache io_master_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+15,"Patmos cores_0 dcache io_master_M_Addr", false,-1, 31,0);
        tracep->declBus(c+16,"Patmos cores_0 dcache io_master_M_Data", false,-1, 31,0);
        tracep->declBus(c+202,"Patmos cores_0 dcache io_master_M_ByteEn", false,-1, 3,0);
        tracep->declBus(c+203,"Patmos cores_0 dcache io_master_M_AddrSpace", false,-1, 1,0);
        tracep->declBus(c+204,"Patmos cores_0 dcache io_master_S_Resp", false,-1, 1,0);
        tracep->declBus(c+205,"Patmos cores_0 dcache io_master_S_Data", false,-1, 31,0);
        tracep->declBus(c+215,"Patmos cores_0 dcache io_slave_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+216,"Patmos cores_0 dcache io_slave_M_Addr", false,-1, 31,0);
        tracep->declBus(c+217,"Patmos cores_0 dcache io_slave_M_Data", false,-1, 31,0);
        tracep->declBit(c+218,"Patmos cores_0 dcache io_slave_M_DataValid", false,-1);
        tracep->declBus(c+219,"Patmos cores_0 dcache io_slave_M_DataByteEn", false,-1, 3,0);
        tracep->declBus(c+220,"Patmos cores_0 dcache io_slave_S_Resp", false,-1, 1,0);
        tracep->declBus(c+13,"Patmos cores_0 dcache io_slave_S_Data", false,-1, 31,0);
        tracep->declBit(c+1386,"Patmos cores_0 dcache io_slave_S_CmdAccept", false,-1);
        tracep->declBit(c+1386,"Patmos cores_0 dcache io_slave_S_DataAccept", false,-1);
        tracep->declBit(c+221,"Patmos cores_0 dcache io_scIO_ena_in", false,-1);
        tracep->declBus(c+194,"Patmos cores_0 dcache io_scIO_exsc_op", false,-1, 2,0);
        tracep->declBus(c+195,"Patmos cores_0 dcache io_scIO_exsc_opData", false,-1, 31,0);
        tracep->declBus(c+196,"Patmos cores_0 dcache io_scIO_exsc_opOff", false,-1, 31,0);
        tracep->declBus(c+197,"Patmos cores_0 dcache io_scIO_scex_stackTop", false,-1, 31,0);
        tracep->declBus(c+198,"Patmos cores_0 dcache io_scIO_scex_memTop", false,-1, 31,0);
        tracep->declBit(c+206,"Patmos cores_0 dcache io_scIO_illMem", false,-1);
        tracep->declBit(c+222,"Patmos cores_0 dcache io_scIO_stall", false,-1);
        tracep->declBit(c+214,"Patmos cores_0 dcache io_invalDCache", false,-1);
        tracep->declBit(c+1353,"Patmos cores_0 dcache dm_clock", false,-1);
        tracep->declBit(c+1354,"Patmos cores_0 dcache dm_reset", false,-1);
        tracep->declBus(c+769,"Patmos cores_0 dcache dm_io_master_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+15,"Patmos cores_0 dcache dm_io_master_M_Addr", false,-1, 31,0);
        tracep->declBus(c+16,"Patmos cores_0 dcache dm_io_master_M_Data", false,-1, 31,0);
        tracep->declBus(c+202,"Patmos cores_0 dcache dm_io_master_M_ByteEn", false,-1, 3,0);
        tracep->declBus(c+770,"Patmos cores_0 dcache dm_io_master_S_Resp", false,-1, 1,0);
        tracep->declBus(c+771,"Patmos cores_0 dcache dm_io_master_S_Data", false,-1, 31,0);
        tracep->declBus(c+772,"Patmos cores_0 dcache dm_io_slave_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+773,"Patmos cores_0 dcache dm_io_slave_M_Addr", false,-1, 31,0);
        tracep->declBus(c+774,"Patmos cores_0 dcache dm_io_slave_S_Resp", false,-1, 1,0);
        tracep->declBus(c+13,"Patmos cores_0 dcache dm_io_slave_S_Data", false,-1, 31,0);
        tracep->declBit(c+1386,"Patmos cores_0 dcache dm_io_slave_S_CmdAccept", false,-1);
        tracep->declBit(c+214,"Patmos cores_0 dcache dm_io_invalidate", false,-1);
        tracep->declBit(c+1353,"Patmos cores_0 dcache sc_clock", false,-1);
        tracep->declBit(c+1354,"Patmos cores_0 dcache sc_reset", false,-1);
        tracep->declBit(c+221,"Patmos cores_0 dcache sc_io_ena_in", false,-1);
        tracep->declBus(c+194,"Patmos cores_0 dcache sc_io_exsc_op", false,-1, 2,0);
        tracep->declBus(c+195,"Patmos cores_0 dcache sc_io_exsc_opData", false,-1, 31,0);
        tracep->declBus(c+196,"Patmos cores_0 dcache sc_io_exsc_opOff", false,-1, 31,0);
        tracep->declBus(c+197,"Patmos cores_0 dcache sc_io_scex_stackTop", false,-1, 31,0);
        tracep->declBus(c+198,"Patmos cores_0 dcache sc_io_scex_memTop", false,-1, 31,0);
        tracep->declBit(c+206,"Patmos cores_0 dcache sc_io_illMem", false,-1);
        tracep->declBit(c+222,"Patmos cores_0 dcache sc_io_stall", false,-1);
        tracep->declBus(c+775,"Patmos cores_0 dcache sc_io_fromCPU_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+15,"Patmos cores_0 dcache sc_io_fromCPU_M_Addr", false,-1, 31,0);
        tracep->declBus(c+16,"Patmos cores_0 dcache sc_io_fromCPU_M_Data", false,-1, 31,0);
        tracep->declBus(c+202,"Patmos cores_0 dcache sc_io_fromCPU_M_ByteEn", false,-1, 3,0);
        tracep->declBus(c+776,"Patmos cores_0 dcache sc_io_fromCPU_S_Resp", false,-1, 1,0);
        tracep->declBus(c+777,"Patmos cores_0 dcache sc_io_fromCPU_S_Data", false,-1, 31,0);
        tracep->declBus(c+778,"Patmos cores_0 dcache sc_io_toMemory_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+779,"Patmos cores_0 dcache sc_io_toMemory_M_Addr", false,-1, 31,0);
        tracep->declBus(c+777,"Patmos cores_0 dcache sc_io_toMemory_M_Data", false,-1, 31,0);
        tracep->declBit(c+780,"Patmos cores_0 dcache sc_io_toMemory_M_DataValid", false,-1);
        tracep->declBus(c+781,"Patmos cores_0 dcache sc_io_toMemory_M_DataByteEn", false,-1, 3,0);
        tracep->declBus(c+782,"Patmos cores_0 dcache sc_io_toMemory_S_Resp", false,-1, 1,0);
        tracep->declBus(c+13,"Patmos cores_0 dcache sc_io_toMemory_S_Data", false,-1, 31,0);
        tracep->declBit(c+1386,"Patmos cores_0 dcache sc_io_toMemory_S_CmdAccept", false,-1);
        tracep->declBit(c+1353,"Patmos cores_0 dcache bp_clock", false,-1);
        tracep->declBit(c+1354,"Patmos cores_0 dcache bp_reset", false,-1);
        tracep->declBus(c+783,"Patmos cores_0 dcache bp_io_master_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+15,"Patmos cores_0 dcache bp_io_master_M_Addr", false,-1, 31,0);
        tracep->declBus(c+784,"Patmos cores_0 dcache bp_io_master_S_Resp", false,-1, 1,0);
        tracep->declBus(c+785,"Patmos cores_0 dcache bp_io_master_S_Data", false,-1, 31,0);
        tracep->declBus(c+786,"Patmos cores_0 dcache bp_io_slave_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+787,"Patmos cores_0 dcache bp_io_slave_M_Addr", false,-1, 31,0);
        tracep->declBus(c+788,"Patmos cores_0 dcache bp_io_slave_S_Resp", false,-1, 1,0);
        tracep->declBus(c+13,"Patmos cores_0 dcache bp_io_slave_S_Data", false,-1, 31,0);
        tracep->declBit(c+1386,"Patmos cores_0 dcache bp_io_slave_S_CmdAccept", false,-1);
        tracep->declBus(c+789,"Patmos cores_0 dcache burstReadBus1_io_master_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+790,"Patmos cores_0 dcache burstReadBus1_io_master_M_Addr", false,-1, 31,0);
        tracep->declBus(c+1387,"Patmos cores_0 dcache burstReadBus1_io_master_M_Data", false,-1, 31,0);
        tracep->declBit(c+1388,"Patmos cores_0 dcache burstReadBus1_io_master_M_DataValid", false,-1);
        tracep->declBus(c+1389,"Patmos cores_0 dcache burstReadBus1_io_master_M_DataByteEn", false,-1, 3,0);
        tracep->declBus(c+791,"Patmos cores_0 dcache burstReadBus1_io_master_S_Resp", false,-1, 1,0);
        tracep->declBus(c+13,"Patmos cores_0 dcache burstReadBus1_io_master_S_Data", false,-1, 31,0);
        tracep->declBit(c+1386,"Patmos cores_0 dcache burstReadBus1_io_master_S_CmdAccept", false,-1);
        tracep->declBit(c+1386,"Patmos cores_0 dcache burstReadBus1_io_master_S_DataAccept", false,-1);
        tracep->declBus(c+789,"Patmos cores_0 dcache burstReadBus1_io_slave_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+790,"Patmos cores_0 dcache burstReadBus1_io_slave_M_Addr", false,-1, 31,0);
        tracep->declBus(c+1387,"Patmos cores_0 dcache burstReadBus1_io_slave_M_Data", false,-1, 31,0);
        tracep->declBit(c+1388,"Patmos cores_0 dcache burstReadBus1_io_slave_M_DataValid", false,-1);
        tracep->declBus(c+1389,"Patmos cores_0 dcache burstReadBus1_io_slave_M_DataByteEn", false,-1, 3,0);
        tracep->declBus(c+791,"Patmos cores_0 dcache burstReadBus1_io_slave_S_Resp", false,-1, 1,0);
        tracep->declBus(c+13,"Patmos cores_0 dcache burstReadBus1_io_slave_S_Data", false,-1, 31,0);
        tracep->declBit(c+1386,"Patmos cores_0 dcache burstReadBus1_io_slave_S_CmdAccept", false,-1);
        tracep->declBit(c+1386,"Patmos cores_0 dcache burstReadBus1_io_slave_S_DataAccept", false,-1);
        tracep->declBus(c+792,"Patmos cores_0 dcache burstReadBus2_io_master_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+793,"Patmos cores_0 dcache burstReadBus2_io_master_M_Addr", false,-1, 31,0);
        tracep->declBus(c+794,"Patmos cores_0 dcache burstReadBus2_io_master_M_Data", false,-1, 31,0);
        tracep->declBit(c+795,"Patmos cores_0 dcache burstReadBus2_io_master_M_DataValid", false,-1);
        tracep->declBus(c+796,"Patmos cores_0 dcache burstReadBus2_io_master_M_DataByteEn", false,-1, 3,0);
        tracep->declBus(c+797,"Patmos cores_0 dcache burstReadBus2_io_master_S_Resp", false,-1, 1,0);
        tracep->declBus(c+13,"Patmos cores_0 dcache burstReadBus2_io_master_S_Data", false,-1, 31,0);
        tracep->declBit(c+1386,"Patmos cores_0 dcache burstReadBus2_io_master_S_CmdAccept", false,-1);
        tracep->declBit(c+1386,"Patmos cores_0 dcache burstReadBus2_io_master_S_DataAccept", false,-1);
        tracep->declBus(c+792,"Patmos cores_0 dcache burstReadBus2_io_slave_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+793,"Patmos cores_0 dcache burstReadBus2_io_slave_M_Addr", false,-1, 31,0);
        tracep->declBus(c+794,"Patmos cores_0 dcache burstReadBus2_io_slave_M_Data", false,-1, 31,0);
        tracep->declBit(c+795,"Patmos cores_0 dcache burstReadBus2_io_slave_M_DataValid", false,-1);
        tracep->declBus(c+796,"Patmos cores_0 dcache burstReadBus2_io_slave_M_DataByteEn", false,-1, 3,0);
        tracep->declBus(c+797,"Patmos cores_0 dcache burstReadBus2_io_slave_S_Resp", false,-1, 1,0);
        tracep->declBus(c+13,"Patmos cores_0 dcache burstReadBus2_io_slave_S_Data", false,-1, 31,0);
        tracep->declBit(c+1386,"Patmos cores_0 dcache burstReadBus2_io_slave_S_CmdAccept", false,-1);
        tracep->declBit(c+1386,"Patmos cores_0 dcache burstReadBus2_io_slave_S_DataAccept", false,-1);
        tracep->declBit(c+1353,"Patmos cores_0 dcache wc_clock", false,-1);
        tracep->declBit(c+1354,"Patmos cores_0 dcache wc_reset", false,-1);
        tracep->declBus(c+792,"Patmos cores_0 dcache wc_io_readMaster_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+793,"Patmos cores_0 dcache wc_io_readMaster_M_Addr", false,-1, 31,0);
        tracep->declBus(c+794,"Patmos cores_0 dcache wc_io_readMaster_M_Data", false,-1, 31,0);
        tracep->declBit(c+795,"Patmos cores_0 dcache wc_io_readMaster_M_DataValid", false,-1);
        tracep->declBus(c+796,"Patmos cores_0 dcache wc_io_readMaster_M_DataByteEn", false,-1, 3,0);
        tracep->declBus(c+797,"Patmos cores_0 dcache wc_io_readMaster_S_Resp", false,-1, 1,0);
        tracep->declBus(c+13,"Patmos cores_0 dcache wc_io_readMaster_S_Data", false,-1, 31,0);
        tracep->declBit(c+1386,"Patmos cores_0 dcache wc_io_readMaster_S_CmdAccept", false,-1);
        tracep->declBit(c+1386,"Patmos cores_0 dcache wc_io_readMaster_S_DataAccept", false,-1);
        tracep->declBus(c+798,"Patmos cores_0 dcache wc_io_writeMaster_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+15,"Patmos cores_0 dcache wc_io_writeMaster_M_Addr", false,-1, 31,0);
        tracep->declBus(c+16,"Patmos cores_0 dcache wc_io_writeMaster_M_Data", false,-1, 31,0);
        tracep->declBus(c+202,"Patmos cores_0 dcache wc_io_writeMaster_M_ByteEn", false,-1, 3,0);
        tracep->declBus(c+799,"Patmos cores_0 dcache wc_io_writeMaster_S_Resp", false,-1, 1,0);
        tracep->declBus(c+215,"Patmos cores_0 dcache wc_io_slave_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+216,"Patmos cores_0 dcache wc_io_slave_M_Addr", false,-1, 31,0);
        tracep->declBus(c+217,"Patmos cores_0 dcache wc_io_slave_M_Data", false,-1, 31,0);
        tracep->declBit(c+218,"Patmos cores_0 dcache wc_io_slave_M_DataValid", false,-1);
        tracep->declBus(c+219,"Patmos cores_0 dcache wc_io_slave_M_DataByteEn", false,-1, 3,0);
        tracep->declBus(c+220,"Patmos cores_0 dcache wc_io_slave_S_Resp", false,-1, 1,0);
        tracep->declBus(c+13,"Patmos cores_0 dcache wc_io_slave_S_Data", false,-1, 31,0);
        tracep->declBit(c+1386,"Patmos cores_0 dcache wc_io_slave_S_CmdAccept", false,-1);
        tracep->declBit(c+1386,"Patmos cores_0 dcache wc_io_slave_S_DataAccept", false,-1);
        tracep->declBit(c+800,"Patmos cores_0 dcache selDC", false,-1);
        tracep->declBit(c+801,"Patmos cores_0 dcache selDCReg", false,-1);
        tracep->declBit(c+802,"Patmos cores_0 dcache selSC", false,-1);
        tracep->declBit(c+803,"Patmos cores_0 dcache selSCReg", false,-1);
        tracep->declBit(c+804,"Patmos cores_0 dcache REG", false,-1);
        tracep->declBit(c+805,"Patmos cores_0 dcache REG_1", false,-1);
        tracep->declBit(c+1353,"Patmos cores_0 dcache dm clock", false,-1);
        tracep->declBit(c+1354,"Patmos cores_0 dcache dm reset", false,-1);
        tracep->declBus(c+769,"Patmos cores_0 dcache dm io_master_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+15,"Patmos cores_0 dcache dm io_master_M_Addr", false,-1, 31,0);
        tracep->declBus(c+16,"Patmos cores_0 dcache dm io_master_M_Data", false,-1, 31,0);
        tracep->declBus(c+202,"Patmos cores_0 dcache dm io_master_M_ByteEn", false,-1, 3,0);
        tracep->declBus(c+770,"Patmos cores_0 dcache dm io_master_S_Resp", false,-1, 1,0);
        tracep->declBus(c+771,"Patmos cores_0 dcache dm io_master_S_Data", false,-1, 31,0);
        tracep->declBus(c+772,"Patmos cores_0 dcache dm io_slave_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+773,"Patmos cores_0 dcache dm io_slave_M_Addr", false,-1, 31,0);
        tracep->declBus(c+774,"Patmos cores_0 dcache dm io_slave_S_Resp", false,-1, 1,0);
        tracep->declBus(c+13,"Patmos cores_0 dcache dm io_slave_S_Data", false,-1, 31,0);
        tracep->declBit(c+1386,"Patmos cores_0 dcache dm io_slave_S_CmdAccept", false,-1);
        tracep->declBit(c+214,"Patmos cores_0 dcache dm io_invalidate", false,-1);
        tracep->declBit(c+1353,"Patmos cores_0 dcache dm tagMem_clock", false,-1);
        tracep->declBus(c+806,"Patmos cores_0 dcache dm tagMem_io_rdAddr", false,-1, 7,0);
        tracep->declBus(c+807,"Patmos cores_0 dcache dm tagMem_io_rdData", false,-1, 19,0);
        tracep->declBus(c+808,"Patmos cores_0 dcache dm tagMem_io_wrAddr", false,-1, 7,0);
        tracep->declBit(c+809,"Patmos cores_0 dcache dm tagMem_io_wrEna", false,-1);
        tracep->declBus(c+810,"Patmos cores_0 dcache dm tagMem_io_wrData", false,-1, 19,0);
        tracep->declBit(c+1353,"Patmos cores_0 dcache dm MemBlock_clock", false,-1);
        tracep->declBus(c+811,"Patmos cores_0 dcache dm MemBlock_io_rdAddr", false,-1, 9,0);
        tracep->declBus(c+812,"Patmos cores_0 dcache dm MemBlock_io_rdData", false,-1, 7,0);
        tracep->declBus(c+813,"Patmos cores_0 dcache dm MemBlock_io_wrAddr", false,-1, 9,0);
        tracep->declBit(c+814,"Patmos cores_0 dcache dm MemBlock_io_wrEna", false,-1);
        tracep->declBus(c+815,"Patmos cores_0 dcache dm MemBlock_io_wrData", false,-1, 7,0);
        tracep->declBit(c+1353,"Patmos cores_0 dcache dm MemBlock_1_clock", false,-1);
        tracep->declBus(c+811,"Patmos cores_0 dcache dm MemBlock_1_io_rdAddr", false,-1, 9,0);
        tracep->declBus(c+816,"Patmos cores_0 dcache dm MemBlock_1_io_rdData", false,-1, 7,0);
        tracep->declBus(c+813,"Patmos cores_0 dcache dm MemBlock_1_io_wrAddr", false,-1, 9,0);
        tracep->declBit(c+817,"Patmos cores_0 dcache dm MemBlock_1_io_wrEna", false,-1);
        tracep->declBus(c+818,"Patmos cores_0 dcache dm MemBlock_1_io_wrData", false,-1, 7,0);
        tracep->declBit(c+1353,"Patmos cores_0 dcache dm MemBlock_2_clock", false,-1);
        tracep->declBus(c+811,"Patmos cores_0 dcache dm MemBlock_2_io_rdAddr", false,-1, 9,0);
        tracep->declBus(c+819,"Patmos cores_0 dcache dm MemBlock_2_io_rdData", false,-1, 7,0);
        tracep->declBus(c+813,"Patmos cores_0 dcache dm MemBlock_2_io_wrAddr", false,-1, 9,0);
        tracep->declBit(c+820,"Patmos cores_0 dcache dm MemBlock_2_io_wrEna", false,-1);
        tracep->declBus(c+821,"Patmos cores_0 dcache dm MemBlock_2_io_wrData", false,-1, 7,0);
        tracep->declBit(c+1353,"Patmos cores_0 dcache dm MemBlock_3_clock", false,-1);
        tracep->declBus(c+811,"Patmos cores_0 dcache dm MemBlock_3_io_rdAddr", false,-1, 9,0);
        tracep->declBus(c+822,"Patmos cores_0 dcache dm MemBlock_3_io_rdData", false,-1, 7,0);
        tracep->declBus(c+813,"Patmos cores_0 dcache dm MemBlock_3_io_wrAddr", false,-1, 9,0);
        tracep->declBit(c+823,"Patmos cores_0 dcache dm MemBlock_3_io_wrEna", false,-1);
        tracep->declBus(c+824,"Patmos cores_0 dcache dm MemBlock_3_io_wrData", false,-1, 7,0);
        tracep->declBus(c+825,"Patmos cores_0 dcache dm masterReg_Cmd", false,-1, 2,0);
        tracep->declBus(c+826,"Patmos cores_0 dcache dm masterReg_Addr", false,-1, 31,0);
        tracep->declBus(c+827,"Patmos cores_0 dcache dm masterReg_ByteEn", false,-1, 3,0);
        tracep->declBit(c+828,"Patmos cores_0 dcache dm tagVMem_0", false,-1);
        tracep->declBit(c+829,"Patmos cores_0 dcache dm tagVMem_1", false,-1);
        tracep->declBit(c+830,"Patmos cores_0 dcache dm tagVMem_2", false,-1);
        tracep->declBit(c+831,"Patmos cores_0 dcache dm tagVMem_3", false,-1);
        tracep->declBit(c+832,"Patmos cores_0 dcache dm tagVMem_4", false,-1);
        tracep->declBit(c+833,"Patmos cores_0 dcache dm tagVMem_5", false,-1);
        tracep->declBit(c+834,"Patmos cores_0 dcache dm tagVMem_6", false,-1);
        tracep->declBit(c+835,"Patmos cores_0 dcache dm tagVMem_7", false,-1);
        tracep->declBit(c+836,"Patmos cores_0 dcache dm tagVMem_8", false,-1);
        tracep->declBit(c+837,"Patmos cores_0 dcache dm tagVMem_9", false,-1);
        tracep->declBit(c+838,"Patmos cores_0 dcache dm tagVMem_10", false,-1);
        tracep->declBit(c+839,"Patmos cores_0 dcache dm tagVMem_11", false,-1);
        tracep->declBit(c+840,"Patmos cores_0 dcache dm tagVMem_12", false,-1);
        tracep->declBit(c+841,"Patmos cores_0 dcache dm tagVMem_13", false,-1);
        tracep->declBit(c+842,"Patmos cores_0 dcache dm tagVMem_14", false,-1);
        tracep->declBit(c+843,"Patmos cores_0 dcache dm tagVMem_15", false,-1);
        tracep->declBit(c+844,"Patmos cores_0 dcache dm tagVMem_16", false,-1);
        tracep->declBit(c+845,"Patmos cores_0 dcache dm tagVMem_17", false,-1);
        tracep->declBit(c+846,"Patmos cores_0 dcache dm tagVMem_18", false,-1);
        tracep->declBit(c+847,"Patmos cores_0 dcache dm tagVMem_19", false,-1);
        tracep->declBit(c+848,"Patmos cores_0 dcache dm tagVMem_20", false,-1);
        tracep->declBit(c+849,"Patmos cores_0 dcache dm tagVMem_21", false,-1);
        tracep->declBit(c+850,"Patmos cores_0 dcache dm tagVMem_22", false,-1);
        tracep->declBit(c+851,"Patmos cores_0 dcache dm tagVMem_23", false,-1);
        tracep->declBit(c+852,"Patmos cores_0 dcache dm tagVMem_24", false,-1);
        tracep->declBit(c+853,"Patmos cores_0 dcache dm tagVMem_25", false,-1);
        tracep->declBit(c+854,"Patmos cores_0 dcache dm tagVMem_26", false,-1);
        tracep->declBit(c+855,"Patmos cores_0 dcache dm tagVMem_27", false,-1);
        tracep->declBit(c+856,"Patmos cores_0 dcache dm tagVMem_28", false,-1);
        tracep->declBit(c+857,"Patmos cores_0 dcache dm tagVMem_29", false,-1);
        tracep->declBit(c+858,"Patmos cores_0 dcache dm tagVMem_30", false,-1);
        tracep->declBit(c+859,"Patmos cores_0 dcache dm tagVMem_31", false,-1);
        tracep->declBit(c+860,"Patmos cores_0 dcache dm tagVMem_32", false,-1);
        tracep->declBit(c+861,"Patmos cores_0 dcache dm tagVMem_33", false,-1);
        tracep->declBit(c+862,"Patmos cores_0 dcache dm tagVMem_34", false,-1);
        tracep->declBit(c+863,"Patmos cores_0 dcache dm tagVMem_35", false,-1);
        tracep->declBit(c+864,"Patmos cores_0 dcache dm tagVMem_36", false,-1);
        tracep->declBit(c+865,"Patmos cores_0 dcache dm tagVMem_37", false,-1);
        tracep->declBit(c+866,"Patmos cores_0 dcache dm tagVMem_38", false,-1);
        tracep->declBit(c+867,"Patmos cores_0 dcache dm tagVMem_39", false,-1);
        tracep->declBit(c+868,"Patmos cores_0 dcache dm tagVMem_40", false,-1);
        tracep->declBit(c+869,"Patmos cores_0 dcache dm tagVMem_41", false,-1);
        tracep->declBit(c+870,"Patmos cores_0 dcache dm tagVMem_42", false,-1);
        tracep->declBit(c+871,"Patmos cores_0 dcache dm tagVMem_43", false,-1);
        tracep->declBit(c+872,"Patmos cores_0 dcache dm tagVMem_44", false,-1);
        tracep->declBit(c+873,"Patmos cores_0 dcache dm tagVMem_45", false,-1);
        tracep->declBit(c+874,"Patmos cores_0 dcache dm tagVMem_46", false,-1);
        tracep->declBit(c+875,"Patmos cores_0 dcache dm tagVMem_47", false,-1);
        tracep->declBit(c+876,"Patmos cores_0 dcache dm tagVMem_48", false,-1);
        tracep->declBit(c+877,"Patmos cores_0 dcache dm tagVMem_49", false,-1);
        tracep->declBit(c+878,"Patmos cores_0 dcache dm tagVMem_50", false,-1);
        tracep->declBit(c+879,"Patmos cores_0 dcache dm tagVMem_51", false,-1);
        tracep->declBit(c+880,"Patmos cores_0 dcache dm tagVMem_52", false,-1);
        tracep->declBit(c+881,"Patmos cores_0 dcache dm tagVMem_53", false,-1);
        tracep->declBit(c+882,"Patmos cores_0 dcache dm tagVMem_54", false,-1);
        tracep->declBit(c+883,"Patmos cores_0 dcache dm tagVMem_55", false,-1);
        tracep->declBit(c+884,"Patmos cores_0 dcache dm tagVMem_56", false,-1);
        tracep->declBit(c+885,"Patmos cores_0 dcache dm tagVMem_57", false,-1);
        tracep->declBit(c+886,"Patmos cores_0 dcache dm tagVMem_58", false,-1);
        tracep->declBit(c+887,"Patmos cores_0 dcache dm tagVMem_59", false,-1);
        tracep->declBit(c+888,"Patmos cores_0 dcache dm tagVMem_60", false,-1);
        tracep->declBit(c+889,"Patmos cores_0 dcache dm tagVMem_61", false,-1);
        tracep->declBit(c+890,"Patmos cores_0 dcache dm tagVMem_62", false,-1);
        tracep->declBit(c+891,"Patmos cores_0 dcache dm tagVMem_63", false,-1);
        tracep->declBit(c+892,"Patmos cores_0 dcache dm tagVMem_64", false,-1);
        tracep->declBit(c+893,"Patmos cores_0 dcache dm tagVMem_65", false,-1);
        tracep->declBit(c+894,"Patmos cores_0 dcache dm tagVMem_66", false,-1);
        tracep->declBit(c+895,"Patmos cores_0 dcache dm tagVMem_67", false,-1);
        tracep->declBit(c+896,"Patmos cores_0 dcache dm tagVMem_68", false,-1);
        tracep->declBit(c+897,"Patmos cores_0 dcache dm tagVMem_69", false,-1);
        tracep->declBit(c+898,"Patmos cores_0 dcache dm tagVMem_70", false,-1);
        tracep->declBit(c+899,"Patmos cores_0 dcache dm tagVMem_71", false,-1);
        tracep->declBit(c+900,"Patmos cores_0 dcache dm tagVMem_72", false,-1);
        tracep->declBit(c+901,"Patmos cores_0 dcache dm tagVMem_73", false,-1);
        tracep->declBit(c+902,"Patmos cores_0 dcache dm tagVMem_74", false,-1);
        tracep->declBit(c+903,"Patmos cores_0 dcache dm tagVMem_75", false,-1);
        tracep->declBit(c+904,"Patmos cores_0 dcache dm tagVMem_76", false,-1);
        tracep->declBit(c+905,"Patmos cores_0 dcache dm tagVMem_77", false,-1);
        tracep->declBit(c+906,"Patmos cores_0 dcache dm tagVMem_78", false,-1);
        tracep->declBit(c+907,"Patmos cores_0 dcache dm tagVMem_79", false,-1);
        tracep->declBit(c+908,"Patmos cores_0 dcache dm tagVMem_80", false,-1);
        tracep->declBit(c+909,"Patmos cores_0 dcache dm tagVMem_81", false,-1);
        tracep->declBit(c+910,"Patmos cores_0 dcache dm tagVMem_82", false,-1);
        tracep->declBit(c+911,"Patmos cores_0 dcache dm tagVMem_83", false,-1);
        tracep->declBit(c+912,"Patmos cores_0 dcache dm tagVMem_84", false,-1);
        tracep->declBit(c+913,"Patmos cores_0 dcache dm tagVMem_85", false,-1);
        tracep->declBit(c+914,"Patmos cores_0 dcache dm tagVMem_86", false,-1);
        tracep->declBit(c+915,"Patmos cores_0 dcache dm tagVMem_87", false,-1);
        tracep->declBit(c+916,"Patmos cores_0 dcache dm tagVMem_88", false,-1);
        tracep->declBit(c+917,"Patmos cores_0 dcache dm tagVMem_89", false,-1);
        tracep->declBit(c+918,"Patmos cores_0 dcache dm tagVMem_90", false,-1);
        tracep->declBit(c+919,"Patmos cores_0 dcache dm tagVMem_91", false,-1);
        tracep->declBit(c+920,"Patmos cores_0 dcache dm tagVMem_92", false,-1);
        tracep->declBit(c+921,"Patmos cores_0 dcache dm tagVMem_93", false,-1);
        tracep->declBit(c+922,"Patmos cores_0 dcache dm tagVMem_94", false,-1);
        tracep->declBit(c+923,"Patmos cores_0 dcache dm tagVMem_95", false,-1);
        tracep->declBit(c+924,"Patmos cores_0 dcache dm tagVMem_96", false,-1);
        tracep->declBit(c+925,"Patmos cores_0 dcache dm tagVMem_97", false,-1);
        tracep->declBit(c+926,"Patmos cores_0 dcache dm tagVMem_98", false,-1);
        tracep->declBit(c+927,"Patmos cores_0 dcache dm tagVMem_99", false,-1);
        tracep->declBit(c+928,"Patmos cores_0 dcache dm tagVMem_100", false,-1);
        tracep->declBit(c+929,"Patmos cores_0 dcache dm tagVMem_101", false,-1);
        tracep->declBit(c+930,"Patmos cores_0 dcache dm tagVMem_102", false,-1);
        tracep->declBit(c+931,"Patmos cores_0 dcache dm tagVMem_103", false,-1);
        tracep->declBit(c+932,"Patmos cores_0 dcache dm tagVMem_104", false,-1);
        tracep->declBit(c+933,"Patmos cores_0 dcache dm tagVMem_105", false,-1);
        tracep->declBit(c+934,"Patmos cores_0 dcache dm tagVMem_106", false,-1);
        tracep->declBit(c+935,"Patmos cores_0 dcache dm tagVMem_107", false,-1);
        tracep->declBit(c+936,"Patmos cores_0 dcache dm tagVMem_108", false,-1);
        tracep->declBit(c+937,"Patmos cores_0 dcache dm tagVMem_109", false,-1);
        tracep->declBit(c+938,"Patmos cores_0 dcache dm tagVMem_110", false,-1);
        tracep->declBit(c+939,"Patmos cores_0 dcache dm tagVMem_111", false,-1);
        tracep->declBit(c+940,"Patmos cores_0 dcache dm tagVMem_112", false,-1);
        tracep->declBit(c+941,"Patmos cores_0 dcache dm tagVMem_113", false,-1);
        tracep->declBit(c+942,"Patmos cores_0 dcache dm tagVMem_114", false,-1);
        tracep->declBit(c+943,"Patmos cores_0 dcache dm tagVMem_115", false,-1);
        tracep->declBit(c+944,"Patmos cores_0 dcache dm tagVMem_116", false,-1);
        tracep->declBit(c+945,"Patmos cores_0 dcache dm tagVMem_117", false,-1);
        tracep->declBit(c+946,"Patmos cores_0 dcache dm tagVMem_118", false,-1);
        tracep->declBit(c+947,"Patmos cores_0 dcache dm tagVMem_119", false,-1);
        tracep->declBit(c+948,"Patmos cores_0 dcache dm tagVMem_120", false,-1);
        tracep->declBit(c+949,"Patmos cores_0 dcache dm tagVMem_121", false,-1);
        tracep->declBit(c+950,"Patmos cores_0 dcache dm tagVMem_122", false,-1);
        tracep->declBit(c+951,"Patmos cores_0 dcache dm tagVMem_123", false,-1);
        tracep->declBit(c+952,"Patmos cores_0 dcache dm tagVMem_124", false,-1);
        tracep->declBit(c+953,"Patmos cores_0 dcache dm tagVMem_125", false,-1);
        tracep->declBit(c+954,"Patmos cores_0 dcache dm tagVMem_126", false,-1);
        tracep->declBit(c+955,"Patmos cores_0 dcache dm tagVMem_127", false,-1);
        tracep->declBit(c+956,"Patmos cores_0 dcache dm tagVMem_128", false,-1);
        tracep->declBit(c+957,"Patmos cores_0 dcache dm tagVMem_129", false,-1);
        tracep->declBit(c+958,"Patmos cores_0 dcache dm tagVMem_130", false,-1);
        tracep->declBit(c+959,"Patmos cores_0 dcache dm tagVMem_131", false,-1);
        tracep->declBit(c+960,"Patmos cores_0 dcache dm tagVMem_132", false,-1);
        tracep->declBit(c+961,"Patmos cores_0 dcache dm tagVMem_133", false,-1);
        tracep->declBit(c+962,"Patmos cores_0 dcache dm tagVMem_134", false,-1);
        tracep->declBit(c+963,"Patmos cores_0 dcache dm tagVMem_135", false,-1);
        tracep->declBit(c+964,"Patmos cores_0 dcache dm tagVMem_136", false,-1);
        tracep->declBit(c+965,"Patmos cores_0 dcache dm tagVMem_137", false,-1);
        tracep->declBit(c+966,"Patmos cores_0 dcache dm tagVMem_138", false,-1);
        tracep->declBit(c+967,"Patmos cores_0 dcache dm tagVMem_139", false,-1);
        tracep->declBit(c+968,"Patmos cores_0 dcache dm tagVMem_140", false,-1);
        tracep->declBit(c+969,"Patmos cores_0 dcache dm tagVMem_141", false,-1);
        tracep->declBit(c+970,"Patmos cores_0 dcache dm tagVMem_142", false,-1);
        tracep->declBit(c+971,"Patmos cores_0 dcache dm tagVMem_143", false,-1);
        tracep->declBit(c+972,"Patmos cores_0 dcache dm tagVMem_144", false,-1);
        tracep->declBit(c+973,"Patmos cores_0 dcache dm tagVMem_145", false,-1);
        tracep->declBit(c+974,"Patmos cores_0 dcache dm tagVMem_146", false,-1);
        tracep->declBit(c+975,"Patmos cores_0 dcache dm tagVMem_147", false,-1);
        tracep->declBit(c+976,"Patmos cores_0 dcache dm tagVMem_148", false,-1);
        tracep->declBit(c+977,"Patmos cores_0 dcache dm tagVMem_149", false,-1);
        tracep->declBit(c+978,"Patmos cores_0 dcache dm tagVMem_150", false,-1);
        tracep->declBit(c+979,"Patmos cores_0 dcache dm tagVMem_151", false,-1);
        tracep->declBit(c+980,"Patmos cores_0 dcache dm tagVMem_152", false,-1);
        tracep->declBit(c+981,"Patmos cores_0 dcache dm tagVMem_153", false,-1);
        tracep->declBit(c+982,"Patmos cores_0 dcache dm tagVMem_154", false,-1);
        tracep->declBit(c+983,"Patmos cores_0 dcache dm tagVMem_155", false,-1);
        tracep->declBit(c+984,"Patmos cores_0 dcache dm tagVMem_156", false,-1);
        tracep->declBit(c+985,"Patmos cores_0 dcache dm tagVMem_157", false,-1);
        tracep->declBit(c+986,"Patmos cores_0 dcache dm tagVMem_158", false,-1);
        tracep->declBit(c+987,"Patmos cores_0 dcache dm tagVMem_159", false,-1);
        tracep->declBit(c+988,"Patmos cores_0 dcache dm tagVMem_160", false,-1);
        tracep->declBit(c+989,"Patmos cores_0 dcache dm tagVMem_161", false,-1);
        tracep->declBit(c+990,"Patmos cores_0 dcache dm tagVMem_162", false,-1);
        tracep->declBit(c+991,"Patmos cores_0 dcache dm tagVMem_163", false,-1);
        tracep->declBit(c+992,"Patmos cores_0 dcache dm tagVMem_164", false,-1);
        tracep->declBit(c+993,"Patmos cores_0 dcache dm tagVMem_165", false,-1);
        tracep->declBit(c+994,"Patmos cores_0 dcache dm tagVMem_166", false,-1);
        tracep->declBit(c+995,"Patmos cores_0 dcache dm tagVMem_167", false,-1);
        tracep->declBit(c+996,"Patmos cores_0 dcache dm tagVMem_168", false,-1);
        tracep->declBit(c+997,"Patmos cores_0 dcache dm tagVMem_169", false,-1);
        tracep->declBit(c+998,"Patmos cores_0 dcache dm tagVMem_170", false,-1);
        tracep->declBit(c+999,"Patmos cores_0 dcache dm tagVMem_171", false,-1);
        tracep->declBit(c+1000,"Patmos cores_0 dcache dm tagVMem_172", false,-1);
        tracep->declBit(c+1001,"Patmos cores_0 dcache dm tagVMem_173", false,-1);
        tracep->declBit(c+1002,"Patmos cores_0 dcache dm tagVMem_174", false,-1);
        tracep->declBit(c+1003,"Patmos cores_0 dcache dm tagVMem_175", false,-1);
        tracep->declBit(c+1004,"Patmos cores_0 dcache dm tagVMem_176", false,-1);
        tracep->declBit(c+1005,"Patmos cores_0 dcache dm tagVMem_177", false,-1);
        tracep->declBit(c+1006,"Patmos cores_0 dcache dm tagVMem_178", false,-1);
        tracep->declBit(c+1007,"Patmos cores_0 dcache dm tagVMem_179", false,-1);
        tracep->declBit(c+1008,"Patmos cores_0 dcache dm tagVMem_180", false,-1);
        tracep->declBit(c+1009,"Patmos cores_0 dcache dm tagVMem_181", false,-1);
        tracep->declBit(c+1010,"Patmos cores_0 dcache dm tagVMem_182", false,-1);
        tracep->declBit(c+1011,"Patmos cores_0 dcache dm tagVMem_183", false,-1);
        tracep->declBit(c+1012,"Patmos cores_0 dcache dm tagVMem_184", false,-1);
        tracep->declBit(c+1013,"Patmos cores_0 dcache dm tagVMem_185", false,-1);
        tracep->declBit(c+1014,"Patmos cores_0 dcache dm tagVMem_186", false,-1);
        tracep->declBit(c+1015,"Patmos cores_0 dcache dm tagVMem_187", false,-1);
        tracep->declBit(c+1016,"Patmos cores_0 dcache dm tagVMem_188", false,-1);
        tracep->declBit(c+1017,"Patmos cores_0 dcache dm tagVMem_189", false,-1);
        tracep->declBit(c+1018,"Patmos cores_0 dcache dm tagVMem_190", false,-1);
        tracep->declBit(c+1019,"Patmos cores_0 dcache dm tagVMem_191", false,-1);
        tracep->declBit(c+1020,"Patmos cores_0 dcache dm tagVMem_192", false,-1);
        tracep->declBit(c+1021,"Patmos cores_0 dcache dm tagVMem_193", false,-1);
        tracep->declBit(c+1022,"Patmos cores_0 dcache dm tagVMem_194", false,-1);
        tracep->declBit(c+1023,"Patmos cores_0 dcache dm tagVMem_195", false,-1);
        tracep->declBit(c+1024,"Patmos cores_0 dcache dm tagVMem_196", false,-1);
        tracep->declBit(c+1025,"Patmos cores_0 dcache dm tagVMem_197", false,-1);
        tracep->declBit(c+1026,"Patmos cores_0 dcache dm tagVMem_198", false,-1);
        tracep->declBit(c+1027,"Patmos cores_0 dcache dm tagVMem_199", false,-1);
        tracep->declBit(c+1028,"Patmos cores_0 dcache dm tagVMem_200", false,-1);
        tracep->declBit(c+1029,"Patmos cores_0 dcache dm tagVMem_201", false,-1);
        tracep->declBit(c+1030,"Patmos cores_0 dcache dm tagVMem_202", false,-1);
        tracep->declBit(c+1031,"Patmos cores_0 dcache dm tagVMem_203", false,-1);
        tracep->declBit(c+1032,"Patmos cores_0 dcache dm tagVMem_204", false,-1);
        tracep->declBit(c+1033,"Patmos cores_0 dcache dm tagVMem_205", false,-1);
        tracep->declBit(c+1034,"Patmos cores_0 dcache dm tagVMem_206", false,-1);
        tracep->declBit(c+1035,"Patmos cores_0 dcache dm tagVMem_207", false,-1);
        tracep->declBit(c+1036,"Patmos cores_0 dcache dm tagVMem_208", false,-1);
        tracep->declBit(c+1037,"Patmos cores_0 dcache dm tagVMem_209", false,-1);
        tracep->declBit(c+1038,"Patmos cores_0 dcache dm tagVMem_210", false,-1);
        tracep->declBit(c+1039,"Patmos cores_0 dcache dm tagVMem_211", false,-1);
        tracep->declBit(c+1040,"Patmos cores_0 dcache dm tagVMem_212", false,-1);
        tracep->declBit(c+1041,"Patmos cores_0 dcache dm tagVMem_213", false,-1);
        tracep->declBit(c+1042,"Patmos cores_0 dcache dm tagVMem_214", false,-1);
        tracep->declBit(c+1043,"Patmos cores_0 dcache dm tagVMem_215", false,-1);
        tracep->declBit(c+1044,"Patmos cores_0 dcache dm tagVMem_216", false,-1);
        tracep->declBit(c+1045,"Patmos cores_0 dcache dm tagVMem_217", false,-1);
        tracep->declBit(c+1046,"Patmos cores_0 dcache dm tagVMem_218", false,-1);
        tracep->declBit(c+1047,"Patmos cores_0 dcache dm tagVMem_219", false,-1);
        tracep->declBit(c+1048,"Patmos cores_0 dcache dm tagVMem_220", false,-1);
        tracep->declBit(c+1049,"Patmos cores_0 dcache dm tagVMem_221", false,-1);
        tracep->declBit(c+1050,"Patmos cores_0 dcache dm tagVMem_222", false,-1);
        tracep->declBit(c+1051,"Patmos cores_0 dcache dm tagVMem_223", false,-1);
        tracep->declBit(c+1052,"Patmos cores_0 dcache dm tagVMem_224", false,-1);
        tracep->declBit(c+1053,"Patmos cores_0 dcache dm tagVMem_225", false,-1);
        tracep->declBit(c+1054,"Patmos cores_0 dcache dm tagVMem_226", false,-1);
        tracep->declBit(c+1055,"Patmos cores_0 dcache dm tagVMem_227", false,-1);
        tracep->declBit(c+1056,"Patmos cores_0 dcache dm tagVMem_228", false,-1);
        tracep->declBit(c+1057,"Patmos cores_0 dcache dm tagVMem_229", false,-1);
        tracep->declBit(c+1058,"Patmos cores_0 dcache dm tagVMem_230", false,-1);
        tracep->declBit(c+1059,"Patmos cores_0 dcache dm tagVMem_231", false,-1);
        tracep->declBit(c+1060,"Patmos cores_0 dcache dm tagVMem_232", false,-1);
        tracep->declBit(c+1061,"Patmos cores_0 dcache dm tagVMem_233", false,-1);
        tracep->declBit(c+1062,"Patmos cores_0 dcache dm tagVMem_234", false,-1);
        tracep->declBit(c+1063,"Patmos cores_0 dcache dm tagVMem_235", false,-1);
        tracep->declBit(c+1064,"Patmos cores_0 dcache dm tagVMem_236", false,-1);
        tracep->declBit(c+1065,"Patmos cores_0 dcache dm tagVMem_237", false,-1);
        tracep->declBit(c+1066,"Patmos cores_0 dcache dm tagVMem_238", false,-1);
        tracep->declBit(c+1067,"Patmos cores_0 dcache dm tagVMem_239", false,-1);
        tracep->declBit(c+1068,"Patmos cores_0 dcache dm tagVMem_240", false,-1);
        tracep->declBit(c+1069,"Patmos cores_0 dcache dm tagVMem_241", false,-1);
        tracep->declBit(c+1070,"Patmos cores_0 dcache dm tagVMem_242", false,-1);
        tracep->declBit(c+1071,"Patmos cores_0 dcache dm tagVMem_243", false,-1);
        tracep->declBit(c+1072,"Patmos cores_0 dcache dm tagVMem_244", false,-1);
        tracep->declBit(c+1073,"Patmos cores_0 dcache dm tagVMem_245", false,-1);
        tracep->declBit(c+1074,"Patmos cores_0 dcache dm tagVMem_246", false,-1);
        tracep->declBit(c+1075,"Patmos cores_0 dcache dm tagVMem_247", false,-1);
        tracep->declBit(c+1076,"Patmos cores_0 dcache dm tagVMem_248", false,-1);
        tracep->declBit(c+1077,"Patmos cores_0 dcache dm tagVMem_249", false,-1);
        tracep->declBit(c+1078,"Patmos cores_0 dcache dm tagVMem_250", false,-1);
        tracep->declBit(c+1079,"Patmos cores_0 dcache dm tagVMem_251", false,-1);
        tracep->declBit(c+1080,"Patmos cores_0 dcache dm tagVMem_252", false,-1);
        tracep->declBit(c+1081,"Patmos cores_0 dcache dm tagVMem_253", false,-1);
        tracep->declBit(c+1082,"Patmos cores_0 dcache dm tagVMem_254", false,-1);
        tracep->declBit(c+1083,"Patmos cores_0 dcache dm tagVMem_255", false,-1);
        tracep->declBit(c+1084,"Patmos cores_0 dcache dm tagV", false,-1);
        tracep->declBit(c+1085,"Patmos cores_0 dcache dm tagValid", false,-1);
        tracep->declBit(c+1086,"Patmos cores_0 dcache dm fillReg", false,-1);
        tracep->declBus(c+813,"Patmos cores_0 dcache dm wrAddrReg", false,-1, 9,0);
        tracep->declBus(c+1087,"Patmos cores_0 dcache dm wrDataReg", false,-1, 31,0);
        tracep->declBus(c+1088,"Patmos cores_0 dcache dm stmsk", false,-1, 3,0);
        tracep->declBus(c+1089,"Patmos cores_0 dcache dm rdData", false,-1, 31,0);
        tracep->declBus(c+1090,"Patmos cores_0 dcache dm stateReg", false,-1, 1,0);
        tracep->declBus(c+1091,"Patmos cores_0 dcache dm burstCntReg", false,-1, 1,0);
        tracep->declBus(c+1092,"Patmos cores_0 dcache dm missIndexReg", false,-1, 1,0);
        tracep->declBus(c+1093,"Patmos cores_0 dcache dm slaveReg_Resp", false,-1, 1,0);
        tracep->declBus(c+1094,"Patmos cores_0 dcache dm slaveReg_Data", false,-1, 31,0);
        tracep->declBus(c+1095,"Patmos cores_0 dcache dm hi", false,-1, 27,0);
        tracep->declBit(c+1353,"Patmos cores_0 dcache dm tagMem clock", false,-1);
        tracep->declBus(c+806,"Patmos cores_0 dcache dm tagMem io_rdAddr", false,-1, 7,0);
        tracep->declBus(c+807,"Patmos cores_0 dcache dm tagMem io_rdData", false,-1, 19,0);
        tracep->declBus(c+808,"Patmos cores_0 dcache dm tagMem io_wrAddr", false,-1, 7,0);
        tracep->declBit(c+809,"Patmos cores_0 dcache dm tagMem io_wrEna", false,-1);
        tracep->declBus(c+810,"Patmos cores_0 dcache dm tagMem io_wrData", false,-1, 19,0);
        tracep->declBus(c+1096,"Patmos cores_0 dcache dm tagMem mem_MPORT_1_data", false,-1, 19,0);
        tracep->declBus(c+1097,"Patmos cores_0 dcache dm tagMem mem_MPORT_1_addr", false,-1, 7,0);
        tracep->declBus(c+810,"Patmos cores_0 dcache dm tagMem mem_MPORT_data", false,-1, 19,0);
        tracep->declBus(c+808,"Patmos cores_0 dcache dm tagMem mem_MPORT_addr", false,-1, 7,0);
        tracep->declBit(c+1386,"Patmos cores_0 dcache dm tagMem mem_MPORT_mask", false,-1);
        tracep->declBit(c+809,"Patmos cores_0 dcache dm tagMem mem_MPORT_en", false,-1);
        tracep->declBus(c+1097,"Patmos cores_0 dcache dm tagMem rdAddrReg", false,-1, 7,0);
        tracep->declBit(c+1098,"Patmos cores_0 dcache dm tagMem REG", false,-1);
        tracep->declBus(c+1099,"Patmos cores_0 dcache dm tagMem REG_1", false,-1, 7,0);
        tracep->declBus(c+1100,"Patmos cores_0 dcache dm tagMem REG_2", false,-1, 19,0);
        tracep->declBit(c+1353,"Patmos cores_0 dcache dm MemBlock clock", false,-1);
        tracep->declBus(c+811,"Patmos cores_0 dcache dm MemBlock io_rdAddr", false,-1, 9,0);
        tracep->declBus(c+812,"Patmos cores_0 dcache dm MemBlock io_rdData", false,-1, 7,0);
        tracep->declBus(c+813,"Patmos cores_0 dcache dm MemBlock io_wrAddr", false,-1, 9,0);
        tracep->declBit(c+814,"Patmos cores_0 dcache dm MemBlock io_wrEna", false,-1);
        tracep->declBus(c+815,"Patmos cores_0 dcache dm MemBlock io_wrData", false,-1, 7,0);
        tracep->declBus(c+1101,"Patmos cores_0 dcache dm MemBlock mem_MPORT_1_data", false,-1, 7,0);
        tracep->declBus(c+1102,"Patmos cores_0 dcache dm MemBlock mem_MPORT_1_addr", false,-1, 9,0);
        tracep->declBus(c+815,"Patmos cores_0 dcache dm MemBlock mem_MPORT_data", false,-1, 7,0);
        tracep->declBus(c+813,"Patmos cores_0 dcache dm MemBlock mem_MPORT_addr", false,-1, 9,0);
        tracep->declBit(c+1386,"Patmos cores_0 dcache dm MemBlock mem_MPORT_mask", false,-1);
        tracep->declBit(c+814,"Patmos cores_0 dcache dm MemBlock mem_MPORT_en", false,-1);
        tracep->declBus(c+1102,"Patmos cores_0 dcache dm MemBlock rdAddrReg", false,-1, 9,0);
        tracep->declBit(c+1103,"Patmos cores_0 dcache dm MemBlock REG", false,-1);
        tracep->declBus(c+1104,"Patmos cores_0 dcache dm MemBlock REG_1", false,-1, 9,0);
        tracep->declBus(c+1105,"Patmos cores_0 dcache dm MemBlock REG_2", false,-1, 7,0);
        tracep->declBit(c+1353,"Patmos cores_0 dcache dm MemBlock_1 clock", false,-1);
        tracep->declBus(c+811,"Patmos cores_0 dcache dm MemBlock_1 io_rdAddr", false,-1, 9,0);
        tracep->declBus(c+816,"Patmos cores_0 dcache dm MemBlock_1 io_rdData", false,-1, 7,0);
        tracep->declBus(c+813,"Patmos cores_0 dcache dm MemBlock_1 io_wrAddr", false,-1, 9,0);
        tracep->declBit(c+817,"Patmos cores_0 dcache dm MemBlock_1 io_wrEna", false,-1);
        tracep->declBus(c+818,"Patmos cores_0 dcache dm MemBlock_1 io_wrData", false,-1, 7,0);
        tracep->declBus(c+1106,"Patmos cores_0 dcache dm MemBlock_1 mem_MPORT_1_data", false,-1, 7,0);
        tracep->declBus(c+1107,"Patmos cores_0 dcache dm MemBlock_1 mem_MPORT_1_addr", false,-1, 9,0);
        tracep->declBus(c+818,"Patmos cores_0 dcache dm MemBlock_1 mem_MPORT_data", false,-1, 7,0);
        tracep->declBus(c+813,"Patmos cores_0 dcache dm MemBlock_1 mem_MPORT_addr", false,-1, 9,0);
        tracep->declBit(c+1386,"Patmos cores_0 dcache dm MemBlock_1 mem_MPORT_mask", false,-1);
        tracep->declBit(c+817,"Patmos cores_0 dcache dm MemBlock_1 mem_MPORT_en", false,-1);
        tracep->declBus(c+1107,"Patmos cores_0 dcache dm MemBlock_1 rdAddrReg", false,-1, 9,0);
        tracep->declBit(c+1108,"Patmos cores_0 dcache dm MemBlock_1 REG", false,-1);
        tracep->declBus(c+1109,"Patmos cores_0 dcache dm MemBlock_1 REG_1", false,-1, 9,0);
        tracep->declBus(c+1110,"Patmos cores_0 dcache dm MemBlock_1 REG_2", false,-1, 7,0);
        tracep->declBit(c+1353,"Patmos cores_0 dcache dm MemBlock_2 clock", false,-1);
        tracep->declBus(c+811,"Patmos cores_0 dcache dm MemBlock_2 io_rdAddr", false,-1, 9,0);
        tracep->declBus(c+819,"Patmos cores_0 dcache dm MemBlock_2 io_rdData", false,-1, 7,0);
        tracep->declBus(c+813,"Patmos cores_0 dcache dm MemBlock_2 io_wrAddr", false,-1, 9,0);
        tracep->declBit(c+820,"Patmos cores_0 dcache dm MemBlock_2 io_wrEna", false,-1);
        tracep->declBus(c+821,"Patmos cores_0 dcache dm MemBlock_2 io_wrData", false,-1, 7,0);
        tracep->declBus(c+1111,"Patmos cores_0 dcache dm MemBlock_2 mem_MPORT_1_data", false,-1, 7,0);
        tracep->declBus(c+1112,"Patmos cores_0 dcache dm MemBlock_2 mem_MPORT_1_addr", false,-1, 9,0);
        tracep->declBus(c+821,"Patmos cores_0 dcache dm MemBlock_2 mem_MPORT_data", false,-1, 7,0);
        tracep->declBus(c+813,"Patmos cores_0 dcache dm MemBlock_2 mem_MPORT_addr", false,-1, 9,0);
        tracep->declBit(c+1386,"Patmos cores_0 dcache dm MemBlock_2 mem_MPORT_mask", false,-1);
        tracep->declBit(c+820,"Patmos cores_0 dcache dm MemBlock_2 mem_MPORT_en", false,-1);
        tracep->declBus(c+1112,"Patmos cores_0 dcache dm MemBlock_2 rdAddrReg", false,-1, 9,0);
        tracep->declBit(c+1113,"Patmos cores_0 dcache dm MemBlock_2 REG", false,-1);
        tracep->declBus(c+1114,"Patmos cores_0 dcache dm MemBlock_2 REG_1", false,-1, 9,0);
        tracep->declBus(c+1115,"Patmos cores_0 dcache dm MemBlock_2 REG_2", false,-1, 7,0);
        tracep->declBit(c+1353,"Patmos cores_0 dcache dm MemBlock_3 clock", false,-1);
        tracep->declBus(c+811,"Patmos cores_0 dcache dm MemBlock_3 io_rdAddr", false,-1, 9,0);
        tracep->declBus(c+822,"Patmos cores_0 dcache dm MemBlock_3 io_rdData", false,-1, 7,0);
        tracep->declBus(c+813,"Patmos cores_0 dcache dm MemBlock_3 io_wrAddr", false,-1, 9,0);
        tracep->declBit(c+823,"Patmos cores_0 dcache dm MemBlock_3 io_wrEna", false,-1);
        tracep->declBus(c+824,"Patmos cores_0 dcache dm MemBlock_3 io_wrData", false,-1, 7,0);
        tracep->declBus(c+1116,"Patmos cores_0 dcache dm MemBlock_3 mem_MPORT_1_data", false,-1, 7,0);
        tracep->declBus(c+1117,"Patmos cores_0 dcache dm MemBlock_3 mem_MPORT_1_addr", false,-1, 9,0);
        tracep->declBus(c+824,"Patmos cores_0 dcache dm MemBlock_3 mem_MPORT_data", false,-1, 7,0);
        tracep->declBus(c+813,"Patmos cores_0 dcache dm MemBlock_3 mem_MPORT_addr", false,-1, 9,0);
        tracep->declBit(c+1386,"Patmos cores_0 dcache dm MemBlock_3 mem_MPORT_mask", false,-1);
        tracep->declBit(c+823,"Patmos cores_0 dcache dm MemBlock_3 mem_MPORT_en", false,-1);
        tracep->declBus(c+1117,"Patmos cores_0 dcache dm MemBlock_3 rdAddrReg", false,-1, 9,0);
        tracep->declBit(c+1118,"Patmos cores_0 dcache dm MemBlock_3 REG", false,-1);
        tracep->declBus(c+1119,"Patmos cores_0 dcache dm MemBlock_3 REG_1", false,-1, 9,0);
        tracep->declBus(c+1120,"Patmos cores_0 dcache dm MemBlock_3 REG_2", false,-1, 7,0);
        tracep->declBit(c+1353,"Patmos cores_0 dcache sc clock", false,-1);
        tracep->declBit(c+1354,"Patmos cores_0 dcache sc reset", false,-1);
        tracep->declBit(c+221,"Patmos cores_0 dcache sc io_ena_in", false,-1);
        tracep->declBus(c+194,"Patmos cores_0 dcache sc io_exsc_op", false,-1, 2,0);
        tracep->declBus(c+195,"Patmos cores_0 dcache sc io_exsc_opData", false,-1, 31,0);
        tracep->declBus(c+196,"Patmos cores_0 dcache sc io_exsc_opOff", false,-1, 31,0);
        tracep->declBus(c+197,"Patmos cores_0 dcache sc io_scex_stackTop", false,-1, 31,0);
        tracep->declBus(c+198,"Patmos cores_0 dcache sc io_scex_memTop", false,-1, 31,0);
        tracep->declBit(c+206,"Patmos cores_0 dcache sc io_illMem", false,-1);
        tracep->declBit(c+222,"Patmos cores_0 dcache sc io_stall", false,-1);
        tracep->declBus(c+775,"Patmos cores_0 dcache sc io_fromCPU_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+15,"Patmos cores_0 dcache sc io_fromCPU_M_Addr", false,-1, 31,0);
        tracep->declBus(c+16,"Patmos cores_0 dcache sc io_fromCPU_M_Data", false,-1, 31,0);
        tracep->declBus(c+202,"Patmos cores_0 dcache sc io_fromCPU_M_ByteEn", false,-1, 3,0);
        tracep->declBus(c+776,"Patmos cores_0 dcache sc io_fromCPU_S_Resp", false,-1, 1,0);
        tracep->declBus(c+777,"Patmos cores_0 dcache sc io_fromCPU_S_Data", false,-1, 31,0);
        tracep->declBus(c+778,"Patmos cores_0 dcache sc io_toMemory_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+779,"Patmos cores_0 dcache sc io_toMemory_M_Addr", false,-1, 31,0);
        tracep->declBus(c+777,"Patmos cores_0 dcache sc io_toMemory_M_Data", false,-1, 31,0);
        tracep->declBit(c+780,"Patmos cores_0 dcache sc io_toMemory_M_DataValid", false,-1);
        tracep->declBus(c+781,"Patmos cores_0 dcache sc io_toMemory_M_DataByteEn", false,-1, 3,0);
        tracep->declBus(c+782,"Patmos cores_0 dcache sc io_toMemory_S_Resp", false,-1, 1,0);
        tracep->declBus(c+13,"Patmos cores_0 dcache sc io_toMemory_S_Data", false,-1, 31,0);
        tracep->declBit(c+1386,"Patmos cores_0 dcache sc io_toMemory_S_CmdAccept", false,-1);
        tracep->declBit(c+1353,"Patmos cores_0 dcache sc MemBlock_clock", false,-1);
        tracep->declBus(c+1121,"Patmos cores_0 dcache sc MemBlock_io_rdAddr", false,-1, 8,0);
        tracep->declBus(c+1122,"Patmos cores_0 dcache sc MemBlock_io_rdData", false,-1, 7,0);
        tracep->declBus(c+1123,"Patmos cores_0 dcache sc MemBlock_io_wrAddr", false,-1, 8,0);
        tracep->declBit(c+1124,"Patmos cores_0 dcache sc MemBlock_io_wrEna", false,-1);
        tracep->declBus(c+1125,"Patmos cores_0 dcache sc MemBlock_io_wrData", false,-1, 7,0);
        tracep->declBit(c+1353,"Patmos cores_0 dcache sc MemBlock_1_clock", false,-1);
        tracep->declBus(c+1126,"Patmos cores_0 dcache sc MemBlock_1_io_rdAddr", false,-1, 8,0);
        tracep->declBus(c+1127,"Patmos cores_0 dcache sc MemBlock_1_io_rdData", false,-1, 7,0);
        tracep->declBus(c+1123,"Patmos cores_0 dcache sc MemBlock_1_io_wrAddr", false,-1, 8,0);
        tracep->declBit(c+1128,"Patmos cores_0 dcache sc MemBlock_1_io_wrEna", false,-1);
        tracep->declBus(c+1129,"Patmos cores_0 dcache sc MemBlock_1_io_wrData", false,-1, 7,0);
        tracep->declBit(c+1353,"Patmos cores_0 dcache sc MemBlock_2_clock", false,-1);
        tracep->declBus(c+1126,"Patmos cores_0 dcache sc MemBlock_2_io_rdAddr", false,-1, 8,0);
        tracep->declBus(c+1130,"Patmos cores_0 dcache sc MemBlock_2_io_rdData", false,-1, 7,0);
        tracep->declBus(c+1123,"Patmos cores_0 dcache sc MemBlock_2_io_wrAddr", false,-1, 8,0);
        tracep->declBit(c+1131,"Patmos cores_0 dcache sc MemBlock_2_io_wrEna", false,-1);
        tracep->declBus(c+1132,"Patmos cores_0 dcache sc MemBlock_2_io_wrData", false,-1, 7,0);
        tracep->declBit(c+1353,"Patmos cores_0 dcache sc MemBlock_3_clock", false,-1);
        tracep->declBus(c+1126,"Patmos cores_0 dcache sc MemBlock_3_io_rdAddr", false,-1, 8,0);
        tracep->declBus(c+1133,"Patmos cores_0 dcache sc MemBlock_3_io_rdData", false,-1, 7,0);
        tracep->declBus(c+1123,"Patmos cores_0 dcache sc MemBlock_3_io_wrAddr", false,-1, 8,0);
        tracep->declBit(c+1134,"Patmos cores_0 dcache sc MemBlock_3_io_wrEna", false,-1);
        tracep->declBus(c+1135,"Patmos cores_0 dcache sc MemBlock_3_io_wrData", false,-1, 7,0);
        tracep->declBus(c+1136,"Patmos cores_0 dcache sc stateReg", false,-1, 2,0);
        tracep->declBit(c+1137,"Patmos cores_0 dcache sc isReserveReg", false,-1);
        tracep->declBus(c+197,"Patmos cores_0 dcache sc stackTopReg", false,-1, 31,0);
        tracep->declBus(c+198,"Patmos cores_0 dcache sc memTopReg", false,-1, 31,0);
        tracep->declQuad(c+1138,"Patmos cores_0 dcache sc transferAddrReg", false,-1, 32,0);
        tracep->declBus(c+1140,"Patmos cores_0 dcache sc newMemTopReg", false,-1, 31,0);
        tracep->declBus(c+1141,"Patmos cores_0 dcache sc rdAddrReg", false,-1, 8,0);
        tracep->declBus(c+776,"Patmos cores_0 dcache sc responseToCPUReg", false,-1, 1,0);
        tracep->declBit(c+1142,"Patmos cores_0 dcache sc writeEnable", false,-1);
        tracep->declBus(c+1143,"Patmos cores_0 dcache sc relAddr", false,-1, 8,0);
        tracep->declBus(c+1144,"Patmos cores_0 dcache sc burstCounter", false,-1, 1,0);
        tracep->declBus(c+1145,"Patmos cores_0 dcache sc stackTopInc", false,-1, 31,0);
        tracep->declBit(c+1146,"Patmos cores_0 dcache sc stackAboveMem", false,-1);
        tracep->declBus(c+1147,"Patmos cores_0 dcache sc mb_wrData", false,-1, 31,0);
        tracep->declBus(c+1148,"Patmos cores_0 dcache sc mb_wrEna", false,-1, 3,0);
        tracep->declBit(c+1353,"Patmos cores_0 dcache sc MemBlock clock", false,-1);
        tracep->declBus(c+1121,"Patmos cores_0 dcache sc MemBlock io_rdAddr", false,-1, 8,0);
        tracep->declBus(c+1122,"Patmos cores_0 dcache sc MemBlock io_rdData", false,-1, 7,0);
        tracep->declBus(c+1123,"Patmos cores_0 dcache sc MemBlock io_wrAddr", false,-1, 8,0);
        tracep->declBit(c+1124,"Patmos cores_0 dcache sc MemBlock io_wrEna", false,-1);
        tracep->declBus(c+1125,"Patmos cores_0 dcache sc MemBlock io_wrData", false,-1, 7,0);
        tracep->declBus(c+1122,"Patmos cores_0 dcache sc MemBlock mem_MPORT_1_data", false,-1, 7,0);
        tracep->declBus(c+1149,"Patmos cores_0 dcache sc MemBlock mem_MPORT_1_addr", false,-1, 8,0);
        tracep->declBus(c+1125,"Patmos cores_0 dcache sc MemBlock mem_MPORT_data", false,-1, 7,0);
        tracep->declBus(c+1123,"Patmos cores_0 dcache sc MemBlock mem_MPORT_addr", false,-1, 8,0);
        tracep->declBit(c+1386,"Patmos cores_0 dcache sc MemBlock mem_MPORT_mask", false,-1);
        tracep->declBit(c+1124,"Patmos cores_0 dcache sc MemBlock mem_MPORT_en", false,-1);
        tracep->declBus(c+1149,"Patmos cores_0 dcache sc MemBlock rdAddrReg", false,-1, 8,0);
        tracep->declBit(c+1353,"Patmos cores_0 dcache sc MemBlock_1 clock", false,-1);
        tracep->declBus(c+1126,"Patmos cores_0 dcache sc MemBlock_1 io_rdAddr", false,-1, 8,0);
        tracep->declBus(c+1127,"Patmos cores_0 dcache sc MemBlock_1 io_rdData", false,-1, 7,0);
        tracep->declBus(c+1123,"Patmos cores_0 dcache sc MemBlock_1 io_wrAddr", false,-1, 8,0);
        tracep->declBit(c+1128,"Patmos cores_0 dcache sc MemBlock_1 io_wrEna", false,-1);
        tracep->declBus(c+1129,"Patmos cores_0 dcache sc MemBlock_1 io_wrData", false,-1, 7,0);
        tracep->declBus(c+1127,"Patmos cores_0 dcache sc MemBlock_1 mem_MPORT_1_data", false,-1, 7,0);
        tracep->declBus(c+1150,"Patmos cores_0 dcache sc MemBlock_1 mem_MPORT_1_addr", false,-1, 8,0);
        tracep->declBus(c+1129,"Patmos cores_0 dcache sc MemBlock_1 mem_MPORT_data", false,-1, 7,0);
        tracep->declBus(c+1123,"Patmos cores_0 dcache sc MemBlock_1 mem_MPORT_addr", false,-1, 8,0);
        tracep->declBit(c+1386,"Patmos cores_0 dcache sc MemBlock_1 mem_MPORT_mask", false,-1);
        tracep->declBit(c+1128,"Patmos cores_0 dcache sc MemBlock_1 mem_MPORT_en", false,-1);
        tracep->declBus(c+1150,"Patmos cores_0 dcache sc MemBlock_1 rdAddrReg", false,-1, 8,0);
        tracep->declBit(c+1353,"Patmos cores_0 dcache sc MemBlock_2 clock", false,-1);
        tracep->declBus(c+1126,"Patmos cores_0 dcache sc MemBlock_2 io_rdAddr", false,-1, 8,0);
        tracep->declBus(c+1130,"Patmos cores_0 dcache sc MemBlock_2 io_rdData", false,-1, 7,0);
        tracep->declBus(c+1123,"Patmos cores_0 dcache sc MemBlock_2 io_wrAddr", false,-1, 8,0);
        tracep->declBit(c+1131,"Patmos cores_0 dcache sc MemBlock_2 io_wrEna", false,-1);
        tracep->declBus(c+1132,"Patmos cores_0 dcache sc MemBlock_2 io_wrData", false,-1, 7,0);
        tracep->declBus(c+1130,"Patmos cores_0 dcache sc MemBlock_2 mem_MPORT_1_data", false,-1, 7,0);
        tracep->declBus(c+1151,"Patmos cores_0 dcache sc MemBlock_2 mem_MPORT_1_addr", false,-1, 8,0);
        tracep->declBus(c+1132,"Patmos cores_0 dcache sc MemBlock_2 mem_MPORT_data", false,-1, 7,0);
        tracep->declBus(c+1123,"Patmos cores_0 dcache sc MemBlock_2 mem_MPORT_addr", false,-1, 8,0);
        tracep->declBit(c+1386,"Patmos cores_0 dcache sc MemBlock_2 mem_MPORT_mask", false,-1);
        tracep->declBit(c+1131,"Patmos cores_0 dcache sc MemBlock_2 mem_MPORT_en", false,-1);
        tracep->declBus(c+1151,"Patmos cores_0 dcache sc MemBlock_2 rdAddrReg", false,-1, 8,0);
        tracep->declBit(c+1353,"Patmos cores_0 dcache sc MemBlock_3 clock", false,-1);
        tracep->declBus(c+1126,"Patmos cores_0 dcache sc MemBlock_3 io_rdAddr", false,-1, 8,0);
        tracep->declBus(c+1133,"Patmos cores_0 dcache sc MemBlock_3 io_rdData", false,-1, 7,0);
        tracep->declBus(c+1123,"Patmos cores_0 dcache sc MemBlock_3 io_wrAddr", false,-1, 8,0);
        tracep->declBit(c+1134,"Patmos cores_0 dcache sc MemBlock_3 io_wrEna", false,-1);
        tracep->declBus(c+1135,"Patmos cores_0 dcache sc MemBlock_3 io_wrData", false,-1, 7,0);
        tracep->declBus(c+1133,"Patmos cores_0 dcache sc MemBlock_3 mem_MPORT_1_data", false,-1, 7,0);
        tracep->declBus(c+1152,"Patmos cores_0 dcache sc MemBlock_3 mem_MPORT_1_addr", false,-1, 8,0);
        tracep->declBus(c+1135,"Patmos cores_0 dcache sc MemBlock_3 mem_MPORT_data", false,-1, 7,0);
        tracep->declBus(c+1123,"Patmos cores_0 dcache sc MemBlock_3 mem_MPORT_addr", false,-1, 8,0);
        tracep->declBit(c+1386,"Patmos cores_0 dcache sc MemBlock_3 mem_MPORT_mask", false,-1);
        tracep->declBit(c+1134,"Patmos cores_0 dcache sc MemBlock_3 mem_MPORT_en", false,-1);
        tracep->declBus(c+1152,"Patmos cores_0 dcache sc MemBlock_3 rdAddrReg", false,-1, 8,0);
        tracep->declBit(c+1353,"Patmos cores_0 dcache bp clock", false,-1);
        tracep->declBit(c+1354,"Patmos cores_0 dcache bp reset", false,-1);
        tracep->declBus(c+783,"Patmos cores_0 dcache bp io_master_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+15,"Patmos cores_0 dcache bp io_master_M_Addr", false,-1, 31,0);
        tracep->declBus(c+784,"Patmos cores_0 dcache bp io_master_S_Resp", false,-1, 1,0);
        tracep->declBus(c+785,"Patmos cores_0 dcache bp io_master_S_Data", false,-1, 31,0);
        tracep->declBus(c+786,"Patmos cores_0 dcache bp io_slave_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+787,"Patmos cores_0 dcache bp io_slave_M_Addr", false,-1, 31,0);
        tracep->declBus(c+788,"Patmos cores_0 dcache bp io_slave_S_Resp", false,-1, 1,0);
        tracep->declBus(c+13,"Patmos cores_0 dcache bp io_slave_S_Data", false,-1, 31,0);
        tracep->declBit(c+1386,"Patmos cores_0 dcache bp io_slave_S_CmdAccept", false,-1);
        tracep->declBus(c+1153,"Patmos cores_0 dcache bp stateReg", false,-1, 1,0);
        tracep->declBus(c+1154,"Patmos cores_0 dcache bp burstCntReg", false,-1, 1,0);
        tracep->declBus(c+1155,"Patmos cores_0 dcache bp posReg", false,-1, 1,0);
        tracep->declBus(c+1156,"Patmos cores_0 dcache bp masterReg_Cmd", false,-1, 2,0);
        tracep->declBus(c+1157,"Patmos cores_0 dcache bp masterReg_Addr", false,-1, 31,0);
        tracep->declBus(c+1158,"Patmos cores_0 dcache bp slaveReg_Resp", false,-1, 1,0);
        tracep->declBus(c+1159,"Patmos cores_0 dcache bp slaveReg_Data", false,-1, 31,0);
        tracep->declBus(c+1160,"Patmos cores_0 dcache bp hi", false,-1, 27,0);
        tracep->declBus(c+789,"Patmos cores_0 dcache burstReadBus1 io_master_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+790,"Patmos cores_0 dcache burstReadBus1 io_master_M_Addr", false,-1, 31,0);
        tracep->declBus(c+1387,"Patmos cores_0 dcache burstReadBus1 io_master_M_Data", false,-1, 31,0);
        tracep->declBit(c+1388,"Patmos cores_0 dcache burstReadBus1 io_master_M_DataValid", false,-1);
        tracep->declBus(c+1389,"Patmos cores_0 dcache burstReadBus1 io_master_M_DataByteEn", false,-1, 3,0);
        tracep->declBus(c+791,"Patmos cores_0 dcache burstReadBus1 io_master_S_Resp", false,-1, 1,0);
        tracep->declBus(c+13,"Patmos cores_0 dcache burstReadBus1 io_master_S_Data", false,-1, 31,0);
        tracep->declBit(c+1386,"Patmos cores_0 dcache burstReadBus1 io_master_S_CmdAccept", false,-1);
        tracep->declBit(c+1386,"Patmos cores_0 dcache burstReadBus1 io_master_S_DataAccept", false,-1);
        tracep->declBus(c+789,"Patmos cores_0 dcache burstReadBus1 io_slave_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+790,"Patmos cores_0 dcache burstReadBus1 io_slave_M_Addr", false,-1, 31,0);
        tracep->declBus(c+1387,"Patmos cores_0 dcache burstReadBus1 io_slave_M_Data", false,-1, 31,0);
        tracep->declBit(c+1388,"Patmos cores_0 dcache burstReadBus1 io_slave_M_DataValid", false,-1);
        tracep->declBus(c+1389,"Patmos cores_0 dcache burstReadBus1 io_slave_M_DataByteEn", false,-1, 3,0);
        tracep->declBus(c+791,"Patmos cores_0 dcache burstReadBus1 io_slave_S_Resp", false,-1, 1,0);
        tracep->declBus(c+13,"Patmos cores_0 dcache burstReadBus1 io_slave_S_Data", false,-1, 31,0);
        tracep->declBit(c+1386,"Patmos cores_0 dcache burstReadBus1 io_slave_S_CmdAccept", false,-1);
        tracep->declBit(c+1386,"Patmos cores_0 dcache burstReadBus1 io_slave_S_DataAccept", false,-1);
        tracep->declBus(c+792,"Patmos cores_0 dcache burstReadBus2 io_master_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+793,"Patmos cores_0 dcache burstReadBus2 io_master_M_Addr", false,-1, 31,0);
        tracep->declBus(c+794,"Patmos cores_0 dcache burstReadBus2 io_master_M_Data", false,-1, 31,0);
        tracep->declBit(c+795,"Patmos cores_0 dcache burstReadBus2 io_master_M_DataValid", false,-1);
        tracep->declBus(c+796,"Patmos cores_0 dcache burstReadBus2 io_master_M_DataByteEn", false,-1, 3,0);
        tracep->declBus(c+797,"Patmos cores_0 dcache burstReadBus2 io_master_S_Resp", false,-1, 1,0);
        tracep->declBus(c+13,"Patmos cores_0 dcache burstReadBus2 io_master_S_Data", false,-1, 31,0);
        tracep->declBit(c+1386,"Patmos cores_0 dcache burstReadBus2 io_master_S_CmdAccept", false,-1);
        tracep->declBit(c+1386,"Patmos cores_0 dcache burstReadBus2 io_master_S_DataAccept", false,-1);
        tracep->declBus(c+792,"Patmos cores_0 dcache burstReadBus2 io_slave_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+793,"Patmos cores_0 dcache burstReadBus2 io_slave_M_Addr", false,-1, 31,0);
        tracep->declBus(c+794,"Patmos cores_0 dcache burstReadBus2 io_slave_M_Data", false,-1, 31,0);
        tracep->declBit(c+795,"Patmos cores_0 dcache burstReadBus2 io_slave_M_DataValid", false,-1);
        tracep->declBus(c+796,"Patmos cores_0 dcache burstReadBus2 io_slave_M_DataByteEn", false,-1, 3,0);
        tracep->declBus(c+797,"Patmos cores_0 dcache burstReadBus2 io_slave_S_Resp", false,-1, 1,0);
        tracep->declBus(c+13,"Patmos cores_0 dcache burstReadBus2 io_slave_S_Data", false,-1, 31,0);
        tracep->declBit(c+1386,"Patmos cores_0 dcache burstReadBus2 io_slave_S_CmdAccept", false,-1);
        tracep->declBit(c+1386,"Patmos cores_0 dcache burstReadBus2 io_slave_S_DataAccept", false,-1);
        tracep->declBit(c+1353,"Patmos cores_0 dcache wc clock", false,-1);
        tracep->declBit(c+1354,"Patmos cores_0 dcache wc reset", false,-1);
        tracep->declBus(c+792,"Patmos cores_0 dcache wc io_readMaster_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+793,"Patmos cores_0 dcache wc io_readMaster_M_Addr", false,-1, 31,0);
        tracep->declBus(c+794,"Patmos cores_0 dcache wc io_readMaster_M_Data", false,-1, 31,0);
        tracep->declBit(c+795,"Patmos cores_0 dcache wc io_readMaster_M_DataValid", false,-1);
        tracep->declBus(c+796,"Patmos cores_0 dcache wc io_readMaster_M_DataByteEn", false,-1, 3,0);
        tracep->declBus(c+797,"Patmos cores_0 dcache wc io_readMaster_S_Resp", false,-1, 1,0);
        tracep->declBus(c+13,"Patmos cores_0 dcache wc io_readMaster_S_Data", false,-1, 31,0);
        tracep->declBit(c+1386,"Patmos cores_0 dcache wc io_readMaster_S_CmdAccept", false,-1);
        tracep->declBit(c+1386,"Patmos cores_0 dcache wc io_readMaster_S_DataAccept", false,-1);
        tracep->declBus(c+798,"Patmos cores_0 dcache wc io_writeMaster_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+15,"Patmos cores_0 dcache wc io_writeMaster_M_Addr", false,-1, 31,0);
        tracep->declBus(c+16,"Patmos cores_0 dcache wc io_writeMaster_M_Data", false,-1, 31,0);
        tracep->declBus(c+202,"Patmos cores_0 dcache wc io_writeMaster_M_ByteEn", false,-1, 3,0);
        tracep->declBus(c+799,"Patmos cores_0 dcache wc io_writeMaster_S_Resp", false,-1, 1,0);
        tracep->declBus(c+215,"Patmos cores_0 dcache wc io_slave_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+216,"Patmos cores_0 dcache wc io_slave_M_Addr", false,-1, 31,0);
        tracep->declBus(c+217,"Patmos cores_0 dcache wc io_slave_M_Data", false,-1, 31,0);
        tracep->declBit(c+218,"Patmos cores_0 dcache wc io_slave_M_DataValid", false,-1);
        tracep->declBus(c+219,"Patmos cores_0 dcache wc io_slave_M_DataByteEn", false,-1, 3,0);
        tracep->declBus(c+220,"Patmos cores_0 dcache wc io_slave_S_Resp", false,-1, 1,0);
        tracep->declBus(c+13,"Patmos cores_0 dcache wc io_slave_S_Data", false,-1, 31,0);
        tracep->declBit(c+1386,"Patmos cores_0 dcache wc io_slave_S_CmdAccept", false,-1);
        tracep->declBit(c+1386,"Patmos cores_0 dcache wc io_slave_S_DataAccept", false,-1);
        tracep->declBus(c+1161,"Patmos cores_0 dcache wc state", false,-1, 1,0);
        tracep->declBus(c+1162,"Patmos cores_0 dcache wc cntReg", false,-1, 1,0);
        tracep->declBus(c+1163,"Patmos cores_0 dcache wc writeMasterReg_Addr", false,-1, 31,0);
        tracep->declBus(c+1164,"Patmos cores_0 dcache wc writeMasterReg_Data", false,-1, 31,0);
        tracep->declBus(c+1165,"Patmos cores_0 dcache wc writeMasterReg_ByteEn", false,-1, 3,0);
        tracep->declBus(c+1166,"Patmos cores_0 dcache wc wrPos", false,-1, 1,0);
        tracep->declBus(c+1167,"Patmos cores_0 dcache wc hi", false,-1, 27,0);
        tracep->declBus(c+7,"Patmos cores_0 burstBus io_master_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+223,"Patmos cores_0 burstBus io_master_M_Addr", false,-1, 31,0);
        tracep->declBus(c+9,"Patmos cores_0 burstBus io_master_M_Data", false,-1, 31,0);
        tracep->declBit(c+10,"Patmos cores_0 burstBus io_master_M_DataValid", false,-1);
        tracep->declBus(c+11,"Patmos cores_0 burstBus io_master_M_DataByteEn", false,-1, 3,0);
        tracep->declBus(c+12,"Patmos cores_0 burstBus io_master_S_Resp", false,-1, 1,0);
        tracep->declBus(c+13,"Patmos cores_0 burstBus io_master_S_Data", false,-1, 31,0);
        tracep->declBit(c+1386,"Patmos cores_0 burstBus io_master_S_CmdAccept", false,-1);
        tracep->declBit(c+1386,"Patmos cores_0 burstBus io_master_S_DataAccept", false,-1);
        tracep->declBus(c+7,"Patmos cores_0 burstBus io_slave_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+223,"Patmos cores_0 burstBus io_slave_M_Addr", false,-1, 31,0);
        tracep->declBus(c+9,"Patmos cores_0 burstBus io_slave_M_Data", false,-1, 31,0);
        tracep->declBit(c+10,"Patmos cores_0 burstBus io_slave_M_DataValid", false,-1);
        tracep->declBus(c+11,"Patmos cores_0 burstBus io_slave_M_DataByteEn", false,-1, 3,0);
        tracep->declBus(c+12,"Patmos cores_0 burstBus io_slave_S_Resp", false,-1, 1,0);
        tracep->declBus(c+13,"Patmos cores_0 burstBus io_slave_S_Data", false,-1, 31,0);
        tracep->declBit(c+1386,"Patmos cores_0 burstBus io_slave_S_CmdAccept", false,-1);
        tracep->declBit(c+1386,"Patmos cores_0 burstBus io_slave_S_DataAccept", false,-1);
        tracep->declBus(c+7,"Patmos cores_0 mmu io_virt_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+223,"Patmos cores_0 mmu io_virt_M_Addr", false,-1, 31,0);
        tracep->declBus(c+9,"Patmos cores_0 mmu io_virt_M_Data", false,-1, 31,0);
        tracep->declBit(c+10,"Patmos cores_0 mmu io_virt_M_DataValid", false,-1);
        tracep->declBus(c+11,"Patmos cores_0 mmu io_virt_M_DataByteEn", false,-1, 3,0);
        tracep->declBus(c+12,"Patmos cores_0 mmu io_virt_S_Resp", false,-1, 1,0);
        tracep->declBus(c+13,"Patmos cores_0 mmu io_virt_S_Data", false,-1, 31,0);
        tracep->declBus(c+7,"Patmos cores_0 mmu io_phys_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+8,"Patmos cores_0 mmu io_phys_M_Addr", false,-1, 20,0);
        tracep->declBus(c+9,"Patmos cores_0 mmu io_phys_M_Data", false,-1, 31,0);
        tracep->declBit(c+10,"Patmos cores_0 mmu io_phys_M_DataValid", false,-1);
        tracep->declBus(c+11,"Patmos cores_0 mmu io_phys_M_DataByteEn", false,-1, 3,0);
        tracep->declBus(c+12,"Patmos cores_0 mmu io_phys_S_Resp", false,-1, 1,0);
        tracep->declBus(c+13,"Patmos cores_0 mmu io_phys_S_Data", false,-1, 31,0);
        tracep->declBit(c+1353,"Patmos HardlockOCPWrapper clock", false,-1);
        tracep->declBit(c+1354,"Patmos HardlockOCPWrapper reset", false,-1);
        tracep->declBus(c+23,"Patmos HardlockOCPWrapper io_cores_0_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+24,"Patmos HardlockOCPWrapper io_cores_0_S_Resp", false,-1, 1,0);
        tracep->declBit(c+1168,"Patmos HardlockOCPWrapper reqReg", false,-1);
        tracep->declBit(c+1169,"Patmos HardlockOCPWrapper reqBools_0", false,-1);
        tracep->declBit(c+1353,"Patmos UartCmp clock", false,-1);
        tracep->declBit(c+1354,"Patmos UartCmp reset", false,-1);
        tracep->declBus(c+25,"Patmos UartCmp io_cores_0_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+15,"Patmos UartCmp io_cores_0_M_Addr", false,-1, 31,0);
        tracep->declBus(c+16,"Patmos UartCmp io_cores_0_M_Data", false,-1, 31,0);
        tracep->declBus(c+26,"Patmos UartCmp io_cores_0_S_Resp", false,-1, 1,0);
        tracep->declBus(c+27,"Patmos UartCmp io_cores_0_S_Data", false,-1, 31,0);
        tracep->declBit(c+28,"Patmos UartCmp io_pins_tx", false,-1);
        tracep->declBit(c+1366,"Patmos UartCmp io_pins_rx", false,-1);
        tracep->declBit(c+1353,"Patmos UartCmp uart_clock", false,-1);
        tracep->declBit(c+1354,"Patmos UartCmp uart_reset", false,-1);
        tracep->declBus(c+25,"Patmos UartCmp uart_io_ocp_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+15,"Patmos UartCmp uart_io_ocp_M_Addr", false,-1, 31,0);
        tracep->declBus(c+16,"Patmos UartCmp uart_io_ocp_M_Data", false,-1, 31,0);
        tracep->declBus(c+1170,"Patmos UartCmp uart_io_ocp_S_Resp", false,-1, 1,0);
        tracep->declBus(c+27,"Patmos UartCmp uart_io_ocp_S_Data", false,-1, 31,0);
        tracep->declBit(c+28,"Patmos UartCmp uart_io_pins_tx", false,-1);
        tracep->declBit(c+1366,"Patmos UartCmp uart_io_pins_rx", false,-1);
        tracep->declBit(c+1171,"Patmos UartCmp REG", false,-1);
        tracep->declBit(c+1353,"Patmos UartCmp uart clock", false,-1);
        tracep->declBit(c+1354,"Patmos UartCmp uart reset", false,-1);
        tracep->declBus(c+25,"Patmos UartCmp uart io_ocp_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+15,"Patmos UartCmp uart io_ocp_M_Addr", false,-1, 31,0);
        tracep->declBus(c+16,"Patmos UartCmp uart io_ocp_M_Data", false,-1, 31,0);
        tracep->declBus(c+1170,"Patmos UartCmp uart io_ocp_S_Resp", false,-1, 1,0);
        tracep->declBus(c+27,"Patmos UartCmp uart io_ocp_S_Data", false,-1, 31,0);
        tracep->declBit(c+28,"Patmos UartCmp uart io_pins_tx", false,-1);
        tracep->declBit(c+1366,"Patmos UartCmp uart io_pins_rx", false,-1);
        tracep->declBit(c+1353,"Patmos UartCmp uart txQueue_clock", false,-1);
        tracep->declBit(c+1354,"Patmos UartCmp uart txQueue_reset", false,-1);
        tracep->declBit(c+1172,"Patmos UartCmp uart txQueue_io_enq_ready", false,-1);
        tracep->declBit(c+1173,"Patmos UartCmp uart txQueue_io_enq_valid", false,-1);
        tracep->declBus(c+1382,"Patmos UartCmp uart txQueue_io_enq_bits", false,-1, 7,0);
        tracep->declBit(c+1174,"Patmos UartCmp uart txQueue_io_deq_ready", false,-1);
        tracep->declBit(c+1175,"Patmos UartCmp uart txQueue_io_deq_valid", false,-1);
        tracep->declBus(c+1176,"Patmos UartCmp uart txQueue_io_deq_bits", false,-1, 7,0);
        tracep->declBit(c+1353,"Patmos UartCmp uart rxQueue_clock", false,-1);
        tracep->declBit(c+1354,"Patmos UartCmp uart rxQueue_reset", false,-1);
        tracep->declBit(c+1177,"Patmos UartCmp uart rxQueue_io_enq_ready", false,-1);
        tracep->declBit(c+1178,"Patmos UartCmp uart rxQueue_io_enq_valid", false,-1);
        tracep->declBus(c+1179,"Patmos UartCmp uart rxQueue_io_enq_bits", false,-1, 7,0);
        tracep->declBit(c+1180,"Patmos UartCmp uart rxQueue_io_deq_ready", false,-1);
        tracep->declBit(c+1181,"Patmos UartCmp uart rxQueue_io_deq_valid", false,-1);
        tracep->declBus(c+1182,"Patmos UartCmp uart rxQueue_io_deq_bits", false,-1, 7,0);
        tracep->declBus(c+1183,"Patmos UartCmp uart tx_baud_counter", false,-1, 9,0);
        tracep->declBit(c+1184,"Patmos UartCmp uart tx_baud_tick", false,-1);
        tracep->declBit(c+1185,"Patmos UartCmp uart tx_state", false,-1);
        tracep->declBus(c+1186,"Patmos UartCmp uart tx_buff", false,-1, 9,0);
        tracep->declBit(c+28,"Patmos UartCmp uart tx_reg", false,-1);
        tracep->declBus(c+1187,"Patmos UartCmp uart tx_counter", false,-1, 3,0);
        tracep->declBit(c+1188,"Patmos UartCmp uart rxd_reg0", false,-1);
        tracep->declBit(c+1189,"Patmos UartCmp uart rxd_reg1", false,-1);
        tracep->declBit(c+1190,"Patmos UartCmp uart rxd_reg2", false,-1);
        tracep->declBus(c+1191,"Patmos UartCmp uart rx_baud_counter", false,-1, 9,0);
        tracep->declBit(c+1192,"Patmos UartCmp uart rx_baud_tick", false,-1);
        tracep->declBit(c+1193,"Patmos UartCmp uart rx_enable", false,-1);
        tracep->declBus(c+1179,"Patmos UartCmp uart rx_buff", false,-1, 7,0);
        tracep->declBus(c+1194,"Patmos UartCmp uart rx_counter", false,-1, 2,0);
        tracep->declBus(c+1195,"Patmos UartCmp uart rx_state", false,-1, 1,0);
        tracep->declBus(c+1170,"Patmos UartCmp uart respReg", false,-1, 1,0);
        tracep->declBus(c+1196,"Patmos UartCmp uart rdDataReg", false,-1, 7,0);
        tracep->declBus(c+1197,"Patmos UartCmp uart hi_1", false,-1, 8,0);
        tracep->declBus(c+1198,"Patmos UartCmp uart lo", false,-1, 8,0);
        tracep->declBus(c+1199,"Patmos UartCmp uart lo_1", false,-1, 6,0);
        tracep->declBus(c+1383,"Patmos UartCmp uart uartOcpEmu_Cmd", false,-1, 2,0);
        tracep->declBus(c+1384,"Patmos UartCmp uart uartOcpEmu_Addr", false,-1, 31,0);
        tracep->declBus(c+1385,"Patmos UartCmp uart uartOcpEmu_Data", false,-1, 31,0);
        tracep->declBit(c+1353,"Patmos UartCmp uart txQueue clock", false,-1);
        tracep->declBit(c+1354,"Patmos UartCmp uart txQueue reset", false,-1);
        tracep->declBit(c+1172,"Patmos UartCmp uart txQueue io_enq_ready", false,-1);
        tracep->declBit(c+1173,"Patmos UartCmp uart txQueue io_enq_valid", false,-1);
        tracep->declBus(c+1382,"Patmos UartCmp uart txQueue io_enq_bits", false,-1, 7,0);
        tracep->declBit(c+1174,"Patmos UartCmp uart txQueue io_deq_ready", false,-1);
        tracep->declBit(c+1175,"Patmos UartCmp uart txQueue io_deq_valid", false,-1);
        tracep->declBus(c+1176,"Patmos UartCmp uart txQueue io_deq_bits", false,-1, 7,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+1200+i*1,"Patmos UartCmp uart txQueue ram", true,(i+0), 7,0);}}
        tracep->declBus(c+1176,"Patmos UartCmp uart txQueue ram_io_deq_bits_MPORT_data", false,-1, 7,0);
        tracep->declBus(c+1216,"Patmos UartCmp uart txQueue ram_io_deq_bits_MPORT_addr", false,-1, 3,0);
        tracep->declBus(c+1382,"Patmos UartCmp uart txQueue ram_MPORT_data", false,-1, 7,0);
        tracep->declBus(c+1217,"Patmos UartCmp uart txQueue ram_MPORT_addr", false,-1, 3,0);
        tracep->declBit(c+1386,"Patmos UartCmp uart txQueue ram_MPORT_mask", false,-1);
        tracep->declBit(c+1218,"Patmos UartCmp uart txQueue ram_MPORT_en", false,-1);
        tracep->declBus(c+1217,"Patmos UartCmp uart txQueue enq_ptr_value", false,-1, 3,0);
        tracep->declBus(c+1216,"Patmos UartCmp uart txQueue deq_ptr_value", false,-1, 3,0);
        tracep->declBit(c+1219,"Patmos UartCmp uart txQueue maybe_full", false,-1);
        tracep->declBit(c+1220,"Patmos UartCmp uart txQueue ptr_match", false,-1);
        tracep->declBit(c+1221,"Patmos UartCmp uart txQueue empty", false,-1);
        tracep->declBit(c+1222,"Patmos UartCmp uart txQueue full", false,-1);
        tracep->declBit(c+1223,"Patmos UartCmp uart txQueue do_enq", false,-1);
        tracep->declBit(c+1224,"Patmos UartCmp uart txQueue do_deq", false,-1);
        tracep->declBit(c+1353,"Patmos UartCmp uart rxQueue clock", false,-1);
        tracep->declBit(c+1354,"Patmos UartCmp uart rxQueue reset", false,-1);
        tracep->declBit(c+1177,"Patmos UartCmp uart rxQueue io_enq_ready", false,-1);
        tracep->declBit(c+1178,"Patmos UartCmp uart rxQueue io_enq_valid", false,-1);
        tracep->declBus(c+1179,"Patmos UartCmp uart rxQueue io_enq_bits", false,-1, 7,0);
        tracep->declBit(c+1180,"Patmos UartCmp uart rxQueue io_deq_ready", false,-1);
        tracep->declBit(c+1181,"Patmos UartCmp uart rxQueue io_deq_valid", false,-1);
        tracep->declBus(c+1182,"Patmos UartCmp uart rxQueue io_deq_bits", false,-1, 7,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+1225+i*1,"Patmos UartCmp uart rxQueue ram", true,(i+0), 7,0);}}
        tracep->declBus(c+1182,"Patmos UartCmp uart rxQueue ram_io_deq_bits_MPORT_data", false,-1, 7,0);
        tracep->declBus(c+1241,"Patmos UartCmp uart rxQueue ram_io_deq_bits_MPORT_addr", false,-1, 3,0);
        tracep->declBus(c+1179,"Patmos UartCmp uart rxQueue ram_MPORT_data", false,-1, 7,0);
        tracep->declBus(c+1242,"Patmos UartCmp uart rxQueue ram_MPORT_addr", false,-1, 3,0);
        tracep->declBit(c+1386,"Patmos UartCmp uart rxQueue ram_MPORT_mask", false,-1);
        tracep->declBit(c+1243,"Patmos UartCmp uart rxQueue ram_MPORT_en", false,-1);
        tracep->declBus(c+1242,"Patmos UartCmp uart rxQueue enq_ptr_value", false,-1, 3,0);
        tracep->declBus(c+1241,"Patmos UartCmp uart rxQueue deq_ptr_value", false,-1, 3,0);
        tracep->declBit(c+1244,"Patmos UartCmp uart rxQueue maybe_full", false,-1);
        tracep->declBit(c+1245,"Patmos UartCmp uart rxQueue ptr_match", false,-1);
        tracep->declBit(c+1246,"Patmos UartCmp uart rxQueue empty", false,-1);
        tracep->declBit(c+1247,"Patmos UartCmp uart rxQueue full", false,-1);
        tracep->declBit(c+1248,"Patmos UartCmp uart rxQueue do_enq", false,-1);
        tracep->declBit(c+1249,"Patmos UartCmp uart rxQueue do_deq", false,-1);
        tracep->declBit(c+1353,"Patmos CpuInfo clock", false,-1);
        tracep->declBus(c+29,"Patmos CpuInfo io_ocp_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+15,"Patmos CpuInfo io_ocp_M_Addr", false,-1, 31,0);
        tracep->declBus(c+30,"Patmos CpuInfo io_ocp_S_Resp", false,-1, 1,0);
        tracep->declBus(c+31,"Patmos CpuInfo io_ocp_S_Data", false,-1, 31,0);
        tracep->declBus(c+1250,"Patmos CpuInfo masterReg_Cmd", false,-1, 2,0);
        tracep->declBus(c+1251,"Patmos CpuInfo masterReg_Addr", false,-1, 31,0);
        tracep->declBit(c+1353,"Patmos Leds clock", false,-1);
        tracep->declBit(c+1354,"Patmos Leds reset", false,-1);
        tracep->declBus(c+32,"Patmos Leds io_ocp_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+16,"Patmos Leds io_ocp_M_Data", false,-1, 31,0);
        tracep->declBus(c+33,"Patmos Leds io_ocp_S_Resp", false,-1, 1,0);
        tracep->declBus(c+34,"Patmos Leds io_ocp_S_Data", false,-1, 31,0);
        tracep->declBus(c+35,"Patmos Leds io_pins_led", false,-1, 8,0);
        tracep->declBus(c+1252,"Patmos Leds ledReg", false,-1, 8,0);
        tracep->declBus(c+33,"Patmos Leds respReg", false,-1, 1,0);
        tracep->declBus(c+35,"Patmos Leds REG", false,-1, 8,0);
        tracep->declBit(c+1353,"Patmos Keys clock", false,-1);
        tracep->declBit(c+1354,"Patmos Keys reset", false,-1);
        tracep->declBus(c+36,"Patmos Keys io_ocp_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+37,"Patmos Keys io_ocp_S_Resp", false,-1, 1,0);
        tracep->declBus(c+38,"Patmos Keys io_ocp_S_Data", false,-1, 31,0);
        tracep->declBus(c+1365,"Patmos Keys io_pins_key", false,-1, 3,0);
        tracep->declBit(c+3,"Patmos Keys io_interrupts_0", false,-1);
        tracep->declBit(c+4,"Patmos Keys io_interrupts_1", false,-1);
        tracep->declBit(c+5,"Patmos Keys io_interrupts_2", false,-1);
        tracep->declBit(c+6,"Patmos Keys io_interrupts_3", false,-1);
        tracep->declBus(c+1253,"Patmos Keys keySyncReg", false,-1, 3,0);
        tracep->declBus(c+1254,"Patmos Keys keyReg", false,-1, 3,0);
        tracep->declBus(c+37,"Patmos Keys respReg", false,-1, 1,0);
        tracep->declBit(c+1353,"Patmos Timer clock", false,-1);
        tracep->declBit(c+1354,"Patmos Timer reset", false,-1);
        tracep->declBus(c+39,"Patmos Timer io_ocp_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+15,"Patmos Timer io_ocp_M_Addr", false,-1, 31,0);
        tracep->declBus(c+16,"Patmos Timer io_ocp_M_Data", false,-1, 31,0);
        tracep->declBus(c+40,"Patmos Timer io_ocp_S_Resp", false,-1, 1,0);
        tracep->declBus(c+41,"Patmos Timer io_ocp_S_Data", false,-1, 31,0);
        tracep->declBit(c+1,"Patmos Timer io_interrupts_0", false,-1);
        tracep->declBit(c+2,"Patmos Timer io_interrupts_1", false,-1);
        tracep->declBus(c+1255,"Patmos Timer masterReg_Cmd", false,-1, 2,0);
        tracep->declBus(c+1256,"Patmos Timer masterReg_Addr", false,-1, 31,0);
        tracep->declBus(c+1257,"Patmos Timer masterReg_Data", false,-1, 31,0);
        tracep->declQuad(c+1258,"Patmos Timer cycleReg", false,-1, 63,0);
        tracep->declQuad(c+1260,"Patmos Timer cycleIntrReg", false,-1, 63,0);
        tracep->declBus(c+1262,"Patmos Timer usecSubReg", false,-1, 6,0);
        tracep->declQuad(c+1263,"Patmos Timer usecReg", false,-1, 63,0);
        tracep->declQuad(c+1265,"Patmos Timer usecIntrReg", false,-1, 63,0);
        tracep->declBus(c+1267,"Patmos Timer cycleHiReg", false,-1, 31,0);
        tracep->declBus(c+1268,"Patmos Timer usecHiReg", false,-1, 31,0);
        tracep->declBus(c+1269,"Patmos Timer cycleLoReg", false,-1, 31,0);
        tracep->declBus(c+1270,"Patmos Timer usecLoReg", false,-1, 31,0);
        tracep->declBit(c+1353,"Patmos Deadline clock", false,-1);
        tracep->declBit(c+1354,"Patmos Deadline reset", false,-1);
        tracep->declBus(c+42,"Patmos Deadline io_ocp_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+16,"Patmos Deadline io_ocp_M_Data", false,-1, 31,0);
        tracep->declBus(c+43,"Patmos Deadline io_ocp_S_Resp", false,-1, 1,0);
        tracep->declBus(c+44,"Patmos Deadline io_ocp_S_Data", false,-1, 31,0);
        tracep->declBus(c+44,"Patmos Deadline downCountReg", false,-1, 31,0);
        tracep->declBit(c+1271,"Patmos Deadline downDone", false,-1);
        tracep->declBit(c+1272,"Patmos Deadline stallReg", false,-1);
        tracep->declBus(c+43,"Patmos Deadline respReg", false,-1, 1,0);
        tracep->declBit(c+1353,"Patmos Spm clock", false,-1);
        tracep->declBus(c+45,"Patmos Spm io_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+46,"Patmos Spm io_M_Addr", false,-1, 10,0);
        tracep->declBus(c+16,"Patmos Spm io_M_Data", false,-1, 31,0);
        tracep->declBus(c+17,"Patmos Spm io_M_ByteEn", false,-1, 3,0);
        tracep->declBus(c+47,"Patmos Spm io_S_Resp", false,-1, 1,0);
        tracep->declBus(c+48,"Patmos Spm io_S_Data", false,-1, 31,0);
        tracep->declBit(c+1353,"Patmos Spm MemBlock_clock", false,-1);
        tracep->declBus(c+1273,"Patmos Spm MemBlock_io_rdAddr", false,-1, 8,0);
        tracep->declBus(c+1274,"Patmos Spm MemBlock_io_rdData", false,-1, 7,0);
        tracep->declBus(c+1273,"Patmos Spm MemBlock_io_wrAddr", false,-1, 8,0);
        tracep->declBit(c+1275,"Patmos Spm MemBlock_io_wrEna", false,-1);
        tracep->declBus(c+1276,"Patmos Spm MemBlock_io_wrData", false,-1, 7,0);
        tracep->declBit(c+1353,"Patmos Spm MemBlock_1_clock", false,-1);
        tracep->declBus(c+1273,"Patmos Spm MemBlock_1_io_rdAddr", false,-1, 8,0);
        tracep->declBus(c+1277,"Patmos Spm MemBlock_1_io_rdData", false,-1, 7,0);
        tracep->declBus(c+1273,"Patmos Spm MemBlock_1_io_wrAddr", false,-1, 8,0);
        tracep->declBit(c+1278,"Patmos Spm MemBlock_1_io_wrEna", false,-1);
        tracep->declBus(c+1279,"Patmos Spm MemBlock_1_io_wrData", false,-1, 7,0);
        tracep->declBit(c+1353,"Patmos Spm MemBlock_2_clock", false,-1);
        tracep->declBus(c+1273,"Patmos Spm MemBlock_2_io_rdAddr", false,-1, 8,0);
        tracep->declBus(c+1280,"Patmos Spm MemBlock_2_io_rdData", false,-1, 7,0);
        tracep->declBus(c+1273,"Patmos Spm MemBlock_2_io_wrAddr", false,-1, 8,0);
        tracep->declBit(c+1281,"Patmos Spm MemBlock_2_io_wrEna", false,-1);
        tracep->declBus(c+1282,"Patmos Spm MemBlock_2_io_wrData", false,-1, 7,0);
        tracep->declBit(c+1353,"Patmos Spm MemBlock_3_clock", false,-1);
        tracep->declBus(c+1273,"Patmos Spm MemBlock_3_io_rdAddr", false,-1, 8,0);
        tracep->declBus(c+1283,"Patmos Spm MemBlock_3_io_rdData", false,-1, 7,0);
        tracep->declBus(c+1273,"Patmos Spm MemBlock_3_io_wrAddr", false,-1, 8,0);
        tracep->declBit(c+1284,"Patmos Spm MemBlock_3_io_wrEna", false,-1);
        tracep->declBus(c+1285,"Patmos Spm MemBlock_3_io_wrData", false,-1, 7,0);
        tracep->declBus(c+1286,"Patmos Spm cmdReg", false,-1, 2,0);
        tracep->declBit(c+1353,"Patmos Spm MemBlock clock", false,-1);
        tracep->declBus(c+1273,"Patmos Spm MemBlock io_rdAddr", false,-1, 8,0);
        tracep->declBus(c+1274,"Patmos Spm MemBlock io_rdData", false,-1, 7,0);
        tracep->declBus(c+1273,"Patmos Spm MemBlock io_wrAddr", false,-1, 8,0);
        tracep->declBit(c+1275,"Patmos Spm MemBlock io_wrEna", false,-1);
        tracep->declBus(c+1276,"Patmos Spm MemBlock io_wrData", false,-1, 7,0);
        tracep->declBus(c+1274,"Patmos Spm MemBlock mem_MPORT_1_data", false,-1, 7,0);
        tracep->declBus(c+1287,"Patmos Spm MemBlock mem_MPORT_1_addr", false,-1, 8,0);
        tracep->declBus(c+1276,"Patmos Spm MemBlock mem_MPORT_data", false,-1, 7,0);
        tracep->declBus(c+1273,"Patmos Spm MemBlock mem_MPORT_addr", false,-1, 8,0);
        tracep->declBit(c+1386,"Patmos Spm MemBlock mem_MPORT_mask", false,-1);
        tracep->declBit(c+1275,"Patmos Spm MemBlock mem_MPORT_en", false,-1);
        tracep->declBus(c+1287,"Patmos Spm MemBlock rdAddrReg", false,-1, 8,0);
        tracep->declBit(c+1353,"Patmos Spm MemBlock_1 clock", false,-1);
        tracep->declBus(c+1273,"Patmos Spm MemBlock_1 io_rdAddr", false,-1, 8,0);
        tracep->declBus(c+1277,"Patmos Spm MemBlock_1 io_rdData", false,-1, 7,0);
        tracep->declBus(c+1273,"Patmos Spm MemBlock_1 io_wrAddr", false,-1, 8,0);
        tracep->declBit(c+1278,"Patmos Spm MemBlock_1 io_wrEna", false,-1);
        tracep->declBus(c+1279,"Patmos Spm MemBlock_1 io_wrData", false,-1, 7,0);
        tracep->declBus(c+1277,"Patmos Spm MemBlock_1 mem_MPORT_1_data", false,-1, 7,0);
        tracep->declBus(c+1288,"Patmos Spm MemBlock_1 mem_MPORT_1_addr", false,-1, 8,0);
        tracep->declBus(c+1279,"Patmos Spm MemBlock_1 mem_MPORT_data", false,-1, 7,0);
        tracep->declBus(c+1273,"Patmos Spm MemBlock_1 mem_MPORT_addr", false,-1, 8,0);
        tracep->declBit(c+1386,"Patmos Spm MemBlock_1 mem_MPORT_mask", false,-1);
        tracep->declBit(c+1278,"Patmos Spm MemBlock_1 mem_MPORT_en", false,-1);
        tracep->declBus(c+1288,"Patmos Spm MemBlock_1 rdAddrReg", false,-1, 8,0);
        tracep->declBit(c+1353,"Patmos Spm MemBlock_2 clock", false,-1);
        tracep->declBus(c+1273,"Patmos Spm MemBlock_2 io_rdAddr", false,-1, 8,0);
        tracep->declBus(c+1280,"Patmos Spm MemBlock_2 io_rdData", false,-1, 7,0);
        tracep->declBus(c+1273,"Patmos Spm MemBlock_2 io_wrAddr", false,-1, 8,0);
        tracep->declBit(c+1281,"Patmos Spm MemBlock_2 io_wrEna", false,-1);
        tracep->declBus(c+1282,"Patmos Spm MemBlock_2 io_wrData", false,-1, 7,0);
        tracep->declBus(c+1280,"Patmos Spm MemBlock_2 mem_MPORT_1_data", false,-1, 7,0);
        tracep->declBus(c+1289,"Patmos Spm MemBlock_2 mem_MPORT_1_addr", false,-1, 8,0);
        tracep->declBus(c+1282,"Patmos Spm MemBlock_2 mem_MPORT_data", false,-1, 7,0);
        tracep->declBus(c+1273,"Patmos Spm MemBlock_2 mem_MPORT_addr", false,-1, 8,0);
        tracep->declBit(c+1386,"Patmos Spm MemBlock_2 mem_MPORT_mask", false,-1);
        tracep->declBit(c+1281,"Patmos Spm MemBlock_2 mem_MPORT_en", false,-1);
        tracep->declBus(c+1289,"Patmos Spm MemBlock_2 rdAddrReg", false,-1, 8,0);
        tracep->declBit(c+1353,"Patmos Spm MemBlock_3 clock", false,-1);
        tracep->declBus(c+1273,"Patmos Spm MemBlock_3 io_rdAddr", false,-1, 8,0);
        tracep->declBus(c+1283,"Patmos Spm MemBlock_3 io_rdData", false,-1, 7,0);
        tracep->declBus(c+1273,"Patmos Spm MemBlock_3 io_wrAddr", false,-1, 8,0);
        tracep->declBit(c+1284,"Patmos Spm MemBlock_3 io_wrEna", false,-1);
        tracep->declBus(c+1285,"Patmos Spm MemBlock_3 io_wrData", false,-1, 7,0);
        tracep->declBus(c+1283,"Patmos Spm MemBlock_3 mem_MPORT_1_data", false,-1, 7,0);
        tracep->declBus(c+1290,"Patmos Spm MemBlock_3 mem_MPORT_1_addr", false,-1, 8,0);
        tracep->declBus(c+1285,"Patmos Spm MemBlock_3 mem_MPORT_data", false,-1, 7,0);
        tracep->declBus(c+1273,"Patmos Spm MemBlock_3 mem_MPORT_addr", false,-1, 8,0);
        tracep->declBit(c+1386,"Patmos Spm MemBlock_3 mem_MPORT_mask", false,-1);
        tracep->declBit(c+1284,"Patmos Spm MemBlock_3 mem_MPORT_en", false,-1);
        tracep->declBus(c+1290,"Patmos Spm MemBlock_3 rdAddrReg", false,-1, 8,0);
        tracep->declBit(c+1353,"Patmos ramCtrl clock", false,-1);
        tracep->declBit(c+1354,"Patmos ramCtrl reset", false,-1);
        tracep->declBus(c+7,"Patmos ramCtrl io_ocp_M_Cmd", false,-1, 2,0);
        tracep->declBus(c+8,"Patmos ramCtrl io_ocp_M_Addr", false,-1, 20,0);
        tracep->declBus(c+9,"Patmos ramCtrl io_ocp_M_Data", false,-1, 31,0);
        tracep->declBit(c+10,"Patmos ramCtrl io_ocp_M_DataValid", false,-1);
        tracep->declBus(c+11,"Patmos ramCtrl io_ocp_M_DataByteEn", false,-1, 3,0);
        tracep->declBus(c+12,"Patmos ramCtrl io_ocp_S_Resp", false,-1, 1,0);
        tracep->declBus(c+13,"Patmos ramCtrl io_ocp_S_Data", false,-1, 31,0);
        tracep->declBus(c+49,"Patmos ramCtrl io_pins_ramOut_addr", false,-1, 19,0);
        tracep->declBit(c+50,"Patmos ramCtrl io_pins_ramOut_doutEna", false,-1);
        tracep->declBus(c+51,"Patmos ramCtrl io_pins_ramOut_dout", false,-1, 15,0);
        tracep->declBit(c+52,"Patmos ramCtrl io_pins_ramOut_noe", false,-1);
        tracep->declBit(c+53,"Patmos ramCtrl io_pins_ramOut_nwe", false,-1);
        tracep->declBit(c+54,"Patmos ramCtrl io_pins_ramOut_nlb", false,-1);
        tracep->declBit(c+55,"Patmos ramCtrl io_pins_ramOut_nub", false,-1);
        tracep->declBus(c+1367,"Patmos ramCtrl io_pins_ramIn_din", false,-1, 15,0);
        tracep->declBus(c+1291,"Patmos ramCtrl stateReg", false,-1, 2,0);
        tracep->declBus(c+1292,"Patmos ramCtrl mAddrReg", false,-1, 19,0);
        tracep->declBus(c+1293,"Patmos ramCtrl rdBufferReg_0", false,-1, 15,0);
        tracep->declBus(c+1294,"Patmos ramCtrl rdBufferReg_1", false,-1, 15,0);
        tracep->declBus(c+1295,"Patmos ramCtrl rdBufferReg_2", false,-1, 15,0);
        tracep->declBus(c+1296,"Patmos ramCtrl rdBufferReg_3", false,-1, 15,0);
        tracep->declBus(c+1297,"Patmos ramCtrl rdBufferReg_4", false,-1, 15,0);
        tracep->declBus(c+1298,"Patmos ramCtrl rdBufferReg_5", false,-1, 15,0);
        tracep->declBus(c+1299,"Patmos ramCtrl rdBufferReg_6", false,-1, 15,0);
        tracep->declBus(c+1300,"Patmos ramCtrl rdBufferReg_7", false,-1, 15,0);
        tracep->declBus(c+1301,"Patmos ramCtrl wrBufferReg_0_byteEna", false,-1, 1,0);
        tracep->declBus(c+1302,"Patmos ramCtrl wrBufferReg_0_data", false,-1, 15,0);
        tracep->declBus(c+1303,"Patmos ramCtrl wrBufferReg_1_byteEna", false,-1, 1,0);
        tracep->declBus(c+1304,"Patmos ramCtrl wrBufferReg_1_data", false,-1, 15,0);
        tracep->declBus(c+1305,"Patmos ramCtrl wrBufferReg_2_byteEna", false,-1, 1,0);
        tracep->declBus(c+1306,"Patmos ramCtrl wrBufferReg_2_data", false,-1, 15,0);
        tracep->declBus(c+1307,"Patmos ramCtrl wrBufferReg_3_byteEna", false,-1, 1,0);
        tracep->declBus(c+1308,"Patmos ramCtrl wrBufferReg_3_data", false,-1, 15,0);
        tracep->declBus(c+1309,"Patmos ramCtrl wrBufferReg_4_byteEna", false,-1, 1,0);
        tracep->declBus(c+1310,"Patmos ramCtrl wrBufferReg_4_data", false,-1, 15,0);
        tracep->declBus(c+1311,"Patmos ramCtrl wrBufferReg_5_byteEna", false,-1, 1,0);
        tracep->declBus(c+1312,"Patmos ramCtrl wrBufferReg_5_data", false,-1, 15,0);
        tracep->declBus(c+1313,"Patmos ramCtrl wrBufferReg_6_byteEna", false,-1, 1,0);
        tracep->declBus(c+1314,"Patmos ramCtrl wrBufferReg_6_data", false,-1, 15,0);
        tracep->declBus(c+1315,"Patmos ramCtrl wrBufferReg_7_byteEna", false,-1, 1,0);
        tracep->declBus(c+1316,"Patmos ramCtrl wrBufferReg_7_data", false,-1, 15,0);
        tracep->declBus(c+1317,"Patmos ramCtrl transCountReg", false,-1, 2,0);
        tracep->declBus(c+1318,"Patmos ramCtrl wordCountReg", false,-1, 1,0);
        tracep->declBit(c+1319,"Patmos ramCtrl waitCountReg", false,-1);
        tracep->declBus(c+49,"Patmos ramCtrl addrReg", false,-1, 19,0);
        tracep->declBit(c+50,"Patmos ramCtrl doutEnaReg", false,-1);
        tracep->declBus(c+1320,"Patmos ramCtrl doutReg", false,-1, 31,0);
        tracep->declBit(c+52,"Patmos ramCtrl noeReg", false,-1);
        tracep->declBit(c+53,"Patmos ramCtrl nweReg", false,-1);
        tracep->declBit(c+54,"Patmos ramCtrl nlbReg", false,-1);
        tracep->declBit(c+55,"Patmos ramCtrl nubReg", false,-1);
    }
}

void VPatmos::traceRegister(VerilatedVcd* tracep) {
    // Body
    {
        tracep->addFullCb(&traceFullTop0, __VlSymsp);
        tracep->addChgCb(&traceChgTop0, __VlSymsp);
        tracep->addCleanupCb(&traceCleanup, __VlSymsp);
    }
}

void VPatmos::traceFullTop0(void* userp, VerilatedVcd* tracep) {
    VPatmos__Syms* __restrict vlSymsp = static_cast<VPatmos__Syms*>(userp);
    VPatmos* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlTOPp->traceFullSub0(userp, tracep);
    }
}

void VPatmos::traceFullSub0(void* userp, VerilatedVcd* tracep) {
    VPatmos__Syms* __restrict vlSymsp = static_cast<VPatmos__Syms*>(userp);
    VPatmos* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(((1ULL + vlTOPp->Patmos__DOT__Timer__DOT__cycleReg) 
                                 == vlTOPp->Patmos__DOT__Timer__DOT__cycleIntrReg)));
        tracep->fullBit(oldp+2,(((0x4fU == (IData)(vlTOPp->Patmos__DOT__Timer__DOT__usecSubReg)) 
                                 & ((1ULL + vlTOPp->Patmos__DOT__Timer__DOT__usecReg) 
                                    == vlTOPp->Patmos__DOT__Timer__DOT__usecIntrReg))));
        tracep->fullBit(oldp+3,((1U & ((IData)(vlTOPp->Patmos__DOT__Keys__DOT__keyReg) 
                                       & (~ (IData)(vlTOPp->Patmos__DOT__Keys__DOT__keySyncReg))))));
        tracep->fullBit(oldp+4,((1U & (((IData)(vlTOPp->Patmos__DOT__Keys__DOT__keyReg) 
                                        >> 1U) & (~ 
                                                  ((IData)(vlTOPp->Patmos__DOT__Keys__DOT__keySyncReg) 
                                                   >> 1U))))));
        tracep->fullBit(oldp+5,((1U & (((IData)(vlTOPp->Patmos__DOT__Keys__DOT__keyReg) 
                                        >> 2U) & (~ 
                                                  ((IData)(vlTOPp->Patmos__DOT__Keys__DOT__keySyncReg) 
                                                   >> 2U))))));
        tracep->fullBit(oldp+6,((1U & (((IData)(vlTOPp->Patmos__DOT__Keys__DOT__keyReg) 
                                        >> 3U) & (~ 
                                                  ((IData)(vlTOPp->Patmos__DOT__Keys__DOT__keySyncReg) 
                                                   >> 3U))))));
        tracep->fullCData(oldp+7,(vlTOPp->Patmos__DOT__cores_0__DOT__burstBus_io_slave_M_Cmd),3);
        tracep->fullIData(oldp+8,((0x1fffffU & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT___T_3)
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
        tracep->fullIData(oldp+9,(vlTOPp->Patmos__DOT__cores_0__DOT__burstBus_io_slave_M_Data),32);
        tracep->fullBit(oldp+10,(vlTOPp->Patmos__DOT__cores_0__DOT__burstBus_io_slave_M_DataValid));
        tracep->fullCData(oldp+11,(vlTOPp->Patmos__DOT__cores_0__DOT__burstBus_io_slave_M_DataByteEn),4);
        tracep->fullCData(oldp+12,(vlTOPp->Patmos__DOT__ramCtrl_io_ocp_S_Resp),2);
        tracep->fullIData(oldp+13,(vlTOPp->Patmos__DOT__ramCtrl_io_ocp_S_Data),32);
        tracep->fullCData(oldp+14,(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_localInOut_M_Cmd),3);
        tracep->fullIData(oldp+15,((0xfffffffcU & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr)),32);
        tracep->fullIData(oldp+16,(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_Data),32);
        tracep->fullCData(oldp+17,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_byte)
                                     ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_72)
                                     : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_59))),4);
        tracep->fullCData(oldp+18,(vlTOPp->Patmos__DOT__cores_0_io_memInOut_S_Resp),2);
        tracep->fullIData(oldp+19,(((IData)(vlTOPp->Patmos__DOT__REG_10)
                                     ? 0U : ((IData)(vlTOPp->Patmos__DOT__REG_9)
                                              ? ((vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_3__DOT__mem
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
                                              : ((IData)(vlTOPp->Patmos__DOT__REG_8)
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
        tracep->fullCData(oldp+20,(((0xf001U == (0xffffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                    >> 0x10U)))
                                     ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_localInOut_M_Cmd)
                                     : 0U)),3);
        tracep->fullCData(oldp+21,((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__sleepReg) 
                                     & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__exc) 
                                        | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___T_198)))
                                     ? 1U : ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Cmd))
                                              ? ((0x80U 
                                                  & vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr)
                                                  ? 
                                                 ((2U 
                                                   & vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__statusReg)
                                                   ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_179)
                                                   : 3U)
                                                  : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_179))
                                              : ((2U 
                                                  == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Cmd))
                                                  ? 1U
                                                  : 0U)))),2);
        tracep->fullIData(oldp+22,(((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Cmd))
                                     ? ((0x80U & vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr)
                                         ? vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec
                                        [(0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                                   >> 2U))]
                                         : ((0U == 
                                             (0x3fU 
                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                                 >> 2U)))
                                             ? vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__statusReg
                                             : ((1U 
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
        tracep->fullCData(oldp+23,(vlTOPp->Patmos__DOT__HardlockOCPWrapper_io_cores_0_M_Cmd),3);
        tracep->fullCData(oldp+24,(((IData)(vlTOPp->Patmos__DOT__HardlockOCPWrapper__DOT__reqReg)
                                     ? 1U : 0U)),2);
        tracep->fullCData(oldp+25,(vlTOPp->Patmos__DOT__UartCmp_io_cores_0_M_Cmd),3);
        tracep->fullCData(oldp+26,(((IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__REG)
                                     ? (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__respReg)
                                     : 0U)),2);
        tracep->fullIData(oldp+27,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rdDataReg),32);
        tracep->fullBit(oldp+28,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__tx_reg));
        tracep->fullCData(oldp+29,(((0xf000U == (0xffffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                    >> 0x10U)))
                                     ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_localInOut_M_Cmd)
                                     : 0U)),3);
        tracep->fullCData(oldp+30,(((2U == (IData)(vlTOPp->Patmos__DOT__CpuInfo__DOT__masterReg_Cmd))
                                     ? 1U : ((1U == (IData)(vlTOPp->Patmos__DOT__CpuInfo__DOT__masterReg_Cmd))
                                              ? 1U : 0U))),2);
        tracep->fullIData(oldp+31,(((0x8000U & vlTOPp->Patmos__DOT__CpuInfo__DOT__masterReg_Addr)
                                     ? ((8U == (0xfU 
                                                & (vlTOPp->Patmos__DOT__CpuInfo__DOT__masterReg_Addr 
                                                   >> 2U)))
                                         ? 0x700U : 
                                        ((7U == (0xfU 
                                                 & (vlTOPp->Patmos__DOT__CpuInfo__DOT__masterReg_Addr 
                                                    >> 2U)))
                                          ? 0x6f8U : 
                                         ((6U == (0xfU 
                                                  & (vlTOPp->Patmos__DOT__CpuInfo__DOT__masterReg_Addr 
                                                     >> 2U)))
                                           ? 0x6f0U
                                           : ((5U == 
                                               (0xfU 
                                                & (vlTOPp->Patmos__DOT__CpuInfo__DOT__masterReg_Addr 
                                                   >> 2U)))
                                               ? 0x6bcU
                                               : ((4U 
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
        tracep->fullCData(oldp+32,(vlTOPp->Patmos__DOT__Leds_io_ocp_M_Cmd),3);
        tracep->fullCData(oldp+33,(vlTOPp->Patmos__DOT__Leds__DOT__respReg),2);
        tracep->fullIData(oldp+34,(vlTOPp->Patmos__DOT__Leds__DOT__ledReg),32);
        tracep->fullSData(oldp+35,(vlTOPp->Patmos__DOT__Leds__DOT__REG),9);
        tracep->fullCData(oldp+36,(((0xf00aU == (0xffffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                    >> 0x10U)))
                                     ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_localInOut_M_Cmd)
                                     : 0U)),3);
        tracep->fullCData(oldp+37,(vlTOPp->Patmos__DOT__Keys__DOT__respReg),2);
        tracep->fullIData(oldp+38,(vlTOPp->Patmos__DOT__Keys__DOT__keyReg),32);
        tracep->fullCData(oldp+39,(((0xf002U == (0xffffU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                    >> 0x10U)))
                                     ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_localInOut_M_Cmd)
                                     : 0U)),3);
        tracep->fullCData(oldp+40,(((1U == (IData)(vlTOPp->Patmos__DOT__Timer__DOT__masterReg_Cmd))
                                     ? 1U : ((2U == (IData)(vlTOPp->Patmos__DOT__Timer__DOT__masterReg_Cmd))
                                              ? 1U : 0U))),2);
        tracep->fullIData(oldp+41,(((2U == (IData)(vlTOPp->Patmos__DOT__Timer__DOT__masterReg_Cmd))
                                     ? ((2U == (3U 
                                                & (vlTOPp->Patmos__DOT__Timer__DOT__masterReg_Addr 
                                                   >> 2U)))
                                         ? vlTOPp->Patmos__DOT__Timer__DOT__usecHiReg
                                         : ((3U == 
                                             (3U & 
                                              (vlTOPp->Patmos__DOT__Timer__DOT__masterReg_Addr 
                                               >> 2U)))
                                             ? (IData)(vlTOPp->Patmos__DOT__Timer__DOT__usecReg)
                                             : ((0U 
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
        tracep->fullCData(oldp+42,(vlTOPp->Patmos__DOT__Deadline_io_ocp_M_Cmd),3);
        tracep->fullCData(oldp+43,(vlTOPp->Patmos__DOT__Deadline__DOT__respReg),2);
        tracep->fullIData(oldp+44,(vlTOPp->Patmos__DOT__Deadline__DOT__downCountReg),32);
        tracep->fullCData(oldp+45,(vlTOPp->Patmos__DOT__Spm_io_M_Cmd),3);
        tracep->fullSData(oldp+46,((0x7fcU & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr)),11);
        tracep->fullCData(oldp+47,((((1U == (IData)(vlTOPp->Patmos__DOT__Spm__DOT__cmdReg)) 
                                     | (2U == (IData)(vlTOPp->Patmos__DOT__Spm__DOT__cmdReg)))
                                     ? 1U : 0U)),2);
        tracep->fullIData(oldp+48,(((vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_3__DOT__mem
                                     [vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_3__DOT__rdAddrReg] 
                                     << 0x18U) | ((
                                                   vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_2__DOT__mem
                                                   [vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_2__DOT__rdAddrReg] 
                                                   << 0x10U) 
                                                  | ((vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_1__DOT__mem
                                                      [vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_1__DOT__rdAddrReg] 
                                                      << 8U) 
                                                     | vlTOPp->Patmos__DOT__Spm__DOT__MemBlock__DOT__mem
                                                     [vlTOPp->Patmos__DOT__Spm__DOT__MemBlock__DOT__rdAddrReg])))),32);
        tracep->fullIData(oldp+49,(vlTOPp->Patmos__DOT__ramCtrl__DOT__addrReg),20);
        tracep->fullBit(oldp+50,(vlTOPp->Patmos__DOT__ramCtrl__DOT__doutEnaReg));
        tracep->fullSData(oldp+51,((0xffffU & vlTOPp->Patmos__DOT__ramCtrl__DOT__doutReg)),16);
        tracep->fullBit(oldp+52,(vlTOPp->Patmos__DOT__ramCtrl__DOT__noeReg));
        tracep->fullBit(oldp+53,(vlTOPp->Patmos__DOT__ramCtrl__DOT__nweReg));
        tracep->fullBit(oldp+54,(vlTOPp->Patmos__DOT__ramCtrl__DOT__nlbReg));
        tracep->fullBit(oldp+55,(vlTOPp->Patmos__DOT__ramCtrl__DOT__nubReg));
        tracep->fullCData(oldp+56,(vlTOPp->Patmos__DOT__REG),2);
        tracep->fullBit(oldp+57,(vlTOPp->Patmos__DOT__REG_1));
        tracep->fullBit(oldp+58,(vlTOPp->Patmos__DOT__REG_2));
        tracep->fullBit(oldp+59,(vlTOPp->Patmos__DOT__REG_3));
        tracep->fullBit(oldp+60,(vlTOPp->Patmos__DOT__REG_4));
        tracep->fullBit(oldp+61,(vlTOPp->Patmos__DOT__REG_5));
        tracep->fullBit(oldp+62,(vlTOPp->Patmos__DOT__REG_6));
        tracep->fullBit(oldp+63,(vlTOPp->Patmos__DOT__REG_7));
        tracep->fullBit(oldp+64,(vlTOPp->Patmos__DOT__REG_8));
        tracep->fullBit(oldp+65,(vlTOPp->Patmos__DOT__REG_9));
        tracep->fullBit(oldp+66,(vlTOPp->Patmos__DOT__REG_10));
        tracep->fullCData(oldp+67,(vlTOPp->Patmos__DOT__REG_11),2);
        tracep->fullBit(oldp+68,(vlTOPp->Patmos__DOT__cores_0__DOT__icache_io_ena_out));
        tracep->fullBit(oldp+69,(vlTOPp->Patmos__DOT__cores_0__DOT__icache_io_ena_in));
        tracep->fullBit(oldp+70,(((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Cmd)) 
                                  & ((0U != (0x3fU 
                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                                >> 2U))) 
                                     & ((1U != (0x3fU 
                                                & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                                   >> 2U))) 
                                        & ((3U != (0x3fU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                                      >> 2U))) 
                                           & ((2U != 
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
        tracep->fullBit(oldp+71,(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exicache_doCallRet));
        tracep->fullIData(oldp+72,((0x3fffffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__callRetBase 
                                                   >> 2U))),32);
        tracep->fullIData(oldp+73,((0x3fffffffU & (
                                                   (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_call) 
                                                     | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_xcall))
                                                     ? 0U
                                                     : 
                                                    ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_brcf)
                                                      ? 
                                                     ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_immOp_0)
                                                       ? 0U
                                                       : vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data)
                                                      : 
                                                     ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_xret)
                                                       ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__excOffReg
                                                       : vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__retOffReg))) 
                                                   >> 2U))),32);
        tracep->fullIData(oldp+74,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__callRetBaseReg),32);
        tracep->fullSData(oldp+75,((0x7ffU & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__relBase))),11);
        tracep->fullSData(oldp+76,((0xfffU & vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__relPc)),12);
        tracep->fullIData(oldp+77,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_mcachefe_reloc),32);
        tracep->fullCData(oldp+78,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_mcachefe_memSel),2);
        tracep->fullCData(oldp+79,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ocp_port_M_Cmd),3);
        tracep->fullIData(oldp+80,((IData)(((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg))
                                             ? (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg) 
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
        tracep->fullCData(oldp+81,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__REG)
                                     ? 0U : (IData)(vlTOPp->Patmos__DOT__ramCtrl_io_ocp_S_Resp))),2);
        tracep->fullBit(oldp+82,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_illMem));
        tracep->fullBit(oldp+83,(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_ena));
        tracep->fullIData(oldp+84,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcReg),30);
        tracep->fullIData(oldp+85,((0x3fffffffU & vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__baseReg)),30);
        tracep->fullIData(oldp+86,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__relocReg),32);
        tracep->fullIData(oldp+87,((0x3fffffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcReg 
                                                   - (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__relBaseReg)))),30);
        tracep->fullBit(oldp+88,(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exfe_doBranch));
        tracep->fullIData(oldp+89,((0x3fffffffU & vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__target)),30);
        tracep->fullBit(oldp+90,(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_memfe_doCallRet));
        tracep->fullBit(oldp+91,((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_localInOut_M_Cmd))));
        tracep->fullIData(oldp+92,(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr),32);
        tracep->fullBit(oldp+93,(vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_flush));
        tracep->fullIData(oldp+94,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                     ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__exc)
                                         ? vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excBaseReg
                                         : vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_base)
                                     : vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_base)),30);
        tracep->fullIData(oldp+95,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                     ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__exc)
                                         ? vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excAddrReg
                                         : vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_relPc)
                                     : vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_relPc)),30);
        tracep->fullCData(oldp+96,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                     ? 0U : (0xfU & 
                                             (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                              >> 0x1bU)))),4);
        tracep->fullCData(oldp+97,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                     ? 8U : (0xfU & 
                                             (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                              >> 0x1bU)))),4);
        tracep->fullCData(oldp+98,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                     ? 0U : (0xfU & 
                                             ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__longImm)
                                               ? vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a
                                               : ((0U 
                                                   == 
                                                   (3U 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                       >> 0x19U)))
                                                   ? 
                                                  (7U 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                      >> 0x16U))
                                                   : vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a))))),4);
        tracep->fullBit(oldp+99,(vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_aluOp_0_isMul));
        tracep->fullBit(oldp+100,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                   & ((8U == (0x1fU 
                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                 >> 0x16U))) 
                                      & ((0U != (7U 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                    >> 4U))) 
                                         & ((1U != 
                                             (7U & 
                                              (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
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
        tracep->fullBit(oldp+101,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                   & ((8U == (0x1fU 
                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                 >> 0x16U))) 
                                      & ((0U != (7U 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                    >> 4U))) 
                                         & ((1U != 
                                             (7U & 
                                              (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
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
        tracep->fullBit(oldp+102,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                   & ((8U == (0x1fU 
                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                 >> 0x16U))) 
                                      & ((0U != (7U 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                    >> 4U))) 
                                         & ((1U != 
                                             (7U & 
                                              (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
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
        tracep->fullBit(oldp+103,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                   & ((9U == (0x1fU 
                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                 >> 0x16U))) 
                                      & (2U == (7U 
                                                & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                   >> 4U)))))));
        tracep->fullBit(oldp+104,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                   & ((9U == (0x1fU 
                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                 >> 0x16U))) 
                                      & ((2U != (7U 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                    >> 4U))) 
                                         & (3U == (7U 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                      >> 4U))))))));
        tracep->fullCData(oldp+105,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
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
        tracep->fullBit(oldp+106,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                   & ((8U == (0x1fU 
                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                 >> 0x16U))) 
                                      & ((0U != (7U 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                    >> 4U))) 
                                         & ((1U != 
                                             (7U & 
                                              (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
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
        tracep->fullBit(oldp+107,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                   & ((8U == (0x1fU 
                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                 >> 0x16U))) 
                                      & ((0U != (7U 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                    >> 4U))) 
                                         & ((1U != 
                                             (7U & 
                                              (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
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
        tracep->fullBit(oldp+108,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                   & ((8U == (0x1fU 
                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                 >> 0x16U))) 
                                      & ((0U != (7U 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                    >> 4U))) 
                                         & ((1U != 
                                             (7U & 
                                              (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
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
        tracep->fullBit(oldp+109,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                   & ((9U == (0x1fU 
                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                 >> 0x16U))) 
                                      & ((2U == (7U 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                    >> 4U))) 
                                         & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__dual))))));
        tracep->fullBit(oldp+110,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                   & ((9U == (0x1fU 
                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                 >> 0x16U))) 
                                      & ((2U != (7U 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                    >> 4U))) 
                                         & ((3U == 
                                             (7U & 
                                              (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                               >> 4U))) 
                                            & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__dual)))))));
        tracep->fullCData(oldp+111,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                      ? 0U : ((2U & 
                                               (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                >> 2U)) 
                                              | (1U 
                                                 & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a)))),2);
        tracep->fullCData(oldp+112,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                      ? 0U : (7U & 
                                              (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                               >> 0x11U)))),3);
        tracep->fullCData(oldp+113,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                      ? 0U : (0xfU 
                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                 >> 0xcU)))),4);
        tracep->fullCData(oldp+114,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                      ? 0U : (0xfU 
                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                 >> 7U)))),4);
        tracep->fullCData(oldp+115,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                      ? 0U : ((2U & 
                                               (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                >> 2U)) 
                                              | (1U 
                                                 & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b)))),2);
        tracep->fullCData(oldp+116,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                      ? 0U : (7U & 
                                              (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                               >> 0x11U)))),3);
        tracep->fullCData(oldp+117,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                      ? 0U : (0xfU 
                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                 >> 0xcU)))),4);
        tracep->fullCData(oldp+118,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                      ? 0U : (0xfU 
                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                 >> 7U)))),4);
        tracep->fullBit(oldp+119,(vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_jmpOp_branch));
        tracep->fullIData(oldp+120,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
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
        tracep->fullIData(oldp+121,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                      ? 0U : vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_reloc)),32);
        tracep->fullBit(oldp+122,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                   & (0xaU == (0x1fU 
                                               & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                  >> 0x16U))))));
        tracep->fullBit(oldp+123,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                   & (0xbU == (0x1fU 
                                               & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                  >> 0x16U))))));
        tracep->fullBit(oldp+124,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                   & ((0xbU == (0x1fU 
                                                & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                   >> 0x16U)))
                                       ? ((0U == (7U 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                     >> 0x13U)))
                                           ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_246)
                                           : ((1U == 
                                               (7U 
                                                & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                   >> 0x13U))) 
                                              | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_246)))
                                       : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_246)))));
        tracep->fullBit(oldp+125,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                   & ((0xbU == (0x1fU 
                                                & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                   >> 0x16U)))
                                       ? ((0U == (7U 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                     >> 0x13U)))
                                           ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_247)
                                           : ((1U == 
                                               (7U 
                                                & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                   >> 0x13U)))
                                               ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_247)
                                               : ((2U 
                                                   == 
                                                   (7U 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                       >> 0x13U))) 
                                                  | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_247))))
                                       : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_247)))));
        tracep->fullBit(oldp+126,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                   & ((0xaU == (0x1fU 
                                                & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                   >> 0x16U))) 
                                      & ((0U != (7U 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                    >> 9U))) 
                                         & ((1U != 
                                             (7U & 
                                              (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
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
        tracep->fullCData(oldp+127,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                      ? 0U : (3U & 
                                              ((0xbU 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                    >> 0x16U)))
                                                ? (
                                                   ((2U 
                                                     == 
                                                     (3U 
                                                      & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                         >> 0x11U))) 
                                                    & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__localModeReg))
                                                    ? 1U
                                                    : 
                                                   (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                    >> 0x11U))
                                                : (
                                                   (0xaU 
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
        tracep->fullCData(oldp+128,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                      ? 0U : ((0xcU 
                                               == (0x1fU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                      >> 0x16U)))
                                               ? ((0U 
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
        tracep->fullCData(oldp+129,(vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_rsAddr_0),5);
        tracep->fullCData(oldp+130,(vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_rsAddr_1),5);
        tracep->fullCData(oldp+131,(vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_rsAddr_2),5);
        tracep->fullCData(oldp+132,(vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_rsAddr_3),5);
        tracep->fullIData(oldp+133,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                      ? 0U : ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_0))
                                               ? 0U
                                               : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_0_1)
                                                   ? vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__wrReg_1_data
                                                   : 
                                                  ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_0_0)
                                                    ? vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__wrReg_0_data
                                                    : 
                                                   vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf
                                                   [vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_0]))))),32);
        tracep->fullIData(oldp+134,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                      ? 0U : ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_1))
                                               ? 0U
                                               : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_1_1)
                                                   ? vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__wrReg_1_data
                                                   : 
                                                  ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_1_0)
                                                    ? vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__wrReg_0_data
                                                    : 
                                                   vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf
                                                   [vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_1]))))),32);
        tracep->fullIData(oldp+135,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                      ? 0U : ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_2))
                                               ? 0U
                                               : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_2_1)
                                                   ? vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__wrReg_1_data
                                                   : 
                                                  ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_2_0)
                                                    ? vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__wrReg_0_data
                                                    : 
                                                   vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf
                                                   [vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_2]))))),32);
        tracep->fullIData(oldp+136,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                      ? 0U : ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_3))
                                               ? 0U
                                               : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_3_1)
                                                   ? vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__wrReg_1_data
                                                   : 
                                                  ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_3_0)
                                                    ? vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__wrReg_0_data
                                                    : 
                                                   vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf
                                                   [vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_3]))))),32);
        tracep->fullCData(oldp+137,(vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_rdAddr_0),5);
        tracep->fullCData(oldp+138,(vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_rdAddr_1),5);
        tracep->fullIData(oldp+139,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                      ? 0U : (((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__isSTC) 
                                                 | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__isStack)) 
                                                | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__isMem)) 
                                               | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__longImm))
                                               ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__isSTC)
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
        tracep->fullIData(oldp+140,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                      ? 0U : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_139))),32);
        tracep->fullBit(oldp+141,(vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_immOp_0));
        tracep->fullBit(oldp+142,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                   & ((8U == (0x1fU 
                                              & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                 >> 0x16U)))
                                       ? ((0U == (7U 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                     >> 4U)))
                                           ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_82)
                                           : ((1U == 
                                               (7U 
                                                & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                   >> 4U)))
                                               ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_82)
                                               : ((2U 
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
        tracep->fullBit(oldp+143,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                   & ((0U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_rdAddr_0)) 
                                      & ((0xaU == (0x1fU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                      >> 0x16U))) 
                                         | ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__longImm) 
                                            | ((9U 
                                                == 
                                                (0x1fU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                    >> 0x16U)))
                                                ? (
                                                   (2U 
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
        tracep->fullBit(oldp+144,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                   & ((0U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_rdAddr_1)) 
                                      & ((9U == (0x1fU 
                                                 & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                    >> 0x16U)))
                                          ? ((2U == 
                                              (7U & 
                                               (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                >> 4U)))
                                              ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_134)
                                              : ((3U 
                                                  == 
                                                  (7U 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                      >> 4U)))
                                                  ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__dual)
                                                  : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_134)))
                                          : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_134))))));
        tracep->fullIData(oldp+145,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                      ? vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup
                                     [vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__srcReg]
                                      : (0xfffffcU 
                                         & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                            << 2U)))),32);
        tracep->fullBit(oldp+146,(vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_call));
        tracep->fullBit(oldp+147,(vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_ret));
        tracep->fullBit(oldp+148,(vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_brcf));
        tracep->fullBit(oldp+149,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                   & (0x16U == (0x1fU 
                                                & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                   >> 0x16U))))));
        tracep->fullBit(oldp+150,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140));
        tracep->fullBit(oldp+151,(vlTOPp->Patmos__DOT__cores_0__DOT__decode_io_decex_xret));
        tracep->fullCData(oldp+152,((0x1fU & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)
                                               ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__srcReg)
                                               : ((0x16U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                       >> 0x16U)))
                                                   ? vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a
                                                   : 0U)))),5);
        tracep->fullBit(oldp+153,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                   & (((0x19U == (0x1fU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                     >> 0x16U))) 
                                       | (0x18U == 
                                          (0x1fU & 
                                           (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                            >> 0x16U))))
                                       ? (0x18U == 
                                          (0x1fU & 
                                           (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                            >> 0x16U)))
                                       : (((0x15U == 
                                            (0x1fU 
                                             & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                >> 0x16U))) 
                                           | (0x14U 
                                              == (0x1fU 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                     >> 0x16U))))
                                           ? (0x14U 
                                              == (0x1fU 
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
                                               ? (0x12U 
                                                  == 
                                                  (0x1fU 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                      >> 0x16U)))
                                               : ((
                                                   (0x11U 
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
        tracep->fullBit(oldp+154,((1U & ((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___T_140)) 
                                         & (~ ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__dual)
                                                ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decoded_0) 
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
        tracep->fullCData(oldp+155,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_rd_0_addr),5);
        tracep->fullIData(oldp+156,(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_memwb_rd_0_data),32);
        tracep->fullBit(oldp+157,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_rd_0_valid));
        tracep->fullCData(oldp+158,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_rd_1_addr),5);
        tracep->fullIData(oldp+159,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_rd_1_data),32);
        tracep->fullBit(oldp+160,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_rd_1_valid));
        tracep->fullBit(oldp+161,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__exc));
        tracep->fullIData(oldp+162,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excBaseReg),30);
        tracep->fullIData(oldp+163,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excAddrReg),30);
        tracep->fullBit(oldp+164,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intr) 
                                   & vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__statusReg)));
        tracep->fullIData(oldp+165,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup
                                    [vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__srcReg]),32);
        tracep->fullCData(oldp+166,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__srcReg),5);
        tracep->fullBit(oldp+167,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__localModeReg));
        tracep->fullBit(oldp+168,(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_flush));
        tracep->fullBit(oldp+169,(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_brflush));
        tracep->fullCData(oldp+170,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_rdAddr_0),5);
        tracep->fullIData(oldp+171,(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_rd_0_data),32);
        tracep->fullBit(oldp+172,(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_rd_0_valid));
        tracep->fullCData(oldp+173,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_rdAddr_1),5);
        tracep->fullIData(oldp+174,(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_rd_1_data),32);
        tracep->fullBit(oldp+175,(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_rd_1_valid));
        tracep->fullBit(oldp+176,(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_load));
        tracep->fullBit(oldp+177,(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_store));
        tracep->fullBit(oldp+178,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_hword));
        tracep->fullBit(oldp+179,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_byte));
        tracep->fullBit(oldp+180,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_zext));
        tracep->fullCData(oldp+181,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_typ),2);
        tracep->fullIData(oldp+182,(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data),32);
        tracep->fullBit(oldp+183,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_call) 
                                   & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__doExecute_0))));
        tracep->fullBit(oldp+184,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_ret) 
                                   & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__doExecute_0))));
        tracep->fullBit(oldp+185,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_brcf) 
                                   & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__doExecute_0))));
        tracep->fullBit(oldp+186,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_trap) 
                                   & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__doExecute_0))));
        tracep->fullBit(oldp+187,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_xcall) 
                                   & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__doExecute_0))));
        tracep->fullBit(oldp+188,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_xret) 
                                   & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__doExecute_0))));
        tracep->fullCData(oldp+189,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_xsrc),5);
        tracep->fullBit(oldp+190,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_illOp));
        tracep->fullBit(oldp+191,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_nonDelayed));
        tracep->fullIData(oldp+192,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_base),30);
        tracep->fullIData(oldp+193,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_relPc),30);
        tracep->fullCData(oldp+194,(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exsc_op),3);
        tracep->fullIData(oldp+195,(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exsc_opData),32);
        tracep->fullIData(oldp+196,(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exsc_opOff),32);
        tracep->fullIData(oldp+197,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stackTopReg),32);
        tracep->fullIData(oldp+198,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__memTopReg),32);
        tracep->fullBit(oldp+199,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__enable));
        tracep->fullBit(oldp+200,(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_ena_in));
        tracep->fullCData(oldp+201,(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_Cmd),3);
        tracep->fullCData(oldp+202,(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_ByteEn),4);
        tracep->fullCData(oldp+203,(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_AddrSpace),2);
        tracep->fullCData(oldp+204,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache_io_master_S_Resp),2);
        tracep->fullIData(oldp+205,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__selSCReg)
                                      ? (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock_3__DOT__mem_MPORT_1_data) 
                                          << 0x18U) 
                                         | vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_1)
                                      : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__selDCReg)
                                          ? ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__stateReg))
                                              ? vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__slaveReg_Data
                                              : (((
                                                   ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__REG) 
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
                                          : ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__stateReg))
                                              ? vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__slaveReg_Data
                                              : 0U)))),32);
        tracep->fullBit(oldp+206,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc_io_illMem));
        tracep->fullBit(oldp+207,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_xcall));
        tracep->fullBit(oldp+208,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_xret));
        tracep->fullCData(oldp+209,(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_src),5);
        tracep->fullBit(oldp+210,(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_exc_exc));
        tracep->fullIData(oldp+211,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_base),30);
        tracep->fullIData(oldp+212,((0x3fffffffU & 
                                     ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_trap)
                                       ? ((IData)(1U) 
                                          + vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_relPc)
                                       : vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_relPc))),30);
        tracep->fullBit(oldp+213,(vlTOPp->Patmos__DOT__cores_0__DOT__exc_io_ena));
        tracep->fullBit(oldp+214,(((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Cmd)) 
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
                                                         >> 1U) 
                                                        & vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Data))))))))));
        tracep->fullCData(oldp+215,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc_io_slave_M_Cmd),3);
        tracep->fullIData(oldp+216,(((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__state))
                                      ? ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__cntReg))
                                          ? (0xfffffff0U 
                                             & vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__writeMasterReg_Addr)
                                          : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__burstReadBus2_io_slave_M_Addr)
                                      : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__burstReadBus2_io_slave_M_Addr)),32);
        tracep->fullIData(oldp+217,(((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__state))
                                      ? vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__writeMasterReg_Data
                                      : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT___T_21)
                                          ? 0U : (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock_3__DOT__mem_MPORT_1_data) 
                                                   << 0x18U) 
                                                  | vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_1)))),32);
        tracep->fullBit(oldp+218,(((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__state)) 
                                   | ((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT___T_21)) 
                                      & ((0U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg)) 
                                         & ((4U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg)) 
                                            | (3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))))))));
        tracep->fullCData(oldp+219,(((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__state))
                                      ? (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__cntReg) 
                                          == (3U & 
                                              (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__writeMasterReg_Addr 
                                               >> 2U)))
                                          ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__writeMasterReg_ByteEn)
                                          : 0U) : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT___T_21)
                                                    ? 0U
                                                    : 
                                                   (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__isReserveReg)
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
        tracep->fullCData(oldp+220,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache_io_slave_S_Resp),2);
        tracep->fullBit(oldp+221,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache_io_scIO_ena_in));
        tracep->fullBit(oldp+222,((0U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))));
        tracep->fullIData(oldp+223,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT___T_3)
                                      ? ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__state))
                                          ? ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__cntReg))
                                              ? (0xfffffff0U 
                                                 & vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__writeMasterReg_Addr)
                                              : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__burstReadBus2_io_slave_M_Addr)
                                          : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__burstReadBus2_io_slave_M_Addr)
                                      : (IData)(((2U 
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
        tracep->fullBit(oldp+224,(vlTOPp->Patmos__DOT__cores_0__DOT__REG));
        tracep->fullBit(oldp+225,(vlTOPp->Patmos__DOT__cores_0__DOT__enableReg));
        tracep->fullBit(oldp+226,(((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg))
                                    ? (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg) 
                                        <= (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg))
                                        ? ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Resp)) 
                                           & (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg) 
                                               >= (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg)) 
                                              & (3U 
                                                 == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__burstCntReg))))
                                        : (3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__burstCntReg)))
                                    : (1U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg)))));
        tracep->fullBit(oldp+227,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wEna));
        tracep->fullIData(oldp+228,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wData),32);
        tracep->fullIData(oldp+229,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr),32);
        tracep->fullBit(oldp+230,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag));
        tracep->fullBit(oldp+231,((0U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg))));
        tracep->fullBit(oldp+232,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitReg));
        tracep->fullBit(oldp+233,(((6U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg)) 
                                   | ((5U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg)) 
                                      | ((4U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg)) 
                                         | ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg)) 
                                            & (3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__burstCntReg))))))));
        tracep->fullBit(oldp+234,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate));
        tracep->fullBit(oldp+235,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_memIn_wEven));
        tracep->fullBit(oldp+236,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_memIn_wOdd));
        tracep->fullSData(oldp+237,((0x3ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___T_101 
                                               >> 1U))),10);
        tracep->fullCData(oldp+238,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg),3);
        tracep->fullCData(oldp+239,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpCmdReg),3);
        tracep->fullIData(oldp+240,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpAddrReg),32);
        tracep->fullSData(oldp+241,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg),11);
        tracep->fullSData(oldp+242,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg),11);
        tracep->fullCData(oldp+243,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__burstCntReg),2);
        tracep->fullIData(oldp+244,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__callRetBaseReg),32);
        tracep->fullIData(oldp+245,((vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__callRetBaseReg 
                                     - (IData)(1U))),32);
        tracep->fullIData(oldp+246,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__addrEvenReg),32);
        tracep->fullIData(oldp+247,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__addrOddReg),32);
        tracep->fullCData(oldp+248,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Resp),2);
        tracep->fullIData(oldp+249,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Data),32);
        tracep->fullIData(oldp+250,((0x3fffffffU & 
                                     ((vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__callRetBaseReg 
                                       - (IData)(1U)) 
                                      >> 2U))),30);
        tracep->fullIData(oldp+251,(((IData)(1U) + vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___T_33)),32);
        tracep->fullCData(oldp+252,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg),4);
        tracep->fullCData(oldp+253,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg),4);
        tracep->fullSData(oldp+254,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg),11);
        tracep->fullSData(oldp+255,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg),13);
        tracep->fullSData(oldp+256,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__posReg),11);
        tracep->fullSData(oldp+257,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__wrPosReg),11);
        tracep->fullIData(oldp+258,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__callAddrReg),32);
        tracep->fullBit(oldp+259,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__selSpmReg));
        tracep->fullBit(oldp+260,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__selCacheReg));
        tracep->fullIData(oldp+261,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                      ? ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                          ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                          : 0U) : 0U)),32);
        tracep->fullBit(oldp+262,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
                                   & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                                       ? ((0U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                                          & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_178))
                                       : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_178)))));
        tracep->fullBit(oldp+263,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_0));
        tracep->fullSData(oldp+264,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                      ? ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                          ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                          : 0U) : 0U)),11);
        tracep->fullSData(oldp+265,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_0)
                                      ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                          ? ((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                              ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                              : 0U)
                                          : 0U) : 0U)),11);
        tracep->fullIData(oldp+266,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                      ? ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                          ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                          : 0U) : 0U)),32);
        tracep->fullBit(oldp+267,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
                                   & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                                       ? ((1U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                                          & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_179))
                                       : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_179)))));
        tracep->fullBit(oldp+268,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_1));
        tracep->fullSData(oldp+269,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                      ? ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                          ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                          : 0U) : 0U)),11);
        tracep->fullSData(oldp+270,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_1)
                                      ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                          ? ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                              ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                              : 0U)
                                          : 0U) : 0U)),11);
        tracep->fullIData(oldp+271,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                      ? ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                          ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                          : 0U) : 0U)),32);
        tracep->fullBit(oldp+272,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
                                   & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                                       ? ((2U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                                          & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_180))
                                       : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_180)))));
        tracep->fullBit(oldp+273,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_2));
        tracep->fullSData(oldp+274,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                      ? ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                          ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                          : 0U) : 0U)),11);
        tracep->fullSData(oldp+275,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_2)
                                      ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                          ? ((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                              ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                              : 0U)
                                          : 0U) : 0U)),11);
        tracep->fullIData(oldp+276,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                      ? ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                          ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                          : 0U) : 0U)),32);
        tracep->fullBit(oldp+277,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
                                   & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                                       ? ((3U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                                          & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_181))
                                       : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_181)))));
        tracep->fullBit(oldp+278,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_3));
        tracep->fullSData(oldp+279,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                      ? ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                          ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                          : 0U) : 0U)),11);
        tracep->fullSData(oldp+280,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_3)
                                      ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                          ? ((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                              ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                              : 0U)
                                          : 0U) : 0U)),11);
        tracep->fullIData(oldp+281,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                      ? ((4U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                          ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                          : 0U) : 0U)),32);
        tracep->fullBit(oldp+282,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
                                   & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                                       ? ((4U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                                          & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_182))
                                       : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_182)))));
        tracep->fullBit(oldp+283,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_4));
        tracep->fullSData(oldp+284,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                      ? ((4U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                          ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                          : 0U) : 0U)),11);
        tracep->fullSData(oldp+285,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_4)
                                      ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                          ? ((4U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                              ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                              : 0U)
                                          : 0U) : 0U)),11);
        tracep->fullIData(oldp+286,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                      ? ((5U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                          ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                          : 0U) : 0U)),32);
        tracep->fullBit(oldp+287,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
                                   & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                                       ? ((5U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                                          & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_183))
                                       : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_183)))));
        tracep->fullBit(oldp+288,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_5));
        tracep->fullSData(oldp+289,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                      ? ((5U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                          ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                          : 0U) : 0U)),11);
        tracep->fullSData(oldp+290,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_5)
                                      ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                          ? ((5U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                              ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                              : 0U)
                                          : 0U) : 0U)),11);
        tracep->fullIData(oldp+291,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                      ? ((6U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                          ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                          : 0U) : 0U)),32);
        tracep->fullBit(oldp+292,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
                                   & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                                       ? ((6U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                                          & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_184))
                                       : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_184)))));
        tracep->fullBit(oldp+293,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_6));
        tracep->fullSData(oldp+294,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                      ? ((6U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                          ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                          : 0U) : 0U)),11);
        tracep->fullSData(oldp+295,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_6)
                                      ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                          ? ((6U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                              ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                              : 0U)
                                          : 0U) : 0U)),11);
        tracep->fullIData(oldp+296,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                      ? ((7U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                          ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                          : 0U) : 0U)),32);
        tracep->fullBit(oldp+297,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
                                   & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                                       ? ((7U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                                          & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_185))
                                       : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_185)))));
        tracep->fullBit(oldp+298,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_7));
        tracep->fullSData(oldp+299,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                      ? ((7U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                          ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                          : 0U) : 0U)),11);
        tracep->fullSData(oldp+300,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_7)
                                      ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                          ? ((7U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                              ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                              : 0U)
                                          : 0U) : 0U)),11);
        tracep->fullIData(oldp+301,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                      ? ((8U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                          ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                          : 0U) : 0U)),32);
        tracep->fullBit(oldp+302,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
                                   & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                                       ? ((8U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                                          & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_186))
                                       : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_186)))));
        tracep->fullBit(oldp+303,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_8));
        tracep->fullSData(oldp+304,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                      ? ((8U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                          ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                          : 0U) : 0U)),11);
        tracep->fullSData(oldp+305,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_8)
                                      ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                          ? ((8U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                              ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                              : 0U)
                                          : 0U) : 0U)),11);
        tracep->fullIData(oldp+306,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                      ? ((9U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                          ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                          : 0U) : 0U)),32);
        tracep->fullBit(oldp+307,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
                                   & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                                       ? ((9U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                                          & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_187))
                                       : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_187)))));
        tracep->fullBit(oldp+308,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_9));
        tracep->fullSData(oldp+309,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                      ? ((9U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                          ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                          : 0U) : 0U)),11);
        tracep->fullSData(oldp+310,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_9)
                                      ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                          ? ((9U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                              ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                              : 0U)
                                          : 0U) : 0U)),11);
        tracep->fullIData(oldp+311,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                      ? ((0xaU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                          ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                          : 0U) : 0U)),32);
        tracep->fullBit(oldp+312,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
                                   & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                                       ? ((0xaU != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                                          & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_188))
                                       : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_188)))));
        tracep->fullBit(oldp+313,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_10));
        tracep->fullSData(oldp+314,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                      ? ((0xaU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                          ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                          : 0U) : 0U)),11);
        tracep->fullSData(oldp+315,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_10)
                                      ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                          ? ((0xaU 
                                              == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                              ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                              : 0U)
                                          : 0U) : 0U)),11);
        tracep->fullIData(oldp+316,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                      ? ((0xbU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                          ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                          : 0U) : 0U)),32);
        tracep->fullBit(oldp+317,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
                                   & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                                       ? ((0xbU != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                                          & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_189))
                                       : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_189)))));
        tracep->fullBit(oldp+318,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_11));
        tracep->fullSData(oldp+319,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                      ? ((0xbU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                          ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                          : 0U) : 0U)),11);
        tracep->fullSData(oldp+320,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_11)
                                      ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                          ? ((0xbU 
                                              == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                              ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                              : 0U)
                                          : 0U) : 0U)),11);
        tracep->fullIData(oldp+321,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                      ? ((0xcU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                          ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                          : 0U) : 0U)),32);
        tracep->fullBit(oldp+322,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
                                   & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                                       ? ((0xcU != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                                          & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_190))
                                       : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_190)))));
        tracep->fullBit(oldp+323,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_12));
        tracep->fullSData(oldp+324,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                      ? ((0xcU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                          ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                          : 0U) : 0U)),11);
        tracep->fullSData(oldp+325,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_12)
                                      ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                          ? ((0xcU 
                                              == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                              ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                              : 0U)
                                          : 0U) : 0U)),11);
        tracep->fullIData(oldp+326,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                      ? ((0xdU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                          ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                          : 0U) : 0U)),32);
        tracep->fullBit(oldp+327,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
                                   & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                                       ? ((0xdU != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                                          & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_191))
                                       : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_191)))));
        tracep->fullBit(oldp+328,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_13));
        tracep->fullSData(oldp+329,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                      ? ((0xdU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                          ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                          : 0U) : 0U)),11);
        tracep->fullSData(oldp+330,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_13)
                                      ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                          ? ((0xdU 
                                              == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                              ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                              : 0U)
                                          : 0U) : 0U)),11);
        tracep->fullIData(oldp+331,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                      ? ((0xeU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                          ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                          : 0U) : 0U)),32);
        tracep->fullBit(oldp+332,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
                                   & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                                       ? ((0xeU != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                                          & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_192))
                                       : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_192)))));
        tracep->fullBit(oldp+333,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_14));
        tracep->fullSData(oldp+334,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                      ? ((0xeU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                          ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                          : 0U) : 0U)),11);
        tracep->fullSData(oldp+335,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_14)
                                      ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                          ? ((0xeU 
                                              == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                              ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                              : 0U)
                                          : 0U) : 0U)),11);
        tracep->fullIData(oldp+336,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                      ? ((0xfU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                          ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr
                                          : 0U) : 0U)),32);
        tracep->fullBit(oldp+337,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_invalidate)) 
                                   & (VL_GTS_III(1,13,13, 0U, (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__freeSpaceReg))
                                       ? ((0xfU != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextTagReg)) 
                                          & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_193))
                                       : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT___GEN_193)))));
        tracep->fullBit(oldp+338,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_15));
        tracep->fullSData(oldp+339,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                      ? ((0xfU == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                          ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                          : 0U) : 0U)),11);
        tracep->fullSData(oldp+340,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitVec_15)
                                      ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wTag)
                                          ? ((0xfU 
                                              == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextIndexReg))
                                              ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__nextPosReg)
                                              : 0U)
                                          : 0U) : 0U)),11);
        tracep->fullBit(oldp+341,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hit));
        tracep->fullSData(oldp+342,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__relBase),14);
        tracep->fullIData(oldp+343,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__relPc),32);
        tracep->fullSData(oldp+344,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_0),12);
        tracep->fullSData(oldp+345,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_1),12);
        tracep->fullSData(oldp+346,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_2),12);
        tracep->fullSData(oldp+347,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_3),12);
        tracep->fullSData(oldp+348,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_4),12);
        tracep->fullSData(oldp+349,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_5),12);
        tracep->fullSData(oldp+350,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_6),12);
        tracep->fullSData(oldp+351,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_7),12);
        tracep->fullSData(oldp+352,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_8),12);
        tracep->fullSData(oldp+353,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_9),12);
        tracep->fullSData(oldp+354,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_10),12);
        tracep->fullSData(oldp+355,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_11),12);
        tracep->fullSData(oldp+356,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_12),12);
        tracep->fullSData(oldp+357,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_13),12);
        tracep->fullSData(oldp+358,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_14),12);
        tracep->fullSData(oldp+359,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__sizeVec_15),12);
        tracep->fullBit(oldp+360,((1U & vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl_io_ctrlrepl_wAddr)));
        tracep->fullIData(oldp+361,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__instrEvenReg),32);
        tracep->fullIData(oldp+362,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__instrOddReg),32);
        tracep->fullSData(oldp+363,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheEven__DOT__rdAddrReg),10);
        tracep->fullBit(oldp+364,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheEven__DOT__REG));
        tracep->fullSData(oldp+365,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheEven__DOT__REG_1),10);
        tracep->fullIData(oldp+366,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheEven__DOT__REG_2),32);
        tracep->fullSData(oldp+367,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheOdd__DOT__rdAddrReg),10);
        tracep->fullBit(oldp+368,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheOdd__DOT__REG));
        tracep->fullSData(oldp+369,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheOdd__DOT__REG_1),10);
        tracep->fullIData(oldp+370,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheOdd__DOT__REG_2),32);
        tracep->fullIData(oldp+371,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__MemBlock__DOT__mem_MPORT_1_data),32);
        tracep->fullCData(oldp+372,((0x7fU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                              >> 3U))),7);
        tracep->fullBit(oldp+373,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___T_2) 
                                   & (~ (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                         >> 2U)))));
        tracep->fullIData(oldp+374,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__MemBlock_1__DOT__mem_MPORT_1_data),32);
        tracep->fullBit(oldp+375,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT___T_2) 
                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                      >> 2U))));
        tracep->fullIData(oldp+376,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEvenReg),30);
        tracep->fullIData(oldp+377,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOddReg),30);
        tracep->fullBit(oldp+378,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__selSpm));
        tracep->fullIData(oldp+379,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__instr_a_ispm),32);
        tracep->fullBit(oldp+380,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__selCache));
        tracep->fullIData(oldp+381,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__data_even),32);
        tracep->fullIData(oldp+382,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__data_odd),32);
        tracep->fullIData(oldp+383,(((1U & vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcReg)
                                      ? vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__data_odd
                                      : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__data_even)),32);
        tracep->fullIData(oldp+384,(((1U & vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcReg)
                                      ? vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__MemBlock__DOT__mem_MPORT_1_data
                                      : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__MemBlock_1__DOT__mem_MPORT_1_data)),32);
        tracep->fullIData(oldp+385,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__baseReg),32);
        tracep->fullSData(oldp+386,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__relBaseReg),11);
        tracep->fullIData(oldp+387,(((1U & vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcReg)
                                      ? vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__data_even
                                      : vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__data_odd)),32);
        tracep->fullIData(oldp+388,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__relPc),30);
        tracep->fullCData(oldp+389,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__MemBlock__DOT__rdAddrReg),7);
        tracep->fullCData(oldp+390,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__MemBlock_1__DOT__rdAddrReg),7);
        tracep->fullIData(oldp+391,(((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_0))
                                      ? 0U : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_0_1)
                                               ? vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__wrReg_1_data
                                               : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_0_0)
                                                   ? vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__wrReg_0_data
                                                   : 
                                                  vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf
                                                  [vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_0])))),32);
        tracep->fullIData(oldp+392,(((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_1))
                                      ? 0U : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_1_1)
                                               ? vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__wrReg_1_data
                                               : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_1_0)
                                                   ? vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__wrReg_0_data
                                                   : 
                                                  vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf
                                                  [vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_1])))),32);
        tracep->fullIData(oldp+393,(((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_2))
                                      ? 0U : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_2_1)
                                               ? vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__wrReg_1_data
                                               : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_2_0)
                                                   ? vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__wrReg_0_data
                                                   : 
                                                  vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf
                                                  [vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_2])))),32);
        tracep->fullIData(oldp+394,(((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_3))
                                      ? 0U : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_3_1)
                                               ? vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__wrReg_1_data
                                               : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_3_0)
                                                   ? vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__wrReg_0_data
                                                   : 
                                                  vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf
                                                  [vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_3])))),32);
        tracep->fullIData(oldp+395,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a),32);
        tracep->fullIData(oldp+396,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b),32);
        tracep->fullIData(oldp+397,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_pc),30);
        tracep->fullIData(oldp+398,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_base),30);
        tracep->fullIData(oldp+399,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_reloc),32);
        tracep->fullIData(oldp+400,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_relPc),30);
        tracep->fullBit(oldp+401,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__dual));
        tracep->fullSData(oldp+402,((0xfffU & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a)),12);
        tracep->fullCData(oldp+403,((7U & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                           >> 0x16U))),3);
        tracep->fullBit(oldp+404,((1U & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                         >> 3U))));
        tracep->fullBit(oldp+405,((1U & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a)));
        tracep->fullSData(oldp+406,((0xfffU & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b)),12);
        tracep->fullCData(oldp+407,((7U & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                           >> 0x16U))),3);
        tracep->fullBit(oldp+408,(((9U == (0x1fU & 
                                           (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                            >> 0x16U)))
                                    ? ((2U == (7U & 
                                               (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                >> 4U))) 
                                       | ((3U == (7U 
                                                  & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                                     >> 4U))) 
                                          | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_135)))
                                    : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT___GEN_135))));
        tracep->fullBit(oldp+409,((1U & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b 
                                         >> 3U))));
        tracep->fullBit(oldp+410,((1U & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_b)));
        tracep->fullCData(oldp+411,((7U & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                           >> 9U))),3);
        tracep->fullCData(oldp+412,((3U & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                           >> 7U))),2);
        tracep->fullCData(oldp+413,((7U & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                           >> 0x13U))),3);
        tracep->fullCData(oldp+414,((3U & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                           >> 0x11U))),2);
        tracep->fullCData(oldp+415,((0xfU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                             >> 0x12U))),4);
        tracep->fullIData(oldp+416,((0x3ffffU & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a)),18);
        tracep->fullIData(oldp+417,((0xffffcU & (vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a 
                                                 << 2U))),21);
        tracep->fullBit(oldp+418,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__longImm));
        tracep->fullBit(oldp+419,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__isSTC));
        tracep->fullBit(oldp+420,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__isMem));
        tracep->fullCData(oldp+421,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__shamt),2);
        tracep->fullBit(oldp+422,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__isStack));
        tracep->fullBit(oldp+423,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decoded_0));
        tracep->fullCData(oldp+424,((0x7fU & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a)),7);
        tracep->fullSData(oldp+425,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__addrImm),10);
        tracep->fullIData(oldp+426,((0x3fffffU & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a)),22);
        tracep->fullCData(oldp+427,(((0x200000U & vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__decReg_instr_a)
                                      ? 0xffU : 0U)),8);
        tracep->fullCData(oldp+428,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__inDelaySlot),2);
        tracep->fullIData(oldp+429,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[0]),32);
        tracep->fullIData(oldp+430,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[1]),32);
        tracep->fullIData(oldp+431,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[2]),32);
        tracep->fullIData(oldp+432,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[3]),32);
        tracep->fullIData(oldp+433,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[4]),32);
        tracep->fullIData(oldp+434,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[5]),32);
        tracep->fullIData(oldp+435,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[6]),32);
        tracep->fullIData(oldp+436,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[7]),32);
        tracep->fullIData(oldp+437,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[8]),32);
        tracep->fullIData(oldp+438,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[9]),32);
        tracep->fullIData(oldp+439,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[10]),32);
        tracep->fullIData(oldp+440,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[11]),32);
        tracep->fullIData(oldp+441,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[12]),32);
        tracep->fullIData(oldp+442,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[13]),32);
        tracep->fullIData(oldp+443,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[14]),32);
        tracep->fullIData(oldp+444,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[15]),32);
        tracep->fullIData(oldp+445,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[16]),32);
        tracep->fullIData(oldp+446,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[17]),32);
        tracep->fullIData(oldp+447,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[18]),32);
        tracep->fullIData(oldp+448,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[19]),32);
        tracep->fullIData(oldp+449,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[20]),32);
        tracep->fullIData(oldp+450,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[21]),32);
        tracep->fullIData(oldp+451,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[22]),32);
        tracep->fullIData(oldp+452,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[23]),32);
        tracep->fullIData(oldp+453,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[24]),32);
        tracep->fullIData(oldp+454,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[25]),32);
        tracep->fullIData(oldp+455,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[26]),32);
        tracep->fullIData(oldp+456,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[27]),32);
        tracep->fullIData(oldp+457,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[28]),32);
        tracep->fullIData(oldp+458,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[29]),32);
        tracep->fullIData(oldp+459,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[30]),32);
        tracep->fullIData(oldp+460,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf[31]),32);
        tracep->fullIData(oldp+461,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf
                                    [vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_0]),32);
        tracep->fullCData(oldp+462,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_0),5);
        tracep->fullIData(oldp+463,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf
                                    [vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_1]),32);
        tracep->fullCData(oldp+464,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_1),5);
        tracep->fullIData(oldp+465,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf
                                    [vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_2]),32);
        tracep->fullCData(oldp+466,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_2),5);
        tracep->fullIData(oldp+467,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__rf
                                    [vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_3]),32);
        tracep->fullCData(oldp+468,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__addrReg_3),5);
        tracep->fullIData(oldp+469,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__wrReg_0_data),32);
        tracep->fullIData(oldp+470,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__wrReg_1_data),32);
        tracep->fullBit(oldp+471,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_0_0));
        tracep->fullBit(oldp+472,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_0_1));
        tracep->fullBit(oldp+473,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_1_0));
        tracep->fullBit(oldp+474,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_1_1));
        tracep->fullBit(oldp+475,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_2_0));
        tracep->fullBit(oldp+476,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_2_1));
        tracep->fullBit(oldp+477,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_3_0));
        tracep->fullBit(oldp+478,(vlTOPp->Patmos__DOT__cores_0__DOT__decode__DOT__rf__DOT__fwReg_3_1));
        tracep->fullCData(oldp+479,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_pred_0),4);
        tracep->fullCData(oldp+480,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_pred_1),4);
        tracep->fullCData(oldp+481,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func),4);
        tracep->fullBit(oldp+482,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_isMul));
        tracep->fullBit(oldp+483,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_isCmp));
        tracep->fullBit(oldp+484,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_isPred));
        tracep->fullBit(oldp+485,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_isBCpy));
        tracep->fullBit(oldp+486,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_isMTS));
        tracep->fullBit(oldp+487,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_isMFS));
        tracep->fullCData(oldp+488,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_func),4);
        tracep->fullBit(oldp+489,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_isCmp));
        tracep->fullBit(oldp+490,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_isPred));
        tracep->fullBit(oldp+491,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_isBCpy));
        tracep->fullBit(oldp+492,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_isMTS));
        tracep->fullBit(oldp+493,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_1_isMFS));
        tracep->fullCData(oldp+494,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_0_func),2);
        tracep->fullCData(oldp+495,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_0_dest),3);
        tracep->fullCData(oldp+496,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_0_s1Addr),4);
        tracep->fullCData(oldp+497,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_0_s2Addr),4);
        tracep->fullCData(oldp+498,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_1_func),2);
        tracep->fullCData(oldp+499,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_1_dest),3);
        tracep->fullCData(oldp+500,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_1_s1Addr),4);
        tracep->fullCData(oldp+501,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_predOp_1_s2Addr),4);
        tracep->fullBit(oldp+502,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_jmpOp_branch));
        tracep->fullIData(oldp+503,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_jmpOp_target),30);
        tracep->fullIData(oldp+504,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_jmpOp_reloc),32);
        tracep->fullBit(oldp+505,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_load));
        tracep->fullBit(oldp+506,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_store));
        tracep->fullCData(oldp+507,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_stackOp),3);
        tracep->fullIData(oldp+508,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_rsData_0),32);
        tracep->fullIData(oldp+509,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_rsData_1),32);
        tracep->fullIData(oldp+510,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_rsData_2),32);
        tracep->fullIData(oldp+511,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_rsData_3),32);
        tracep->fullIData(oldp+512,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_immVal_0),32);
        tracep->fullIData(oldp+513,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_immVal_1),32);
        tracep->fullBit(oldp+514,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_immOp_0));
        tracep->fullBit(oldp+515,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_wrRd_0));
        tracep->fullBit(oldp+516,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_wrRd_1));
        tracep->fullIData(oldp+517,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_callAddr),32);
        tracep->fullBit(oldp+518,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_call));
        tracep->fullBit(oldp+519,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_ret));
        tracep->fullBit(oldp+520,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_brcf));
        tracep->fullBit(oldp+521,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_trap));
        tracep->fullBit(oldp+522,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_xcall));
        tracep->fullBit(oldp+523,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_xret));
        tracep->fullCData(oldp+524,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__fwReg_0),3);
        tracep->fullCData(oldp+525,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__fwReg_1),3);
        tracep->fullCData(oldp+526,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__fwReg_2),3);
        tracep->fullCData(oldp+527,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__fwReg_3),3);
        tracep->fullBit(oldp+528,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__fwSrcReg_0));
        tracep->fullBit(oldp+529,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__fwSrcReg_1));
        tracep->fullBit(oldp+530,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__fwSrcReg_2));
        tracep->fullBit(oldp+531,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__fwSrcReg_3));
        tracep->fullIData(oldp+532,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__memResultDataReg_0),32);
        tracep->fullIData(oldp+533,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__memResultDataReg_1),32);
        tracep->fullIData(oldp+534,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exResultDataReg_0),32);
        tracep->fullIData(oldp+535,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exResultDataReg_1),32);
        tracep->fullIData(oldp+536,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_0),32);
        tracep->fullIData(oldp+537,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_2),32);
        tracep->fullIData(oldp+538,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_3),32);
        tracep->fullBit(oldp+539,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_1));
        tracep->fullBit(oldp+540,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_2));
        tracep->fullBit(oldp+541,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_3));
        tracep->fullBit(oldp+542,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_4));
        tracep->fullBit(oldp+543,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_5));
        tracep->fullBit(oldp+544,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_6));
        tracep->fullBit(oldp+545,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__predReg_7));
        tracep->fullBit(oldp+546,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__doExecute_0));
        tracep->fullBit(oldp+547,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__doExecute_1));
        tracep->fullIData(oldp+548,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__retBaseReg),32);
        tracep->fullIData(oldp+549,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__retOffReg),32);
        tracep->fullBit(oldp+550,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__saveRetOff));
        tracep->fullBit(oldp+551,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__saveND));
        tracep->fullIData(oldp+552,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__excBaseReg),32);
        tracep->fullIData(oldp+553,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__excOffReg),32);
        tracep->fullIData(oldp+554,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__mulLoReg),32);
        tracep->fullIData(oldp+555,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__mulHiReg),32);
        tracep->fullIData(oldp+556,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__mulLLReg),32);
        tracep->fullQData(oldp+557,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__mulLHReg),33);
        tracep->fullQData(oldp+559,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__mulHLReg),33);
        tracep->fullIData(oldp+561,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__mulHHReg),32);
        tracep->fullBit(oldp+562,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__mulPipeReg));
        tracep->fullBit(oldp+563,(((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func)) 
                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_0 
                                      >> 0x1fU))));
        tracep->fullSData(oldp+564,((0xffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_0 
                                                >> 0x10U))),16);
        tracep->fullBit(oldp+565,(((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_aluOp_0_func)) 
                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data 
                                      >> 0x1fU))));
        tracep->fullSData(oldp+566,((0xffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data 
                                                >> 0x10U))),16);
        tracep->fullIData(oldp+567,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_immOp_0)
                                      ? 0U : vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data)),32);
        tracep->fullIData(oldp+568,((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_call) 
                                      | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_xcall))
                                      ? 0U : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_brcf)
                                               ? ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_immOp_0)
                                                   ? 0U
                                                   : vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data)
                                               : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_xret)
                                                   ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__excOffReg
                                                   : vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__retOffReg)))),32);
        tracep->fullIData(oldp+569,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_immOp_0)
                                      ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_callAddr
                                      : vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__op_0)),32);
        tracep->fullIData(oldp+570,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__callRetBase),32);
        tracep->fullIData(oldp+571,(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__target),32);
        tracep->fullIData(oldp+572,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_rd_0_data),32);
        tracep->fullBit(oldp+573,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_load));
        tracep->fullBit(oldp+574,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_hword));
        tracep->fullBit(oldp+575,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_byte));
        tracep->fullBit(oldp+576,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_zext));
        tracep->fullCData(oldp+577,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_typ),2);
        tracep->fullIData(oldp+578,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_addr),32);
        tracep->fullBit(oldp+579,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_call));
        tracep->fullBit(oldp+580,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_ret));
        tracep->fullBit(oldp+581,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_brcf));
        tracep->fullBit(oldp+582,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_trap));
        tracep->fullCData(oldp+583,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_xsrc),5);
        tracep->fullBit(oldp+584,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_illOp));
        tracep->fullBit(oldp+585,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_nonDelayed));
        tracep->fullIData(oldp+586,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_relPc),30);
        tracep->fullBit(oldp+587,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___T_3) 
                                   | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc_io_illMem))));
        tracep->fullBit(oldp+588,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__illMemReg));
        tracep->fullBit(oldp+589,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__mayStallReg));
        tracep->fullCData(oldp+590,((0xffU & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_byte)
                                               ? ((0U 
                                                   == 
                                                   (3U 
                                                    & vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr))
                                                   ? vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_data
                                                   : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_58))
                                               : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___GEN_58)))),8);
        tracep->fullCData(oldp+591,((0xffU & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_byte)
                                               ? ((0U 
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
        tracep->fullCData(oldp+592,((0xffU & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_byte)
                                               ? ((0U 
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
        tracep->fullCData(oldp+593,((0xffU & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_memOp_byte)
                                               ? ((0U 
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
        tracep->fullCData(oldp+594,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__cmd),3);
        tracep->fullIData(oldp+595,((0x3fffffffU & 
                                     (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                      >> 2U))),30);
        tracep->fullSData(oldp+596,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__lo),16);
        tracep->fullSData(oldp+597,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__hi_1),16);
        tracep->fullCData(oldp+598,((0xffU & vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___T_63)),8);
        tracep->fullCData(oldp+599,((0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___T_63 
                                              >> 8U))),8);
        tracep->fullCData(oldp+600,((0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___T_63 
                                              >> 0x10U))),8);
        tracep->fullCData(oldp+601,((0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___T_63 
                                              >> 0x18U))),8);
        tracep->fullSData(oldp+602,((0xffffU & vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___T_63)),16);
        tracep->fullSData(oldp+603,((0xffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___T_63 
                                                >> 0x10U))),16);
        tracep->fullCData(oldp+604,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__bval),8);
        tracep->fullSData(oldp+605,(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__hval),16);
        tracep->fullIData(oldp+606,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_hword)
                                      ? ((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_zext)
                                            ? 0U : 
                                           ((0x8000U 
                                             & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__hval))
                                             ? 0xffffU
                                             : 0U)) 
                                          << 0x10U) 
                                         | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__hval))
                                      : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_byte)
                                          ? ((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__memReg_mem_zext)
                                                ? 0U
                                                : (
                                                   (0x80U 
                                                    & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__bval))
                                                    ? 0xffffffU
                                                    : 0U)) 
                                              << 8U) 
                                             | (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT__bval))
                                          : vlTOPp->Patmos__DOT__cores_0__DOT__memory__DOT___T_63))),32);
        tracep->fullIData(oldp+607,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[0]),32);
        tracep->fullIData(oldp+608,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[1]),32);
        tracep->fullIData(oldp+609,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[2]),32);
        tracep->fullIData(oldp+610,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[3]),32);
        tracep->fullIData(oldp+611,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[4]),32);
        tracep->fullIData(oldp+612,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[5]),32);
        tracep->fullIData(oldp+613,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[6]),32);
        tracep->fullIData(oldp+614,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[7]),32);
        tracep->fullIData(oldp+615,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[8]),32);
        tracep->fullIData(oldp+616,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[9]),32);
        tracep->fullIData(oldp+617,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[10]),32);
        tracep->fullIData(oldp+618,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[11]),32);
        tracep->fullIData(oldp+619,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[12]),32);
        tracep->fullIData(oldp+620,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[13]),32);
        tracep->fullIData(oldp+621,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[14]),32);
        tracep->fullIData(oldp+622,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[15]),32);
        tracep->fullIData(oldp+623,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[16]),32);
        tracep->fullIData(oldp+624,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[17]),32);
        tracep->fullIData(oldp+625,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[18]),32);
        tracep->fullIData(oldp+626,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[19]),32);
        tracep->fullIData(oldp+627,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[20]),32);
        tracep->fullIData(oldp+628,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[21]),32);
        tracep->fullIData(oldp+629,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[22]),32);
        tracep->fullIData(oldp+630,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[23]),32);
        tracep->fullIData(oldp+631,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[24]),32);
        tracep->fullIData(oldp+632,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[25]),32);
        tracep->fullIData(oldp+633,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[26]),32);
        tracep->fullIData(oldp+634,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[27]),32);
        tracep->fullIData(oldp+635,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[28]),32);
        tracep->fullIData(oldp+636,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[29]),32);
        tracep->fullIData(oldp+637,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[30]),32);
        tracep->fullIData(oldp+638,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec[31]),32);
        tracep->fullIData(oldp+639,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vec
                                    [(0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                               >> 2U))]),32);
        tracep->fullCData(oldp+640,((0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr 
                                              >> 2U))),5);
        tracep->fullIData(oldp+641,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Data),32);
        tracep->fullBit(oldp+642,(((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Cmd)) 
                                   & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT___GEN_227))));
        tracep->fullIData(oldp+643,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[0]),32);
        tracep->fullIData(oldp+644,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[1]),32);
        tracep->fullIData(oldp+645,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[2]),32);
        tracep->fullIData(oldp+646,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[3]),32);
        tracep->fullIData(oldp+647,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[4]),32);
        tracep->fullIData(oldp+648,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[5]),32);
        tracep->fullIData(oldp+649,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[6]),32);
        tracep->fullIData(oldp+650,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[7]),32);
        tracep->fullIData(oldp+651,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[8]),32);
        tracep->fullIData(oldp+652,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[9]),32);
        tracep->fullIData(oldp+653,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[10]),32);
        tracep->fullIData(oldp+654,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[11]),32);
        tracep->fullIData(oldp+655,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[12]),32);
        tracep->fullIData(oldp+656,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[13]),32);
        tracep->fullIData(oldp+657,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[14]),32);
        tracep->fullIData(oldp+658,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[15]),32);
        tracep->fullIData(oldp+659,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[16]),32);
        tracep->fullIData(oldp+660,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[17]),32);
        tracep->fullIData(oldp+661,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[18]),32);
        tracep->fullIData(oldp+662,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[19]),32);
        tracep->fullIData(oldp+663,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[20]),32);
        tracep->fullIData(oldp+664,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[21]),32);
        tracep->fullIData(oldp+665,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[22]),32);
        tracep->fullIData(oldp+666,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[23]),32);
        tracep->fullIData(oldp+667,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[24]),32);
        tracep->fullIData(oldp+668,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[25]),32);
        tracep->fullIData(oldp+669,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[26]),32);
        tracep->fullIData(oldp+670,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[27]),32);
        tracep->fullIData(oldp+671,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[28]),32);
        tracep->fullIData(oldp+672,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[29]),32);
        tracep->fullIData(oldp+673,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[30]),32);
        tracep->fullIData(oldp+674,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__vecDup[31]),32);
        tracep->fullCData(oldp+675,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Cmd),3);
        tracep->fullIData(oldp+676,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__masterReg_Addr),32);
        tracep->fullIData(oldp+677,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__statusReg),32);
        tracep->fullIData(oldp+678,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__maskReg),32);
        tracep->fullIData(oldp+679,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__sourceReg),32);
        tracep->fullBit(oldp+680,((1U & vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__statusReg)));
        tracep->fullBit(oldp+681,((1U & (vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__statusReg 
                                         >> 1U))));
        tracep->fullBit(oldp+682,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__sleepReg));
        tracep->fullBit(oldp+683,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_0));
        tracep->fullBit(oldp+684,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_1));
        tracep->fullBit(oldp+685,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_2));
        tracep->fullBit(oldp+686,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_3));
        tracep->fullBit(oldp+687,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_4));
        tracep->fullBit(oldp+688,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_5));
        tracep->fullBit(oldp+689,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_6));
        tracep->fullBit(oldp+690,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_7));
        tracep->fullBit(oldp+691,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_8));
        tracep->fullBit(oldp+692,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_9));
        tracep->fullBit(oldp+693,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_10));
        tracep->fullBit(oldp+694,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_11));
        tracep->fullBit(oldp+695,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_12));
        tracep->fullBit(oldp+696,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_13));
        tracep->fullBit(oldp+697,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_14));
        tracep->fullBit(oldp+698,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_15));
        tracep->fullBit(oldp+699,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_16));
        tracep->fullBit(oldp+700,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_17));
        tracep->fullBit(oldp+701,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_18));
        tracep->fullBit(oldp+702,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_19));
        tracep->fullBit(oldp+703,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_20));
        tracep->fullBit(oldp+704,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_21));
        tracep->fullBit(oldp+705,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_22));
        tracep->fullBit(oldp+706,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_23));
        tracep->fullBit(oldp+707,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_24));
        tracep->fullBit(oldp+708,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_25));
        tracep->fullBit(oldp+709,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_26));
        tracep->fullBit(oldp+710,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_27));
        tracep->fullBit(oldp+711,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_28));
        tracep->fullBit(oldp+712,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_29));
        tracep->fullBit(oldp+713,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_30));
        tracep->fullBit(oldp+714,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPendReg_31));
        tracep->fullBit(oldp+715,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_16));
        tracep->fullBit(oldp+716,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_17));
        tracep->fullBit(oldp+717,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_18));
        tracep->fullBit(oldp+718,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_19));
        tracep->fullBit(oldp+719,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_20));
        tracep->fullBit(oldp+720,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPendReg_21));
        tracep->fullBit(oldp+721,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__REG));
        tracep->fullBit(oldp+722,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPend_16));
        tracep->fullBit(oldp+723,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__REG_1));
        tracep->fullBit(oldp+724,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPend_17));
        tracep->fullBit(oldp+725,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__REG_2));
        tracep->fullBit(oldp+726,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPend_18));
        tracep->fullBit(oldp+727,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__REG_3));
        tracep->fullBit(oldp+728,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPend_19));
        tracep->fullBit(oldp+729,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__REG_4));
        tracep->fullBit(oldp+730,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPend_20));
        tracep->fullBit(oldp+731,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__REG_5));
        tracep->fullBit(oldp+732,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intrPend_21));
        tracep->fullBit(oldp+733,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_0));
        tracep->fullBit(oldp+734,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_1));
        tracep->fullBit(oldp+735,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_2));
        tracep->fullBit(oldp+736,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_3));
        tracep->fullBit(oldp+737,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_4));
        tracep->fullBit(oldp+738,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_5));
        tracep->fullBit(oldp+739,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_6));
        tracep->fullBit(oldp+740,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_7));
        tracep->fullBit(oldp+741,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_8));
        tracep->fullBit(oldp+742,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_9));
        tracep->fullBit(oldp+743,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_10));
        tracep->fullBit(oldp+744,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_11));
        tracep->fullBit(oldp+745,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_12));
        tracep->fullBit(oldp+746,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_13));
        tracep->fullBit(oldp+747,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_14));
        tracep->fullBit(oldp+748,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_15));
        tracep->fullBit(oldp+749,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_16));
        tracep->fullBit(oldp+750,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_17));
        tracep->fullBit(oldp+751,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_18));
        tracep->fullBit(oldp+752,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_19));
        tracep->fullBit(oldp+753,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_20));
        tracep->fullBit(oldp+754,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_21));
        tracep->fullBit(oldp+755,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_22));
        tracep->fullBit(oldp+756,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_23));
        tracep->fullBit(oldp+757,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_24));
        tracep->fullBit(oldp+758,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_25));
        tracep->fullBit(oldp+759,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_26));
        tracep->fullBit(oldp+760,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_27));
        tracep->fullBit(oldp+761,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_28));
        tracep->fullBit(oldp+762,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_29));
        tracep->fullBit(oldp+763,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_30));
        tracep->fullBit(oldp+764,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_31));
        tracep->fullCData(oldp+765,((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_7) 
                                      << 7U) | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_6) 
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
        tracep->fullSData(oldp+766,((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_15) 
                                      << 0xfU) | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_14) 
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
        tracep->fullCData(oldp+767,((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_23) 
                                      << 7U) | (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__excPend_22) 
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
        tracep->fullBit(oldp+768,(vlTOPp->Patmos__DOT__cores_0__DOT__exc__DOT__intr));
        tracep->fullCData(oldp+769,((((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_AddrSpace)) 
                                      | (1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_Cmd)))
                                      ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_Cmd)
                                      : 0U)),3);
        tracep->fullCData(oldp+770,(((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__stateReg))
                                      ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__slaveReg_Resp)
                                      : (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagValid) 
                                          & (2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Cmd)))
                                          ? 1U : 0U))),2);
        tracep->fullIData(oldp+771,(((3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__stateReg))
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
                                                  [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__rdAddrReg])))))),32);
        tracep->fullCData(oldp+772,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm_io_slave_M_Cmd),3);
        tracep->fullIData(oldp+773,((0xfffffff0U & vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr)),32);
        tracep->fullCData(oldp+774,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm_io_slave_S_Resp),2);
        tracep->fullCData(oldp+775,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc_io_fromCPU_M_Cmd),3);
        tracep->fullCData(oldp+776,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__responseToCPUReg),2);
        tracep->fullIData(oldp+777,((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock_3__DOT__mem_MPORT_1_data) 
                                      << 0x18U) | vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_1)),32);
        tracep->fullCData(oldp+778,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc_io_toMemory_M_Cmd),3);
        tracep->fullIData(oldp+779,((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg)),32);
        tracep->fullBit(oldp+780,(((0U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg)) 
                                   & ((4U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg)) 
                                      | (3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))))));
        tracep->fullCData(oldp+781,((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__isReserveReg)
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
        tracep->fullCData(oldp+782,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc_io_toMemory_S_Resp),2);
        tracep->fullCData(oldp+783,((((2U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_AddrSpace)) 
                                      & (0U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_AddrSpace)))
                                      ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_Cmd)
                                      : 0U)),3);
        tracep->fullCData(oldp+784,(((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__stateReg))
                                      ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__slaveReg_Resp)
                                      : 0U)),2);
        tracep->fullIData(oldp+785,(((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__stateReg))
                                      ? vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__slaveReg_Data
                                      : 0U)),32);
        tracep->fullCData(oldp+786,(((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__masterReg_Cmd))
                                      ? 2U : 0U)),3);
        tracep->fullIData(oldp+787,((0xfffffff0U & vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__masterReg_Addr)),32);
        tracep->fullCData(oldp+788,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp_io_slave_S_Resp),2);
        tracep->fullCData(oldp+789,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__burstReadBus1_io_slave_M_Cmd),3);
        tracep->fullIData(oldp+790,((((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm_io_slave_M_Cmd)) 
                                      & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT___T_14))
                                      ? (0xfffffff0U 
                                         & vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__masterReg_Addr)
                                      : (0xfffffff0U 
                                         & vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr))),32);
        tracep->fullCData(oldp+791,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__burstReadBus1_io_master_S_Resp),2);
        tracep->fullCData(oldp+792,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__burstReadBus2_io_slave_M_Cmd),3);
        tracep->fullIData(oldp+793,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__burstReadBus2_io_slave_M_Addr),32);
        tracep->fullIData(oldp+794,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT___T_21)
                                      ? 0U : (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock_3__DOT__mem_MPORT_1_data) 
                                               << 0x18U) 
                                              | vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_1))),32);
        tracep->fullBit(oldp+795,(((~ (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT___T_21)) 
                                   & ((0U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg)) 
                                      & ((4U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg)) 
                                         | (3U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg)))))));
        tracep->fullCData(oldp+796,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT___T_21)
                                      ? 0U : (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__isReserveReg)
                                                ? (
                                                   ((QData)((IData)(
                                                                    ((IData)(0x800U) 
                                                                     + vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stackTopReg))) 
                                                    <= vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg) 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg 
                                                      < (QData)((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__memTopReg))))
                                                : (
                                                   ((QData)((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__newMemTopReg)) 
                                                    <= vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg) 
                                                   & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg 
                                                      < (QData)((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__memTopReg)))))
                                               ? 0xfU
                                               : 0U))),4);
        tracep->fullCData(oldp+797,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc_io_readMaster_S_Resp),2);
        tracep->fullCData(oldp+798,(((0U != (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_AddrSpace))
                                      ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_Cmd)
                                      : 0U)),3);
        tracep->fullCData(oldp+799,(((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__state))
                                      ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache_io_slave_S_Resp)
                                      : 0U)),2);
        tracep->fullBit(oldp+800,((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_AddrSpace))));
        tracep->fullBit(oldp+801,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__selDCReg));
        tracep->fullBit(oldp+802,((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_AddrSpace))));
        tracep->fullBit(oldp+803,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__selSCReg));
        tracep->fullBit(oldp+804,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__REG));
        tracep->fullBit(oldp+805,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__REG_1));
        tracep->fullCData(oldp+806,((0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                              >> 4U))),8);
        tracep->fullIData(oldp+807,((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagMem__DOT__REG) 
                                      & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagMem__DOT__REG_1) 
                                         == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagMem__DOT__rdAddrReg)))
                                      ? vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagMem__DOT__REG_2
                                      : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagMem__DOT__mem
                                     [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagMem__DOT__rdAddrReg])),20);
        tracep->fullCData(oldp+808,((0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                              >> 4U))),8);
        tracep->fullBit(oldp+809,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagMem_io_wrEna));
        tracep->fullIData(oldp+810,((0xfffffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                                 >> 0xcU))),20);
        tracep->fullSData(oldp+811,((0x3ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                               >> 2U))),10);
        tracep->fullCData(oldp+812,((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__REG) 
                                      & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__REG_1) 
                                         == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__rdAddrReg)))
                                      ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__REG_2)
                                      : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__mem
                                     [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__rdAddrReg])),8);
        tracep->fullSData(oldp+813,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__wrAddrReg),10);
        tracep->fullBit(oldp+814,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_io_wrEna));
        tracep->fullCData(oldp+815,((0xffU & vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__wrDataReg)),8);
        tracep->fullCData(oldp+816,((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__REG) 
                                      & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__REG_1) 
                                         == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__rdAddrReg)))
                                      ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__REG_2)
                                      : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__mem
                                     [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__rdAddrReg])),8);
        tracep->fullBit(oldp+817,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1_io_wrEna));
        tracep->fullCData(oldp+818,((0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__wrDataReg 
                                              >> 8U))),8);
        tracep->fullCData(oldp+819,((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__REG) 
                                      & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__REG_1) 
                                         == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__rdAddrReg)))
                                      ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__REG_2)
                                      : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__mem
                                     [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__rdAddrReg])),8);
        tracep->fullBit(oldp+820,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2_io_wrEna));
        tracep->fullCData(oldp+821,((0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__wrDataReg 
                                              >> 0x10U))),8);
        tracep->fullCData(oldp+822,((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__REG) 
                                      & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__REG_1) 
                                         == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__rdAddrReg)))
                                      ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__REG_2)
                                      : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__mem
                                     [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__rdAddrReg])),8);
        tracep->fullBit(oldp+823,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3_io_wrEna));
        tracep->fullCData(oldp+824,((0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__wrDataReg 
                                              >> 0x18U))),8);
        tracep->fullCData(oldp+825,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Cmd),3);
        tracep->fullIData(oldp+826,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr),32);
        tracep->fullCData(oldp+827,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_ByteEn),4);
        tracep->fullBit(oldp+828,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_0));
        tracep->fullBit(oldp+829,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_1));
        tracep->fullBit(oldp+830,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_2));
        tracep->fullBit(oldp+831,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_3));
        tracep->fullBit(oldp+832,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_4));
        tracep->fullBit(oldp+833,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_5));
        tracep->fullBit(oldp+834,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_6));
        tracep->fullBit(oldp+835,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_7));
        tracep->fullBit(oldp+836,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_8));
        tracep->fullBit(oldp+837,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_9));
        tracep->fullBit(oldp+838,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_10));
        tracep->fullBit(oldp+839,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_11));
        tracep->fullBit(oldp+840,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_12));
        tracep->fullBit(oldp+841,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_13));
        tracep->fullBit(oldp+842,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_14));
        tracep->fullBit(oldp+843,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_15));
        tracep->fullBit(oldp+844,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_16));
        tracep->fullBit(oldp+845,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_17));
        tracep->fullBit(oldp+846,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_18));
        tracep->fullBit(oldp+847,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_19));
        tracep->fullBit(oldp+848,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_20));
        tracep->fullBit(oldp+849,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_21));
        tracep->fullBit(oldp+850,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_22));
        tracep->fullBit(oldp+851,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_23));
        tracep->fullBit(oldp+852,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_24));
        tracep->fullBit(oldp+853,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_25));
        tracep->fullBit(oldp+854,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_26));
        tracep->fullBit(oldp+855,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_27));
        tracep->fullBit(oldp+856,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_28));
        tracep->fullBit(oldp+857,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_29));
        tracep->fullBit(oldp+858,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_30));
        tracep->fullBit(oldp+859,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_31));
        tracep->fullBit(oldp+860,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_32));
        tracep->fullBit(oldp+861,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_33));
        tracep->fullBit(oldp+862,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_34));
        tracep->fullBit(oldp+863,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_35));
        tracep->fullBit(oldp+864,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_36));
        tracep->fullBit(oldp+865,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_37));
        tracep->fullBit(oldp+866,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_38));
        tracep->fullBit(oldp+867,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_39));
        tracep->fullBit(oldp+868,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_40));
        tracep->fullBit(oldp+869,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_41));
        tracep->fullBit(oldp+870,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_42));
        tracep->fullBit(oldp+871,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_43));
        tracep->fullBit(oldp+872,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_44));
        tracep->fullBit(oldp+873,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_45));
        tracep->fullBit(oldp+874,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_46));
        tracep->fullBit(oldp+875,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_47));
        tracep->fullBit(oldp+876,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_48));
        tracep->fullBit(oldp+877,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_49));
        tracep->fullBit(oldp+878,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_50));
        tracep->fullBit(oldp+879,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_51));
        tracep->fullBit(oldp+880,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_52));
        tracep->fullBit(oldp+881,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_53));
        tracep->fullBit(oldp+882,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_54));
        tracep->fullBit(oldp+883,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_55));
        tracep->fullBit(oldp+884,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_56));
        tracep->fullBit(oldp+885,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_57));
        tracep->fullBit(oldp+886,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_58));
        tracep->fullBit(oldp+887,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_59));
        tracep->fullBit(oldp+888,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_60));
        tracep->fullBit(oldp+889,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_61));
        tracep->fullBit(oldp+890,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_62));
        tracep->fullBit(oldp+891,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_63));
        tracep->fullBit(oldp+892,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_64));
        tracep->fullBit(oldp+893,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_65));
        tracep->fullBit(oldp+894,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_66));
        tracep->fullBit(oldp+895,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_67));
        tracep->fullBit(oldp+896,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_68));
        tracep->fullBit(oldp+897,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_69));
        tracep->fullBit(oldp+898,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_70));
        tracep->fullBit(oldp+899,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_71));
        tracep->fullBit(oldp+900,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_72));
        tracep->fullBit(oldp+901,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_73));
        tracep->fullBit(oldp+902,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_74));
        tracep->fullBit(oldp+903,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_75));
        tracep->fullBit(oldp+904,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_76));
        tracep->fullBit(oldp+905,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_77));
        tracep->fullBit(oldp+906,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_78));
        tracep->fullBit(oldp+907,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_79));
        tracep->fullBit(oldp+908,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_80));
        tracep->fullBit(oldp+909,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_81));
        tracep->fullBit(oldp+910,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_82));
        tracep->fullBit(oldp+911,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_83));
        tracep->fullBit(oldp+912,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_84));
        tracep->fullBit(oldp+913,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_85));
        tracep->fullBit(oldp+914,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_86));
        tracep->fullBit(oldp+915,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_87));
        tracep->fullBit(oldp+916,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_88));
        tracep->fullBit(oldp+917,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_89));
        tracep->fullBit(oldp+918,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_90));
        tracep->fullBit(oldp+919,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_91));
        tracep->fullBit(oldp+920,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_92));
        tracep->fullBit(oldp+921,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_93));
        tracep->fullBit(oldp+922,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_94));
        tracep->fullBit(oldp+923,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_95));
        tracep->fullBit(oldp+924,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_96));
        tracep->fullBit(oldp+925,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_97));
        tracep->fullBit(oldp+926,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_98));
        tracep->fullBit(oldp+927,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_99));
        tracep->fullBit(oldp+928,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_100));
        tracep->fullBit(oldp+929,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_101));
        tracep->fullBit(oldp+930,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_102));
        tracep->fullBit(oldp+931,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_103));
        tracep->fullBit(oldp+932,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_104));
        tracep->fullBit(oldp+933,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_105));
        tracep->fullBit(oldp+934,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_106));
        tracep->fullBit(oldp+935,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_107));
        tracep->fullBit(oldp+936,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_108));
        tracep->fullBit(oldp+937,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_109));
        tracep->fullBit(oldp+938,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_110));
        tracep->fullBit(oldp+939,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_111));
        tracep->fullBit(oldp+940,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_112));
        tracep->fullBit(oldp+941,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_113));
        tracep->fullBit(oldp+942,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_114));
        tracep->fullBit(oldp+943,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_115));
        tracep->fullBit(oldp+944,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_116));
        tracep->fullBit(oldp+945,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_117));
        tracep->fullBit(oldp+946,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_118));
        tracep->fullBit(oldp+947,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_119));
        tracep->fullBit(oldp+948,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_120));
        tracep->fullBit(oldp+949,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_121));
        tracep->fullBit(oldp+950,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_122));
        tracep->fullBit(oldp+951,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_123));
        tracep->fullBit(oldp+952,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_124));
        tracep->fullBit(oldp+953,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_125));
        tracep->fullBit(oldp+954,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_126));
        tracep->fullBit(oldp+955,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_127));
        tracep->fullBit(oldp+956,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_128));
        tracep->fullBit(oldp+957,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_129));
        tracep->fullBit(oldp+958,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_130));
        tracep->fullBit(oldp+959,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_131));
        tracep->fullBit(oldp+960,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_132));
        tracep->fullBit(oldp+961,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_133));
        tracep->fullBit(oldp+962,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_134));
        tracep->fullBit(oldp+963,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_135));
        tracep->fullBit(oldp+964,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_136));
        tracep->fullBit(oldp+965,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_137));
        tracep->fullBit(oldp+966,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_138));
        tracep->fullBit(oldp+967,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_139));
        tracep->fullBit(oldp+968,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_140));
        tracep->fullBit(oldp+969,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_141));
        tracep->fullBit(oldp+970,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_142));
        tracep->fullBit(oldp+971,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_143));
        tracep->fullBit(oldp+972,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_144));
        tracep->fullBit(oldp+973,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_145));
        tracep->fullBit(oldp+974,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_146));
        tracep->fullBit(oldp+975,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_147));
        tracep->fullBit(oldp+976,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_148));
        tracep->fullBit(oldp+977,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_149));
        tracep->fullBit(oldp+978,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_150));
        tracep->fullBit(oldp+979,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_151));
        tracep->fullBit(oldp+980,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_152));
        tracep->fullBit(oldp+981,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_153));
        tracep->fullBit(oldp+982,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_154));
        tracep->fullBit(oldp+983,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_155));
        tracep->fullBit(oldp+984,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_156));
        tracep->fullBit(oldp+985,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_157));
        tracep->fullBit(oldp+986,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_158));
        tracep->fullBit(oldp+987,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_159));
        tracep->fullBit(oldp+988,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_160));
        tracep->fullBit(oldp+989,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_161));
        tracep->fullBit(oldp+990,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_162));
        tracep->fullBit(oldp+991,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_163));
        tracep->fullBit(oldp+992,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_164));
        tracep->fullBit(oldp+993,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_165));
        tracep->fullBit(oldp+994,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_166));
        tracep->fullBit(oldp+995,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_167));
        tracep->fullBit(oldp+996,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_168));
        tracep->fullBit(oldp+997,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_169));
        tracep->fullBit(oldp+998,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_170));
        tracep->fullBit(oldp+999,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_171));
        tracep->fullBit(oldp+1000,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_172));
        tracep->fullBit(oldp+1001,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_173));
        tracep->fullBit(oldp+1002,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_174));
        tracep->fullBit(oldp+1003,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_175));
        tracep->fullBit(oldp+1004,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_176));
        tracep->fullBit(oldp+1005,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_177));
        tracep->fullBit(oldp+1006,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_178));
        tracep->fullBit(oldp+1007,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_179));
        tracep->fullBit(oldp+1008,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_180));
        tracep->fullBit(oldp+1009,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_181));
        tracep->fullBit(oldp+1010,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_182));
        tracep->fullBit(oldp+1011,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_183));
        tracep->fullBit(oldp+1012,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_184));
        tracep->fullBit(oldp+1013,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_185));
        tracep->fullBit(oldp+1014,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_186));
        tracep->fullBit(oldp+1015,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_187));
        tracep->fullBit(oldp+1016,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_188));
        tracep->fullBit(oldp+1017,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_189));
        tracep->fullBit(oldp+1018,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_190));
        tracep->fullBit(oldp+1019,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_191));
        tracep->fullBit(oldp+1020,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_192));
        tracep->fullBit(oldp+1021,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_193));
        tracep->fullBit(oldp+1022,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_194));
        tracep->fullBit(oldp+1023,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_195));
        tracep->fullBit(oldp+1024,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_196));
        tracep->fullBit(oldp+1025,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_197));
        tracep->fullBit(oldp+1026,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_198));
        tracep->fullBit(oldp+1027,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_199));
        tracep->fullBit(oldp+1028,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_200));
        tracep->fullBit(oldp+1029,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_201));
        tracep->fullBit(oldp+1030,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_202));
        tracep->fullBit(oldp+1031,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_203));
        tracep->fullBit(oldp+1032,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_204));
        tracep->fullBit(oldp+1033,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_205));
        tracep->fullBit(oldp+1034,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_206));
        tracep->fullBit(oldp+1035,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_207));
        tracep->fullBit(oldp+1036,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_208));
        tracep->fullBit(oldp+1037,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_209));
        tracep->fullBit(oldp+1038,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_210));
        tracep->fullBit(oldp+1039,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_211));
        tracep->fullBit(oldp+1040,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_212));
        tracep->fullBit(oldp+1041,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_213));
        tracep->fullBit(oldp+1042,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_214));
        tracep->fullBit(oldp+1043,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_215));
        tracep->fullBit(oldp+1044,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_216));
        tracep->fullBit(oldp+1045,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_217));
        tracep->fullBit(oldp+1046,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_218));
        tracep->fullBit(oldp+1047,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_219));
        tracep->fullBit(oldp+1048,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_220));
        tracep->fullBit(oldp+1049,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_221));
        tracep->fullBit(oldp+1050,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_222));
        tracep->fullBit(oldp+1051,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_223));
        tracep->fullBit(oldp+1052,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_224));
        tracep->fullBit(oldp+1053,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_225));
        tracep->fullBit(oldp+1054,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_226));
        tracep->fullBit(oldp+1055,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_227));
        tracep->fullBit(oldp+1056,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_228));
        tracep->fullBit(oldp+1057,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_229));
        tracep->fullBit(oldp+1058,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_230));
        tracep->fullBit(oldp+1059,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_231));
        tracep->fullBit(oldp+1060,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_232));
        tracep->fullBit(oldp+1061,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_233));
        tracep->fullBit(oldp+1062,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_234));
        tracep->fullBit(oldp+1063,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_235));
        tracep->fullBit(oldp+1064,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_236));
        tracep->fullBit(oldp+1065,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_237));
        tracep->fullBit(oldp+1066,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_238));
        tracep->fullBit(oldp+1067,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_239));
        tracep->fullBit(oldp+1068,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_240));
        tracep->fullBit(oldp+1069,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_241));
        tracep->fullBit(oldp+1070,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_242));
        tracep->fullBit(oldp+1071,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_243));
        tracep->fullBit(oldp+1072,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_244));
        tracep->fullBit(oldp+1073,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_245));
        tracep->fullBit(oldp+1074,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_246));
        tracep->fullBit(oldp+1075,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_247));
        tracep->fullBit(oldp+1076,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_248));
        tracep->fullBit(oldp+1077,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_249));
        tracep->fullBit(oldp+1078,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_250));
        tracep->fullBit(oldp+1079,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_251));
        tracep->fullBit(oldp+1080,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_252));
        tracep->fullBit(oldp+1081,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_253));
        tracep->fullBit(oldp+1082,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_254));
        tracep->fullBit(oldp+1083,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagVMem_255));
        tracep->fullBit(oldp+1084,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagV));
        tracep->fullBit(oldp+1085,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagValid));
        tracep->fullBit(oldp+1086,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__fillReg));
        tracep->fullIData(oldp+1087,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__wrDataReg),32);
        tracep->fullCData(oldp+1088,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__stmsk),4);
        tracep->fullIData(oldp+1089,((((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__REG) 
                                         & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__REG_1) 
                                            == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__rdAddrReg)))
                                         ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__REG_2)
                                         : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__mem
                                        [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__rdAddrReg]) 
                                       << 0x18U) | 
                                      (((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__REG) 
                                          & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__REG_1) 
                                             == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__rdAddrReg)))
                                          ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__REG_2)
                                          : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__mem
                                         [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__rdAddrReg]) 
                                        << 0x10U) | 
                                       (((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__REG) 
                                           & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__REG_1) 
                                              == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__rdAddrReg)))
                                           ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__REG_2)
                                           : vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__mem
                                          [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__rdAddrReg]) 
                                         << 8U) | (
                                                   ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__REG) 
                                                    & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__REG_1) 
                                                       == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__rdAddrReg)))
                                                    ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__REG_2)
                                                    : 
                                                   vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__mem
                                                   [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__rdAddrReg]))))),32);
        tracep->fullCData(oldp+1090,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__stateReg),2);
        tracep->fullCData(oldp+1091,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__burstCntReg),2);
        tracep->fullCData(oldp+1092,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__missIndexReg),2);
        tracep->fullCData(oldp+1093,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__slaveReg_Resp),2);
        tracep->fullIData(oldp+1094,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__slaveReg_Data),32);
        tracep->fullIData(oldp+1095,((0xfffffffU & 
                                      (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__masterReg_Addr 
                                       >> 4U))),28);
        tracep->fullIData(oldp+1096,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagMem__DOT__mem
                                     [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagMem__DOT__rdAddrReg]),20);
        tracep->fullCData(oldp+1097,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagMem__DOT__rdAddrReg),8);
        tracep->fullBit(oldp+1098,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagMem__DOT__REG));
        tracep->fullCData(oldp+1099,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagMem__DOT__REG_1),8);
        tracep->fullIData(oldp+1100,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__tagMem__DOT__REG_2),20);
        tracep->fullCData(oldp+1101,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__mem
                                     [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__rdAddrReg]),8);
        tracep->fullSData(oldp+1102,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__rdAddrReg),10);
        tracep->fullBit(oldp+1103,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__REG));
        tracep->fullSData(oldp+1104,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__REG_1),10);
        tracep->fullCData(oldp+1105,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock__DOT__REG_2),8);
        tracep->fullCData(oldp+1106,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__mem
                                     [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__rdAddrReg]),8);
        tracep->fullSData(oldp+1107,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__rdAddrReg),10);
        tracep->fullBit(oldp+1108,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__REG));
        tracep->fullSData(oldp+1109,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__REG_1),10);
        tracep->fullCData(oldp+1110,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_1__DOT__REG_2),8);
        tracep->fullCData(oldp+1111,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__mem
                                     [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__rdAddrReg]),8);
        tracep->fullSData(oldp+1112,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__rdAddrReg),10);
        tracep->fullBit(oldp+1113,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__REG));
        tracep->fullSData(oldp+1114,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__REG_1),10);
        tracep->fullCData(oldp+1115,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_2__DOT__REG_2),8);
        tracep->fullCData(oldp+1116,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__mem
                                     [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__rdAddrReg]),8);
        tracep->fullSData(oldp+1117,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__rdAddrReg),10);
        tracep->fullBit(oldp+1118,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__REG));
        tracep->fullSData(oldp+1119,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__REG_1),10);
        tracep->fullCData(oldp+1120,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__dm__DOT__MemBlock_3__DOT__REG_2),8);
        tracep->fullSData(oldp+1121,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock_io_rdAddr),9);
        tracep->fullCData(oldp+1122,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock__DOT__mem
                                     [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock__DOT__rdAddrReg]),8);
        tracep->fullSData(oldp+1123,((0x1ffU & ((0U 
                                                 == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
                                                 ? 
                                                (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_14 
                                                 >> 2U)
                                                 : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___GEN_111)))),9);
        tracep->fullBit(oldp+1124,((1U & (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__mb_wrEna))));
        tracep->fullCData(oldp+1125,((0xffU & vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__mb_wrData)),8);
        tracep->fullSData(oldp+1126,(((0U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg))
                                       ? (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___GEN_46)
                                       : (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___GEN_102))),9);
        tracep->fullCData(oldp+1127,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock_1__DOT__mem
                                     [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock_1__DOT__rdAddrReg]),8);
        tracep->fullBit(oldp+1128,((1U & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__mb_wrEna) 
                                          >> 1U))));
        tracep->fullCData(oldp+1129,((0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__mb_wrData 
                                               >> 8U))),8);
        tracep->fullCData(oldp+1130,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock_2__DOT__mem
                                     [vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock_2__DOT__rdAddrReg]),8);
        tracep->fullBit(oldp+1131,((1U & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__mb_wrEna) 
                                          >> 2U))));
        tracep->fullCData(oldp+1132,((0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__mb_wrData 
                                               >> 0x10U))),8);
        tracep->fullCData(oldp+1133,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock_3__DOT__mem_MPORT_1_data),8);
        tracep->fullBit(oldp+1134,((1U & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__mb_wrEna) 
                                          >> 3U))));
        tracep->fullCData(oldp+1135,((0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__mb_wrData 
                                               >> 0x18U))),8);
        tracep->fullCData(oldp+1136,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stateReg),3);
        tracep->fullBit(oldp+1137,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__isReserveReg));
        tracep->fullQData(oldp+1138,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg),33);
        tracep->fullIData(oldp+1140,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__newMemTopReg),32);
        tracep->fullSData(oldp+1141,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__rdAddrReg),9);
        tracep->fullBit(oldp+1142,(((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__isReserveReg)
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
        tracep->fullSData(oldp+1143,((0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT___T_14 
                                                >> 2U))),9);
        tracep->fullCData(oldp+1144,((3U & (IData)(
                                                   (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__transferAddrReg 
                                                    >> 2U)))),2);
        tracep->fullIData(oldp+1145,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stackTopInc),32);
        tracep->fullBit(oldp+1146,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__stackAboveMem));
        tracep->fullIData(oldp+1147,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__mb_wrData),32);
        tracep->fullCData(oldp+1148,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__mb_wrEna),4);
        tracep->fullSData(oldp+1149,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock__DOT__rdAddrReg),9);
        tracep->fullSData(oldp+1150,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock_1__DOT__rdAddrReg),9);
        tracep->fullSData(oldp+1151,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock_2__DOT__rdAddrReg),9);
        tracep->fullSData(oldp+1152,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__sc__DOT__MemBlock_3__DOT__rdAddrReg),9);
        tracep->fullCData(oldp+1153,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__stateReg),2);
        tracep->fullCData(oldp+1154,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__burstCntReg),2);
        tracep->fullCData(oldp+1155,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__posReg),2);
        tracep->fullCData(oldp+1156,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__masterReg_Cmd),3);
        tracep->fullIData(oldp+1157,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__masterReg_Addr),32);
        tracep->fullCData(oldp+1158,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__slaveReg_Resp),2);
        tracep->fullIData(oldp+1159,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__slaveReg_Data),32);
        tracep->fullIData(oldp+1160,((0xfffffffU & 
                                      (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__bp__DOT__masterReg_Addr 
                                       >> 4U))),28);
        tracep->fullCData(oldp+1161,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__state),2);
        tracep->fullCData(oldp+1162,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__cntReg),2);
        tracep->fullIData(oldp+1163,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__writeMasterReg_Addr),32);
        tracep->fullIData(oldp+1164,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__writeMasterReg_Data),32);
        tracep->fullCData(oldp+1165,(vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__writeMasterReg_ByteEn),4);
        tracep->fullCData(oldp+1166,((3U & (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__writeMasterReg_Addr 
                                            >> 2U))),2);
        tracep->fullIData(oldp+1167,((0xfffffffU & 
                                      (vlTOPp->Patmos__DOT__cores_0__DOT__dcache__DOT__wc__DOT__writeMasterReg_Addr 
                                       >> 4U))),28);
        tracep->fullBit(oldp+1168,(vlTOPp->Patmos__DOT__HardlockOCPWrapper__DOT__reqReg));
        tracep->fullBit(oldp+1169,(vlTOPp->Patmos__DOT__HardlockOCPWrapper__DOT__reqBools_0));
        tracep->fullCData(oldp+1170,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__respReg),2);
        tracep->fullBit(oldp+1171,(vlTOPp->Patmos__DOT__UartCmp__DOT__REG));
        tracep->fullBit(oldp+1172,((1U & (~ (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__full)))));
        tracep->fullBit(oldp+1173,((1U == (IData)(vlTOPp->Patmos__DOT__UartCmp_io_cores_0_M_Cmd))));
        tracep->fullBit(oldp+1174,((1U & ((IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__tx_state)
                                           ? ((IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__tx_baud_tick)
                                               ? ((0xaU 
                                                   == (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__tx_counter))
                                                   ? 
                                                  ((~ (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__empty)) 
                                                   | (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT___GEN_10))
                                                   : (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT___GEN_10))
                                               : (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT___GEN_10))
                                           : (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT___GEN_10)))));
        tracep->fullBit(oldp+1175,((1U & (~ (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__empty)))));
        tracep->fullCData(oldp+1176,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ram_io_deq_bits_MPORT_data),8);
        tracep->fullBit(oldp+1177,((1U & (~ (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__full)))));
        tracep->fullBit(oldp+1178,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue_io_enq_valid));
        tracep->fullCData(oldp+1179,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rx_buff),8);
        tracep->fullBit(oldp+1180,(((2U == (IData)(vlTOPp->Patmos__DOT__UartCmp_io_cores_0_M_Cmd)) 
                                    & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                       >> 2U))));
        tracep->fullBit(oldp+1181,((1U & (~ (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__empty)))));
        tracep->fullCData(oldp+1182,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__ram
                                     [vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__deq_ptr_value]),8);
        tracep->fullSData(oldp+1183,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__tx_baud_counter),10);
        tracep->fullBit(oldp+1184,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__tx_baud_tick));
        tracep->fullBit(oldp+1185,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__tx_state));
        tracep->fullSData(oldp+1186,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__tx_buff),10);
        tracep->fullCData(oldp+1187,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__tx_counter),4);
        tracep->fullBit(oldp+1188,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxd_reg0));
        tracep->fullBit(oldp+1189,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxd_reg1));
        tracep->fullBit(oldp+1190,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxd_reg2));
        tracep->fullSData(oldp+1191,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rx_baud_counter),10);
        tracep->fullBit(oldp+1192,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rx_baud_tick));
        tracep->fullBit(oldp+1193,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rx_enable));
        tracep->fullCData(oldp+1194,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rx_counter),3);
        tracep->fullCData(oldp+1195,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rx_state),2);
        tracep->fullCData(oldp+1196,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rdDataReg),8);
        tracep->fullSData(oldp+1197,((0x100U | (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ram_io_deq_bits_MPORT_data))),9);
        tracep->fullSData(oldp+1198,((0x1ffU & ((IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__tx_buff) 
                                                >> 1U))),9);
        tracep->fullCData(oldp+1199,((0x7fU & ((IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rx_buff) 
                                               >> 1U))),7);
        tracep->fullCData(oldp+1200,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ram[0]),8);
        tracep->fullCData(oldp+1201,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ram[1]),8);
        tracep->fullCData(oldp+1202,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ram[2]),8);
        tracep->fullCData(oldp+1203,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ram[3]),8);
        tracep->fullCData(oldp+1204,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ram[4]),8);
        tracep->fullCData(oldp+1205,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ram[5]),8);
        tracep->fullCData(oldp+1206,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ram[6]),8);
        tracep->fullCData(oldp+1207,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ram[7]),8);
        tracep->fullCData(oldp+1208,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ram[8]),8);
        tracep->fullCData(oldp+1209,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ram[9]),8);
        tracep->fullCData(oldp+1210,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ram[10]),8);
        tracep->fullCData(oldp+1211,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ram[11]),8);
        tracep->fullCData(oldp+1212,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ram[12]),8);
        tracep->fullCData(oldp+1213,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ram[13]),8);
        tracep->fullCData(oldp+1214,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ram[14]),8);
        tracep->fullCData(oldp+1215,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ram[15]),8);
        tracep->fullCData(oldp+1216,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__deq_ptr_value),4);
        tracep->fullCData(oldp+1217,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__enq_ptr_value),4);
        tracep->fullBit(oldp+1218,(((~ (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__full)) 
                                    & (1U == (IData)(vlTOPp->Patmos__DOT__UartCmp_io_cores_0_M_Cmd)))));
        tracep->fullBit(oldp+1219,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__maybe_full));
        tracep->fullBit(oldp+1220,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__ptr_match));
        tracep->fullBit(oldp+1221,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__empty));
        tracep->fullBit(oldp+1222,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__full));
        tracep->fullBit(oldp+1223,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__do_enq));
        tracep->fullBit(oldp+1224,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue__DOT__do_deq));
        tracep->fullCData(oldp+1225,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__ram[0]),8);
        tracep->fullCData(oldp+1226,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__ram[1]),8);
        tracep->fullCData(oldp+1227,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__ram[2]),8);
        tracep->fullCData(oldp+1228,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__ram[3]),8);
        tracep->fullCData(oldp+1229,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__ram[4]),8);
        tracep->fullCData(oldp+1230,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__ram[5]),8);
        tracep->fullCData(oldp+1231,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__ram[6]),8);
        tracep->fullCData(oldp+1232,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__ram[7]),8);
        tracep->fullCData(oldp+1233,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__ram[8]),8);
        tracep->fullCData(oldp+1234,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__ram[9]),8);
        tracep->fullCData(oldp+1235,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__ram[10]),8);
        tracep->fullCData(oldp+1236,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__ram[11]),8);
        tracep->fullCData(oldp+1237,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__ram[12]),8);
        tracep->fullCData(oldp+1238,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__ram[13]),8);
        tracep->fullCData(oldp+1239,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__ram[14]),8);
        tracep->fullCData(oldp+1240,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__ram[15]),8);
        tracep->fullCData(oldp+1241,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__deq_ptr_value),4);
        tracep->fullCData(oldp+1242,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__enq_ptr_value),4);
        tracep->fullBit(oldp+1243,(((~ (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__full)) 
                                    & (IData)(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue_io_enq_valid))));
        tracep->fullBit(oldp+1244,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__maybe_full));
        tracep->fullBit(oldp+1245,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__ptr_match));
        tracep->fullBit(oldp+1246,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__empty));
        tracep->fullBit(oldp+1247,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__full));
        tracep->fullBit(oldp+1248,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__do_enq));
        tracep->fullBit(oldp+1249,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__rxQueue__DOT__do_deq));
        tracep->fullCData(oldp+1250,(vlTOPp->Patmos__DOT__CpuInfo__DOT__masterReg_Cmd),3);
        tracep->fullIData(oldp+1251,(vlTOPp->Patmos__DOT__CpuInfo__DOT__masterReg_Addr),32);
        tracep->fullSData(oldp+1252,(vlTOPp->Patmos__DOT__Leds__DOT__ledReg),9);
        tracep->fullCData(oldp+1253,(vlTOPp->Patmos__DOT__Keys__DOT__keySyncReg),4);
        tracep->fullCData(oldp+1254,(vlTOPp->Patmos__DOT__Keys__DOT__keyReg),4);
        tracep->fullCData(oldp+1255,(vlTOPp->Patmos__DOT__Timer__DOT__masterReg_Cmd),3);
        tracep->fullIData(oldp+1256,(vlTOPp->Patmos__DOT__Timer__DOT__masterReg_Addr),32);
        tracep->fullIData(oldp+1257,(vlTOPp->Patmos__DOT__Timer__DOT__masterReg_Data),32);
        tracep->fullQData(oldp+1258,(vlTOPp->Patmos__DOT__Timer__DOT__cycleReg),64);
        tracep->fullQData(oldp+1260,(vlTOPp->Patmos__DOT__Timer__DOT__cycleIntrReg),64);
        tracep->fullCData(oldp+1262,(vlTOPp->Patmos__DOT__Timer__DOT__usecSubReg),7);
        tracep->fullQData(oldp+1263,(vlTOPp->Patmos__DOT__Timer__DOT__usecReg),64);
        tracep->fullQData(oldp+1265,(vlTOPp->Patmos__DOT__Timer__DOT__usecIntrReg),64);
        tracep->fullIData(oldp+1267,(vlTOPp->Patmos__DOT__Timer__DOT__cycleHiReg),32);
        tracep->fullIData(oldp+1268,(vlTOPp->Patmos__DOT__Timer__DOT__usecHiReg),32);
        tracep->fullIData(oldp+1269,(vlTOPp->Patmos__DOT__Timer__DOT__cycleLoReg),32);
        tracep->fullIData(oldp+1270,(vlTOPp->Patmos__DOT__Timer__DOT__usecLoReg),32);
        tracep->fullBit(oldp+1271,((0U == vlTOPp->Patmos__DOT__Deadline__DOT__downCountReg)));
        tracep->fullBit(oldp+1272,(vlTOPp->Patmos__DOT__Deadline__DOT__stallReg));
        tracep->fullSData(oldp+1273,((0x1ffU & (vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exmem_mem_addr 
                                                >> 2U))),9);
        tracep->fullCData(oldp+1274,(vlTOPp->Patmos__DOT__Spm__DOT__MemBlock__DOT__mem
                                     [vlTOPp->Patmos__DOT__Spm__DOT__MemBlock__DOT__rdAddrReg]),8);
        tracep->fullBit(oldp+1275,((1U & (IData)(vlTOPp->Patmos__DOT__Spm__DOT___T_5))));
        tracep->fullCData(oldp+1276,((0xffU & vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_Data)),8);
        tracep->fullCData(oldp+1277,(vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_1__DOT__mem
                                     [vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_1__DOT__rdAddrReg]),8);
        tracep->fullBit(oldp+1278,((1U & ((IData)(vlTOPp->Patmos__DOT__Spm__DOT___T_5) 
                                          >> 1U))));
        tracep->fullCData(oldp+1279,((0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_Data 
                                               >> 8U))),8);
        tracep->fullCData(oldp+1280,(vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_2__DOT__mem
                                     [vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_2__DOT__rdAddrReg]),8);
        tracep->fullBit(oldp+1281,((1U & ((IData)(vlTOPp->Patmos__DOT__Spm__DOT___T_5) 
                                          >> 2U))));
        tracep->fullCData(oldp+1282,((0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_Data 
                                               >> 0x10U))),8);
        tracep->fullCData(oldp+1283,(vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_3__DOT__mem
                                     [vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_3__DOT__rdAddrReg]),8);
        tracep->fullBit(oldp+1284,((1U & ((IData)(vlTOPp->Patmos__DOT__Spm__DOT___T_5) 
                                          >> 3U))));
        tracep->fullCData(oldp+1285,((0xffU & (vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_globalInOut_M_Data 
                                               >> 0x18U))),8);
        tracep->fullCData(oldp+1286,(vlTOPp->Patmos__DOT__Spm__DOT__cmdReg),3);
        tracep->fullSData(oldp+1287,(vlTOPp->Patmos__DOT__Spm__DOT__MemBlock__DOT__rdAddrReg),9);
        tracep->fullSData(oldp+1288,(vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_1__DOT__rdAddrReg),9);
        tracep->fullSData(oldp+1289,(vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_2__DOT__rdAddrReg),9);
        tracep->fullSData(oldp+1290,(vlTOPp->Patmos__DOT__Spm__DOT__MemBlock_3__DOT__rdAddrReg),9);
        tracep->fullCData(oldp+1291,(vlTOPp->Patmos__DOT__ramCtrl__DOT__stateReg),3);
        tracep->fullIData(oldp+1292,(vlTOPp->Patmos__DOT__ramCtrl__DOT__mAddrReg),20);
        tracep->fullSData(oldp+1293,(vlTOPp->Patmos__DOT__ramCtrl__DOT__rdBufferReg_0),16);
        tracep->fullSData(oldp+1294,(vlTOPp->Patmos__DOT__ramCtrl__DOT__rdBufferReg_1),16);
        tracep->fullSData(oldp+1295,(vlTOPp->Patmos__DOT__ramCtrl__DOT__rdBufferReg_2),16);
        tracep->fullSData(oldp+1296,(vlTOPp->Patmos__DOT__ramCtrl__DOT__rdBufferReg_3),16);
        tracep->fullSData(oldp+1297,(vlTOPp->Patmos__DOT__ramCtrl__DOT__rdBufferReg_4),16);
        tracep->fullSData(oldp+1298,(vlTOPp->Patmos__DOT__ramCtrl__DOT__rdBufferReg_5),16);
        tracep->fullSData(oldp+1299,(vlTOPp->Patmos__DOT__ramCtrl__DOT__rdBufferReg_6),16);
        tracep->fullSData(oldp+1300,(vlTOPp->Patmos__DOT__ramCtrl__DOT__rdBufferReg_7),16);
        tracep->fullCData(oldp+1301,(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_0_byteEna),2);
        tracep->fullSData(oldp+1302,(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_0_data),16);
        tracep->fullCData(oldp+1303,(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_1_byteEna),2);
        tracep->fullSData(oldp+1304,(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_1_data),16);
        tracep->fullCData(oldp+1305,(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_2_byteEna),2);
        tracep->fullSData(oldp+1306,(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_2_data),16);
        tracep->fullCData(oldp+1307,(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_3_byteEna),2);
        tracep->fullSData(oldp+1308,(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_3_data),16);
        tracep->fullCData(oldp+1309,(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_4_byteEna),2);
        tracep->fullSData(oldp+1310,(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_4_data),16);
        tracep->fullCData(oldp+1311,(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_5_byteEna),2);
        tracep->fullSData(oldp+1312,(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_5_data),16);
        tracep->fullCData(oldp+1313,(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_6_byteEna),2);
        tracep->fullSData(oldp+1314,(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_6_data),16);
        tracep->fullCData(oldp+1315,(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_7_byteEna),2);
        tracep->fullSData(oldp+1316,(vlTOPp->Patmos__DOT__ramCtrl__DOT__wrBufferReg_7_data),16);
        tracep->fullCData(oldp+1317,(vlTOPp->Patmos__DOT__ramCtrl__DOT__transCountReg),3);
        tracep->fullCData(oldp+1318,(vlTOPp->Patmos__DOT__ramCtrl__DOT__wordCountReg),2);
        tracep->fullBit(oldp+1319,(vlTOPp->Patmos__DOT__ramCtrl__DOT__waitCountReg));
        tracep->fullIData(oldp+1320,(vlTOPp->Patmos__DOT__ramCtrl__DOT__doutReg),32);
        tracep->fullIData(oldp+1321,((0x3fffffffU & 
                                      ((0x80000000U 
                                        & vlTOPp->Patmos__DOT__cores_0__DOT__fetch_io_fedec_instr_a)
                                        ? ((IData)(2U) 
                                           + vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__relPc)
                                        : ((IData)(1U) 
                                           + vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__relPc)))),30);
        tracep->fullIData(oldp+1322,(((1U & vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcReg)
                                       ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_mcachefe_instrOdd
                                       : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_mcachefe_instrEven)),32);
        tracep->fullIData(oldp+1323,((0x3fffffffU & 
                                      ((0x80000000U 
                                        & vlTOPp->Patmos__DOT__cores_0__DOT__fetch_io_fedec_instr_a)
                                        ? ((IData)(2U) 
                                           + vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcReg)
                                        : ((IData)(1U) 
                                           + vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcReg)))),30);
        tracep->fullIData(oldp+1324,((0x3fffffffU & 
                                      ((0x80000000U 
                                        & vlTOPp->Patmos__DOT__cores_0__DOT__fetch_io_fedec_instr_a)
                                        ? ((IData)(4U) 
                                           + vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcReg)
                                        : ((IData)(3U) 
                                           + vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcReg)))),30);
        tracep->fullIData(oldp+1325,((0x3fffffffU & 
                                      ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__memory_io_memfe_doCallRet)
                                        ? (0xfffU & 
                                           ((IData)(2U) 
                                            + vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__relPc))
                                        : ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute_io_exfe_doBranch)
                                            ? ((IData)(2U) 
                                               + vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__target)
                                            : ((0x80000000U 
                                                & vlTOPp->Patmos__DOT__cores_0__DOT__fetch_io_fedec_instr_a)
                                                ? ((IData)(4U) 
                                                   + vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcReg)
                                                : ((IData)(3U) 
                                                   + vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcReg)))))),30);
        tracep->fullIData(oldp+1326,(((1U & vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcReg)
                                       ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_mcachefe_instrEven
                                       : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_mcachefe_instrOdd)),32);
        tracep->fullIData(oldp+1327,((0x3fffffffU & 
                                      ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__saveND)
                                        ? vlTOPp->Patmos__DOT__cores_0__DOT__execute__DOT__exReg_relPc
                                        : ((0x80000000U 
                                            & vlTOPp->Patmos__DOT__cores_0__DOT__fetch_io_fedec_instr_a)
                                            ? ((IData)(2U) 
                                               + vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__relPc)
                                            : ((IData)(1U) 
                                               + vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__relPc))))),30);
        tracep->fullSData(oldp+1328,((0x7ffU & ((2U 
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
        tracep->fullSData(oldp+1329,((0x7ffU & ((2U 
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
        tracep->fullSData(oldp+1330,((0x3ffU & (((2U 
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
        tracep->fullSData(oldp+1331,((0x3ffU & (((2U 
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
        tracep->fullIData(oldp+1332,(((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg))
                                       ? (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg) 
                                           <= (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg))
                                           ? ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Resp))
                                               ? (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg) 
                                                   < (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg))
                                                   ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_13
                                                   : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_68)
                                               : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_13)
                                           : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_68)
                                       : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_13)),32);
        tracep->fullIData(oldp+1333,(((2U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__stateReg))
                                       ? (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg) 
                                           <= (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg))
                                           ? ((1U == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__ocpSlaveReg_Resp))
                                               ? (((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__fetchCntReg) 
                                                   < (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__transferSizeReg))
                                                   ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_14
                                                   : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_69)
                                               : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_14)
                                           : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_69)
                                       : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT___GEN_14)),32);
        tracep->fullIData(oldp+1334,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_mcachefe_instrEven),32);
        tracep->fullIData(oldp+1335,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl_io_mcachefe_instrOdd),32);
        tracep->fullIData(oldp+1336,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch_io_fedec_instr_a),32);
        tracep->fullIData(oldp+1337,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch_io_fedec_instr_b),32);
        tracep->fullBit(oldp+1338,((1U & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch_io_fedec_instr_a 
                                          >> 0x1fU))));
        tracep->fullIData(oldp+1339,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pc_next),30);
        tracep->fullIData(oldp+1340,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pc_inc),30);
        tracep->fullIData(oldp+1341,((0x1fffffffU & 
                                      (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pc_inc 
                                       >> 1U))),29);
        tracep->fullIData(oldp+1342,((0x1fffffffU & 
                                      (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pc_next 
                                       >> 1U))),29);
        tracep->fullCData(oldp+1343,((0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch_io_fedec_instr_a 
                                               >> 0xcU))),5);
        tracep->fullCData(oldp+1344,((0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch_io_fedec_instr_a 
                                               >> 7U))),5);
        tracep->fullCData(oldp+1345,((0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch_io_fedec_instr_b 
                                               >> 0xcU))),5);
        tracep->fullCData(oldp+1346,((0x1fU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch_io_fedec_instr_b 
                                               >> 7U))),5);
        tracep->fullIData(oldp+1347,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven),32);
        tracep->fullIData(oldp+1348,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd),32);
        tracep->fullCData(oldp+1349,((0x7fU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven 
                                               >> 1U))),7);
        tracep->fullCData(oldp+1350,((0x7fU & (vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd 
                                               >> 1U))),7);
        tracep->fullIData(oldp+1351,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrEven),30);
        tracep->fullIData(oldp+1352,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__addrOdd),30);
        tracep->fullBit(oldp+1353,(vlTOPp->clock));
        tracep->fullBit(oldp+1354,(vlTOPp->reset));
        tracep->fullSData(oldp+1355,(vlTOPp->io_Leds_led),9);
        tracep->fullBit(oldp+1356,(vlTOPp->io_UartCmp_tx));
        tracep->fullIData(oldp+1357,(vlTOPp->io_SRamCtrl_ramOut_addr),20);
        tracep->fullBit(oldp+1358,(vlTOPp->io_SRamCtrl_ramOut_doutEna));
        tracep->fullSData(oldp+1359,(vlTOPp->io_SRamCtrl_ramOut_dout),16);
        tracep->fullBit(oldp+1360,(vlTOPp->io_SRamCtrl_ramOut_nce));
        tracep->fullBit(oldp+1361,(vlTOPp->io_SRamCtrl_ramOut_noe));
        tracep->fullBit(oldp+1362,(vlTOPp->io_SRamCtrl_ramOut_nwe));
        tracep->fullBit(oldp+1363,(vlTOPp->io_SRamCtrl_ramOut_nlb));
        tracep->fullBit(oldp+1364,(vlTOPp->io_SRamCtrl_ramOut_nub));
        tracep->fullCData(oldp+1365,(vlTOPp->io_Keys_key),4);
        tracep->fullBit(oldp+1366,(vlTOPp->io_UartCmp_rx));
        tracep->fullSData(oldp+1367,(vlTOPp->io_SRamCtrl_ramIn_din),16);
        tracep->fullIData(oldp+1368,((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheEven__DOT__REG) 
                                       & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheEven__DOT__REG_1) 
                                          == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheEven__DOT__rdAddrReg)))
                                       ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheEven__DOT__REG_2
                                       : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheEven__DOT__mem
                                      [vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheEven__DOT__rdAddrReg])),32);
        tracep->fullIData(oldp+1369,((((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheOdd__DOT__REG) 
                                       & ((IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheOdd__DOT__REG_1) 
                                          == (IData)(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheOdd__DOT__rdAddrReg)))
                                       ? vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheOdd__DOT__REG_2
                                       : vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheOdd__DOT__mem
                                      [vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheOdd__DOT__rdAddrReg])),32);
        tracep->fullIData(oldp+1370,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__callRetBaseNext),32);
        tracep->fullBit(oldp+1371,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitNext));
        tracep->fullIData(oldp+1372,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__callRetBaseNext),32);
        tracep->fullBit(oldp+1373,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__selSpmNext));
        tracep->fullBit(oldp+1374,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__selCacheNext));
        tracep->fullIData(oldp+1375,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheEven__DOT__mem
                                     [vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheEven__DOT__rdAddrReg]),32);
        tracep->fullIData(oldp+1376,(vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheOdd__DOT__mem
                                     [vlTOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheOdd__DOT__rdAddrReg]),32);
        tracep->fullIData(oldp+1377,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcNext),30);
        tracep->fullBit(oldp+1378,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__selSpmNext));
        tracep->fullBit(oldp+1379,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__selCacheNext));
        tracep->fullSData(oldp+1380,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__relBaseNext),11);
        tracep->fullIData(oldp+1381,(vlTOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__relocNext),32);
        tracep->fullCData(oldp+1382,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue_io_enq_bits),8);
        tracep->fullCData(oldp+1383,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__uartOcpEmu_Cmd),3);
        tracep->fullIData(oldp+1384,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__uartOcpEmu_Addr),32);
        tracep->fullIData(oldp+1385,(vlTOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__uartOcpEmu_Data),32);
        tracep->fullBit(oldp+1386,(1U));
        tracep->fullIData(oldp+1387,(0U),32);
        tracep->fullBit(oldp+1388,(0U));
        tracep->fullCData(oldp+1389,(0U),4);
    }
}
