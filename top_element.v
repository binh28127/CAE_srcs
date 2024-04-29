`timescale 1ns / 1ps

`include "parameters.v"
module top (
    input  clk_i, 
    input  rst,
    //input  layer,
    input  enable,
    input  [`BIAS_WIDTH-1:0] din,
    output reg [12:0][`DATA_WIDTH-1:0] dout,
    output reg done
);
    element_wise pe_o (
        .clk(clk_i),
        .*
    );

endmodule

