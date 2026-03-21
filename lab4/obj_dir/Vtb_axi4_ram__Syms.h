// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_AXI4_RAM__SYMS_H_
#define VERILATED_VTB_AXI4_RAM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_axi4_ram.h"

// INCLUDE MODULE CLASSES
#include "Vtb_axi4_ram___024root.h"
#include "Vtb_axi4_ram_tb_axi4_ram.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_axi4_ram__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_axi4_ram* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_axi4_ram___024root         TOP;
    Vtb_axi4_ram_tb_axi4_ram       TOP__tb_axi4_ram;

    // SCOPE NAMES
    VerilatedScope* __Vscopep_tb_axi4_ram;

    // CONSTRUCTORS
    Vtb_axi4_ram__Syms(VerilatedContext* contextp, const char* namep, Vtb_axi4_ram* modelp);
    ~Vtb_axi4_ram__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
