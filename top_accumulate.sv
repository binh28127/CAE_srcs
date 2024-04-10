`timescale 1ns / 1ps

//import parameters::*;
`include "parameters.sv"

module top (
    input logic clk_i, rst, en,
    input logic [2:0] flag,
    input enum {CONV = 0, FC = 1} layer,
    input logic [`DATA_WIDTH*2+1:0] psum [2:0],
    input logic [`BIAS_WIDTH-1:0] bias,
    output logic [`BIAS_WIDTH-1:0] sum,
    output logic done
);

    logic clk;
    assign clk = clk_i;

    accumulate acc_0 (.*);

endmodule

