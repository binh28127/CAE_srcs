// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+324,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+325,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+326,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    {
        const char* __VenumItemNames[]
        = {"CONV", "FC"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(1, "top.__typeimpenum7", 2, 32, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+327,"layer",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 28; ++i) {
        tracep->declBus(c+328+i*1,"weight_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 7,0);
    }
    tracep->declBus(c+356,"bias_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+357+i*1,"data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0), 7,0);
    }
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+324,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+325,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+326,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+327,"layer",1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 28; ++i) {
        tracep->declBus(c+328+i*1,"weight_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 7,0);
    }
    tracep->declBus(c+356,"bias_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+357+i*1,"data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0), 7,0);
    }
    tracep->declBit(c+324,"clk",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("cae_0 ");
    tracep->declBit(c+324,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+325,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+326,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    {
        const char* __VenumItemNames[]
        = {"CONV", "FC"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(2, "CAE_top.__typeimpenum6", 2, 32, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+327,"layer",2,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 28; ++i) {
        tracep->declBus(c+328+i*1,"weight_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 7,0);
    }
    tracep->declBus(c+356,"bias_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+357+i*1,"data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, true,(i+0), 7,0);
    }
    tracep->declBus(c+85,"flag_pe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBus(c+86,"done_pe",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+361,"done_acc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+87+i*1,"inter_buffer_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 17,0);
    }
    tracep->declBus(c+90,"inter_buffer_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+91+i*1,"psum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 17,0);
    }
    tracep->declBus(c+94,"counter_accw",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+95,"en_acc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+96,"fc_wcol",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+360,"current_max",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+97,"mcount",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+98,"rst_ews",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+99,"done_ews",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("acc_0 ");
    tracep->declBit(c+324,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+325,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+95,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+85,"flag",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBus(c+96,"fc_wcol",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    {
        const char* __VenumItemNames[]
        = {"CONV", "FC"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(3, "accumulate.__typeimpenum3", 2, 32, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+327,"layer",3,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+91+i*1,"psum",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 17,0);
    }
    tracep->declBus(c+356,"bias",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+90,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+361,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+100,"tsum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+101,"counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("ewise_0 ");
    tracep->declBit(c+324,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+98,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    {
        const char* __VenumItemNames[]
        = {"CONV", "FC"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(4, "element_wise.__typeimpenum2", 2, 32, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+327,"layer",4,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+90,"din",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+360,"dout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+99,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+102,"qdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+103,"redata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+104,"mdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->pushNamePrefix("act_0 ");
    tracep->declBus(c+102,"din",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+103,"dout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("comp_0 ");
    tracep->declBit(c+324,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+98,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    {
        const char* __VenumItemNames[]
        = {"CONV", "FC"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(5, "compare.__typeimpenum1", 2, 32, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+327,"layer",5,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+103,"data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+104,"max",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBit(c+99,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+99,"counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("quant_0 ");
    tracep->declBus(c+90,"din",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+102,"dout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pe_0 ");
    tracep->declBit(c+324,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+325,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+326,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    {
        const char* __VenumItemNames[]
        = {"CONV", "FC"};
        const char* __VenumItemValues[]
        = {"0", "1"};
        tracep->declDTypeEnum(6, "pe.__typeimpenum4", 2, 32, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+327,"layer",6,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 28; ++i) {
        tracep->declBus(c+1+i*1,"data_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 7,0);
    }
    for (int i = 0; i < 28; ++i) {
        tracep->declBus(c+328+i*1,"weight_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 7,0);
    }
    tracep->declBus(c+105,"psum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 17,0);
    tracep->declBit(c+106,"flag_comp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+107,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    for (int i = 0; i < 28; ++i) {
        tracep->declBus(c+108+i*1,"data_row",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 28; ++i) {
        tracep->declBus(c+136+i*1,"weight_row",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+164+i*1,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+167+i*1,"weight",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    tracep->declBus(c+170,"res",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 17,0);
    tracep->declBit(c+171,"flag_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+172,"counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    {
        const char* __VenumItemNames[]
        = {"IDLE", "INPT", "COMP", "OUPT"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(7, "pe.__typeimpenum5", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    tracep->declBus(c+173,"state",7, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+174,"next_state",7, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->pushNamePrefix("vmult_0 ");
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+167+i*1,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 7,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+164+i*1,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 7,0);
    }
    tracep->declBus(c+170,"psum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 17,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+175+i*1,"p",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 17,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pe_1 ");
    tracep->declBit(c+324,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+325,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+326,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+327,"layer",6,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 28; ++i) {
        tracep->declBus(c+29+i*1,"data_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 7,0);
    }
    for (int i = 0; i < 28; ++i) {
        tracep->declBus(c+328+i*1,"weight_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 7,0);
    }
    tracep->declBus(c+178,"psum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 17,0);
    tracep->declBit(c+179,"flag_comp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+180,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    for (int i = 0; i < 28; ++i) {
        tracep->declBus(c+181+i*1,"data_row",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 28; ++i) {
        tracep->declBus(c+209+i*1,"weight_row",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+237+i*1,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+240+i*1,"weight",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    tracep->declBus(c+243,"res",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 17,0);
    tracep->declBit(c+244,"flag_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+245,"counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+246,"state",7, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+247,"next_state",7, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->pushNamePrefix("vmult_0 ");
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+240+i*1,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 7,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+237+i*1,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 7,0);
    }
    tracep->declBus(c+243,"psum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 17,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+248+i*1,"p",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 17,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pe_2 ");
    tracep->declBit(c+324,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+325,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+326,"en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+327,"layer",6,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 28; ++i) {
        tracep->declBus(c+57+i*1,"data_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 7,0);
    }
    for (int i = 0; i < 28; ++i) {
        tracep->declBus(c+328+i*1,"weight_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 7,0);
    }
    tracep->declBus(c+251,"psum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 17,0);
    tracep->declBit(c+252,"flag_comp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+253,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    for (int i = 0; i < 28; ++i) {
        tracep->declBus(c+254+i*1,"data_row",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 28; ++i) {
        tracep->declBus(c+282+i*1,"weight_row",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+310+i*1,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+313+i*1,"weight",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    tracep->declBus(c+316,"res",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 17,0);
    tracep->declBit(c+317,"flag_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+318,"counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+319,"state",7, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+320,"next_state",7, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->pushNamePrefix("vmult_0 ");
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+313+i*1,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 7,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+310+i*1,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, true,(i+0), 7,0);
    }
    tracep->declBus(c+316,"psum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 17,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+321+i*1,"p",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 17,0);
    }
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[0]),8);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[1]),8);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[2]),8);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[3]),8);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[4]),8);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[5]),8);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[6]),8);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[7]),8);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[8]),8);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[9]),8);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[10]),8);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[11]),8);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[12]),8);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[13]),8);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[14]),8);
    bufp->fullCData(oldp+16,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[15]),8);
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[16]),8);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[17]),8);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[18]),8);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[19]),8);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[20]),8);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[21]),8);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[22]),8);
    bufp->fullCData(oldp+24,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[23]),8);
    bufp->fullCData(oldp+25,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[24]),8);
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[25]),8);
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[26]),8);
    bufp->fullCData(oldp+28,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_0__data_in[27]),8);
    bufp->fullCData(oldp+29,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[0]),8);
    bufp->fullCData(oldp+30,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[1]),8);
    bufp->fullCData(oldp+31,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[2]),8);
    bufp->fullCData(oldp+32,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[3]),8);
    bufp->fullCData(oldp+33,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[4]),8);
    bufp->fullCData(oldp+34,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[5]),8);
    bufp->fullCData(oldp+35,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[6]),8);
    bufp->fullCData(oldp+36,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[7]),8);
    bufp->fullCData(oldp+37,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[8]),8);
    bufp->fullCData(oldp+38,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[9]),8);
    bufp->fullCData(oldp+39,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[10]),8);
    bufp->fullCData(oldp+40,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[11]),8);
    bufp->fullCData(oldp+41,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[12]),8);
    bufp->fullCData(oldp+42,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[13]),8);
    bufp->fullCData(oldp+43,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[14]),8);
    bufp->fullCData(oldp+44,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[15]),8);
    bufp->fullCData(oldp+45,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[16]),8);
    bufp->fullCData(oldp+46,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[17]),8);
    bufp->fullCData(oldp+47,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[18]),8);
    bufp->fullCData(oldp+48,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[19]),8);
    bufp->fullCData(oldp+49,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[20]),8);
    bufp->fullCData(oldp+50,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[21]),8);
    bufp->fullCData(oldp+51,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[22]),8);
    bufp->fullCData(oldp+52,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[23]),8);
    bufp->fullCData(oldp+53,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[24]),8);
    bufp->fullCData(oldp+54,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[25]),8);
    bufp->fullCData(oldp+55,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[26]),8);
    bufp->fullCData(oldp+56,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_1__data_in[27]),8);
    bufp->fullCData(oldp+57,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[0]),8);
    bufp->fullCData(oldp+58,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[1]),8);
    bufp->fullCData(oldp+59,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[2]),8);
    bufp->fullCData(oldp+60,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[3]),8);
    bufp->fullCData(oldp+61,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[4]),8);
    bufp->fullCData(oldp+62,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[5]),8);
    bufp->fullCData(oldp+63,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[6]),8);
    bufp->fullCData(oldp+64,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[7]),8);
    bufp->fullCData(oldp+65,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[8]),8);
    bufp->fullCData(oldp+66,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[9]),8);
    bufp->fullCData(oldp+67,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[10]),8);
    bufp->fullCData(oldp+68,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[11]),8);
    bufp->fullCData(oldp+69,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[12]),8);
    bufp->fullCData(oldp+70,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[13]),8);
    bufp->fullCData(oldp+71,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[14]),8);
    bufp->fullCData(oldp+72,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[15]),8);
    bufp->fullCData(oldp+73,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[16]),8);
    bufp->fullCData(oldp+74,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[17]),8);
    bufp->fullCData(oldp+75,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[18]),8);
    bufp->fullCData(oldp+76,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[19]),8);
    bufp->fullCData(oldp+77,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[20]),8);
    bufp->fullCData(oldp+78,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[21]),8);
    bufp->fullCData(oldp+79,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[22]),8);
    bufp->fullCData(oldp+80,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[23]),8);
    bufp->fullCData(oldp+81,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[24]),8);
    bufp->fullCData(oldp+82,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[25]),8);
    bufp->fullCData(oldp+83,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[26]),8);
    bufp->fullCData(oldp+84,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__pe_2__data_in[27]),8);
    bufp->fullCData(oldp+85,(vlSelf->top__DOT__cae_0__DOT__flag_pe),3);
    bufp->fullCData(oldp+86,((((IData)(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_2__done) 
                               << 2U) | (((IData)(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_1__done) 
                                          << 1U) | (IData)(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_0__done)))),3);
    bufp->fullIData(oldp+87,(vlSelf->top__DOT__cae_0__DOT__inter_buffer_0[0]),18);
    bufp->fullIData(oldp+88,(vlSelf->top__DOT__cae_0__DOT__inter_buffer_0[1]),18);
    bufp->fullIData(oldp+89,(vlSelf->top__DOT__cae_0__DOT__inter_buffer_0[2]),18);
    bufp->fullIData(oldp+90,(vlSelf->top__DOT__cae_0__DOT__inter_buffer_1),32);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__cae_0__DOT__psum[0]),18);
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__cae_0__DOT__psum[1]),18);
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__cae_0__DOT__psum[2]),18);
    bufp->fullCData(oldp+94,(vlSelf->top__DOT__cae_0__DOT__counter_accw),5);
    bufp->fullBit(oldp+95,(vlSelf->top__DOT__cae_0__DOT__en_acc));
    bufp->fullCData(oldp+96,(vlSelf->top__DOT__cae_0__DOT__fc_wcol),5);
    bufp->fullCData(oldp+97,(vlSelf->top__DOT__cae_0__DOT__mcount),2);
    bufp->fullBit(oldp+98,(vlSelf->top__DOT__cae_0__DOT__rst_ews));
    bufp->fullBit(oldp+99,(vlSelf->top__DOT__cae_0__DOT__ewise_0__DOT__comp_0__DOT__counter));
    bufp->fullIData(oldp+100,(vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__tsum),32);
    bufp->fullCData(oldp+101,(vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__counter),5);
    bufp->fullCData(oldp+102,(vlSelf->top__DOT__cae_0__DOT__ewise_0__DOT__qdata),8);
    bufp->fullCData(oldp+103,(vlSelf->top__DOT__cae_0__DOT__ewise_0__DOT__redata),8);
    bufp->fullCData(oldp+104,(vlSelf->top__DOT__cae_0__DOT__ewise_0__DOT__mdata),8);
    bufp->fullIData(oldp+105,(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_0__psum),18);
    bufp->fullBit(oldp+106,(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_0__flag_comp));
    bufp->fullBit(oldp+107,(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_0__done));
    bufp->fullCData(oldp+108,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[0]),8);
    bufp->fullCData(oldp+109,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[1]),8);
    bufp->fullCData(oldp+110,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[2]),8);
    bufp->fullCData(oldp+111,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[3]),8);
    bufp->fullCData(oldp+112,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[4]),8);
    bufp->fullCData(oldp+113,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[5]),8);
    bufp->fullCData(oldp+114,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[6]),8);
    bufp->fullCData(oldp+115,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[7]),8);
    bufp->fullCData(oldp+116,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[8]),8);
    bufp->fullCData(oldp+117,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[9]),8);
    bufp->fullCData(oldp+118,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[10]),8);
    bufp->fullCData(oldp+119,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[11]),8);
    bufp->fullCData(oldp+120,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[12]),8);
    bufp->fullCData(oldp+121,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[13]),8);
    bufp->fullCData(oldp+122,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[14]),8);
    bufp->fullCData(oldp+123,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[15]),8);
    bufp->fullCData(oldp+124,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[16]),8);
    bufp->fullCData(oldp+125,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[17]),8);
    bufp->fullCData(oldp+126,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[18]),8);
    bufp->fullCData(oldp+127,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[19]),8);
    bufp->fullCData(oldp+128,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[20]),8);
    bufp->fullCData(oldp+129,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[21]),8);
    bufp->fullCData(oldp+130,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[22]),8);
    bufp->fullCData(oldp+131,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[23]),8);
    bufp->fullCData(oldp+132,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[24]),8);
    bufp->fullCData(oldp+133,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[25]),8);
    bufp->fullCData(oldp+134,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[26]),8);
    bufp->fullCData(oldp+135,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[27]),8);
    bufp->fullCData(oldp+136,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[0]),8);
    bufp->fullCData(oldp+137,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[1]),8);
    bufp->fullCData(oldp+138,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[2]),8);
    bufp->fullCData(oldp+139,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[3]),8);
    bufp->fullCData(oldp+140,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[4]),8);
    bufp->fullCData(oldp+141,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[5]),8);
    bufp->fullCData(oldp+142,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[6]),8);
    bufp->fullCData(oldp+143,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[7]),8);
    bufp->fullCData(oldp+144,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[8]),8);
    bufp->fullCData(oldp+145,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[9]),8);
    bufp->fullCData(oldp+146,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[10]),8);
    bufp->fullCData(oldp+147,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[11]),8);
    bufp->fullCData(oldp+148,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[12]),8);
    bufp->fullCData(oldp+149,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[13]),8);
    bufp->fullCData(oldp+150,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[14]),8);
    bufp->fullCData(oldp+151,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[15]),8);
    bufp->fullCData(oldp+152,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[16]),8);
    bufp->fullCData(oldp+153,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[17]),8);
    bufp->fullCData(oldp+154,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[18]),8);
    bufp->fullCData(oldp+155,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[19]),8);
    bufp->fullCData(oldp+156,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[20]),8);
    bufp->fullCData(oldp+157,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[21]),8);
    bufp->fullCData(oldp+158,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[22]),8);
    bufp->fullCData(oldp+159,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[23]),8);
    bufp->fullCData(oldp+160,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[24]),8);
    bufp->fullCData(oldp+161,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[25]),8);
    bufp->fullCData(oldp+162,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[26]),8);
    bufp->fullCData(oldp+163,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[27]),8);
    bufp->fullCData(oldp+164,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data[0]),8);
    bufp->fullCData(oldp+165,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data[1]),8);
    bufp->fullCData(oldp+166,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data[2]),8);
    bufp->fullCData(oldp+167,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight[0]),8);
    bufp->fullCData(oldp+168,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight[1]),8);
    bufp->fullCData(oldp+169,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight[2]),8);
    bufp->fullIData(oldp+170,((0x3ffffU & ((vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight
                                            [0U] * 
                                            vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data
                                            [0U]) + 
                                           ((vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight
                                             [1U] * 
                                             vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data
                                             [1U]) 
                                            + (vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight
                                               [2U] 
                                               * vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data
                                               [2U]))))),18);
    bufp->fullBit(oldp+171,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__flag_en));
    bufp->fullCData(oldp+172,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__counter),5);
    bufp->fullCData(oldp+173,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__state),2);
    bufp->fullCData(oldp+174,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__next_state),2);
    bufp->fullIData(oldp+175,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p[0]),18);
    bufp->fullIData(oldp+176,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p[1]),18);
    bufp->fullIData(oldp+177,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p[2]),18);
    bufp->fullIData(oldp+178,(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_1__psum),18);
    bufp->fullBit(oldp+179,(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_1__flag_comp));
    bufp->fullBit(oldp+180,(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_1__done));
    bufp->fullCData(oldp+181,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[0]),8);
    bufp->fullCData(oldp+182,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[1]),8);
    bufp->fullCData(oldp+183,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[2]),8);
    bufp->fullCData(oldp+184,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[3]),8);
    bufp->fullCData(oldp+185,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[4]),8);
    bufp->fullCData(oldp+186,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[5]),8);
    bufp->fullCData(oldp+187,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[6]),8);
    bufp->fullCData(oldp+188,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[7]),8);
    bufp->fullCData(oldp+189,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[8]),8);
    bufp->fullCData(oldp+190,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[9]),8);
    bufp->fullCData(oldp+191,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[10]),8);
    bufp->fullCData(oldp+192,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[11]),8);
    bufp->fullCData(oldp+193,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[12]),8);
    bufp->fullCData(oldp+194,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[13]),8);
    bufp->fullCData(oldp+195,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[14]),8);
    bufp->fullCData(oldp+196,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[15]),8);
    bufp->fullCData(oldp+197,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[16]),8);
    bufp->fullCData(oldp+198,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[17]),8);
    bufp->fullCData(oldp+199,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[18]),8);
    bufp->fullCData(oldp+200,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[19]),8);
    bufp->fullCData(oldp+201,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[20]),8);
    bufp->fullCData(oldp+202,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[21]),8);
    bufp->fullCData(oldp+203,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[22]),8);
    bufp->fullCData(oldp+204,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[23]),8);
    bufp->fullCData(oldp+205,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[24]),8);
    bufp->fullCData(oldp+206,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[25]),8);
    bufp->fullCData(oldp+207,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[26]),8);
    bufp->fullCData(oldp+208,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[27]),8);
    bufp->fullCData(oldp+209,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[0]),8);
    bufp->fullCData(oldp+210,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[1]),8);
    bufp->fullCData(oldp+211,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[2]),8);
    bufp->fullCData(oldp+212,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[3]),8);
    bufp->fullCData(oldp+213,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[4]),8);
    bufp->fullCData(oldp+214,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[5]),8);
    bufp->fullCData(oldp+215,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[6]),8);
    bufp->fullCData(oldp+216,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[7]),8);
    bufp->fullCData(oldp+217,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[8]),8);
    bufp->fullCData(oldp+218,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[9]),8);
    bufp->fullCData(oldp+219,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[10]),8);
    bufp->fullCData(oldp+220,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[11]),8);
    bufp->fullCData(oldp+221,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[12]),8);
    bufp->fullCData(oldp+222,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[13]),8);
    bufp->fullCData(oldp+223,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[14]),8);
    bufp->fullCData(oldp+224,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[15]),8);
    bufp->fullCData(oldp+225,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[16]),8);
    bufp->fullCData(oldp+226,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[17]),8);
    bufp->fullCData(oldp+227,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[18]),8);
    bufp->fullCData(oldp+228,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[19]),8);
    bufp->fullCData(oldp+229,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[20]),8);
    bufp->fullCData(oldp+230,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[21]),8);
    bufp->fullCData(oldp+231,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[22]),8);
    bufp->fullCData(oldp+232,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[23]),8);
    bufp->fullCData(oldp+233,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[24]),8);
    bufp->fullCData(oldp+234,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[25]),8);
    bufp->fullCData(oldp+235,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[26]),8);
    bufp->fullCData(oldp+236,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[27]),8);
    bufp->fullCData(oldp+237,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data[0]),8);
    bufp->fullCData(oldp+238,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data[1]),8);
    bufp->fullCData(oldp+239,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data[2]),8);
    bufp->fullCData(oldp+240,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight[0]),8);
    bufp->fullCData(oldp+241,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight[1]),8);
    bufp->fullCData(oldp+242,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight[2]),8);
    bufp->fullIData(oldp+243,((0x3ffffU & ((vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight
                                            [0U] * 
                                            vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data
                                            [0U]) + 
                                           ((vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight
                                             [1U] * 
                                             vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data
                                             [1U]) 
                                            + (vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight
                                               [2U] 
                                               * vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data
                                               [2U]))))),18);
    bufp->fullBit(oldp+244,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__flag_en));
    bufp->fullCData(oldp+245,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__counter),5);
    bufp->fullCData(oldp+246,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__state),2);
    bufp->fullCData(oldp+247,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__next_state),2);
    bufp->fullIData(oldp+248,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p[0]),18);
    bufp->fullIData(oldp+249,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p[1]),18);
    bufp->fullIData(oldp+250,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p[2]),18);
    bufp->fullIData(oldp+251,(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_2__psum),18);
    bufp->fullBit(oldp+252,(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_2__flag_comp));
    bufp->fullBit(oldp+253,(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_2__done));
    bufp->fullCData(oldp+254,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[0]),8);
    bufp->fullCData(oldp+255,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[1]),8);
    bufp->fullCData(oldp+256,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[2]),8);
    bufp->fullCData(oldp+257,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[3]),8);
    bufp->fullCData(oldp+258,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[4]),8);
    bufp->fullCData(oldp+259,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[5]),8);
    bufp->fullCData(oldp+260,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[6]),8);
    bufp->fullCData(oldp+261,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[7]),8);
    bufp->fullCData(oldp+262,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[8]),8);
    bufp->fullCData(oldp+263,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[9]),8);
    bufp->fullCData(oldp+264,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[10]),8);
    bufp->fullCData(oldp+265,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[11]),8);
    bufp->fullCData(oldp+266,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[12]),8);
    bufp->fullCData(oldp+267,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[13]),8);
    bufp->fullCData(oldp+268,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[14]),8);
    bufp->fullCData(oldp+269,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[15]),8);
    bufp->fullCData(oldp+270,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[16]),8);
    bufp->fullCData(oldp+271,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[17]),8);
    bufp->fullCData(oldp+272,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[18]),8);
    bufp->fullCData(oldp+273,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[19]),8);
    bufp->fullCData(oldp+274,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[20]),8);
    bufp->fullCData(oldp+275,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[21]),8);
    bufp->fullCData(oldp+276,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[22]),8);
    bufp->fullCData(oldp+277,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[23]),8);
    bufp->fullCData(oldp+278,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[24]),8);
    bufp->fullCData(oldp+279,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[25]),8);
    bufp->fullCData(oldp+280,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[26]),8);
    bufp->fullCData(oldp+281,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[27]),8);
    bufp->fullCData(oldp+282,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[0]),8);
    bufp->fullCData(oldp+283,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[1]),8);
    bufp->fullCData(oldp+284,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[2]),8);
    bufp->fullCData(oldp+285,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[3]),8);
    bufp->fullCData(oldp+286,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[4]),8);
    bufp->fullCData(oldp+287,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[5]),8);
    bufp->fullCData(oldp+288,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[6]),8);
    bufp->fullCData(oldp+289,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[7]),8);
    bufp->fullCData(oldp+290,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[8]),8);
    bufp->fullCData(oldp+291,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[9]),8);
    bufp->fullCData(oldp+292,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[10]),8);
    bufp->fullCData(oldp+293,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[11]),8);
    bufp->fullCData(oldp+294,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[12]),8);
    bufp->fullCData(oldp+295,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[13]),8);
    bufp->fullCData(oldp+296,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[14]),8);
    bufp->fullCData(oldp+297,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[15]),8);
    bufp->fullCData(oldp+298,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[16]),8);
    bufp->fullCData(oldp+299,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[17]),8);
    bufp->fullCData(oldp+300,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[18]),8);
    bufp->fullCData(oldp+301,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[19]),8);
    bufp->fullCData(oldp+302,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[20]),8);
    bufp->fullCData(oldp+303,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[21]),8);
    bufp->fullCData(oldp+304,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[22]),8);
    bufp->fullCData(oldp+305,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[23]),8);
    bufp->fullCData(oldp+306,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[24]),8);
    bufp->fullCData(oldp+307,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[25]),8);
    bufp->fullCData(oldp+308,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[26]),8);
    bufp->fullCData(oldp+309,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[27]),8);
    bufp->fullCData(oldp+310,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data[0]),8);
    bufp->fullCData(oldp+311,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data[1]),8);
    bufp->fullCData(oldp+312,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data[2]),8);
    bufp->fullCData(oldp+313,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight[0]),8);
    bufp->fullCData(oldp+314,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight[1]),8);
    bufp->fullCData(oldp+315,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight[2]),8);
    bufp->fullIData(oldp+316,((0x3ffffU & ((vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight
                                            [0U] * 
                                            vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data
                                            [0U]) + 
                                           ((vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight
                                             [1U] * 
                                             vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data
                                             [1U]) 
                                            + (vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight
                                               [2U] 
                                               * vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data
                                               [2U]))))),18);
    bufp->fullBit(oldp+317,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__flag_en));
    bufp->fullCData(oldp+318,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__counter),5);
    bufp->fullCData(oldp+319,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__state),2);
    bufp->fullCData(oldp+320,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__next_state),2);
    bufp->fullIData(oldp+321,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p[0]),18);
    bufp->fullIData(oldp+322,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p[1]),18);
    bufp->fullIData(oldp+323,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p[2]),18);
    bufp->fullBit(oldp+324,(vlSelf->clk_i));
    bufp->fullBit(oldp+325,(vlSelf->rst));
    bufp->fullBit(oldp+326,(vlSelf->en));
    bufp->fullIData(oldp+327,(vlSelf->layer),32);
    bufp->fullCData(oldp+328,(vlSelf->weight_in[0]),8);
    bufp->fullCData(oldp+329,(vlSelf->weight_in[1]),8);
    bufp->fullCData(oldp+330,(vlSelf->weight_in[2]),8);
    bufp->fullCData(oldp+331,(vlSelf->weight_in[3]),8);
    bufp->fullCData(oldp+332,(vlSelf->weight_in[4]),8);
    bufp->fullCData(oldp+333,(vlSelf->weight_in[5]),8);
    bufp->fullCData(oldp+334,(vlSelf->weight_in[6]),8);
    bufp->fullCData(oldp+335,(vlSelf->weight_in[7]),8);
    bufp->fullCData(oldp+336,(vlSelf->weight_in[8]),8);
    bufp->fullCData(oldp+337,(vlSelf->weight_in[9]),8);
    bufp->fullCData(oldp+338,(vlSelf->weight_in[10]),8);
    bufp->fullCData(oldp+339,(vlSelf->weight_in[11]),8);
    bufp->fullCData(oldp+340,(vlSelf->weight_in[12]),8);
    bufp->fullCData(oldp+341,(vlSelf->weight_in[13]),8);
    bufp->fullCData(oldp+342,(vlSelf->weight_in[14]),8);
    bufp->fullCData(oldp+343,(vlSelf->weight_in[15]),8);
    bufp->fullCData(oldp+344,(vlSelf->weight_in[16]),8);
    bufp->fullCData(oldp+345,(vlSelf->weight_in[17]),8);
    bufp->fullCData(oldp+346,(vlSelf->weight_in[18]),8);
    bufp->fullCData(oldp+347,(vlSelf->weight_in[19]),8);
    bufp->fullCData(oldp+348,(vlSelf->weight_in[20]),8);
    bufp->fullCData(oldp+349,(vlSelf->weight_in[21]),8);
    bufp->fullCData(oldp+350,(vlSelf->weight_in[22]),8);
    bufp->fullCData(oldp+351,(vlSelf->weight_in[23]),8);
    bufp->fullCData(oldp+352,(vlSelf->weight_in[24]),8);
    bufp->fullCData(oldp+353,(vlSelf->weight_in[25]),8);
    bufp->fullCData(oldp+354,(vlSelf->weight_in[26]),8);
    bufp->fullCData(oldp+355,(vlSelf->weight_in[27]),8);
    bufp->fullIData(oldp+356,(vlSelf->bias_in),32);
    bufp->fullCData(oldp+357,(vlSelf->data_out[0]),8);
    bufp->fullCData(oldp+358,(vlSelf->data_out[1]),8);
    bufp->fullCData(oldp+359,(vlSelf->data_out[2]),8);
    bufp->fullCData(oldp+360,(vlSelf->top__DOT__cae_0__DOT__current_max),8);
    bufp->fullBit(oldp+361,(vlSelf->top__DOT__cae_0__DOT__done_acc));
}
