// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VPatmos__Syms.h"
#include "VPatmos.h"



// FUNCTIONS
VPatmos__Syms::VPatmos__Syms(VPatmos* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    // Setup scopes
    __Vscope_Patmos__UartCmp__uart.configure(this, name(), "Patmos.UartCmp.uart", "uart", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_Patmos__cores_0__fetch.configure(this, name(), "Patmos.cores_0.fetch", "fetch", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_Patmos__cores_0__icache__ctrl.configure(this, name(), "Patmos.cores_0.icache.ctrl", "ctrl", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_Patmos__cores_0__icache__mem__mcacheEven.configure(this, name(), "Patmos.cores_0.icache.mem.mcacheEven", "mcacheEven", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_Patmos__cores_0__icache__mem__mcacheOdd.configure(this, name(), "Patmos.cores_0.icache.mem.mcacheOdd", "mcacheOdd", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_Patmos__cores_0__icache__repl.configure(this, name(), "Patmos.cores_0.icache.repl", "repl", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_Patmos__UartCmp__uart.varInsert(__Vfinal,"txQueue_io_enq_bits", &(TOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__txQueue_io_enq_bits), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,7,0);
        __Vscope_Patmos__UartCmp__uart.varInsert(__Vfinal,"uartOcpEmu_Addr", &(TOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__uartOcpEmu_Addr), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_Patmos__UartCmp__uart.varInsert(__Vfinal,"uartOcpEmu_Cmd", &(TOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__uartOcpEmu_Cmd), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,2,0);
        __Vscope_Patmos__UartCmp__uart.varInsert(__Vfinal,"uartOcpEmu_Data", &(TOPp->Patmos__DOT__UartCmp__DOT__uart__DOT__uartOcpEmu_Data), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_Patmos__cores_0__fetch.varInsert(__Vfinal,"pcNext", &(TOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__pcNext), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,29,0);
        __Vscope_Patmos__cores_0__fetch.varInsert(__Vfinal,"relBaseNext", &(TOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__relBaseNext), VLVT_UINT16,VLVD_NODIR|VLVF_PUB_RW,1 ,10,0);
        __Vscope_Patmos__cores_0__fetch.varInsert(__Vfinal,"relocNext", &(TOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__relocNext), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_Patmos__cores_0__fetch.varInsert(__Vfinal,"selCacheNext", &(TOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__selCacheNext), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_Patmos__cores_0__fetch.varInsert(__Vfinal,"selSpmNext", &(TOPp->Patmos__DOT__cores_0__DOT__fetch__DOT__selSpmNext), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_Patmos__cores_0__icache__ctrl.varInsert(__Vfinal,"callRetBaseNext", &(TOPp->Patmos__DOT__cores_0__DOT__icache__DOT__ctrl__DOT__callRetBaseNext), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_Patmos__cores_0__icache__mem__mcacheEven.varInsert(__Vfinal,"mem", &(TOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheEven__DOT__mem), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,1023,0);
        __Vscope_Patmos__cores_0__icache__mem__mcacheOdd.varInsert(__Vfinal,"mem", &(TOPp->Patmos__DOT__cores_0__DOT__icache__DOT__mem__DOT__mcacheOdd__DOT__mem), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,1023,0);
        __Vscope_Patmos__cores_0__icache__repl.varInsert(__Vfinal,"callRetBaseNext", &(TOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__callRetBaseNext), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
        __Vscope_Patmos__cores_0__icache__repl.varInsert(__Vfinal,"hitNext", &(TOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__hitNext), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_Patmos__cores_0__icache__repl.varInsert(__Vfinal,"selCacheNext", &(TOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__selCacheNext), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
        __Vscope_Patmos__cores_0__icache__repl.varInsert(__Vfinal,"selSpmNext", &(TOPp->Patmos__DOT__cores_0__DOT__icache__DOT__repl__DOT__selSpmNext), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
    }
}
