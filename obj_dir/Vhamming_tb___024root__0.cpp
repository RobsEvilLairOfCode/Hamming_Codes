// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhamming_tb.h for the primary calling header

#include "Vhamming_tb__pch.h"

VL_ATTR_COLD void Vhamming_tb___024root___eval_initial__TOP(Vhamming_tb___024root* vlSelf);
VlCoroutine Vhamming_tb___024root___eval_initial__TOP__Vtiming__0(Vhamming_tb___024root* vlSelf);

void Vhamming_tb___024root___eval_initial(Vhamming_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_tb___024root___eval_initial\n"); );
    Vhamming_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vhamming_tb___024root___eval_initial__TOP(vlSelf);
    Vhamming_tb___024root___eval_initial__TOP__Vtiming__0(vlSelf);
}

VlCoroutine Vhamming_tb___024root___eval_initial__TOP__Vtiming__0(Vhamming_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vhamming_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.hamming_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x0000000aU, vlSelfRef.hamming_tb__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.hamming_tb__DOT__unnamedblk1__DOT__message 
            = VL_RANDOM_I();
        vlSelfRef.hamming_tb__DOT__input_message = 
            (0x000007ffU & vlSelfRef.hamming_tb__DOT__unnamedblk1__DOT__message);
        co_await vlSelfRef.__VdlySched.delay(0x000000000000000aULL, 
                                             nullptr, 
                                             "hamming_tb.sv", 
                                             28);
        vlSelfRef.hamming_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__unnamedblk1__DOT__i);
    }
    VL_FINISH_MT("hamming_tb.sv", 30, "");
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhamming_tb___024root___dump_triggers__act(Vhamming_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vhamming_tb___024root___eval_triggers__act(Vhamming_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_tb___024root___eval_triggers__act\n"); );
    Vhamming_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, vlSelfRef.__VdlySched.awaitingCurrentTime());
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vhamming_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}

void Vhamming_tb___024root___act_sequent__TOP__0(Vhamming_tb___024root* vlSelf);

void Vhamming_tb___024root___eval_act(Vhamming_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_tb___024root___eval_act\n"); );
    Vhamming_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vhamming_tb___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[1U] = 1U;
    }
}

void Vhamming_tb___024root___act_sequent__TOP__0(Vhamming_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_tb___024root___act_sequent__TOP__0\n"); );
    Vhamming_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.hamming_tb__DOT__encoder_to_noise = (
                                                   (0xfff7U 
                                                    & (IData)(vlSelfRef.hamming_tb__DOT__encoder_to_noise)) 
                                                   | (8U 
                                                      & ((IData)(vlSelfRef.hamming_tb__DOT__input_message) 
                                                         << 3U)));
    vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index = 4U;
    if ((2U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((4U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((8U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    vlSelfRef.hamming_tb__DOT__encoder_to_noise = (
                                                   ((~ 
                                                     ((IData)(1U) 
                                                      << 
                                                      (0x0000000fU 
                                                       & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) 
                                                    & (IData)(vlSelfRef.hamming_tb__DOT__encoder_to_noise)) 
                                                   | (0x0000ffffU 
                                                      & ((1U 
                                                          & ((IData)(vlSelfRef.hamming_tb__DOT__input_message) 
                                                             >> 1U)) 
                                                         << 
                                                         (0x0000000fU 
                                                          & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))));
    vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
        = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    if ((0U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((1U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((2U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((4U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((8U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    vlSelfRef.hamming_tb__DOT__encoder_to_noise = (
                                                   ((~ 
                                                     ((IData)(1U) 
                                                      << 
                                                      (0x0000000fU 
                                                       & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) 
                                                    & (IData)(vlSelfRef.hamming_tb__DOT__encoder_to_noise)) 
                                                   | (0x0000ffffU 
                                                      & ((1U 
                                                          & ((IData)(vlSelfRef.hamming_tb__DOT__input_message) 
                                                             >> 2U)) 
                                                         << 
                                                         (0x0000000fU 
                                                          & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))));
    vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
        = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    if ((0U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((1U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((2U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((4U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((8U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    vlSelfRef.hamming_tb__DOT__encoder_to_noise = (
                                                   ((~ 
                                                     ((IData)(1U) 
                                                      << 
                                                      (0x0000000fU 
                                                       & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) 
                                                    & (IData)(vlSelfRef.hamming_tb__DOT__encoder_to_noise)) 
                                                   | (0x0000ffffU 
                                                      & ((1U 
                                                          & ((IData)(vlSelfRef.hamming_tb__DOT__input_message) 
                                                             >> 3U)) 
                                                         << 
                                                         (0x0000000fU 
                                                          & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))));
    vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
        = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    if ((0U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((1U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((2U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((4U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((8U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    vlSelfRef.hamming_tb__DOT__encoder_to_noise = (
                                                   ((~ 
                                                     ((IData)(1U) 
                                                      << 
                                                      (0x0000000fU 
                                                       & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) 
                                                    & (IData)(vlSelfRef.hamming_tb__DOT__encoder_to_noise)) 
                                                   | (0x0000ffffU 
                                                      & ((1U 
                                                          & ((IData)(vlSelfRef.hamming_tb__DOT__input_message) 
                                                             >> 4U)) 
                                                         << 
                                                         (0x0000000fU 
                                                          & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))));
    vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
        = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    if ((0U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((1U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((2U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((4U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((8U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    vlSelfRef.hamming_tb__DOT__encoder_to_noise = (
                                                   ((~ 
                                                     ((IData)(1U) 
                                                      << 
                                                      (0x0000000fU 
                                                       & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) 
                                                    & (IData)(vlSelfRef.hamming_tb__DOT__encoder_to_noise)) 
                                                   | (0x0000ffffU 
                                                      & ((1U 
                                                          & ((IData)(vlSelfRef.hamming_tb__DOT__input_message) 
                                                             >> 5U)) 
                                                         << 
                                                         (0x0000000fU 
                                                          & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))));
    vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
        = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    if ((0U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((1U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((2U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((4U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((8U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    vlSelfRef.hamming_tb__DOT__encoder_to_noise = (
                                                   ((~ 
                                                     ((IData)(1U) 
                                                      << 
                                                      (0x0000000fU 
                                                       & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) 
                                                    & (IData)(vlSelfRef.hamming_tb__DOT__encoder_to_noise)) 
                                                   | (0x0000ffffU 
                                                      & ((1U 
                                                          & ((IData)(vlSelfRef.hamming_tb__DOT__input_message) 
                                                             >> 6U)) 
                                                         << 
                                                         (0x0000000fU 
                                                          & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))));
    vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
        = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    if ((0U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((1U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((2U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((4U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((8U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    vlSelfRef.hamming_tb__DOT__encoder_to_noise = (
                                                   ((~ 
                                                     ((IData)(1U) 
                                                      << 
                                                      (0x0000000fU 
                                                       & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) 
                                                    & (IData)(vlSelfRef.hamming_tb__DOT__encoder_to_noise)) 
                                                   | (0x0000ffffU 
                                                      & ((1U 
                                                          & ((IData)(vlSelfRef.hamming_tb__DOT__input_message) 
                                                             >> 7U)) 
                                                         << 
                                                         (0x0000000fU 
                                                          & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))));
    vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
        = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    if ((0U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((1U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((2U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((4U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((8U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    vlSelfRef.hamming_tb__DOT__encoder_to_noise = (
                                                   ((~ 
                                                     ((IData)(1U) 
                                                      << 
                                                      (0x0000000fU 
                                                       & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) 
                                                    & (IData)(vlSelfRef.hamming_tb__DOT__encoder_to_noise)) 
                                                   | (0x0000ffffU 
                                                      & ((1U 
                                                          & ((IData)(vlSelfRef.hamming_tb__DOT__input_message) 
                                                             >> 8U)) 
                                                         << 
                                                         (0x0000000fU 
                                                          & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))));
    vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
        = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    if ((0U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((1U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((2U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((4U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((8U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    vlSelfRef.hamming_tb__DOT__encoder_to_noise = (
                                                   ((~ 
                                                     ((IData)(1U) 
                                                      << 
                                                      (0x0000000fU 
                                                       & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) 
                                                    & (IData)(vlSelfRef.hamming_tb__DOT__encoder_to_noise)) 
                                                   | (0x0000ffffU 
                                                      & ((1U 
                                                          & ((IData)(vlSelfRef.hamming_tb__DOT__input_message) 
                                                             >> 9U)) 
                                                         << 
                                                         (0x0000000fU 
                                                          & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))));
    vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
        = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    if ((0U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((1U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((2U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((4U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    if ((8U == (0x0000000fU & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) {
        vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
            = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    }
    vlSelfRef.hamming_tb__DOT__encoder_to_noise = (
                                                   ((~ 
                                                     ((IData)(1U) 
                                                      << 
                                                      (0x0000000fU 
                                                       & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))) 
                                                    & (IData)(vlSelfRef.hamming_tb__DOT__encoder_to_noise)) 
                                                   | (0x0000ffffU 
                                                      & ((1U 
                                                          & ((IData)(vlSelfRef.hamming_tb__DOT__input_message) 
                                                             >> 0x0aU)) 
                                                         << 
                                                         (0x0000000fU 
                                                          & vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index))));
    vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index 
        = ((IData)(1U) + vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index);
    vlSelfRef.hamming_tb__DOT__encoder_to_noise = (
                                                   (0xfffdU 
                                                    & (IData)(vlSelfRef.hamming_tb__DOT__encoder_to_noise)) 
                                                   | (2U 
                                                      & (VL_REDXOR_32(
                                                                      (0xaaa8U 
                                                                       & (IData)(vlSelfRef.hamming_tb__DOT__encoder_to_noise))) 
                                                         << 1U)));
    vlSelfRef.hamming_tb__DOT__encoder_to_noise = (
                                                   (0xfffbU 
                                                    & (IData)(vlSelfRef.hamming_tb__DOT__encoder_to_noise)) 
                                                   | (4U 
                                                      & (VL_REDXOR_32(
                                                                      (0xccc8U 
                                                                       & (IData)(vlSelfRef.hamming_tb__DOT__encoder_to_noise))) 
                                                         << 2U)));
    vlSelfRef.hamming_tb__DOT__encoder_to_noise = (
                                                   (0xffefU 
                                                    & (IData)(vlSelfRef.hamming_tb__DOT__encoder_to_noise)) 
                                                   | (0x00000010U 
                                                      & (VL_REDXOR_32(
                                                                      (0xf0e0U 
                                                                       & (IData)(vlSelfRef.hamming_tb__DOT__encoder_to_noise))) 
                                                         << 4U)));
    vlSelfRef.hamming_tb__DOT__encoder_to_noise = (
                                                   (0xfeffU 
                                                    & (IData)(vlSelfRef.hamming_tb__DOT__encoder_to_noise)) 
                                                   | (0x00000100U 
                                                      & (VL_REDXOR_32(
                                                                      (0xfe00U 
                                                                       & (IData)(vlSelfRef.hamming_tb__DOT__encoder_to_noise))) 
                                                         << 8U)));
    vlSelfRef.hamming_tb__DOT__encoder_to_noise = (
                                                   (0xfffeU 
                                                    & (IData)(vlSelfRef.hamming_tb__DOT__encoder_to_noise)) 
                                                   | (1U 
                                                      & VL_REDXOR_32(
                                                                     (0x00007fffU 
                                                                      & ((IData)(vlSelfRef.hamming_tb__DOT__encoder_to_noise) 
                                                                         >> 1U)))));
    vlSelfRef.hamming_tb__DOT__noise_channel__DOT__rand_number 
        = VL_MODDIV_III(32, (IData)(VL_RANDOM_I()), (IData)(0x000000a0U));
    vlSelfRef.hamming_tb__DOT__noise_channel__DOT__rand_number2 
        = VL_MODDIV_III(32, (IData)(VL_RANDOM_I()), (IData)(0x000000a0U));
    vlSelfRef.hamming_tb__DOT__noise_to_decoder = vlSelfRef.hamming_tb__DOT__encoder_to_noise;
    vlSelfRef.hamming_tb__DOT__one_error_given = 0U;
    vlSelfRef.hamming_tb__DOT__two_errors_given = 0U;
    if (VL_GTES_III(32, 0x00000060U, vlSelfRef.hamming_tb__DOT__noise_channel__DOT__rand_number)) {
        if (VL_LTS_III(32, 0x00000090U, vlSelfRef.hamming_tb__DOT__noise_channel__DOT__rand_number)) {
            vlSelfRef.hamming_tb__DOT__noise_to_decoder 
                = (((~ ((IData)(1U) << (0x0000000fU 
                                        & VL_MODDIVS_III(32, vlSelfRef.hamming_tb__DOT__noise_channel__DOT__rand_number, (IData)(0x00000010U))))) 
                    & (IData)(vlSelfRef.hamming_tb__DOT__noise_to_decoder)) 
                   | (0x0000ffffU & ((1U & (~ ((IData)(vlSelfRef.hamming_tb__DOT__encoder_to_noise) 
                                               >> (0x0000000fU 
                                                   & VL_MODDIVS_III(32, vlSelfRef.hamming_tb__DOT__noise_channel__DOT__rand_number, (IData)(0x00000010U)))))) 
                                     << (0x0000000fU 
                                         & VL_MODDIVS_III(32, vlSelfRef.hamming_tb__DOT__noise_channel__DOT__rand_number, (IData)(0x00000010U))))));
            vlSelfRef.hamming_tb__DOT__one_error_given = 1U;
        } else {
            vlSelfRef.hamming_tb__DOT__noise_to_decoder 
                = (((~ ((IData)(1U) << (0x0000000fU 
                                        & VL_MODDIVS_III(32, vlSelfRef.hamming_tb__DOT__noise_channel__DOT__rand_number, (IData)(0x00000010U))))) 
                    & (IData)(vlSelfRef.hamming_tb__DOT__noise_to_decoder)) 
                   | (0x0000ffffU & ((1U & (~ ((IData)(vlSelfRef.hamming_tb__DOT__encoder_to_noise) 
                                               >> (0x0000000fU 
                                                   & VL_MODDIVS_III(32, vlSelfRef.hamming_tb__DOT__noise_channel__DOT__rand_number, (IData)(0x00000010U)))))) 
                                     << (0x0000000fU 
                                         & VL_MODDIVS_III(32, vlSelfRef.hamming_tb__DOT__noise_channel__DOT__rand_number, (IData)(0x00000010U))))));
            if ((VL_MODDIVS_III(32, vlSelfRef.hamming_tb__DOT__noise_channel__DOT__rand_number2, (IData)(0x00000010U)) 
                 == VL_MODDIVS_III(32, vlSelfRef.hamming_tb__DOT__noise_channel__DOT__rand_number, (IData)(0x00000010U)))) {
                vlSelfRef.hamming_tb__DOT__one_error_given = 1U;
            } else {
                vlSelfRef.hamming_tb__DOT__noise_to_decoder 
                    = (((~ ((IData)(1U) << (0x0000000fU 
                                            & VL_MODDIVS_III(32, vlSelfRef.hamming_tb__DOT__noise_channel__DOT__rand_number2, (IData)(0x00000010U))))) 
                        & (IData)(vlSelfRef.hamming_tb__DOT__noise_to_decoder)) 
                       | (0x0000ffffU & ((1U & (~ ((IData)(vlSelfRef.hamming_tb__DOT__encoder_to_noise) 
                                                   >> 
                                                   (0x0000000fU 
                                                    & VL_MODDIVS_III(32, vlSelfRef.hamming_tb__DOT__noise_channel__DOT__rand_number2, (IData)(0x00000010U)))))) 
                                         << (0x0000000fU 
                                             & VL_MODDIVS_III(32, vlSelfRef.hamming_tb__DOT__noise_channel__DOT__rand_number2, (IData)(0x00000010U))))));
                vlSelfRef.hamming_tb__DOT__two_errors_given = 1U;
            }
        }
    }
    vlSelfRef.hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__parity_bit1_check 
        = ((1U & ((IData)(vlSelfRef.hamming_tb__DOT__noise_to_decoder) 
                  >> 1U)) == (1U & VL_REDXOR_32((0xaaa8U 
                                                 & (IData)(vlSelfRef.hamming_tb__DOT__noise_to_decoder)))));
    vlSelfRef.hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__parity_bit2_check 
        = ((1U & ((IData)(vlSelfRef.hamming_tb__DOT__noise_to_decoder) 
                  >> 2U)) == (1U & VL_REDXOR_32((0xccc8U 
                                                 & (IData)(vlSelfRef.hamming_tb__DOT__noise_to_decoder)))));
    vlSelfRef.hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__parity_bit3_check 
        = ((1U & ((IData)(vlSelfRef.hamming_tb__DOT__noise_to_decoder) 
                  >> 4U)) == (1U & VL_REDXOR_32((0xf0e0U 
                                                 & (IData)(vlSelfRef.hamming_tb__DOT__noise_to_decoder)))));
    vlSelfRef.hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__parity_bit4_check 
        = ((1U & ((IData)(vlSelfRef.hamming_tb__DOT__noise_to_decoder) 
                  >> 8U)) == (1U & VL_REDXOR_32((0xfe00U 
                                                 & (IData)(vlSelfRef.hamming_tb__DOT__noise_to_decoder)))));
    vlSelfRef.hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__parity_check_1_bits 
        = ((((IData)(vlSelfRef.hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__parity_bit4_check) 
             << 3U) | ((IData)(vlSelfRef.hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__parity_bit3_check) 
                       << 2U)) | (((IData)(vlSelfRef.hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__parity_bit2_check) 
                                   << 1U) | (IData)(vlSelfRef.hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__parity_bit1_check)));
    vlSelfRef.hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__parity_check_2 
        = ((1U & (IData)(vlSelfRef.hamming_tb__DOT__noise_to_decoder)) 
           == (1U & VL_REDXOR_32((0x00007fffU & ((IData)(vlSelfRef.hamming_tb__DOT__noise_to_decoder) 
                                                 >> 1U)))));
    vlSelfRef.hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__error_pos = 0U;
    vlSelfRef.hamming_tb__DOT__one_error_detected = 0U;
    vlSelfRef.hamming_tb__DOT__two_errors_detected = 0U;
    vlSelfRef.hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__revised_message 
        = vlSelfRef.hamming_tb__DOT__noise_to_decoder;
    if ((1U & ((~ (0x0000000fU == (IData)(vlSelfRef.hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__parity_check_1_bits))) 
               & (~ (IData)(vlSelfRef.hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__parity_check_2))))) {
        vlSelfRef.hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__error_pos 
            = (0x0000000fU & (((VL_SHIFTL_III(4,4,32, 
                                              ((1U 
                                                & ((IData)(vlSelfRef.hamming_tb__DOT__noise_to_decoder) 
                                                   >> 8U)) 
                                               != (1U 
                                                   & VL_REDXOR_32(
                                                                  (0xfe00U 
                                                                   & (IData)(vlSelfRef.hamming_tb__DOT__noise_to_decoder))))), 3U) 
                                | VL_SHIFTL_III(4,4,32, 
                                                ((1U 
                                                  & ((IData)(vlSelfRef.hamming_tb__DOT__noise_to_decoder) 
                                                     >> 4U)) 
                                                 != 
                                                 (1U 
                                                  & VL_REDXOR_32(
                                                                 (0xf0e0U 
                                                                  & (IData)(vlSelfRef.hamming_tb__DOT__noise_to_decoder))))), 2U)) 
                               | VL_SHIFTL_III(4,4,32, 
                                               ((1U 
                                                 & ((IData)(vlSelfRef.hamming_tb__DOT__noise_to_decoder) 
                                                    >> 2U)) 
                                                != 
                                                (1U 
                                                 & VL_REDXOR_32(
                                                                (0xccc8U 
                                                                 & (IData)(vlSelfRef.hamming_tb__DOT__noise_to_decoder))))), 1U)) 
                              | ((1U & ((IData)(vlSelfRef.hamming_tb__DOT__noise_to_decoder) 
                                        >> 1U)) != 
                                 (1U & VL_REDXOR_32(
                                                    (0xaaa8U 
                                                     & (IData)(vlSelfRef.hamming_tb__DOT__noise_to_decoder)))))));
        vlSelfRef.hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__revised_message 
            = (((~ ((IData)(1U) << (IData)(vlSelfRef.hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__error_pos))) 
                & (IData)(vlSelfRef.hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__revised_message)) 
               | (0x0000ffffU & ((1U & (~ ((IData)(vlSelfRef.hamming_tb__DOT__noise_to_decoder) 
                                           >> (IData)(vlSelfRef.hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__error_pos)))) 
                                 << (IData)(vlSelfRef.hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__error_pos))));
        vlSelfRef.hamming_tb__DOT__one_error_detected = 1U;
        vlSelfRef.hamming_tb__DOT__two_errors_detected = 0U;
    } else if (((0x0000000fU == (IData)(vlSelfRef.hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__parity_check_1_bits)) 
                & (~ (IData)(vlSelfRef.hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__parity_check_2)))) {
        vlSelfRef.hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__revised_message 
            = ((0xfffeU & (IData)(vlSelfRef.hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__revised_message)) 
               | (1U & (~ (IData)(vlSelfRef.hamming_tb__DOT__noise_to_decoder))));
        vlSelfRef.hamming_tb__DOT__one_error_detected = 1U;
        vlSelfRef.hamming_tb__DOT__two_errors_detected = 0U;
    } else if (((~ (0x0000000fU == (IData)(vlSelfRef.hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__parity_check_1_bits))) 
                & (IData)(vlSelfRef.hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__parity_check_2))) {
        vlSelfRef.hamming_tb__DOT__one_error_detected = 0U;
        vlSelfRef.hamming_tb__DOT__two_errors_detected = 1U;
    } else {
        vlSelfRef.hamming_tb__DOT__one_error_detected = 0U;
        vlSelfRef.hamming_tb__DOT__two_errors_detected = 0U;
    }
    vlSelfRef.hamming_tb__DOT__output_message = ((0x000007f0U 
                                                  & ((IData)(vlSelfRef.hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__revised_message) 
                                                     >> 5U)) 
                                                 | ((0x0000000eU 
                                                     & ((IData)(vlSelfRef.hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__revised_message) 
                                                        >> 4U)) 
                                                    | (1U 
                                                       & ((IData)(vlSelfRef.hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__revised_message) 
                                                          >> 3U))));
}

void Vhamming_tb___024root___eval_nba(Vhamming_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_tb___024root___eval_nba\n"); );
    Vhamming_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vhamming_tb___024root___act_sequent__TOP__0(vlSelf);
        vlSelfRef.__Vm_traceActivity[2U] = 1U;
    }
}

void Vhamming_tb___024root___timing_resume(Vhamming_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_tb___024root___timing_resume\n"); );
    Vhamming_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

bool Vhamming_tb___024root___eval_phase__act(Vhamming_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_tb___024root___eval_phase__act\n"); );
    Vhamming_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vhamming_tb___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vhamming_tb___024root___timing_resume(vlSelf);
        Vhamming_tb___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vhamming_tb___024root___eval_phase__nba(Vhamming_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_tb___024root___eval_phase__nba\n"); );
    Vhamming_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vhamming_tb___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vhamming_tb___024root___dump_triggers__nba(Vhamming_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vhamming_tb___024root___eval(Vhamming_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_tb___024root___eval\n"); );
    Vhamming_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vhamming_tb___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("hamming_tb.sv", 1, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vhamming_tb___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("hamming_tb.sv", 1, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vhamming_tb___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vhamming_tb___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vhamming_tb___024root___eval_debug_assertions(Vhamming_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_tb___024root___eval_debug_assertions\n"); );
    Vhamming_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
