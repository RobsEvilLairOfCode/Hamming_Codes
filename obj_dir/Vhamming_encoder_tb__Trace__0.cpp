// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vhamming_encoder_tb__Syms.h"


void Vhamming_encoder_tb___024root__trace_chg_0_sub_0(Vhamming_encoder_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vhamming_encoder_tb___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_encoder_tb___024root__trace_chg_0\n"); );
    // Body
    Vhamming_encoder_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhamming_encoder_tb___024root*>(voidSelf);
    Vhamming_encoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vhamming_encoder_tb___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vhamming_encoder_tb___024root__trace_chg_0_sub_0(Vhamming_encoder_tb___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_encoder_tb___024root__trace_chg_0_sub_0\n"); );
    Vhamming_encoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[0U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos[0]),32);
        bufp->chgIData(oldp+1,(vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos[1]),32);
        bufp->chgIData(oldp+2,(vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos[2]),32);
        bufp->chgIData(oldp+3,(vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos[3]),32);
        bufp->chgIData(oldp+4,(vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__parity_pos[4]),32);
    }
    bufp->chgSData(oldp+5,(vlSelfRef.hamming_encoder_tb__DOT__message),11);
    bufp->chgSData(oldp+6,(vlSelfRef.hamming_encoder_tb__DOT__hamming_message),16);
    bufp->chgIData(oldp+7,(vlSelfRef.hamming_encoder_tb__DOT__dut__DOT__unnamedblk1__DOT__hamming_message_index),32);
}

void Vhamming_encoder_tb___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vhamming_encoder_tb___024root__trace_cleanup\n"); );
    // Body
    Vhamming_encoder_tb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vhamming_encoder_tb___024root*>(voidSelf);
    Vhamming_encoder_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
}
