// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vcmp_top.h for the primary calling header

#ifndef VERILATED_VCMP_TOP___024ROOT_H_
#define VERILATED_VCMP_TOP___024ROOT_H_  // guard

#include "verilated.h"


class Vcmp_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vcmp_top___024root final {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst_n,0,0);
    VL_IN8(in_a0,7,0);
    VL_IN8(in_b0,7,0);
    VL_IN8(in_a1,7,0);
    VL_IN8(in_b1,7,0);
    VL_IN8(in_a2,7,0);
    VL_IN8(in_b2,7,0);
    VL_IN8(in_a3,7,0);
    VL_IN8(in_b3,7,0);
    VL_IN8(op0,1,0);
    VL_IN8(op1,1,0);
    VL_IN8(op2,1,0);
    VL_IN8(op3,1,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__rst_n__0;
    VL_OUT16(out0,8,0);
    VL_OUT16(out1,8,0);
    VL_OUT16(out2,8,0);
    VL_OUT16(out3,8,0);
    VL_OUT16(inter01,8,0);
    VL_OUT16(inter12,8,0);
    VL_OUT16(inter23,8,0);
    VL_OUT16(inter34,8,0);
    SData/*8:0*/ cmp_top__DOT__inter_link1;
    SData/*8:0*/ cmp_top__DOT__inter_link2;
    SData/*8:0*/ cmp_top__DOT__inter_link3;
    SData/*8:0*/ cmp_top__DOT__inter_link4;
    SData/*8:0*/ cmp_top__DOT__u_tile0__DOT__local_y;
    SData/*8:0*/ cmp_top__DOT__u_tile1__DOT__local_y;
    SData/*8:0*/ cmp_top__DOT__u_tile2__DOT__local_y;
    SData/*8:0*/ cmp_top__DOT__u_tile3__DOT__local_y;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vcmp_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vcmp_top___024root(Vcmp_top__Syms* symsp, const char* namep);
    ~Vcmp_top___024root();
    VL_UNCOPYABLE(Vcmp_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
