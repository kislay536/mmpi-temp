// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcmp_top.h for the primary calling header

#include "Vcmp_top__pch.h"

void Vcmp_top___024root___ctor_var_reset(Vcmp_top___024root* vlSelf);

Vcmp_top___024root::Vcmp_top___024root(Vcmp_top__Syms* symsp, const char* namep)
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vcmp_top___024root___ctor_var_reset(this);
}

void Vcmp_top___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vcmp_top___024root::~Vcmp_top___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
