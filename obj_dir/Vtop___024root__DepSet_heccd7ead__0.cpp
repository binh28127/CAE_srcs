// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"

#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__0\n"); );
    // Init
    CData/*1:0*/ __Vdly__top__DOT__cae_0__DOT__pe_0__DOT__state;
    CData/*4:0*/ __Vdly__top__DOT__cae_0__DOT__pe_0__DOT__counter;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cae_0__DOT__pe_0__DOT__data__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__cae_0__DOT__pe_0__DOT__weight__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight__v4;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data__v4;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight__v5;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data__v5;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v4;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v4;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v5;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v5;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v6;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v6;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v7;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v7;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v8;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v8;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v9;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v9;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v10;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v10;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v11;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v11;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v12;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v12;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v13;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v13;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v14;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v14;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v15;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v15;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v16;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v16;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v17;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v17;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v18;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v18;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v19;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v19;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v20;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v20;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v21;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v21;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v22;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v22;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v23;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v23;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v24;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v24;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v25;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v25;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v26;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v26;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v27;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v27;
    CData/*1:0*/ __Vdly__top__DOT__cae_0__DOT__pe_1__DOT__state;
    CData/*4:0*/ __Vdly__top__DOT__cae_0__DOT__pe_1__DOT__counter;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cae_0__DOT__pe_1__DOT__data__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__cae_0__DOT__pe_1__DOT__weight__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight__v4;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data__v4;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight__v5;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data__v5;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v4;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v4;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v5;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v5;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v6;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v6;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v7;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v7;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v8;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v8;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v9;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v9;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v10;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v10;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v11;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v11;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v12;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v12;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v13;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v13;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v14;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v14;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v15;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v15;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v16;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v16;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v17;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v17;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v18;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v18;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v19;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v19;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v20;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v20;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v21;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v21;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v22;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v22;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v23;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v23;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v24;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v24;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v25;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v25;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v26;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v26;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v27;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v27;
    CData/*1:0*/ __Vdly__top__DOT__cae_0__DOT__pe_2__DOT__state;
    CData/*4:0*/ __Vdly__top__DOT__cae_0__DOT__pe_2__DOT__counter;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cae_0__DOT__pe_2__DOT__data__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight__v3;
    CData/*0:0*/ __Vdlyvset__top__DOT__cae_0__DOT__pe_2__DOT__weight__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight__v4;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data__v4;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight__v5;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data__v5;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v0;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v1;
    CData/*0:0*/ __Vdlyvset__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v1;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v2;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v3;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v4;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v4;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v5;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v5;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v6;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v6;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v7;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v7;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v8;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v8;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v9;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v9;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v10;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v10;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v11;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v11;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v12;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v12;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v13;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v13;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v14;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v14;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v15;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v15;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v16;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v16;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v17;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v17;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v18;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v18;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v19;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v19;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v20;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v20;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v21;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v21;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v22;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v22;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v23;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v23;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v24;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v24;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v25;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v25;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v26;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v26;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v27;
    CData/*7:0*/ __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v27;
    CData/*1:0*/ __Vdly__top__DOT__cae_0__DOT__acc_0__DOT__state;
    CData/*4:0*/ __Vdly__top__DOT__cae_0__DOT__acc_0__DOT__counter;
    IData/*31:0*/ __Vdly__top__DOT__cae_0__DOT__acc_0__DOT__tsum;
    IData/*17:0*/ __Vdlyvval__top__DOT__cae_0__DOT__acc_0__DOT__psum_buffer__v0;
    IData/*17:0*/ __Vdlyvval__top__DOT__cae_0__DOT__acc_0__DOT__psum_buffer__v1;
    IData/*17:0*/ __Vdlyvval__top__DOT__cae_0__DOT__acc_0__DOT__psum_buffer__v2;
    // Body
    __Vdly__top__DOT__cae_0__DOT__acc_0__DOT__state 
        = vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__state;
    __Vdly__top__DOT__cae_0__DOT__acc_0__DOT__tsum 
        = vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__tsum;
    __Vdly__top__DOT__cae_0__DOT__acc_0__DOT__counter 
        = vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__counter;
    __Vdly__top__DOT__cae_0__DOT__pe_2__DOT__counter 
        = vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__counter;
    __Vdly__top__DOT__cae_0__DOT__pe_2__DOT__state 
        = vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__state;
    __Vdly__top__DOT__cae_0__DOT__pe_1__DOT__counter 
        = vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__counter;
    __Vdly__top__DOT__cae_0__DOT__pe_1__DOT__state 
        = vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__state;
    __Vdly__top__DOT__cae_0__DOT__pe_0__DOT__counter 
        = vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__counter;
    __Vdly__top__DOT__cae_0__DOT__pe_0__DOT__state 
        = vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__state;
    __Vdlyvset__top__DOT__cae_0__DOT__pe_2__DOT__weight__v3 = 0U;
    __Vdlyvset__top__DOT__cae_0__DOT__pe_2__DOT__data__v0 = 0U;
    __Vdlyvset__top__DOT__cae_0__DOT__pe_1__DOT__weight__v3 = 0U;
    __Vdlyvset__top__DOT__cae_0__DOT__pe_1__DOT__data__v0 = 0U;
    __Vdlyvset__top__DOT__cae_0__DOT__pe_0__DOT__weight__v3 = 0U;
    __Vdlyvset__top__DOT__cae_0__DOT__pe_0__DOT__data__v0 = 0U;
    __Vdlyvset__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v0 = 0U;
    __Vdlyvset__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v1 = 0U;
    __Vdlyvset__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v0 = 0U;
    __Vdlyvset__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v1 = 0U;
    __Vdlyvset__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v0 = 0U;
    __Vdlyvset__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v1 = 0U;
    __Vdlyvval__top__DOT__cae_0__DOT__acc_0__DOT__psum_buffer__v0 
        = (0x3ffffU & (IData)((vlSelf->top__DOT__cae_0__DOT____Vcellinp__acc_0__psum 
                               >> 0x24U)));
    __Vdlyvval__top__DOT__cae_0__DOT__acc_0__DOT__psum_buffer__v1 
        = (0x3ffffU & (IData)((vlSelf->top__DOT__cae_0__DOT____Vcellinp__acc_0__psum 
                               >> 0x12U)));
    __Vdlyvval__top__DOT__cae_0__DOT__acc_0__DOT__psum_buffer__v2 
        = (0x3ffffU & (IData)(vlSelf->top__DOT__cae_0__DOT____Vcellinp__acc_0__psum));
    if (vlSelf->rst) {
        __Vdly__top__DOT__cae_0__DOT__acc_0__DOT__counter = 0U;
        __Vdly__top__DOT__cae_0__DOT__acc_0__DOT__state = 0U;
        __Vdly__top__DOT__cae_0__DOT__acc_0__DOT__counter = 0U;
        vlSelf->conv_comp = 0U;
        vlSelf->fc_done = 0U;
        __Vdly__top__DOT__cae_0__DOT__acc_0__DOT__tsum = 0U;
        __Vdly__top__DOT__cae_0__DOT__pe_2__DOT__state = 0U;
        vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_2__flag_comp = 0U;
        __Vdly__top__DOT__cae_0__DOT__pe_1__DOT__state = 0U;
        vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_1__flag_comp = 0U;
        __Vdly__top__DOT__cae_0__DOT__pe_0__DOT__state = 0U;
        vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_0__flag_comp = 0U;
    } else {
        if (vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__pos_enable) {
            __Vdly__top__DOT__cae_0__DOT__acc_0__DOT__counter 
                = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__counter)));
        }
        if ((2U & (IData)(vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__state))) {
            if ((1U & (IData)(vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__state))) {
                vlSelf->conv_comp = 0U;
                if (vlSelf->layer) {
                    vlSelf->fc_done = 1U;
                } else {
                    __Vdly__top__DOT__cae_0__DOT__acc_0__DOT__state = 0U;
                }
            } else {
                if (vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__fc_comp) {
                    if (((IData)(vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__counter) 
                         <= (IData)(vlSelf->fc_wcol))) {
                        __Vdly__top__DOT__cae_0__DOT__acc_0__DOT__tsum 
                            = (((vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__tsum 
                                 + vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__psum_buffer
                                 [0U]) + vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__psum_buffer
                                [1U]) + vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__psum_buffer
                               [2U]);
                        if (((IData)(vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__pos_enable) 
                             & (0U == (IData)(vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__counter)))) {
                            __Vdly__top__DOT__cae_0__DOT__acc_0__DOT__tsum 
                                = ((((vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__tsum 
                                      + vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__psum_buffer
                                      [0U]) + vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__psum_buffer
                                     [1U]) + vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__psum_buffer
                                    [2U]) + vlSelf->bias_in);
                        }
                    }
                }
                if (((IData)(vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__neg_fc_comp) 
                     & ((IData)(vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__counter) 
                        == (IData)(vlSelf->fc_wcol)))) {
                    __Vdly__top__DOT__cae_0__DOT__acc_0__DOT__state = 3U;
                }
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__state))) {
            __Vdly__top__DOT__cae_0__DOT__acc_0__DOT__tsum 
                = (((vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__psum_buffer
                     [0U] + vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__psum_buffer
                     [1U]) + vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__psum_buffer
                    [2U]) + vlSelf->bias_in);
            vlSelf->conv_comp = 1U;
            if ((1U & (~ (IData)((7U == (IData)(vlSelf->top__DOT__cae_0__DOT__pe_comp)))))) {
                __Vdly__top__DOT__cae_0__DOT__acc_0__DOT__state = 3U;
            }
        } else if ((7U == (IData)(vlSelf->top__DOT__cae_0__DOT__pe_comp))) {
            vlSelf->conv_comp = 0U;
            __Vdly__top__DOT__cae_0__DOT__acc_0__DOT__counter = 0U;
            vlSelf->fc_done = 0U;
            __Vdly__top__DOT__cae_0__DOT__acc_0__DOT__tsum = 0U;
            __Vdly__top__DOT__cae_0__DOT__acc_0__DOT__state 
                = ((IData)(vlSelf->layer) ? 2U : 1U);
        }
        if ((2U & (IData)(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__state))) {
            if ((1U & (IData)(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__state))) {
                __Vdly__top__DOT__cae_0__DOT__pe_2__DOT__state = 0U;
                vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_2__flag_comp = 0U;
                __Vdly__top__DOT__cae_0__DOT__pe_2__DOT__counter = 0U;
            } else {
                if (vlSelf->layer) {
                    __Vdly__top__DOT__cae_0__DOT__pe_2__DOT__counter 
                        = (0x1fU & ((IData)(3U) + (IData)(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__counter)));
                    if ((0x1dU >= (0x1fU & ((IData)(2U) 
                                            + (IData)(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__counter))))) {
                        __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data__v0 
                            = vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row
                            [(0x1fU & ((IData)(2U) 
                                       + (IData)(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__counter)))];
                        __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight__v0 
                            = vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row
                            [(0x1fU & ((IData)(2U) 
                                       + (IData)(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__counter)))];
                    } else {
                        __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data__v0 
                            = vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h96fdabed__3;
                        __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight__v0 
                            = vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h96fdabed__6;
                    }
                    __Vdlyvset__top__DOT__cae_0__DOT__pe_2__DOT__data__v0 = 1U;
                    if ((0x1dU >= (0x1fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__counter))))) {
                        __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data__v1 
                            = vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row
                            [(0x1fU & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__counter)))];
                        __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight__v1 
                            = vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row
                            [(0x1fU & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__counter)))];
                    } else {
                        __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data__v1 
                            = vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h96fdabed__4;
                        __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight__v1 
                            = vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h96fdabed__7;
                    }
                    if ((0x1dU >= (IData)(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__counter))) {
                        __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data__v2 
                            = vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row
                            [vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__counter];
                        __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight__v2 
                            = vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row
                            [vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__counter];
                    } else {
                        __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data__v2 
                            = vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h96fdabed__5;
                        __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight__v2 
                            = vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h96fdabed__8;
                    }
                    if ((0x1bU == (IData)(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__counter))) {
                        __Vdly__top__DOT__cae_0__DOT__pe_2__DOT__state = 3U;
                    }
                } else {
                    __Vdly__top__DOT__cae_0__DOT__pe_2__DOT__counter 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__counter)));
                    __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight__v3 
                        = vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row
                        [2U];
                    __Vdlyvset__top__DOT__cae_0__DOT__pe_2__DOT__weight__v3 = 1U;
                    __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data__v3 
                        = ((0x1dU >= (0x1fU & ((IData)(2U) 
                                               + (IData)(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__counter))))
                            ? vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row
                           [(0x1fU & ((IData)(2U) + (IData)(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__counter)))]
                            : (IData)(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h96fdabed__0));
                    __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight__v4 
                        = vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row
                        [1U];
                    __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data__v4 
                        = ((0x1dU >= (0x1fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__counter))))
                            ? vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row
                           [(0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__counter)))]
                            : (IData)(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h96fdabed__1));
                    __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight__v5 
                        = vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row
                        [0U];
                    __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data__v5 
                        = ((0x1dU >= (IData)(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__counter))
                            ? vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row
                           [vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__counter]
                            : (IData)(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vxrand_h96fdabed__2));
                    if ((0x19U == (IData)(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__counter))) {
                        __Vdly__top__DOT__cae_0__DOT__pe_2__DOT__state = 3U;
                    }
                }
                vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_2__flag_comp = 1U;
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__state))) {
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v0 
                = (0xffU & vlSelf->data_row3_in[0U]);
            __Vdlyvset__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v0 = 1U;
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v0 
                = (0xffU & vlSelf->weight_row3_in[0U]);
            __Vdly__top__DOT__cae_0__DOT__pe_2__DOT__state = 2U;
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v1 
                = (0xffU & (vlSelf->data_row3_in[0U] 
                            >> 8U));
            __Vdlyvset__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v1 = 1U;
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v1 
                = (0xffU & (vlSelf->weight_row3_in[0U] 
                            >> 8U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v2 
                = (0xffU & (vlSelf->data_row3_in[0U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v2 
                = (0xffU & (vlSelf->weight_row3_in[0U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v3 
                = (vlSelf->data_row3_in[0U] >> 0x18U);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v3 
                = (vlSelf->weight_row3_in[0U] >> 0x18U);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v4 
                = (0xffU & vlSelf->data_row3_in[1U]);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v4 
                = (0xffU & vlSelf->weight_row3_in[1U]);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v5 
                = (0xffU & (vlSelf->data_row3_in[1U] 
                            >> 8U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v5 
                = (0xffU & (vlSelf->weight_row3_in[1U] 
                            >> 8U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v6 
                = (0xffU & (vlSelf->data_row3_in[1U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v6 
                = (0xffU & (vlSelf->weight_row3_in[1U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v7 
                = (vlSelf->data_row3_in[1U] >> 0x18U);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v7 
                = (vlSelf->weight_row3_in[1U] >> 0x18U);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v8 
                = (0xffU & vlSelf->data_row3_in[2U]);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v8 
                = (0xffU & vlSelf->weight_row3_in[2U]);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v9 
                = (0xffU & (vlSelf->data_row3_in[2U] 
                            >> 8U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v9 
                = (0xffU & (vlSelf->weight_row3_in[2U] 
                            >> 8U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v10 
                = (0xffU & (vlSelf->data_row3_in[2U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v10 
                = (0xffU & (vlSelf->weight_row3_in[2U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v11 
                = (vlSelf->data_row3_in[2U] >> 0x18U);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v11 
                = (vlSelf->weight_row3_in[2U] >> 0x18U);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v12 
                = (0xffU & vlSelf->data_row3_in[3U]);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v12 
                = (0xffU & vlSelf->weight_row3_in[3U]);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v13 
                = (0xffU & (vlSelf->data_row3_in[3U] 
                            >> 8U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v13 
                = (0xffU & (vlSelf->weight_row3_in[3U] 
                            >> 8U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v14 
                = (0xffU & (vlSelf->data_row3_in[3U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v14 
                = (0xffU & (vlSelf->weight_row3_in[3U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v15 
                = (vlSelf->data_row3_in[3U] >> 0x18U);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v15 
                = (vlSelf->weight_row3_in[3U] >> 0x18U);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v16 
                = (0xffU & vlSelf->data_row3_in[4U]);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v16 
                = (0xffU & vlSelf->weight_row3_in[4U]);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v17 
                = (0xffU & (vlSelf->data_row3_in[4U] 
                            >> 8U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v17 
                = (0xffU & (vlSelf->weight_row3_in[4U] 
                            >> 8U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v18 
                = (0xffU & (vlSelf->data_row3_in[4U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v18 
                = (0xffU & (vlSelf->weight_row3_in[4U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v19 
                = (vlSelf->data_row3_in[4U] >> 0x18U);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v19 
                = (vlSelf->weight_row3_in[4U] >> 0x18U);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v20 
                = (0xffU & vlSelf->data_row3_in[5U]);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v20 
                = (0xffU & vlSelf->weight_row3_in[5U]);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v21 
                = (0xffU & (vlSelf->data_row3_in[5U] 
                            >> 8U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v21 
                = (0xffU & (vlSelf->weight_row3_in[5U] 
                            >> 8U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v22 
                = (0xffU & (vlSelf->data_row3_in[5U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v22 
                = (0xffU & (vlSelf->weight_row3_in[5U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v23 
                = (vlSelf->data_row3_in[5U] >> 0x18U);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v23 
                = (vlSelf->weight_row3_in[5U] >> 0x18U);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v24 
                = (0xffU & vlSelf->data_row3_in[6U]);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v24 
                = (0xffU & vlSelf->weight_row3_in[6U]);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v25 
                = (0xffU & (vlSelf->data_row3_in[6U] 
                            >> 8U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v25 
                = (0xffU & (vlSelf->weight_row3_in[6U] 
                            >> 8U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v26 
                = (0xffU & (vlSelf->data_row3_in[6U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v26 
                = (0xffU & (vlSelf->weight_row3_in[6U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v27 
                = (vlSelf->data_row3_in[6U] >> 0x18U);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v27 
                = (vlSelf->weight_row3_in[6U] >> 0x18U);
        } else {
            if (vlSelf->enable) {
                __Vdly__top__DOT__cae_0__DOT__pe_2__DOT__state = 1U;
            }
            vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_2__flag_comp = 0U;
        }
        if ((2U & (IData)(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__state))) {
            if ((1U & (IData)(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__state))) {
                __Vdly__top__DOT__cae_0__DOT__pe_1__DOT__state = 0U;
                vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_1__flag_comp = 0U;
                __Vdly__top__DOT__cae_0__DOT__pe_1__DOT__counter = 0U;
            } else {
                if (vlSelf->layer) {
                    __Vdly__top__DOT__cae_0__DOT__pe_1__DOT__counter 
                        = (0x1fU & ((IData)(3U) + (IData)(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__counter)));
                    if ((0x1dU >= (0x1fU & ((IData)(2U) 
                                            + (IData)(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__counter))))) {
                        __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data__v0 
                            = vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row
                            [(0x1fU & ((IData)(2U) 
                                       + (IData)(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__counter)))];
                        __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight__v0 
                            = vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row
                            [(0x1fU & ((IData)(2U) 
                                       + (IData)(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__counter)))];
                    } else {
                        __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data__v0 
                            = vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h96fdabed__3;
                        __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight__v0 
                            = vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h96fdabed__6;
                    }
                    __Vdlyvset__top__DOT__cae_0__DOT__pe_1__DOT__data__v0 = 1U;
                    if ((0x1dU >= (0x1fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__counter))))) {
                        __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data__v1 
                            = vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row
                            [(0x1fU & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__counter)))];
                        __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight__v1 
                            = vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row
                            [(0x1fU & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__counter)))];
                    } else {
                        __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data__v1 
                            = vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h96fdabed__4;
                        __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight__v1 
                            = vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h96fdabed__7;
                    }
                    if ((0x1dU >= (IData)(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__counter))) {
                        __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data__v2 
                            = vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row
                            [vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__counter];
                        __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight__v2 
                            = vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row
                            [vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__counter];
                    } else {
                        __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data__v2 
                            = vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h96fdabed__5;
                        __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight__v2 
                            = vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h96fdabed__8;
                    }
                    if ((0x1bU == (IData)(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__counter))) {
                        __Vdly__top__DOT__cae_0__DOT__pe_1__DOT__state = 3U;
                    }
                } else {
                    __Vdly__top__DOT__cae_0__DOT__pe_1__DOT__counter 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__counter)));
                    __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight__v3 
                        = vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row
                        [2U];
                    __Vdlyvset__top__DOT__cae_0__DOT__pe_1__DOT__weight__v3 = 1U;
                    __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data__v3 
                        = ((0x1dU >= (0x1fU & ((IData)(2U) 
                                               + (IData)(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__counter))))
                            ? vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row
                           [(0x1fU & ((IData)(2U) + (IData)(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__counter)))]
                            : (IData)(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h96fdabed__0));
                    __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight__v4 
                        = vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row
                        [1U];
                    __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data__v4 
                        = ((0x1dU >= (0x1fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__counter))))
                            ? vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row
                           [(0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__counter)))]
                            : (IData)(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h96fdabed__1));
                    __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight__v5 
                        = vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row
                        [0U];
                    __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data__v5 
                        = ((0x1dU >= (IData)(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__counter))
                            ? vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row
                           [vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__counter]
                            : (IData)(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vxrand_h96fdabed__2));
                    if ((0x19U == (IData)(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__counter))) {
                        __Vdly__top__DOT__cae_0__DOT__pe_1__DOT__state = 3U;
                    }
                }
                vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_1__flag_comp = 1U;
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__state))) {
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v0 
                = (0xffU & vlSelf->data_row2_in[0U]);
            __Vdlyvset__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v0 = 1U;
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v0 
                = (0xffU & vlSelf->weight_row2_in[0U]);
            __Vdly__top__DOT__cae_0__DOT__pe_1__DOT__state = 2U;
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v1 
                = (0xffU & (vlSelf->data_row2_in[0U] 
                            >> 8U));
            __Vdlyvset__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v1 = 1U;
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v1 
                = (0xffU & (vlSelf->weight_row2_in[0U] 
                            >> 8U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v2 
                = (0xffU & (vlSelf->data_row2_in[0U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v2 
                = (0xffU & (vlSelf->weight_row2_in[0U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v3 
                = (vlSelf->data_row2_in[0U] >> 0x18U);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v3 
                = (vlSelf->weight_row2_in[0U] >> 0x18U);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v4 
                = (0xffU & vlSelf->data_row2_in[1U]);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v4 
                = (0xffU & vlSelf->weight_row2_in[1U]);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v5 
                = (0xffU & (vlSelf->data_row2_in[1U] 
                            >> 8U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v5 
                = (0xffU & (vlSelf->weight_row2_in[1U] 
                            >> 8U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v6 
                = (0xffU & (vlSelf->data_row2_in[1U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v6 
                = (0xffU & (vlSelf->weight_row2_in[1U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v7 
                = (vlSelf->data_row2_in[1U] >> 0x18U);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v7 
                = (vlSelf->weight_row2_in[1U] >> 0x18U);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v8 
                = (0xffU & vlSelf->data_row2_in[2U]);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v8 
                = (0xffU & vlSelf->weight_row2_in[2U]);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v9 
                = (0xffU & (vlSelf->data_row2_in[2U] 
                            >> 8U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v9 
                = (0xffU & (vlSelf->weight_row2_in[2U] 
                            >> 8U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v10 
                = (0xffU & (vlSelf->data_row2_in[2U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v10 
                = (0xffU & (vlSelf->weight_row2_in[2U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v11 
                = (vlSelf->data_row2_in[2U] >> 0x18U);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v11 
                = (vlSelf->weight_row2_in[2U] >> 0x18U);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v12 
                = (0xffU & vlSelf->data_row2_in[3U]);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v12 
                = (0xffU & vlSelf->weight_row2_in[3U]);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v13 
                = (0xffU & (vlSelf->data_row2_in[3U] 
                            >> 8U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v13 
                = (0xffU & (vlSelf->weight_row2_in[3U] 
                            >> 8U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v14 
                = (0xffU & (vlSelf->data_row2_in[3U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v14 
                = (0xffU & (vlSelf->weight_row2_in[3U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v15 
                = (vlSelf->data_row2_in[3U] >> 0x18U);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v15 
                = (vlSelf->weight_row2_in[3U] >> 0x18U);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v16 
                = (0xffU & vlSelf->data_row2_in[4U]);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v16 
                = (0xffU & vlSelf->weight_row2_in[4U]);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v17 
                = (0xffU & (vlSelf->data_row2_in[4U] 
                            >> 8U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v17 
                = (0xffU & (vlSelf->weight_row2_in[4U] 
                            >> 8U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v18 
                = (0xffU & (vlSelf->data_row2_in[4U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v18 
                = (0xffU & (vlSelf->weight_row2_in[4U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v19 
                = (vlSelf->data_row2_in[4U] >> 0x18U);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v19 
                = (vlSelf->weight_row2_in[4U] >> 0x18U);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v20 
                = (0xffU & vlSelf->data_row2_in[5U]);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v20 
                = (0xffU & vlSelf->weight_row2_in[5U]);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v21 
                = (0xffU & (vlSelf->data_row2_in[5U] 
                            >> 8U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v21 
                = (0xffU & (vlSelf->weight_row2_in[5U] 
                            >> 8U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v22 
                = (0xffU & (vlSelf->data_row2_in[5U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v22 
                = (0xffU & (vlSelf->weight_row2_in[5U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v23 
                = (vlSelf->data_row2_in[5U] >> 0x18U);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v23 
                = (vlSelf->weight_row2_in[5U] >> 0x18U);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v24 
                = (0xffU & vlSelf->data_row2_in[6U]);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v24 
                = (0xffU & vlSelf->weight_row2_in[6U]);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v25 
                = (0xffU & (vlSelf->data_row2_in[6U] 
                            >> 8U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v25 
                = (0xffU & (vlSelf->weight_row2_in[6U] 
                            >> 8U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v26 
                = (0xffU & (vlSelf->data_row2_in[6U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v26 
                = (0xffU & (vlSelf->weight_row2_in[6U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v27 
                = (vlSelf->data_row2_in[6U] >> 0x18U);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v27 
                = (vlSelf->weight_row2_in[6U] >> 0x18U);
        } else {
            if (vlSelf->enable) {
                __Vdly__top__DOT__cae_0__DOT__pe_1__DOT__state = 1U;
            }
            vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_1__flag_comp = 0U;
        }
        if ((2U & (IData)(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__state))) {
            if ((1U & (IData)(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__state))) {
                __Vdly__top__DOT__cae_0__DOT__pe_0__DOT__state = 0U;
                vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_0__flag_comp = 0U;
                __Vdly__top__DOT__cae_0__DOT__pe_0__DOT__counter = 0U;
            } else {
                if (vlSelf->layer) {
                    __Vdly__top__DOT__cae_0__DOT__pe_0__DOT__counter 
                        = (0x1fU & ((IData)(3U) + (IData)(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__counter)));
                    if ((0x1dU >= (0x1fU & ((IData)(2U) 
                                            + (IData)(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__counter))))) {
                        __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data__v0 
                            = vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row
                            [(0x1fU & ((IData)(2U) 
                                       + (IData)(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__counter)))];
                        __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight__v0 
                            = vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row
                            [(0x1fU & ((IData)(2U) 
                                       + (IData)(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__counter)))];
                    } else {
                        __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data__v0 
                            = vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h96fdabed__3;
                        __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight__v0 
                            = vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h96fdabed__6;
                    }
                    __Vdlyvset__top__DOT__cae_0__DOT__pe_0__DOT__data__v0 = 1U;
                    if ((0x1dU >= (0x1fU & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__counter))))) {
                        __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data__v1 
                            = vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row
                            [(0x1fU & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__counter)))];
                        __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight__v1 
                            = vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row
                            [(0x1fU & ((IData)(1U) 
                                       + (IData)(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__counter)))];
                    } else {
                        __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data__v1 
                            = vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h96fdabed__4;
                        __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight__v1 
                            = vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h96fdabed__7;
                    }
                    if ((0x1dU >= (IData)(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__counter))) {
                        __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data__v2 
                            = vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row
                            [vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__counter];
                        __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight__v2 
                            = vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row
                            [vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__counter];
                    } else {
                        __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data__v2 
                            = vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h96fdabed__5;
                        __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight__v2 
                            = vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h96fdabed__8;
                    }
                    if ((0x1bU == (IData)(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__counter))) {
                        __Vdly__top__DOT__cae_0__DOT__pe_0__DOT__state = 3U;
                    }
                } else {
                    __Vdly__top__DOT__cae_0__DOT__pe_0__DOT__counter 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__counter)));
                    __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight__v3 
                        = vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row
                        [2U];
                    __Vdlyvset__top__DOT__cae_0__DOT__pe_0__DOT__weight__v3 = 1U;
                    __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data__v3 
                        = ((0x1dU >= (0x1fU & ((IData)(2U) 
                                               + (IData)(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__counter))))
                            ? vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row
                           [(0x1fU & ((IData)(2U) + (IData)(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__counter)))]
                            : (IData)(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h96fdabed__0));
                    __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight__v4 
                        = vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row
                        [1U];
                    __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data__v4 
                        = ((0x1dU >= (0x1fU & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__counter))))
                            ? vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row
                           [(0x1fU & ((IData)(1U) + (IData)(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__counter)))]
                            : (IData)(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h96fdabed__1));
                    __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight__v5 
                        = vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row
                        [0U];
                    __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data__v5 
                        = ((0x1dU >= (IData)(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__counter))
                            ? vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row
                           [vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__counter]
                            : (IData)(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vxrand_h96fdabed__2));
                    if ((0x19U == (IData)(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__counter))) {
                        __Vdly__top__DOT__cae_0__DOT__pe_0__DOT__state = 3U;
                    }
                }
                vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_0__flag_comp = 1U;
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__state))) {
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v0 
                = (0xffU & vlSelf->data_row1_in[0U]);
            __Vdlyvset__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v0 = 1U;
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v0 
                = (0xffU & vlSelf->weight_row1_in[0U]);
            __Vdly__top__DOT__cae_0__DOT__pe_0__DOT__state = 2U;
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v1 
                = (0xffU & (vlSelf->data_row1_in[0U] 
                            >> 8U));
            __Vdlyvset__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v1 = 1U;
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v1 
                = (0xffU & (vlSelf->weight_row1_in[0U] 
                            >> 8U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v2 
                = (0xffU & (vlSelf->data_row1_in[0U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v2 
                = (0xffU & (vlSelf->weight_row1_in[0U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v3 
                = (vlSelf->data_row1_in[0U] >> 0x18U);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v3 
                = (vlSelf->weight_row1_in[0U] >> 0x18U);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v4 
                = (0xffU & vlSelf->data_row1_in[1U]);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v4 
                = (0xffU & vlSelf->weight_row1_in[1U]);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v5 
                = (0xffU & (vlSelf->data_row1_in[1U] 
                            >> 8U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v5 
                = (0xffU & (vlSelf->weight_row1_in[1U] 
                            >> 8U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v6 
                = (0xffU & (vlSelf->data_row1_in[1U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v6 
                = (0xffU & (vlSelf->weight_row1_in[1U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v7 
                = (vlSelf->data_row1_in[1U] >> 0x18U);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v7 
                = (vlSelf->weight_row1_in[1U] >> 0x18U);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v8 
                = (0xffU & vlSelf->data_row1_in[2U]);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v8 
                = (0xffU & vlSelf->weight_row1_in[2U]);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v9 
                = (0xffU & (vlSelf->data_row1_in[2U] 
                            >> 8U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v9 
                = (0xffU & (vlSelf->weight_row1_in[2U] 
                            >> 8U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v10 
                = (0xffU & (vlSelf->data_row1_in[2U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v10 
                = (0xffU & (vlSelf->weight_row1_in[2U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v11 
                = (vlSelf->data_row1_in[2U] >> 0x18U);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v11 
                = (vlSelf->weight_row1_in[2U] >> 0x18U);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v12 
                = (0xffU & vlSelf->data_row1_in[3U]);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v12 
                = (0xffU & vlSelf->weight_row1_in[3U]);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v13 
                = (0xffU & (vlSelf->data_row1_in[3U] 
                            >> 8U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v13 
                = (0xffU & (vlSelf->weight_row1_in[3U] 
                            >> 8U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v14 
                = (0xffU & (vlSelf->data_row1_in[3U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v14 
                = (0xffU & (vlSelf->weight_row1_in[3U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v15 
                = (vlSelf->data_row1_in[3U] >> 0x18U);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v15 
                = (vlSelf->weight_row1_in[3U] >> 0x18U);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v16 
                = (0xffU & vlSelf->data_row1_in[4U]);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v16 
                = (0xffU & vlSelf->weight_row1_in[4U]);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v17 
                = (0xffU & (vlSelf->data_row1_in[4U] 
                            >> 8U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v17 
                = (0xffU & (vlSelf->weight_row1_in[4U] 
                            >> 8U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v18 
                = (0xffU & (vlSelf->data_row1_in[4U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v18 
                = (0xffU & (vlSelf->weight_row1_in[4U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v19 
                = (vlSelf->data_row1_in[4U] >> 0x18U);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v19 
                = (vlSelf->weight_row1_in[4U] >> 0x18U);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v20 
                = (0xffU & vlSelf->data_row1_in[5U]);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v20 
                = (0xffU & vlSelf->weight_row1_in[5U]);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v21 
                = (0xffU & (vlSelf->data_row1_in[5U] 
                            >> 8U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v21 
                = (0xffU & (vlSelf->weight_row1_in[5U] 
                            >> 8U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v22 
                = (0xffU & (vlSelf->data_row1_in[5U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v22 
                = (0xffU & (vlSelf->weight_row1_in[5U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v23 
                = (vlSelf->data_row1_in[5U] >> 0x18U);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v23 
                = (vlSelf->weight_row1_in[5U] >> 0x18U);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v24 
                = (0xffU & vlSelf->data_row1_in[6U]);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v24 
                = (0xffU & vlSelf->weight_row1_in[6U]);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v25 
                = (0xffU & (vlSelf->data_row1_in[6U] 
                            >> 8U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v25 
                = (0xffU & (vlSelf->weight_row1_in[6U] 
                            >> 8U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v26 
                = (0xffU & (vlSelf->data_row1_in[6U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v26 
                = (0xffU & (vlSelf->weight_row1_in[6U] 
                            >> 0x10U));
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v27 
                = (vlSelf->data_row1_in[6U] >> 0x18U);
            __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v27 
                = (vlSelf->weight_row1_in[6U] >> 0x18U);
        } else {
            if (vlSelf->enable) {
                __Vdly__top__DOT__cae_0__DOT__pe_0__DOT__state = 1U;
            }
            vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_0__flag_comp = 0U;
        }
    }
    vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__state 
        = __Vdly__top__DOT__cae_0__DOT__acc_0__DOT__state;
    vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__counter 
        = __Vdly__top__DOT__cae_0__DOT__acc_0__DOT__counter;
    vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__psum_buffer[2U] 
        = __Vdlyvval__top__DOT__cae_0__DOT__acc_0__DOT__psum_buffer__v0;
    vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__psum_buffer[1U] 
        = __Vdlyvval__top__DOT__cae_0__DOT__acc_0__DOT__psum_buffer__v1;
    vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__psum_buffer[0U] 
        = __Vdlyvval__top__DOT__cae_0__DOT__acc_0__DOT__psum_buffer__v2;
    vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__tsum 
        = __Vdly__top__DOT__cae_0__DOT__acc_0__DOT__tsum;
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__state 
        = __Vdly__top__DOT__cae_0__DOT__pe_2__DOT__state;
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__counter 
        = __Vdly__top__DOT__cae_0__DOT__pe_2__DOT__counter;
    if (__Vdlyvset__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v0) {
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[0U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v0;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[0U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v0;
    }
    if (__Vdlyvset__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v1) {
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[1U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v1;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[2U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v2;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[3U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v3;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[4U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v4;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[5U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v5;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[6U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v6;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[7U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v7;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[8U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v8;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[9U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v9;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[0xaU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v10;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[0xbU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v11;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[0xcU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v12;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[0xdU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v13;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[0xeU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v14;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[0xfU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v15;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[0x10U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v16;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[0x11U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v17;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[0x12U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v18;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[0x13U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v19;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[0x14U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v20;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[0x15U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v21;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[0x16U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v22;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[0x17U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v23;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[0x18U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v24;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[0x19U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v25;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[0x1aU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v26;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[0x1bU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight_row__v27;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[0x1cU] = 0U;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[0x1dU] = 0U;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[1U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v1;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[2U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v2;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[3U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v3;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[4U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v4;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[5U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v5;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[6U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v6;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[7U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v7;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[8U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v8;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[9U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v9;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[0xaU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v10;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[0xbU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v11;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[0xcU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v12;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[0xdU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v13;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[0xeU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v14;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[0xfU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v15;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[0x10U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v16;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[0x11U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v17;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[0x12U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v18;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[0x13U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v19;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[0x14U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v20;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[0x15U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v21;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[0x16U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v22;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[0x17U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v23;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[0x18U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v24;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[0x19U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v25;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[0x1aU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v26;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[0x1bU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data_row__v27;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[0x1cU] = 0U;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[0x1dU] = 0U;
    }
    if (__Vdlyvset__top__DOT__cae_0__DOT__pe_2__DOT__data__v0) {
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight[2U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight__v0;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight[1U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight__v1;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight[0U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight__v2;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data[2U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data__v0;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data[1U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data__v1;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data[0U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data__v2;
    }
    if (__Vdlyvset__top__DOT__cae_0__DOT__pe_2__DOT__weight__v3) {
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight[2U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight__v3;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight[1U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight__v4;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight[0U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__weight__v5;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data[2U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data__v3;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data[1U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data__v4;
        vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data[0U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_2__DOT__data__v5;
    }
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__state 
        = __Vdly__top__DOT__cae_0__DOT__pe_1__DOT__state;
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__counter 
        = __Vdly__top__DOT__cae_0__DOT__pe_1__DOT__counter;
    if (__Vdlyvset__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v0) {
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[0U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v0;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[0U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v0;
    }
    if (__Vdlyvset__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v1) {
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[1U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v1;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[2U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v2;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[3U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v3;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[4U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v4;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[5U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v5;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[6U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v6;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[7U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v7;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[8U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v8;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[9U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v9;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[0xaU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v10;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[0xbU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v11;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[0xcU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v12;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[0xdU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v13;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[0xeU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v14;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[0xfU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v15;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[0x10U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v16;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[0x11U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v17;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[0x12U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v18;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[0x13U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v19;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[0x14U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v20;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[0x15U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v21;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[0x16U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v22;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[0x17U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v23;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[0x18U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v24;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[0x19U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v25;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[0x1aU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v26;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[0x1bU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight_row__v27;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[0x1cU] = 0U;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[0x1dU] = 0U;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[1U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v1;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[2U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v2;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[3U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v3;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[4U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v4;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[5U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v5;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[6U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v6;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[7U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v7;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[8U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v8;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[9U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v9;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[0xaU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v10;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[0xbU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v11;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[0xcU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v12;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[0xdU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v13;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[0xeU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v14;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[0xfU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v15;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[0x10U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v16;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[0x11U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v17;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[0x12U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v18;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[0x13U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v19;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[0x14U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v20;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[0x15U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v21;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[0x16U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v22;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[0x17U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v23;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[0x18U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v24;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[0x19U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v25;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[0x1aU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v26;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[0x1bU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data_row__v27;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[0x1cU] = 0U;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[0x1dU] = 0U;
    }
    if (__Vdlyvset__top__DOT__cae_0__DOT__pe_1__DOT__data__v0) {
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight[2U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight__v0;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight[1U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight__v1;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight[0U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight__v2;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data[2U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data__v0;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data[1U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data__v1;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data[0U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data__v2;
    }
    if (__Vdlyvset__top__DOT__cae_0__DOT__pe_1__DOT__weight__v3) {
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight[2U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight__v3;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight[1U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight__v4;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight[0U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__weight__v5;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data[2U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data__v3;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data[1U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data__v4;
        vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data[0U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_1__DOT__data__v5;
    }
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__state 
        = __Vdly__top__DOT__cae_0__DOT__pe_0__DOT__state;
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__counter 
        = __Vdly__top__DOT__cae_0__DOT__pe_0__DOT__counter;
    if (__Vdlyvset__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v0) {
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[0U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v0;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[0U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v0;
    }
    if (__Vdlyvset__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v1) {
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[1U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v1;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[2U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v2;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[3U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v3;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[4U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v4;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[5U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v5;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[6U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v6;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[7U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v7;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[8U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v8;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[9U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v9;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[0xaU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v10;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[0xbU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v11;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[0xcU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v12;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[0xdU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v13;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[0xeU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v14;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[0xfU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v15;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[0x10U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v16;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[0x11U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v17;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[0x12U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v18;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[0x13U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v19;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[0x14U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v20;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[0x15U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v21;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[0x16U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v22;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[0x17U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v23;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[0x18U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v24;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[0x19U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v25;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[0x1aU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v26;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[0x1bU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight_row__v27;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[0x1cU] = 0U;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[0x1dU] = 0U;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[1U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v1;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[2U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v2;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[3U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v3;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[4U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v4;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[5U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v5;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[6U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v6;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[7U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v7;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[8U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v8;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[9U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v9;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[0xaU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v10;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[0xbU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v11;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[0xcU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v12;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[0xdU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v13;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[0xeU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v14;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[0xfU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v15;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[0x10U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v16;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[0x11U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v17;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[0x12U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v18;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[0x13U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v19;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[0x14U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v20;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[0x15U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v21;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[0x16U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v22;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[0x17U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v23;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[0x18U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v24;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[0x19U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v25;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[0x1aU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v26;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[0x1bU] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data_row__v27;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[0x1cU] = 0U;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[0x1dU] = 0U;
    }
    if (__Vdlyvset__top__DOT__cae_0__DOT__pe_0__DOT__data__v0) {
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight[2U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight__v0;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight[1U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight__v1;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight[0U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight__v2;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data[2U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data__v0;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data[1U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data__v1;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data[0U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data__v2;
    }
    if (__Vdlyvset__top__DOT__cae_0__DOT__pe_0__DOT__weight__v3) {
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight[2U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight__v3;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight[1U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight__v4;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight[0U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__weight__v5;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data[2U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data__v3;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data[1U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data__v4;
        vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data[0U] 
            = __Vdlyvval__top__DOT__cae_0__DOT__pe_0__DOT__data__v5;
    }
    vlSelf->sum = vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__tsum;
    vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__pos_enable 
        = ((7U == (IData)(vlSelf->top__DOT__cae_0__DOT__pe_comp)) 
           & (~ (IData)(vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__posedge_detect_enable__DOT__signalPrev)));
    vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__neg_fc_comp 
        = ((~ (IData)(vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__fc_comp)) 
           & (IData)(vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__negedge_detect__DOT__signalPrev));
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vcellinp__vmult_0__a 
        = ((vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight
            [2U] << 0x10U) | ((vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight
                               [1U] << 8U) | vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight
                              [0U]));
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vcellinp__vmult_0__b 
        = ((vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data
            [2U] << 0x10U) | ((vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data
                               [1U] << 8U) | vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data
                              [0U]));
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vcellinp__vmult_0__a 
        = ((vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight
            [2U] << 0x10U) | ((vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight
                               [1U] << 8U) | vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight
                              [0U]));
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vcellinp__vmult_0__b 
        = ((vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data
            [2U] << 0x10U) | ((vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data
                               [1U] << 8U) | vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data
                              [0U]));
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vcellinp__vmult_0__a 
        = ((vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight
            [2U] << 0x10U) | ((vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight
                               [1U] << 8U) | vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight
                              [0U]));
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vcellinp__vmult_0__b 
        = ((vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data
            [2U] << 0x10U) | ((vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data
                               [1U] << 8U) | vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data
                              [0U]));
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p[0U] 
        = (0x3ffffU & ((0xffU & vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vcellinp__vmult_0__a) 
                       * (0xffU & vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vcellinp__vmult_0__b)));
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p[1U] 
        = (0x3ffffU & ((0xffU & (vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vcellinp__vmult_0__a 
                                 >> 8U)) * (0xffU & 
                                            (vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vcellinp__vmult_0__b 
                                             >> 8U))));
    vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p[2U] 
        = (0x3ffffU & ((0xffU & (vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vcellinp__vmult_0__a 
                                 >> 0x10U)) * (0xffU 
                                               & (vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vcellinp__vmult_0__b 
                                                  >> 0x10U))));
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p[0U] 
        = (0x3ffffU & ((0xffU & vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vcellinp__vmult_0__a) 
                       * (0xffU & vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vcellinp__vmult_0__b)));
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p[1U] 
        = (0x3ffffU & ((0xffU & (vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vcellinp__vmult_0__a 
                                 >> 8U)) * (0xffU & 
                                            (vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vcellinp__vmult_0__b 
                                             >> 8U))));
    vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p[2U] 
        = (0x3ffffU & ((0xffU & (vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vcellinp__vmult_0__a 
                                 >> 0x10U)) * (0xffU 
                                               & (vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vcellinp__vmult_0__b 
                                                  >> 0x10U))));
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p[0U] 
        = (0x3ffffU & ((0xffU & vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vcellinp__vmult_0__a) 
                       * (0xffU & vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vcellinp__vmult_0__b)));
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p[1U] 
        = (0x3ffffU & ((0xffU & (vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vcellinp__vmult_0__a 
                                 >> 8U)) * (0xffU & 
                                            (vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vcellinp__vmult_0__b 
                                             >> 8U))));
    vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p[2U] 
        = (0x3ffffU & ((0xffU & (vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vcellinp__vmult_0__a 
                                 >> 0x10U)) * (0xffU 
                                               & (vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vcellinp__vmult_0__b 
                                                  >> 0x10U))));
    vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__posedge_detect_enable__DOT__signalPrev 
        = (7U == (IData)(vlSelf->top__DOT__cae_0__DOT__pe_comp));
    vlSelf->fc_line_done = vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__neg_fc_comp;
    vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__negedge_detect__DOT__signalPrev 
        = vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__fc_comp;
    vlSelf->top__DOT__cae_0__DOT__inter_buffer_0[2U] 
        = ((IData)(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_2__flag_comp)
            ? (0x3ffffU & ((vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p
                            [0U] + vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p
                            [1U]) + vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p
                           [2U])) : 0U);
    vlSelf->top__DOT__cae_0__DOT__inter_buffer_0[1U] 
        = ((IData)(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_1__flag_comp)
            ? (0x3ffffU & ((vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p
                            [0U] + vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p
                            [1U]) + vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p
                           [2U])) : 0U);
    vlSelf->top__DOT__cae_0__DOT__inter_buffer_0[0U] 
        = ((IData)(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_0__flag_comp)
            ? (0x3ffffU & ((vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p
                            [0U] + vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p
                            [1U]) + vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p
                           [2U])) : 0U);
    vlSelf->top__DOT__cae_0__DOT____Vcellinp__acc_0__psum 
        = (((QData)((IData)(vlSelf->top__DOT__cae_0__DOT__inter_buffer_0
                            [2U])) << 0x24U) | (((QData)((IData)(
                                                                 vlSelf->top__DOT__cae_0__DOT__inter_buffer_0
                                                                 [1U])) 
                                                 << 0x12U) 
                                                | (QData)((IData)(
                                                                  vlSelf->top__DOT__cae_0__DOT__inter_buffer_0
                                                                  [0U]))));
    if (vlSelf->layer) {
        vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__fc_comp 
            = (7U == (IData)(vlSelf->top__DOT__cae_0__DOT__pe_comp));
    }
    vlSelf->top__DOT__cae_0__DOT__pe_comp = (((IData)(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_2__flag_comp) 
                                              << 2U) 
                                             | (((IData)(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_1__flag_comp) 
                                                 << 1U) 
                                                | (IData)(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_0__flag_comp)));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk_i) & (~ (IData)(vlSelf->__Vclklast__TOP__clk_i)))) {
        Vtop___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk_i = vlSelf->clk_i;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk_i & 0xfeU))) {
        Verilated::overWidthError("clk_i");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->enable & 0xfeU))) {
        Verilated::overWidthError("enable");}
    if (VL_UNLIKELY((vlSelf->layer & 0xfeU))) {
        Verilated::overWidthError("layer");}
    if (VL_UNLIKELY((vlSelf->fc_wcol & 0xe0U))) {
        Verilated::overWidthError("fc_wcol");}
}
#endif  // VL_DEBUG
