// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VPATMOS__SYMS_H_
#define _VPATMOS__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VPatmos.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class VPatmos__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VPatmos*                       TOPp;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_Patmos__UartCmp__uart;
    VerilatedScope __Vscope_Patmos__cores_0__fetch;
    VerilatedScope __Vscope_Patmos__cores_0__icache__ctrl;
    VerilatedScope __Vscope_Patmos__cores_0__icache__mem__mcacheEven;
    VerilatedScope __Vscope_Patmos__cores_0__icache__mem__mcacheOdd;
    VerilatedScope __Vscope_Patmos__cores_0__icache__repl;
    
    // CREATORS
    VPatmos__Syms(VPatmos* topp, const char* namep);
    ~VPatmos__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
