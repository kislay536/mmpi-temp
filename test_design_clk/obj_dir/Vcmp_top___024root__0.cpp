// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcmp_top.h for the primary calling header

#include "Vcmp_top__pch.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcmp_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vcmp_top___024root___eval_triggers__ico(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___eval_triggers__ico\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
    vlSelfRef.__VicoFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcmp_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
}

bool Vcmp_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vcmp_top___024root___ico_sequent__TOP__0(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___ico_sequent__TOP__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.op0)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.op0)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.op0)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.op0)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.op0)) 
                                << 1U) | (0U == (IData)(vlSelfRef.op0)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: tile.sv:16: Assertion failed in %Ncmp_top.u_tile0: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.op0));
                VL_STOP_MT("rtl/tile.sv", 16, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.op1)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.op1)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.op1)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.op1)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.op1)) 
                                << 1U) | (0U == (IData)(vlSelfRef.op1)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: tile.sv:16: Assertion failed in %Ncmp_top.u_tile1: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.op1));
                VL_STOP_MT("rtl/tile.sv", 16, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.op2)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.op2)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.op2)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.op2)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.op2)) 
                                << 1U) | (0U == (IData)(vlSelfRef.op2)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: tile.sv:16: Assertion failed in %Ncmp_top.u_tile2: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.op2));
                VL_STOP_MT("rtl/tile.sv", 16, "");
            }
        }
    }
    if ((1U & (~ VL_ONEHOT_I((((2U == (IData)(vlSelfRef.op3)) 
                               << 2U) | (((1U == (IData)(vlSelfRef.op3)) 
                                          << 1U) | 
                                         (0U == (IData)(vlSelfRef.op3)))))))) {
        if ((0U != (((2U == (IData)(vlSelfRef.op3)) 
                     << 2U) | (((1U == (IData)(vlSelfRef.op3)) 
                                << 1U) | (0U == (IData)(vlSelfRef.op3)))))) {
            if (VL_UNLIKELY((vlSymsp->_vm_contextp__->assertOn()))) {
                VL_WRITEF_NX("[%0t] %%Error: tile.sv:16: Assertion failed in %Ncmp_top.u_tile3: unique case, but multiple matches found for '2'h%x'\n",0,
                             64,VL_TIME_UNITED_Q(1),
                             -12,vlSymsp->name(),2,
                             (IData)(vlSelfRef.op3));
                VL_STOP_MT("rtl/tile.sv", 16, "");
            }
        }
    }
    vlSelfRef.cmp_top__DOT__u_tile0__DOT__local_y = 
        (0x000001ffU & ((0U == (IData)(vlSelfRef.op0))
                         ? ((IData)(vlSelfRef.in_a0) 
                            + (IData)(vlSelfRef.in_b0))
                         : ((1U == (IData)(vlSelfRef.op0))
                             ? ((IData)(vlSelfRef.in_a0) 
                                - (IData)(vlSelfRef.in_b0))
                             : ((2U == (IData)(vlSelfRef.op0))
                                 ? ((IData)(vlSelfRef.in_a0) 
                                    ^ (IData)(vlSelfRef.in_b0))
                                 : ((IData)(vlSelfRef.in_a0) 
                                    & (IData)(vlSelfRef.in_b0))))));
    vlSelfRef.cmp_top__DOT__u_tile1__DOT__local_y = 
        (0x000001ffU & ((0U == (IData)(vlSelfRef.op1))
                         ? ((IData)(vlSelfRef.in_a1) 
                            + (IData)(vlSelfRef.in_b1))
                         : ((1U == (IData)(vlSelfRef.op1))
                             ? ((IData)(vlSelfRef.in_a1) 
                                - (IData)(vlSelfRef.in_b1))
                             : ((2U == (IData)(vlSelfRef.op1))
                                 ? ((IData)(vlSelfRef.in_a1) 
                                    ^ (IData)(vlSelfRef.in_b1))
                                 : ((IData)(vlSelfRef.in_a1) 
                                    & (IData)(vlSelfRef.in_b1))))));
    vlSelfRef.cmp_top__DOT__u_tile2__DOT__local_y = 
        (0x000001ffU & ((0U == (IData)(vlSelfRef.op2))
                         ? ((IData)(vlSelfRef.in_a2) 
                            + (IData)(vlSelfRef.in_b2))
                         : ((1U == (IData)(vlSelfRef.op2))
                             ? ((IData)(vlSelfRef.in_a2) 
                                - (IData)(vlSelfRef.in_b2))
                             : ((2U == (IData)(vlSelfRef.op2))
                                 ? ((IData)(vlSelfRef.in_a2) 
                                    ^ (IData)(vlSelfRef.in_b2))
                                 : ((IData)(vlSelfRef.in_a2) 
                                    & (IData)(vlSelfRef.in_b2))))));
    vlSelfRef.cmp_top__DOT__u_tile3__DOT__local_y = 
        (0x000001ffU & ((0U == (IData)(vlSelfRef.op3))
                         ? ((IData)(vlSelfRef.in_a3) 
                            + (IData)(vlSelfRef.in_b3))
                         : ((1U == (IData)(vlSelfRef.op3))
                             ? ((IData)(vlSelfRef.in_a3) 
                                - (IData)(vlSelfRef.in_b3))
                             : ((2U == (IData)(vlSelfRef.op3))
                                 ? ((IData)(vlSelfRef.in_a3) 
                                    ^ (IData)(vlSelfRef.in_b3))
                                 : ((IData)(vlSelfRef.in_a3) 
                                    & (IData)(vlSelfRef.in_b3))))));
}

void Vcmp_top___024root___eval_ico(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___eval_ico\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vcmp_top___024root___ico_sequent__TOP__0(vlSelf);
    }
}

bool Vcmp_top___024root___eval_phase__ico(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___eval_phase__ico\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vcmp_top___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = Vcmp_top___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vcmp_top___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcmp_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

void Vcmp_top___024root___eval_triggers__act(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___eval_triggers__act\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((((~ (IData)(vlSelfRef.rst_n)) 
                                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0)) 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcmp_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
}

bool Vcmp_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vcmp_top___024root___nba_sequent__TOP__0(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___nba_sequent__TOP__0\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.rst_n) {
        vlSelfRef.out0 = vlSelfRef.cmp_top__DOT__u_tile0__DOT__local_y;
        vlSelfRef.out1 = ((IData)(vlSelfRef.cmp_top__DOT__u_tile1__DOT__local_y) 
                          ^ (IData)(vlSelfRef.cmp_top__DOT__inter_link1));
        vlSelfRef.out2 = ((IData)(vlSelfRef.cmp_top__DOT__u_tile2__DOT__local_y) 
                          ^ (IData)(vlSelfRef.cmp_top__DOT__inter_link2));
        vlSelfRef.out3 = ((IData)(vlSelfRef.cmp_top__DOT__u_tile3__DOT__local_y) 
                          ^ (IData)(vlSelfRef.cmp_top__DOT__inter_link3));
        vlSelfRef.cmp_top__DOT__inter_link4 = ((IData)(vlSelfRef.cmp_top__DOT__u_tile3__DOT__local_y) 
                                               ^ (IData)(vlSelfRef.cmp_top__DOT__inter_link3));
        vlSelfRef.cmp_top__DOT__inter_link3 = ((IData)(vlSelfRef.cmp_top__DOT__u_tile2__DOT__local_y) 
                                               ^ (IData)(vlSelfRef.cmp_top__DOT__inter_link2));
        vlSelfRef.cmp_top__DOT__inter_link2 = ((IData)(vlSelfRef.cmp_top__DOT__u_tile1__DOT__local_y) 
                                               ^ (IData)(vlSelfRef.cmp_top__DOT__inter_link1));
        vlSelfRef.cmp_top__DOT__inter_link1 = vlSelfRef.cmp_top__DOT__u_tile0__DOT__local_y;
    } else {
        vlSelfRef.out0 = 0U;
        vlSelfRef.out1 = 0U;
        vlSelfRef.out2 = 0U;
        vlSelfRef.out3 = 0U;
        vlSelfRef.cmp_top__DOT__inter_link4 = 0U;
        vlSelfRef.cmp_top__DOT__inter_link3 = 0U;
        vlSelfRef.cmp_top__DOT__inter_link2 = 0U;
        vlSelfRef.cmp_top__DOT__inter_link1 = 0U;
    }
    vlSelfRef.inter34 = vlSelfRef.cmp_top__DOT__inter_link4;
    vlSelfRef.inter23 = vlSelfRef.cmp_top__DOT__inter_link3;
    vlSelfRef.inter12 = vlSelfRef.cmp_top__DOT__inter_link2;
    vlSelfRef.inter01 = vlSelfRef.cmp_top__DOT__inter_link1;
}

void Vcmp_top___024root___eval_nba(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___eval_nba\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if (vlSelfRef.rst_n) {
            vlSelfRef.out0 = vlSelfRef.cmp_top__DOT__u_tile0__DOT__local_y;
            vlSelfRef.out1 = ((IData)(vlSelfRef.cmp_top__DOT__u_tile1__DOT__local_y) 
                              ^ (IData)(vlSelfRef.cmp_top__DOT__inter_link1));
            vlSelfRef.out2 = ((IData)(vlSelfRef.cmp_top__DOT__u_tile2__DOT__local_y) 
                              ^ (IData)(vlSelfRef.cmp_top__DOT__inter_link2));
            vlSelfRef.out3 = ((IData)(vlSelfRef.cmp_top__DOT__u_tile3__DOT__local_y) 
                              ^ (IData)(vlSelfRef.cmp_top__DOT__inter_link3));
            vlSelfRef.cmp_top__DOT__inter_link4 = ((IData)(vlSelfRef.cmp_top__DOT__u_tile3__DOT__local_y) 
                                                   ^ (IData)(vlSelfRef.cmp_top__DOT__inter_link3));
            vlSelfRef.cmp_top__DOT__inter_link3 = ((IData)(vlSelfRef.cmp_top__DOT__u_tile2__DOT__local_y) 
                                                   ^ (IData)(vlSelfRef.cmp_top__DOT__inter_link2));
            vlSelfRef.cmp_top__DOT__inter_link2 = ((IData)(vlSelfRef.cmp_top__DOT__u_tile1__DOT__local_y) 
                                                   ^ (IData)(vlSelfRef.cmp_top__DOT__inter_link1));
            vlSelfRef.cmp_top__DOT__inter_link1 = vlSelfRef.cmp_top__DOT__u_tile0__DOT__local_y;
        } else {
            vlSelfRef.out0 = 0U;
            vlSelfRef.out1 = 0U;
            vlSelfRef.out2 = 0U;
            vlSelfRef.out3 = 0U;
            vlSelfRef.cmp_top__DOT__inter_link4 = 0U;
            vlSelfRef.cmp_top__DOT__inter_link3 = 0U;
            vlSelfRef.cmp_top__DOT__inter_link2 = 0U;
            vlSelfRef.cmp_top__DOT__inter_link1 = 0U;
        }
        vlSelfRef.inter34 = vlSelfRef.cmp_top__DOT__inter_link4;
        vlSelfRef.inter23 = vlSelfRef.cmp_top__DOT__inter_link3;
        vlSelfRef.inter12 = vlSelfRef.cmp_top__DOT__inter_link2;
        vlSelfRef.inter01 = vlSelfRef.cmp_top__DOT__inter_link1;
    }
}

void Vcmp_top___024root___trigger_orInto__act(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___trigger_orInto__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vcmp_top___024root___eval_phase__act(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___eval_phase__act\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vcmp_top___024root___eval_triggers__act(vlSelf);
    Vcmp_top___024root___trigger_orInto__act(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vcmp_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vcmp_top___024root___eval_phase__nba(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___eval_phase__nba\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vcmp_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vcmp_top___024root___eval_nba(vlSelf);
        Vcmp_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vcmp_top___024root___eval(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___eval\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vcmp_top___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("rtl/cmp_top.sv", 1, "", "Input combinational region did not converge after 100 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
    } while (Vcmp_top___024root___eval_phase__ico(vlSelf));
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vcmp_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("rtl/cmp_top.sv", 1, "", "NBA region did not converge after 100 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00000064U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vcmp_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("rtl/cmp_top.sv", 1, "", "Active region did not converge after 100 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
        } while (Vcmp_top___024root___eval_phase__act(vlSelf));
    } while (Vcmp_top___024root___eval_phase__nba(vlSelf));
}

#ifdef VL_DEBUG
void Vcmp_top___024root___eval_debug_assertions(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___eval_debug_assertions\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst_n & 0xfeU)))) {
        Verilated::overWidthError("rst_n");
    }
    if (VL_UNLIKELY(((vlSelfRef.op0 & 0xfcU)))) {
        Verilated::overWidthError("op0");
    }
    if (VL_UNLIKELY(((vlSelfRef.op1 & 0xfcU)))) {
        Verilated::overWidthError("op1");
    }
    if (VL_UNLIKELY(((vlSelfRef.op2 & 0xfcU)))) {
        Verilated::overWidthError("op2");
    }
    if (VL_UNLIKELY(((vlSelfRef.op3 & 0xfcU)))) {
        Verilated::overWidthError("op3");
    }
}
#endif  // VL_DEBUG
