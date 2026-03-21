// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_AXIS_FIFO__SYMS_H_
#define VERILATED_VTB_AXIS_FIFO__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_axis_fifo.h"

// INCLUDE MODULE CLASSES
#include "Vtb_axis_fifo___024root.h"
#include "Vtb_axis_fifo_tb_axis_fifo.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_axis_fifo__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_axis_fifo* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb_axis_fifo___024root        TOP;
    Vtb_axis_fifo_tb_axis_fifo     TOP__tb_axis_fifo;

    // SCOPE NAMES
    VerilatedScope* __Vscopep_tb_axis_fifo;

    // CONSTRUCTORS
    Vtb_axis_fifo__Syms(VerilatedContext* contextp, const char* namep, Vtb_axis_fifo* modelp);
    ~Vtb_axis_fifo__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
