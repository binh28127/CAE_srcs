`timescale 1ns / 1ps

`include "parameters.v"
module top (
    input clk_i, 
    input rst, 
    input enable,
    input layer,
    input [`INPUT_SIZE-1:0][`DATA_WIDTH-1:0] data_row1_in,
    input [`INPUT_SIZE-1:0][`DATA_WIDTH-1:0] data_row2_in,
    input [`INPUT_SIZE-1:0][`DATA_WIDTH-1:0] data_row3_in,
    input [`INPUT_SIZE-1:0][`DATA_WIDTH-1:0] weight_row1_in,
    input [`INPUT_SIZE-1:0][`DATA_WIDTH-1:0] weight_row2_in,
    input [`INPUT_SIZE-1:0][`DATA_WIDTH-1:0] weight_row3_in,
    input [`BIAS_WIDTH-1:0] bias_in,
    output [`BIAS_WIDTH-1:0] sum,
    output conv_comp,
    output fc_done,
    output fc_line_done
);
    CAE_top cae_0 (
        .clk(clk_i),
        .*
    );

endmodule

