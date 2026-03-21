// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb_axi4_ram_burst__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtb_axi4_ram_burst::Vtb_axi4_ram_burst(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb_axi4_ram_burst__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , tb_axi4_ram_burst{vlSymsp->TOP.tb_axi4_ram_burst}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtb_axi4_ram_burst::Vtb_axi4_ram_burst(const char* _vcname__)
    : Vtb_axi4_ram_burst(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb_axi4_ram_burst::~Vtb_axi4_ram_burst() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb_axi4_ram_burst___024root___eval_debug_assertions(Vtb_axi4_ram_burst___024root* vlSelf);
#endif  // VL_DEBUG
void Vtb_axi4_ram_burst___024root___eval_static(Vtb_axi4_ram_burst___024root* vlSelf);
void Vtb_axi4_ram_burst___024root___eval_initial(Vtb_axi4_ram_burst___024root* vlSelf);
void Vtb_axi4_ram_burst___024root___eval_settle(Vtb_axi4_ram_burst___024root* vlSelf);
void Vtb_axi4_ram_burst___024root___eval(Vtb_axi4_ram_burst___024root* vlSelf);

void Vtb_axi4_ram_burst::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb_axi4_ram_burst::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vtb_axi4_ram_burst___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vtb_axi4_ram_burst___024root___eval_static(&(vlSymsp->TOP));
        Vtb_axi4_ram_burst___024root___eval_initial(&(vlSymsp->TOP));
        Vtb_axi4_ram_burst___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vtb_axi4_ram_burst___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vtb_axi4_ram_burst::eventsPending() { return false; }

uint64_t Vtb_axi4_ram_burst::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vtb_axi4_ram_burst::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vtb_axi4_ram_burst___024root___eval_final(Vtb_axi4_ram_burst___024root* vlSelf);

VL_ATTR_COLD void Vtb_axi4_ram_burst::final() {
    Vtb_axi4_ram_burst___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb_axi4_ram_burst::hierName() const { return vlSymsp->name(); }
const char* Vtb_axi4_ram_burst::modelName() const { return "Vtb_axi4_ram_burst"; }
unsigned Vtb_axi4_ram_burst::threads() const { return 1; }
void Vtb_axi4_ram_burst::prepareClone() const { contextp()->prepareClone(); }
void Vtb_axi4_ram_burst::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtb_axi4_ram_burst::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vtb_axi4_ram_burst___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtb_axi4_ram_burst___024root__trace_init_top(Vtb_axi4_ram_burst___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtb_axi4_ram_burst___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_axi4_ram_burst___024root*>(voidSelf);
    Vtb_axi4_ram_burst__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb_axi4_ram_burst___024root__trace_decl_types(tracep);
    Vtb_axi4_ram_burst___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb_axi4_ram_burst___024root__trace_register(Vtb_axi4_ram_burst___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb_axi4_ram_burst::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb_axi4_ram_burst::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vtb_axi4_ram_burst___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
