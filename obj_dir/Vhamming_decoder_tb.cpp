// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vhamming_decoder_tb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vhamming_decoder_tb::Vhamming_decoder_tb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vhamming_decoder_tb__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vhamming_decoder_tb::Vhamming_decoder_tb(const char* _vcname__)
    : Vhamming_decoder_tb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vhamming_decoder_tb::~Vhamming_decoder_tb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vhamming_decoder_tb___024root___eval_debug_assertions(Vhamming_decoder_tb___024root* vlSelf);
#endif  // VL_DEBUG
void Vhamming_decoder_tb___024root___eval_static(Vhamming_decoder_tb___024root* vlSelf);
void Vhamming_decoder_tb___024root___eval_initial(Vhamming_decoder_tb___024root* vlSelf);
void Vhamming_decoder_tb___024root___eval_settle(Vhamming_decoder_tb___024root* vlSelf);
void Vhamming_decoder_tb___024root___eval(Vhamming_decoder_tb___024root* vlSelf);

void Vhamming_decoder_tb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vhamming_decoder_tb::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vhamming_decoder_tb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vhamming_decoder_tb___024root___eval_static(&(vlSymsp->TOP));
        Vhamming_decoder_tb___024root___eval_initial(&(vlSymsp->TOP));
        Vhamming_decoder_tb___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vhamming_decoder_tb___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Vhamming_decoder_tb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vhamming_decoder_tb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vhamming_decoder_tb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Vhamming_decoder_tb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vhamming_decoder_tb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vhamming_decoder_tb___024root___eval_final(Vhamming_decoder_tb___024root* vlSelf);

VL_ATTR_COLD void Vhamming_decoder_tb::final() {
    Vhamming_decoder_tb___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vhamming_decoder_tb::hierName() const { return vlSymsp->name(); }
const char* Vhamming_decoder_tb::modelName() const { return "Vhamming_decoder_tb"; }
unsigned Vhamming_decoder_tb::threads() const { return 1; }
void Vhamming_decoder_tb::prepareClone() const { contextp()->prepareClone(); }
void Vhamming_decoder_tb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vhamming_decoder_tb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vhamming_decoder_tb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vhamming_decoder_tb___024root__trace_init_top(Vhamming_decoder_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vhamming_decoder_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhamming_decoder_tb___024root*>(voidSelf);
    Vhamming_decoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vhamming_decoder_tb___024root__trace_decl_types(tracep);
    Vhamming_decoder_tb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vhamming_decoder_tb___024root__trace_register(Vhamming_decoder_tb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vhamming_decoder_tb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vhamming_decoder_tb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vhamming_decoder_tb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
