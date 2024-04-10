`timescale 1ns / 1ps

//import parameters::*;
`include "parameters.sv"

module top (
    input logic clk_i, rst,
    input enum {CONV = 0, FC = 1} layer,
    input logic [`BIAS_WIDTH-1:0] din,
    output logic [`DATA_WIDTH-1:0] dout,
    output logic done
);

    logic clk;
    assign clk = clk_i;

    element_wise ewise_0 (.*);

endmodule

