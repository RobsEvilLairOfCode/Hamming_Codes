// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vhamming_encoder_tb.h for the primary calling header

#include "Vhamming_encoder_tb__pch.h"

void Vhamming_encoder_tb___024root___ctor_var_reset(Vhamming_encoder_tb___024root* vlSelf);

Vhamming_encoder_tb___024root::Vhamming_encoder_tb___024root(Vhamming_encoder_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vhamming_encoder_tb___024root___ctor_var_reset(this);
}

void Vhamming_encoder_tb___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vhamming_encoder_tb___024root::~Vhamming_encoder_tb___024root() {
}
