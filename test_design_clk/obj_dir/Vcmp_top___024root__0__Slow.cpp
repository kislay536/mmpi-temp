// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcmp_top.h for the primary calling header

#include "Vcmp_top__pch.h"

VL_ATTR_COLD void Vcmp_top___024root___eval_static(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___eval_static\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__rst_n__0 = vlSelfRef.rst_n;
}

VL_ATTR_COLD void Vcmp_top___024root___eval_initial(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___eval_initial\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vcmp_top___024root___eval_final(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___eval_final\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcmp_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vcmp_top___024root___eval_phase__stl(Vcmp_top___024root* vlSelf);

VL_ATTR_COLD void Vcmp_top___024root___eval_settle(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___eval_settle\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00000064U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vcmp_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("rtl/cmp_top.sv", 1, "", "Settle region did not converge after 100 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
    } while (Vcmp_top___024root___eval_phase__stl(vlSelf));
}

VL_ATTR_COLD void Vcmp_top___024root___eval_triggers__stl(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___eval_triggers__stl\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered
                                      [0U]) | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
    vlSelfRef.__VstlFirstIteration = 0U;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcmp_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
}

VL_ATTR_COLD bool Vcmp_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcmp_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vcmp_top___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vcmp_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vcmp_top___024root___stl_sequent__TOP__0(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___stl_sequent__TOP__0\n"); );
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
    vlSelfRef.inter01 = vlSelfRef.cmp_top__DOT__inter_link1;
    vlSelfRef.inter12 = vlSelfRef.cmp_top__DOT__inter_link2;
    vlSelfRef.inter23 = vlSelfRef.cmp_top__DOT__inter_link3;
    vlSelfRef.inter34 = vlSelfRef.cmp_top__DOT__inter_link4;
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

VL_ATTR_COLD void Vcmp_top___024root___eval_stl(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___eval_stl\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vcmp_top___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vcmp_top___024root___eval_phase__stl(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___eval_phase__stl\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vcmp_top___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = Vcmp_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vcmp_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vcmp_top___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcmp_top___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vcmp_top___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vcmp_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcmp_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vcmp_top___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(negedge rst_n)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vcmp_top___024root___ctor_var_reset(Vcmp_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcmp_top___024root___ctor_var_reset\n"); );
    Vcmp_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst_n = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1638864771569018232ull);
    vlSelf->in_a0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7019700974890659844ull);
    vlSelf->in_b0 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 1128122507518172662ull);
    vlSelf->in_a1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14314880403372143380ull);
    vlSelf->in_b1 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2051653845325739740ull);
    vlSelf->in_a2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 3373797975275874589ull);
    vlSelf->in_b2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 9346833273807198924ull);
    vlSelf->in_a3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8764423718916449754ull);
    vlSelf->in_b3 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16852494919420347349ull);
    vlSelf->op0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18444024693264516367ull);
    vlSelf->op1 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5674447651684321615ull);
    vlSelf->op2 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11728428993534395438ull);
    vlSelf->op3 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16960176486657876779ull);
    vlSelf->out0 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 3479339022578516965ull);
    vlSelf->out1 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 4660226991737518834ull);
    vlSelf->out2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16817257351027265495ull);
    vlSelf->out3 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11406826625651222047ull);
    vlSelf->inter01 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11531386640890319082ull);
    vlSelf->inter12 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 11277298950521700490ull);
    vlSelf->inter23 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9979567571140213574ull);
    vlSelf->inter34 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 15427443635214052460ull);
    vlSelf->cmp_top__DOT__inter_link1 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 17719357318435469490ull);
    vlSelf->cmp_top__DOT__inter_link2 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 9121883492455378055ull);
    vlSelf->cmp_top__DOT__inter_link3 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 16645058590956873589ull);
    vlSelf->cmp_top__DOT__inter_link4 = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 14104405589065091032ull);
    vlSelf->cmp_top__DOT__u_tile0__DOT__local_y = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 420186298053359894ull);
    vlSelf->cmp_top__DOT__u_tile1__DOT__local_y = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 18322146887007893696ull);
    vlSelf->cmp_top__DOT__u_tile2__DOT__local_y = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 1877918636891482794ull);
    vlSelf->cmp_top__DOT__u_tile3__DOT__local_y = VL_SCOPED_RAND_RESET_I(9, __VscopeHash, 12891966784442450559ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__rst_n__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
