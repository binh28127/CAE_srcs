/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off UNDRIVEN */

`timescale 1ns / 1ps

//import parameters::*;
`include "parameters.sv"

module CAE_top(
    input logic clk,
    input logic rst, en,
    input enum {CONV = 0, FC = 1} layer,
    input logic [`DATA_WIDTH-1:0] data_in [2:0][`INPUT_SIZE-1:0],
    input logic [`DATA_WIDTH-1:0] weight_in [`INPUT_SIZE-1:0],
    input logic [`BIAS_WIDTH-1:0] bias_in,
    output logic [`DATA_WIDTH-1:0] data_out [`WEIGHT_SIZE-1:0]
);

//    logic rst, en;
//    logic [`DATA_WIDTH-1:0] data_in [`INPUT_SIZE-1:0];
//    logic [`DATA_WIDTH-1:0] weight_in [`WEIGHT_SIZE-1:0];
//    logic [`DATA_WIDTH*2+1:0] psum_0 [`INPUT_SIZE-3:0];
    logic [2:0] flag_pe;
    logic [2:0] done_pe;
    logic done_acc;

    logic [`DATA_WIDTH*2+1:0] inter_buffer_0 [2:0];
    
    // PE array
    pe pe_0 (
                .clk(clk), .rst(rst), .en(en), .layer(layer),
                .data_in(data_in[0]), .weight_in(weight_in),
//                .psum(inter_buffer_0[(`INPUT_SIZE-2)-1:0]), 
                .psum(inter_buffer_0[0]),
                .flag_comp(flag_pe[0]), .done(done_pe[0])
    );
    
    pe pe_1 (
                .clk(clk), .rst(rst), .en(en), .layer(layer),
                .data_in(data_in[1]), .weight_in(weight_in),
//                .psum(inter_buffer_0[(`INPUT_SIZE-2)*2-1:(`INPUT_SIZE-2)]), 
                .psum(inter_buffer_0[1]),
                .flag_comp(flag_pe[1]), .done(done_pe[1])
    );
    
    pe pe_2 (
                .clk(clk), .rst(rst), .en(en), .layer(layer),
                .data_in(data_in[2]), .weight_in(weight_in),
//                .psum(inter_buffer_0[(`INPUT_SIZE-2)*3-1:(`INPUT_SIZE-2)*2]), 
                .psum(inter_buffer_0[2]),
                .flag_comp(flag_pe[2]), .done(done_pe[2])
    );
    
    // ACCUMULATE UNIT
    logic [`BIAS_WIDTH-1:0] inter_buffer_1;
    logic [`DATA_WIDTH*2+1:0] psum [2:0];
//    logic [4:0] counter_accr;
    logic [4:0] counter_accw;
    logic en_acc;
    logic [4:0] fc_wcol;
    
//    always @(posedge clk) begin
//        if(rst || en || counter_accr == `INPUT_SIZE-2) counter_accr <= '{default: '0};
//        else if(counter_accr == 3'd0 && flag_pe == 3'b111) counter_accr <= 1;
//        else if(flag_pe == 3'b111) counter_accr <= counter_accr + 1;
//    end
    
    always @(posedge clk) begin
        if(done_pe == 3'b111 || en_acc) counter_accw <= counter_accw + 1;
        else counter_accw <= '{default: '0};
    end
    
    always @(posedge clk) begin
        if(flag_pe == 3'b111) begin
            psum[0] <= inter_buffer_0[0];
            psum[1] <= inter_buffer_0[1];
            psum[2] <= inter_buffer_0[2];
        end
        else begin
            psum <= '{default: '0};
        end
    end
    
    always @(posedge clk) begin
        if(rst) en_acc <= 0;
        else if (layer == CONV) begin
            if(flag_pe == 3'b111 || (counter_accw > 0 && counter_accw < `INPUT_SIZE-2)) en_acc <= 1;
            else if(counter_accw >= `INPUT_SIZE-2) en_acc <= 0;
        end
        else begin
            if(flag_pe == 3'b111 || (counter_accw > 0 && counter_accw < `INPUT_SIZE/2-4)) en_acc <= 1;
            else if(counter_accw >= `INPUT_SIZE/2-4) en_acc <= 0;
        end
    end
    
    always @(posedge clk) begin
        if(rst) fc_wcol <= '{default: '0};
        else if(`WEIGHT_COL_FC > `INPUT_SIZE) fc_wcol <= `INPUT_SIZE - `WEIGHT_COL_FC; // ????????????????????
    end
    
    accumulate acc_0 (
                            .clk(clk), .rst(rst), .en(en_acc), .fc_wcol(fc_wcol),
                            .flag(flag_pe), .layer(layer),
                            .psum(psum), .bias(bias_in),
                            .sum(inter_buffer_1), .done(done_acc)
    );
    
    // ELEMENT_WISE UNIT
    logic [`DATA_WIDTH-1:0] current_max;
    logic [1:0] mcount;
    logic rst_ews, done_ews;
    
    always @(posedge clk) begin
        if(rst_ews || mcount == 2'b11) mcount <= 0;
        else if(layer == CONV && done_ews) mcount <= mcount + 1;
    end
    
    always @(posedge clk) begin
        if(counter_accw[0] == 1) rst_ews <= 1;
        else rst_ews <= 0;
    end
    
    element_wise ewise_0 (
                            .clk(clk), .rst(rst_ews), .layer(layer),
                            .din(inter_buffer_1),
                            .dout(current_max), .done(done_ews)
    );
    
    always @(posedge clk) begin
        if(layer == CONV && done_ews) data_out[mcount] <= current_max;
        else if(layer == FC) data_out[mcount] <= current_max;
    end

endmodule

/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off UNDRIVEN */
