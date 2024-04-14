`timescale 1ns / 1ps

`include "parameters.v"

module CAE_top (
    input clk, 
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

    wire [`DATA_WIDTH*2+1:0] inter_buffer_0 [2:0];
    wire [2:0] pe_comp;
    wire en_accumulate = &pe_comp;

    pe pe_0 (
        .clk(clk), 
        .rst(rst),
        .enable(enable),
        .layer(layer),
        .data_in(data_row1_in),
        .weight_in(weight_row1_in),
        .psum(inter_buffer_0[0]),
        .flag_comp(pe_comp[0])
    );
    pe pe_1 (
        .clk(clk), 
        .rst(rst),
        .enable(enable),
        .layer(layer),
        .data_in(data_row2_in),
        .weight_in(weight_row2_in),
        .psum(inter_buffer_0[1]),
        .flag_comp(pe_comp[1])
    );
    pe pe_2 (
        .clk(clk), 
        .rst(rst),
        .enable(enable),
        .layer(layer),
        .data_in(data_row3_in),
        .weight_in(weight_row3_in),
        .psum(inter_buffer_0[2]),
        .flag_comp(pe_comp[2])
    );

    accumulate acc_0 (
        .clk(clk), 
        .rst(rst), 
        .enable(en_accumulate),
        .layer(layer),
        .psum({inter_buffer_0[2], inter_buffer_0[1], inter_buffer_0[0]}),
        .bias(bias_in),
        .sum(sum),
        .conv_comp(conv_comp),
        .fc_done(fc_done),
        .fc_line_done(fc_line_done)
    );

endmodule

