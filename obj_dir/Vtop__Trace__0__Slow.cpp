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
    tracep->declBit(c+272,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+273,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+274,"enable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+275,"layer",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+276,"fc_wcol",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declArray(c+277,"data_row1_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declArray(c+284,"data_row2_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declArray(c+291,"data_row3_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declArray(c+298,"weight_row1_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declArray(c+305,"weight_row2_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declArray(c+312,"weight_row3_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declBus(c+319,"bias_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+320,"conv_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 103,0);
    tracep->declBit(c+324,"conv_done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+325,"fc_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+326,"fc_done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+327,"fc_line_done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+272,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+273,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+274,"enable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+275,"layer",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+276,"fc_wcol",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declArray(c+277,"data_row1_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declArray(c+284,"data_row2_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declArray(c+291,"data_row3_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declArray(c+298,"weight_row1_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declArray(c+305,"weight_row2_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declArray(c+312,"weight_row3_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declBus(c+319,"bias_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+320,"conv_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 103,0);
    tracep->declBit(c+324,"conv_done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+325,"fc_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+326,"fc_done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+327,"fc_line_done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("cae_0 ");
    tracep->declBit(c+272,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+273,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+274,"enable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+275,"layer",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+276,"fc_wcol",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declArray(c+277,"data_row1_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declArray(c+284,"data_row2_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declArray(c+291,"data_row3_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declArray(c+298,"weight_row1_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declArray(c+305,"weight_row2_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declArray(c+312,"weight_row3_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declBus(c+319,"bias_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+1,"conv_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 103,0);
    tracep->declBit(c+324,"conv_done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+325,"fc_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+326,"fc_done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+327,"fc_line_done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+5+i*1,"inter_buffer_0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, true,(i+0), 17,0);
    }
    tracep->declBus(c+269,"pe_comp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 2,0);
    tracep->declBit(c+270,"en_accumulate",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"conv_comp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+9,"sum",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("acc_0 ");
    tracep->declBit(c+272,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+273,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+270,"enable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+275,"layer",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declQuad(c+10,"psum",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 53,0);
    tracep->declBus(c+319,"bias",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+276,"fc_wcol",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+9,"sum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+8,"conv_comp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+326,"fc_done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+327,"fc_line_done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+9,"tsum",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+12+i*1,"psum_buffer",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 17,0);
    }
    tracep->declBus(c+15,"counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBit(c+271,"fc_comp",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+265,"pos_enable",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+266,"neg_fc_comp",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+16,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+328,"IDLE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+329,"CONV",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+330,"FC",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+331,"DONE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->pushNamePrefix("negedge_detect ");
    tracep->declBit(c+272,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+271,"signal",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+266,"neg_edge",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+267,"signalPrev",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("posedge_detect_enable ");
    tracep->declBit(c+272,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+270,"signal",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+265,"pos_edge",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+268,"signalPrev",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("element_wise ");
    tracep->declBit(c+272,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+273,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+8,"enable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+9,"din",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declArray(c+1,"dout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 103,0);
    tracep->declBit(c+324,"done",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+328,"IDLE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+329,"FIRST_ROW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+330,"SECOND_ROW",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+331,"DONE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+17,"qdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+18,"redata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    for (int i = 0; i < 13; ++i) {
        tracep->declBus(c+19+i*1,"mdata",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    tracep->declBus(c+32,"redata_buffer",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 7,0);
    tracep->declBus(c+33,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+34,"counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+35,"counter_shifted",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+36,"row_counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("act_0 ");
    tracep->declBus(c+17,"din",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->declBus(c+18,"dout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("quant_0 ");
    tracep->declBus(c+9,"din",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+17,"dout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pe_0 ");
    tracep->declBit(c+272,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+273,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+274,"enable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+275,"layer",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+277,"data_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declArray(c+298,"weight_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declBus(c+37,"psum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 17,0);
    tracep->declBit(c+38,"flag_comp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    for (int i = 0; i < 30; ++i) {
        tracep->declBus(c+39+i*1,"data_row",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 30; ++i) {
        tracep->declBus(c+69+i*1,"weight_row",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+99+i*1,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+102+i*1,"weight",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    tracep->declBus(c+105,"counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+106,"buffer",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 17,0);
    tracep->declBus(c+328,"IDLE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+329,"INPT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+330,"COMP",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+331,"OUPT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+107,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->pushNamePrefix("vmult_0 ");
    tracep->declBus(c+108,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+109,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+106,"psum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 17,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+110+i*1,"p",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 17,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pe_1 ");
    tracep->declBit(c+272,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+273,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+274,"enable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+275,"layer",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+284,"data_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declArray(c+305,"weight_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declBus(c+113,"psum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 17,0);
    tracep->declBit(c+114,"flag_comp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    for (int i = 0; i < 30; ++i) {
        tracep->declBus(c+115+i*1,"data_row",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 30; ++i) {
        tracep->declBus(c+145+i*1,"weight_row",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+175+i*1,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+178+i*1,"weight",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    tracep->declBus(c+181,"counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+182,"buffer",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 17,0);
    tracep->declBus(c+328,"IDLE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+329,"INPT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+330,"COMP",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+331,"OUPT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+183,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->pushNamePrefix("vmult_0 ");
    tracep->declBus(c+184,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+185,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+182,"psum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 17,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+186+i*1,"p",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 17,0);
    }
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("pe_2 ");
    tracep->declBit(c+272,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+273,"rst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+274,"enable",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+275,"layer",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declArray(c+291,"data_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declArray(c+312,"weight_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 223,0);
    tracep->declBus(c+189,"psum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 17,0);
    tracep->declBit(c+190,"flag_comp",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    for (int i = 0; i < 30; ++i) {
        tracep->declBus(c+191+i*1,"data_row",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 30; ++i) {
        tracep->declBus(c+221+i*1,"weight_row",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+251+i*1,"data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+254+i*1,"weight",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    tracep->declBus(c+257,"counter",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+258,"buffer",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 17,0);
    tracep->declBus(c+328,"IDLE",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+329,"INPT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+330,"COMP",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+331,"OUPT",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 1,0);
    tracep->declBus(c+259,"state",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->pushNamePrefix("vmult_0 ");
    tracep->declBus(c+260,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+261,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 23,0);
    tracep->declBus(c+258,"psum",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 17,0);
    for (int i = 0; i < 3; ++i) {
        tracep->declBus(c+262+i*1,"p",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 17,0);
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
    bufp->fullWData(oldp+1,(vlSelf->top__DOT__cae_0__DOT____Vcellout__element_wise__dout),104);
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__cae_0__DOT__inter_buffer_0[0]),18);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__cae_0__DOT__inter_buffer_0[1]),18);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__cae_0__DOT__inter_buffer_0[2]),18);
    bufp->fullBit(oldp+8,(vlSelf->top__DOT__cae_0__DOT__conv_comp));
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__tsum),32);
    bufp->fullQData(oldp+10,(vlSelf->top__DOT__cae_0__DOT____Vcellinp__acc_0__psum),54);
    bufp->fullIData(oldp+12,(vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__psum_buffer[0]),18);
    bufp->fullIData(oldp+13,(vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__psum_buffer[1]),18);
    bufp->fullIData(oldp+14,(vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__psum_buffer[2]),18);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__counter),5);
    bufp->fullCData(oldp+16,(vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__state),2);
    bufp->fullCData(oldp+17,((0xffU & vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__tsum)),8);
    bufp->fullCData(oldp+18,(((0x80U & vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__tsum)
                               ? 0U : (0xffU & vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__tsum))),8);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__cae_0__DOT__element_wise__DOT__mdata[0]),8);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__cae_0__DOT__element_wise__DOT__mdata[1]),8);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__cae_0__DOT__element_wise__DOT__mdata[2]),8);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__cae_0__DOT__element_wise__DOT__mdata[3]),8);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__cae_0__DOT__element_wise__DOT__mdata[4]),8);
    bufp->fullCData(oldp+24,(vlSelf->top__DOT__cae_0__DOT__element_wise__DOT__mdata[5]),8);
    bufp->fullCData(oldp+25,(vlSelf->top__DOT__cae_0__DOT__element_wise__DOT__mdata[6]),8);
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__cae_0__DOT__element_wise__DOT__mdata[7]),8);
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__cae_0__DOT__element_wise__DOT__mdata[8]),8);
    bufp->fullCData(oldp+28,(vlSelf->top__DOT__cae_0__DOT__element_wise__DOT__mdata[9]),8);
    bufp->fullCData(oldp+29,(vlSelf->top__DOT__cae_0__DOT__element_wise__DOT__mdata[10]),8);
    bufp->fullCData(oldp+30,(vlSelf->top__DOT__cae_0__DOT__element_wise__DOT__mdata[11]),8);
    bufp->fullCData(oldp+31,(vlSelf->top__DOT__cae_0__DOT__element_wise__DOT__mdata[12]),8);
    bufp->fullCData(oldp+32,(vlSelf->top__DOT__cae_0__DOT__element_wise__DOT__redata_buffer),8);
    bufp->fullCData(oldp+33,(vlSelf->top__DOT__cae_0__DOT__element_wise__DOT__state),2);
    bufp->fullCData(oldp+34,(vlSelf->top__DOT__cae_0__DOT__element_wise__DOT__counter),5);
    bufp->fullCData(oldp+35,((0xfU & ((IData)(vlSelf->top__DOT__cae_0__DOT__element_wise__DOT__counter) 
                                      >> 1U))),4);
    bufp->fullBit(oldp+36,(vlSelf->top__DOT__cae_0__DOT__element_wise__DOT__row_counter));
    bufp->fullIData(oldp+37,(((IData)(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_0__flag_comp)
                               ? (0x3ffffU & ((vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p
                                               [0U] 
                                               + vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p
                                               [1U]) 
                                              + vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p
                                              [2U]))
                               : 0U)),18);
    bufp->fullBit(oldp+38,(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_0__flag_comp));
    bufp->fullCData(oldp+39,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[0]),8);
    bufp->fullCData(oldp+40,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[1]),8);
    bufp->fullCData(oldp+41,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[2]),8);
    bufp->fullCData(oldp+42,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[3]),8);
    bufp->fullCData(oldp+43,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[4]),8);
    bufp->fullCData(oldp+44,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[5]),8);
    bufp->fullCData(oldp+45,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[6]),8);
    bufp->fullCData(oldp+46,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[7]),8);
    bufp->fullCData(oldp+47,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[8]),8);
    bufp->fullCData(oldp+48,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[9]),8);
    bufp->fullCData(oldp+49,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[10]),8);
    bufp->fullCData(oldp+50,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[11]),8);
    bufp->fullCData(oldp+51,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[12]),8);
    bufp->fullCData(oldp+52,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[13]),8);
    bufp->fullCData(oldp+53,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[14]),8);
    bufp->fullCData(oldp+54,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[15]),8);
    bufp->fullCData(oldp+55,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[16]),8);
    bufp->fullCData(oldp+56,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[17]),8);
    bufp->fullCData(oldp+57,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[18]),8);
    bufp->fullCData(oldp+58,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[19]),8);
    bufp->fullCData(oldp+59,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[20]),8);
    bufp->fullCData(oldp+60,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[21]),8);
    bufp->fullCData(oldp+61,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[22]),8);
    bufp->fullCData(oldp+62,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[23]),8);
    bufp->fullCData(oldp+63,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[24]),8);
    bufp->fullCData(oldp+64,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[25]),8);
    bufp->fullCData(oldp+65,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[26]),8);
    bufp->fullCData(oldp+66,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[27]),8);
    bufp->fullCData(oldp+67,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[28]),8);
    bufp->fullCData(oldp+68,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data_row[29]),8);
    bufp->fullCData(oldp+69,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[0]),8);
    bufp->fullCData(oldp+70,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[1]),8);
    bufp->fullCData(oldp+71,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[2]),8);
    bufp->fullCData(oldp+72,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[3]),8);
    bufp->fullCData(oldp+73,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[4]),8);
    bufp->fullCData(oldp+74,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[5]),8);
    bufp->fullCData(oldp+75,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[6]),8);
    bufp->fullCData(oldp+76,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[7]),8);
    bufp->fullCData(oldp+77,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[8]),8);
    bufp->fullCData(oldp+78,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[9]),8);
    bufp->fullCData(oldp+79,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[10]),8);
    bufp->fullCData(oldp+80,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[11]),8);
    bufp->fullCData(oldp+81,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[12]),8);
    bufp->fullCData(oldp+82,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[13]),8);
    bufp->fullCData(oldp+83,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[14]),8);
    bufp->fullCData(oldp+84,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[15]),8);
    bufp->fullCData(oldp+85,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[16]),8);
    bufp->fullCData(oldp+86,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[17]),8);
    bufp->fullCData(oldp+87,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[18]),8);
    bufp->fullCData(oldp+88,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[19]),8);
    bufp->fullCData(oldp+89,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[20]),8);
    bufp->fullCData(oldp+90,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[21]),8);
    bufp->fullCData(oldp+91,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[22]),8);
    bufp->fullCData(oldp+92,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[23]),8);
    bufp->fullCData(oldp+93,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[24]),8);
    bufp->fullCData(oldp+94,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[25]),8);
    bufp->fullCData(oldp+95,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[26]),8);
    bufp->fullCData(oldp+96,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[27]),8);
    bufp->fullCData(oldp+97,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[28]),8);
    bufp->fullCData(oldp+98,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight_row[29]),8);
    bufp->fullCData(oldp+99,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data[0]),8);
    bufp->fullCData(oldp+100,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data[1]),8);
    bufp->fullCData(oldp+101,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__data[2]),8);
    bufp->fullCData(oldp+102,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight[0]),8);
    bufp->fullCData(oldp+103,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight[1]),8);
    bufp->fullCData(oldp+104,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__weight[2]),8);
    bufp->fullCData(oldp+105,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__counter),5);
    bufp->fullIData(oldp+106,((0x3ffffU & ((vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p
                                            [0U] + 
                                            vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p
                                            [1U]) + 
                                           vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p
                                           [2U]))),18);
    bufp->fullCData(oldp+107,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__state),2);
    bufp->fullIData(oldp+108,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vcellinp__vmult_0__a),24);
    bufp->fullIData(oldp+109,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT____Vcellinp__vmult_0__b),24);
    bufp->fullIData(oldp+110,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p[0]),18);
    bufp->fullIData(oldp+111,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p[1]),18);
    bufp->fullIData(oldp+112,(vlSelf->top__DOT__cae_0__DOT__pe_0__DOT__vmult_0__DOT__p[2]),18);
    bufp->fullIData(oldp+113,(((IData)(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_1__flag_comp)
                                ? (0x3ffffU & ((vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p
                                                [0U] 
                                                + vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p
                                                [1U]) 
                                               + vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p
                                               [2U]))
                                : 0U)),18);
    bufp->fullBit(oldp+114,(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_1__flag_comp));
    bufp->fullCData(oldp+115,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[0]),8);
    bufp->fullCData(oldp+116,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[1]),8);
    bufp->fullCData(oldp+117,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[2]),8);
    bufp->fullCData(oldp+118,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[3]),8);
    bufp->fullCData(oldp+119,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[4]),8);
    bufp->fullCData(oldp+120,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[5]),8);
    bufp->fullCData(oldp+121,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[6]),8);
    bufp->fullCData(oldp+122,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[7]),8);
    bufp->fullCData(oldp+123,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[8]),8);
    bufp->fullCData(oldp+124,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[9]),8);
    bufp->fullCData(oldp+125,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[10]),8);
    bufp->fullCData(oldp+126,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[11]),8);
    bufp->fullCData(oldp+127,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[12]),8);
    bufp->fullCData(oldp+128,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[13]),8);
    bufp->fullCData(oldp+129,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[14]),8);
    bufp->fullCData(oldp+130,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[15]),8);
    bufp->fullCData(oldp+131,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[16]),8);
    bufp->fullCData(oldp+132,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[17]),8);
    bufp->fullCData(oldp+133,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[18]),8);
    bufp->fullCData(oldp+134,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[19]),8);
    bufp->fullCData(oldp+135,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[20]),8);
    bufp->fullCData(oldp+136,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[21]),8);
    bufp->fullCData(oldp+137,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[22]),8);
    bufp->fullCData(oldp+138,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[23]),8);
    bufp->fullCData(oldp+139,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[24]),8);
    bufp->fullCData(oldp+140,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[25]),8);
    bufp->fullCData(oldp+141,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[26]),8);
    bufp->fullCData(oldp+142,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[27]),8);
    bufp->fullCData(oldp+143,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[28]),8);
    bufp->fullCData(oldp+144,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data_row[29]),8);
    bufp->fullCData(oldp+145,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[0]),8);
    bufp->fullCData(oldp+146,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[1]),8);
    bufp->fullCData(oldp+147,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[2]),8);
    bufp->fullCData(oldp+148,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[3]),8);
    bufp->fullCData(oldp+149,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[4]),8);
    bufp->fullCData(oldp+150,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[5]),8);
    bufp->fullCData(oldp+151,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[6]),8);
    bufp->fullCData(oldp+152,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[7]),8);
    bufp->fullCData(oldp+153,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[8]),8);
    bufp->fullCData(oldp+154,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[9]),8);
    bufp->fullCData(oldp+155,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[10]),8);
    bufp->fullCData(oldp+156,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[11]),8);
    bufp->fullCData(oldp+157,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[12]),8);
    bufp->fullCData(oldp+158,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[13]),8);
    bufp->fullCData(oldp+159,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[14]),8);
    bufp->fullCData(oldp+160,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[15]),8);
    bufp->fullCData(oldp+161,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[16]),8);
    bufp->fullCData(oldp+162,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[17]),8);
    bufp->fullCData(oldp+163,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[18]),8);
    bufp->fullCData(oldp+164,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[19]),8);
    bufp->fullCData(oldp+165,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[20]),8);
    bufp->fullCData(oldp+166,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[21]),8);
    bufp->fullCData(oldp+167,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[22]),8);
    bufp->fullCData(oldp+168,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[23]),8);
    bufp->fullCData(oldp+169,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[24]),8);
    bufp->fullCData(oldp+170,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[25]),8);
    bufp->fullCData(oldp+171,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[26]),8);
    bufp->fullCData(oldp+172,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[27]),8);
    bufp->fullCData(oldp+173,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[28]),8);
    bufp->fullCData(oldp+174,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight_row[29]),8);
    bufp->fullCData(oldp+175,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data[0]),8);
    bufp->fullCData(oldp+176,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data[1]),8);
    bufp->fullCData(oldp+177,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__data[2]),8);
    bufp->fullCData(oldp+178,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight[0]),8);
    bufp->fullCData(oldp+179,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight[1]),8);
    bufp->fullCData(oldp+180,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__weight[2]),8);
    bufp->fullCData(oldp+181,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__counter),5);
    bufp->fullIData(oldp+182,((0x3ffffU & ((vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p
                                            [0U] + 
                                            vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p
                                            [1U]) + 
                                           vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p
                                           [2U]))),18);
    bufp->fullCData(oldp+183,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__state),2);
    bufp->fullIData(oldp+184,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vcellinp__vmult_0__a),24);
    bufp->fullIData(oldp+185,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT____Vcellinp__vmult_0__b),24);
    bufp->fullIData(oldp+186,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p[0]),18);
    bufp->fullIData(oldp+187,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p[1]),18);
    bufp->fullIData(oldp+188,(vlSelf->top__DOT__cae_0__DOT__pe_1__DOT__vmult_0__DOT__p[2]),18);
    bufp->fullIData(oldp+189,(((IData)(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_2__flag_comp)
                                ? (0x3ffffU & ((vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p
                                                [0U] 
                                                + vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p
                                                [1U]) 
                                               + vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p
                                               [2U]))
                                : 0U)),18);
    bufp->fullBit(oldp+190,(vlSelf->top__DOT__cae_0__DOT____Vcellout__pe_2__flag_comp));
    bufp->fullCData(oldp+191,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[0]),8);
    bufp->fullCData(oldp+192,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[1]),8);
    bufp->fullCData(oldp+193,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[2]),8);
    bufp->fullCData(oldp+194,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[3]),8);
    bufp->fullCData(oldp+195,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[4]),8);
    bufp->fullCData(oldp+196,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[5]),8);
    bufp->fullCData(oldp+197,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[6]),8);
    bufp->fullCData(oldp+198,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[7]),8);
    bufp->fullCData(oldp+199,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[8]),8);
    bufp->fullCData(oldp+200,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[9]),8);
    bufp->fullCData(oldp+201,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[10]),8);
    bufp->fullCData(oldp+202,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[11]),8);
    bufp->fullCData(oldp+203,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[12]),8);
    bufp->fullCData(oldp+204,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[13]),8);
    bufp->fullCData(oldp+205,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[14]),8);
    bufp->fullCData(oldp+206,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[15]),8);
    bufp->fullCData(oldp+207,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[16]),8);
    bufp->fullCData(oldp+208,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[17]),8);
    bufp->fullCData(oldp+209,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[18]),8);
    bufp->fullCData(oldp+210,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[19]),8);
    bufp->fullCData(oldp+211,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[20]),8);
    bufp->fullCData(oldp+212,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[21]),8);
    bufp->fullCData(oldp+213,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[22]),8);
    bufp->fullCData(oldp+214,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[23]),8);
    bufp->fullCData(oldp+215,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[24]),8);
    bufp->fullCData(oldp+216,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[25]),8);
    bufp->fullCData(oldp+217,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[26]),8);
    bufp->fullCData(oldp+218,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[27]),8);
    bufp->fullCData(oldp+219,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[28]),8);
    bufp->fullCData(oldp+220,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data_row[29]),8);
    bufp->fullCData(oldp+221,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[0]),8);
    bufp->fullCData(oldp+222,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[1]),8);
    bufp->fullCData(oldp+223,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[2]),8);
    bufp->fullCData(oldp+224,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[3]),8);
    bufp->fullCData(oldp+225,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[4]),8);
    bufp->fullCData(oldp+226,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[5]),8);
    bufp->fullCData(oldp+227,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[6]),8);
    bufp->fullCData(oldp+228,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[7]),8);
    bufp->fullCData(oldp+229,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[8]),8);
    bufp->fullCData(oldp+230,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[9]),8);
    bufp->fullCData(oldp+231,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[10]),8);
    bufp->fullCData(oldp+232,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[11]),8);
    bufp->fullCData(oldp+233,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[12]),8);
    bufp->fullCData(oldp+234,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[13]),8);
    bufp->fullCData(oldp+235,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[14]),8);
    bufp->fullCData(oldp+236,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[15]),8);
    bufp->fullCData(oldp+237,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[16]),8);
    bufp->fullCData(oldp+238,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[17]),8);
    bufp->fullCData(oldp+239,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[18]),8);
    bufp->fullCData(oldp+240,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[19]),8);
    bufp->fullCData(oldp+241,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[20]),8);
    bufp->fullCData(oldp+242,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[21]),8);
    bufp->fullCData(oldp+243,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[22]),8);
    bufp->fullCData(oldp+244,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[23]),8);
    bufp->fullCData(oldp+245,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[24]),8);
    bufp->fullCData(oldp+246,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[25]),8);
    bufp->fullCData(oldp+247,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[26]),8);
    bufp->fullCData(oldp+248,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[27]),8);
    bufp->fullCData(oldp+249,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[28]),8);
    bufp->fullCData(oldp+250,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight_row[29]),8);
    bufp->fullCData(oldp+251,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data[0]),8);
    bufp->fullCData(oldp+252,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data[1]),8);
    bufp->fullCData(oldp+253,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__data[2]),8);
    bufp->fullCData(oldp+254,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight[0]),8);
    bufp->fullCData(oldp+255,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight[1]),8);
    bufp->fullCData(oldp+256,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__weight[2]),8);
    bufp->fullCData(oldp+257,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__counter),5);
    bufp->fullIData(oldp+258,((0x3ffffU & ((vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p
                                            [0U] + 
                                            vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p
                                            [1U]) + 
                                           vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p
                                           [2U]))),18);
    bufp->fullCData(oldp+259,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__state),2);
    bufp->fullIData(oldp+260,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vcellinp__vmult_0__a),24);
    bufp->fullIData(oldp+261,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT____Vcellinp__vmult_0__b),24);
    bufp->fullIData(oldp+262,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p[0]),18);
    bufp->fullIData(oldp+263,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p[1]),18);
    bufp->fullIData(oldp+264,(vlSelf->top__DOT__cae_0__DOT__pe_2__DOT__vmult_0__DOT__p[2]),18);
    bufp->fullBit(oldp+265,(vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__pos_enable));
    bufp->fullBit(oldp+266,(vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__neg_fc_comp));
    bufp->fullBit(oldp+267,(vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__negedge_detect__DOT__signalPrev));
    bufp->fullBit(oldp+268,(vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__posedge_detect_enable__DOT__signalPrev));
    bufp->fullCData(oldp+269,(vlSelf->top__DOT__cae_0__DOT__pe_comp),3);
    bufp->fullBit(oldp+270,((7U == (IData)(vlSelf->top__DOT__cae_0__DOT__pe_comp))));
    bufp->fullBit(oldp+271,(vlSelf->top__DOT__cae_0__DOT__acc_0__DOT__fc_comp));
    bufp->fullBit(oldp+272,(vlSelf->clk_i));
    bufp->fullBit(oldp+273,(vlSelf->rst));
    bufp->fullBit(oldp+274,(vlSelf->enable));
    bufp->fullBit(oldp+275,(vlSelf->layer));
    bufp->fullCData(oldp+276,(vlSelf->fc_wcol),5);
    bufp->fullWData(oldp+277,(vlSelf->data_row1_in),224);
    bufp->fullWData(oldp+284,(vlSelf->data_row2_in),224);
    bufp->fullWData(oldp+291,(vlSelf->data_row3_in),224);
    bufp->fullWData(oldp+298,(vlSelf->weight_row1_in),224);
    bufp->fullWData(oldp+305,(vlSelf->weight_row2_in),224);
    bufp->fullWData(oldp+312,(vlSelf->weight_row3_in),224);
    bufp->fullIData(oldp+319,(vlSelf->bias_in),32);
    bufp->fullWData(oldp+320,(vlSelf->conv_out),104);
    bufp->fullBit(oldp+324,(vlSelf->conv_done));
    bufp->fullIData(oldp+325,(vlSelf->fc_out),32);
    bufp->fullBit(oldp+326,(vlSelf->fc_done));
    bufp->fullBit(oldp+327,(vlSelf->fc_line_done));
    bufp->fullCData(oldp+328,(0U),2);
    bufp->fullCData(oldp+329,(1U),2);
    bufp->fullCData(oldp+330,(2U),2);
    bufp->fullCData(oldp+331,(3U),2);
}
