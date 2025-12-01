// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhamming_encoder_tb.h for the primary calling header

#include "Vhamming_encoder_tb__pch.h"

VL_ATTR_COLD void Vhamming_encoder_tb___024root___eval_static__TOP(Vhamming_encoder_tb___024root* vlSelf);
VL_ATTR_COLD void Vhamming_encoder_tb___024root____Vm_traceActivitySetAll(Vhamming_encoder_tb___024root* vlSelf);

VL_ATTR_COLD void Vhamming_encoder_tb___024root___eval_static(Vhamming_encoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_encoder_tb___024root___eval_static\n"); );
    Vhamming_encoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vhamming_encoder_tb___024root___eval_static__TOP(vlSelf);
    Vhamming_encoder_tb___024root____Vm_traceActivitySetAll(vlSelf);
}

VL_ATTR_COLD void Vhamming_encoder_tb___024root___eval_static__TOP(Vhamming_encoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_encoder_tb___024root___eval_static__TOP\n"); );
    Vhamming_encoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos[0U] = 0U;
    vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos[1U] = 1U;
    vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos[2U] = 2U;
    vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos[3U] = 4U;
    vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos[4U] = 8U;
}

VL_ATTR_COLD void Vhamming_encoder_tb___024root___eval_initial__TOP(Vhamming_encoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_encoder_tb___024root___eval_initial__TOP\n"); );
    Vhamming_encoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("waveform_hamming_message.vcd"s);
    vlSymsp->_traceDumpOpen();
}

VL_ATTR_COLD void Vhamming_encoder_tb___024root___eval_final(Vhamming_encoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_encoder_tb___024root___eval_final\n"); );
    Vhamming_encoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhamming_encoder_tb___024root___dump_triggers__stl(Vhamming_encoder_tb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vhamming_encoder_tb___024root___eval_phase__stl(Vhamming_encoder_tb___024root* vlSelf);

VL_ATTR_COLD void Vhamming_encoder_tb___024root___eval_settle(Vhamming_encoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_encoder_tb___024root___eval_settle\n"); );
    Vhamming_encoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vhamming_encoder_tb___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("hamming_encoder_tb.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vhamming_encoder_tb___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

VL_ATTR_COLD void Vhamming_encoder_tb___024root___eval_triggers__stl(Vhamming_encoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_encoder_tb___024root___eval_triggers__stl\n"); );
    Vhamming_encoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered.setBit(0U, (IData)(vlSelfRef.__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vhamming_encoder_tb___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhamming_encoder_tb___024root___dump_triggers__stl(Vhamming_encoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_encoder_tb___024root___dump_triggers__stl\n"); );
    Vhamming_encoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vhamming_encoder_tb___024root___act_sequent__TOP__0(Vhamming_encoder_tb___024root* vlSelf);

VL_ATTR_COLD void Vhamming_encoder_tb___024root___eval_stl(Vhamming_encoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_encoder_tb___024root___eval_stl\n"); );
    Vhamming_encoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        Vhamming_encoder_tb___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vhamming_encoder_tb___024root___eval_phase__stl(Vhamming_encoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_encoder_tb___024root___eval_phase__stl\n"); );
    Vhamming_encoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vhamming_encoder_tb___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelfRef.__VstlTriggered.any();
    if (__VstlExecute) {
        Vhamming_encoder_tb___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhamming_encoder_tb___024root___dump_triggers__act(Vhamming_encoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_encoder_tb___024root___dump_triggers__act\n"); );
    Vhamming_encoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VactTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhamming_encoder_tb___024root___dump_triggers__nba(Vhamming_encoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_encoder_tb___024root___dump_triggers__nba\n"); );
    Vhamming_encoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VnbaTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vhamming_encoder_tb___024root____Vm_traceActivitySetAll(Vhamming_encoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_encoder_tb___024root____Vm_traceActivitySetAll\n"); );
    Vhamming_encoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void Vhamming_encoder_tb___024root___ctor_var_reset(Vhamming_encoder_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_encoder_tb___024root___ctor_var_reset\n"); );
    Vhamming_encoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->hamming_encoder_tb__DOT__message = VL_SCOPED_RAND_RESET_I(11, __VscopeHash, 15920908654804882564ull);
    vlSelf->hamming_encoder_tb__DOT__hamming_message = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2892547501175606707ull);
    for (int __Vi0 = 0; __Vi0 < 5; ++__Vi0) {
        vlSelf->hamming_encoder_tb__DOT__dut__DOT__parity_pos[__Vi0] = 0;
    }
    vlSelf->hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
