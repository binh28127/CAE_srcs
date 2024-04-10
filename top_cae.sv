`timescale 1ns / 1ps

//import parameters::*;
`include "parameters.sv"

module top (
    input logic clk_i,
    input logic rst, en,
    input enum {CONV = 0, FC = 1} layer,
    input logic [`DATA_WIDTH-1:0] data_in [2:0][`INPUT_SIZE-1:0],
    input logic [`DATA_WIDTH-1:0] weight_in [`INPUT_SIZE-1:0],
    input logic [`BIAS_WIDTH-1:0] bias_in,
    output logic [`DATA_WIDTH-1:0] data_out [`WEIGHT_SIZE-1:0]
);

    logic clk;
    assign clk = clk_i;

    CAE_top cae_0 (.*);

endmodule

