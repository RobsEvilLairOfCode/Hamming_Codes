// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhamming_tb.h for the primary calling header

#include "Vhamming_tb__pch.h"

// Parameter definitions for Vhamming_tb___024root
constexpr VlUnpacked<CData/*3:0*/, 5> Vhamming_tb___024root::hamming_tb__DOT__dut_encoder__DOT__parity_pos;


void Vhamming_tb___024root___ctor_var_reset(Vhamming_tb___024root* vlSelf);

Vhamming_tb___024root::Vhamming_tb___024root(Vhamming_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vhamming_tb___024root___ctor_var_reset(this);
}

void Vhamming_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vhamming_tb___024root::~Vhamming_tb___024root() {
}
