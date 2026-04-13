// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vcmp_top__pch.h"

//============================================================
// Constructors

Vcmp_top::Vcmp_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vcmp_top__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst_n{vlSymsp->TOP.rst_n}
    , in_a0{vlSymsp->TOP.in_a0}
    , in_b0{vlSymsp->TOP.in_b0}
    , in_a1{vlSymsp->TOP.in_a1}
    , in_b1{vlSymsp->TOP.in_b1}
    , in_a2{vlSymsp->TOP.in_a2}
    , in_b2{vlSymsp->TOP.in_b2}
    , in_a3{vlSymsp->TOP.in_a3}
    , in_b3{vlSymsp->TOP.in_b3}
    , op0{vlSymsp->TOP.op0}
    , op1{vlSymsp->TOP.op1}
    , op2{vlSymsp->TOP.op2}
    , op3{vlSymsp->TOP.op3}
    , out0{vlSymsp->TOP.out0}
    , out1{vlSymsp->TOP.out1}
    , out2{vlSymsp->TOP.out2}
    , out3{vlSymsp->TOP.out3}
    , inter01{vlSymsp->TOP.inter01}
    , inter12{vlSymsp->TOP.inter12}
    , inter23{vlSymsp->TOP.inter23}
    , inter34{vlSymsp->TOP.inter34}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vcmp_top::Vcmp_top(const char* _vcname__)
    : Vcmp_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vcmp_top::~Vcmp_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vcmp_top___024root___eval_debug_assertions(Vcmp_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vcmp_top___024root___eval_static(Vcmp_top___024root* vlSelf);
void Vcmp_top___024root___eval_initial(Vcmp_top___024root* vlSelf);
void Vcmp_top___024root___eval_settle(Vcmp_top___024root* vlSelf);
void Vcmp_top___024root___eval(Vcmp_top___024root* vlSelf);

void Vcmp_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vcmp_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vcmp_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vcmp_top___024root___eval_static(&(vlSymsp->TOP));
        Vcmp_top___024root___eval_initial(&(vlSymsp->TOP));
        Vcmp_top___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vcmp_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vcmp_top::eventsPending() { return false; }

uint64_t Vcmp_top::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vcmp_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vcmp_top___024root___eval_final(Vcmp_top___024root* vlSelf);

VL_ATTR_COLD void Vcmp_top::final() {
    Vcmp_top___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vcmp_top::hierName() const { return vlSymsp->name(); }
const char* Vcmp_top::modelName() const { return "Vcmp_top"; }
unsigned Vcmp_top::threads() const { return 1; }
void Vcmp_top::prepareClone() const { contextp()->prepareClone(); }
void Vcmp_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
