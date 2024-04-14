`timescale 1ns / 1ps
`include "parameters.v"

module accumulate(
    input clk, 
    input rst, 
    input enable,
    input layer,
    input [`WEIGHT_SIZE-1:0][`DATA_WIDTH*2+1:0] psum,
    input [`BIAS_WIDTH-1:0] bias,
    input [`FC_WCOL_WIDTH-1:0] fc_wcol,
    output reg [`BIAS_WIDTH-1:0] sum,
    output reg conv_comp,
    output reg fc_done,
    output wire fc_line_done
);
 
    reg [`BIAS_WIDTH-1:0] tsum;
    reg [`DATA_WIDTH*2+1:0] psum_buffer [`WEIGHT_SIZE-1:0];
    reg [4:0] counter;
    reg fc_comp;
    wire pos_enable, neg_fc_comp;
    reg [1:0] state;

    localparam IDLE = 2'd0;
    localparam CONV = 2'd1;
    localparam FC   = 2'd2;
    localparam DONE = 2'd3;
    
    always @(*) begin
        sum = tsum;
    end
    assign fc_line_done = neg_fc_comp;
    
    always @(posedge clk) begin
        {psum_buffer[2], psum_buffer[1], psum_buffer[0]} <= {psum[2], psum[1], psum[0]};
        if(layer) fc_comp <= enable;
        if (rst) begin
            state <= IDLE;
            counter <= 0;
            conv_comp <= 0;
            fc_done <= 0;
            tsum <= 0;
        end else begin
            case (state)
                IDLE: begin
                    if(enable) begin
                        conv_comp <= 0;
                        counter <= 0;
                        fc_done <= 0;
                        tsum <= 0;
                        if(layer) begin
                            state <= FC;
                        end
                        else state <= CONV;
                    end
                end
                CONV: begin
                    tsum <= {14'b0,psum_buffer[0]} + {14'b0,psum_buffer[1]} + {14'b0,psum_buffer[2]} + bias;
                    conv_comp <= 1;
                    if(!enable) state <= DONE;
                end
                FC: begin
                    if (fc_comp) begin
                        if(counter <= fc_wcol) begin
                            tsum <= tsum + {14'b0,psum_buffer[0]} + {14'b0,psum_buffer[1]} + {14'b0,psum_buffer[2]};
                            if(pos_enable && (counter == 0)) tsum <= tsum + {14'b0,psum_buffer[0]} + {14'b0,psum_buffer[1]} + {14'b0,psum_buffer[2]} + bias;
                        end                     
                    end
                    if(neg_fc_comp && counter == fc_wcol) state <= DONE;
                end
                DONE: begin
                    conv_comp <= 0;
                    if(layer) fc_done <= 1;
                    else state <= IDLE;
                    
                end
                default: state <= IDLE;
            endcase
        end
    end

    always @(posedge clk) begin
        if(rst) begin
            counter <= 0;
        end else begin
            if(pos_enable) counter <= counter + 1;
        end
    end
    
    posedge_detect posedge_detect_enable (
        .clk(clk),
        .signal(enable),
        .pos_edge(pos_enable)
    );

    negedge_detect negedge_detect (
        .clk(clk),
        .signal(fc_comp),
        .neg_edge(neg_fc_comp)
    );


endmodule
