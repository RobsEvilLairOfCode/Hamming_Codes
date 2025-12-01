// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vhamming_tb__Syms.h"


void Vhamming_tb___024root__trace_chg_0_sub_0(Vhamming_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vhamming_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_tb___024root__trace_chg_0\n"); );
    // Body
    Vhamming_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhamming_tb___024root*>(voidSelf);
    Vhamming_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vhamming_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vhamming_tb___024root__trace_chg_0_sub_0(Vhamming_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_tb___024root__trace_chg_0_sub_0\n"); );
    Vhamming_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity
                      [2U])))) {
        bufp->chgSData(oldp+0,(vlSelfRef.hamming_tb__DOT__output_message),11);
        bufp->chgSData(oldp+1,(vlSelfRef.hamming_tb__DOT__encoder_to_noise),16);
        bufp->chgSData(oldp+2,(vlSelfRef.hamming_tb__DOT__noise_to_decoder),16);
        bufp->chgBit(oldp+3,(vlSelfRef.hamming_tb__DOT__one_error_given));
        bufp->chgBit(oldp+4,(vlSelfRef.hamming_tb__DOT__one_error_detected));
        bufp->chgBit(oldp+5,(vlSelfRef.hamming_tb__DOT__two_errors_given));
        bufp->chgBit(oldp+6,(vlSelfRef.hamming_tb__DOT__two_errors_detected));
        bufp->chgSData(oldp+7,(vlSelfRef.hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__revised_message),16);
        bufp->chgCData(oldp+8,(vlSelfRef.hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__error_pos),4);
        bufp->chgBit(oldp+9,(vlSelfRef.hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__parity_bit1_check));
        bufp->chgBit(oldp+10,(vlSelfRef.hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__parity_bit2_check));
        bufp->chgBit(oldp+11,(vlSelfRef.hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__parity_bit3_check));
        bufp->chgBit(oldp+12,(vlSelfRef.hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__parity_bit4_check));
        bufp->chgCData(oldp+13,(vlSelfRef.hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__parity_check_1_bits),4);
        bufp->chgBit(oldp+14,(vlSelfRef.hamming_tb__DOT__dut_decoder__DOT__unnamedblk1__DOT__parity_check_2));
        bufp->chgIData(oldp+15,(vlSelfRef.hamming_tb__DOT__dut_encoder__DOT__unnamedblk1__DOT__hamming_message_index),32);
        bufp->chgIData(oldp+16,(vlSelfRef.hamming_tb__DOT__noise_channel__DOT__rand_number),32);
        bufp->chgIData(oldp+17,(vlSelfRef.hamming_tb__DOT__noise_channel__DOT__rand_number2),32);
    }
    bufp->chgSData(oldp+18,(vlSelfRef.hamming_tb__DOT__input_message),11);
    bufp->chgIData(oldp+19,(vlSelfRef.hamming_tb__DOT__unnamedblk1__DOT__i),32);
    bufp->chgIData(oldp+20,(vlSelfRef.hamming_tb__DOT__unnamedblk1__DOT__message),32);
}

void Vhamming_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_tb___024root__trace_cleanup\n"); );
    // Body
    Vhamming_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhamming_tb___024root*>(voidSelf);
    Vhamming_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
