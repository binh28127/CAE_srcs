/* verilator lint_off UNUSED*/
/* verilator lint_off UNDRIVEN */

`timescale 1ns / 1ps

`include "parameters.v"

module element_wise(
    input  clk,
    input  rst,
    //input  layer,
    input  enable,
    input  [`BIAS_WIDTH-1:0] din,
    output reg [12:0][`DATA_WIDTH-1:0] dout,
    output reg done
);

    localparam IDLE = 2'd0;
    localparam FIRST_ROW = 2'd1;
    localparam SECOND_ROW = 2'd2;
    localparam DONE = 2'd3;

    reg [`DATA_WIDTH-1:0] qdata;
    reg [`DATA_WIDTH-1:0] redata;
    reg [`DATA_WIDTH-1:0] mdata [12:0];
    reg [`DATA_WIDTH-1:0] redata_buffer;
    reg [1:0] state;
    reg [4:0] counter;
    wire [3:0] counter_shifted = counter[4:1];
    reg row_counter;

    quantization quant_0 (
        .din(din),
        .dout(qdata)
    );
    
    activation act_0 (
        .din(qdata),
        .dout(redata)
    );

    always @(posedge clk or posedge rst) begin
        if(rst)begin
            state <= IDLE;
            done <= 0;
            counter <= 0;
            row_counter <= 0;
            mdata [0] <= 0;
            mdata [1] <= 0;
            mdata [2] <= 0;
            mdata [3] <= 0;
            mdata [4] <= 0;
            mdata [5] <= 0;
            mdata [6] <= 0;
            mdata [7] <= 0;
            mdata [8] <= 0;
            mdata [9] <= 0;
            mdata [10] <= 0;
            mdata [11] <= 0;
            mdata [12] <= 0;
            dout[0] <= 0;
            dout[1] <= 0;
            dout[2] <= 0;
            dout[3] <= 0;
            dout[4] <= 0;
            dout[5] <= 0;
            dout[6] <= 0;
            dout[7] <= 0;
            dout[8] <= 0;
            dout[9] <= 0;
            dout[10] <=  0;
            dout[11] <=  0;
            dout[12] <=  0;
        end begin
            redata_buffer <= redata;
            case (state)
                IDLE: begin
                    if(enable) begin
                        if(row_counter) state <= SECOND_ROW;
                        else state <= FIRST_ROW; 
                    end
                end
                FIRST_ROW: begin
                    if(redata_buffer > mdata[counter_shifted]) begin
                        mdata[counter_shifted] <= redata_buffer;
                    end
                    counter <= counter + 1;
                    
                    if(counter >= 25) begin
                        state <= IDLE;
                        row_counter <= 1;
                        counter <= 0;
                    end
                end
                SECOND_ROW: begin
                    if(redata_buffer > mdata[counter_shifted]) begin
                        mdata[counter_shifted] <= redata_buffer;
                    end
                    counter <= counter + 1;
                    if(counter >= 25) state <= DONE;
                end
                DONE: begin
                    dout[0] <=  mdata[0];
                    dout[1] <=  mdata[1];
                    dout[2] <=  mdata[2];
                    dout[3] <=  mdata[3];
                    dout[4] <=  mdata[4];
                    dout[5] <=  mdata[5];
                    dout[6] <=  mdata[6];
                    dout[7] <=  mdata[7];
                    dout[8] <=  mdata[8];
                    dout[9] <=  mdata[9];
                    dout[10] <=  mdata[10];
                    dout[11] <=  mdata[11];
                    dout[12] <=  mdata[12];
                    done <= 1;
                end
                default: state <= IDLE;
            endcase
        end
    end


endmodule
/* verilator lint_off UNUSED*/
/* verilator lint_off UNDRIVEN */
