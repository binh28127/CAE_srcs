/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off UNDRIVEN */

`timescale 1ns / 1ps

//import parameters::*;
`include "parameters.sv"

module pe (
    input clk, rst, en,
    input [`INPUT_SIZE-1:0] [`DATA_WIDTH-1:0] data_in,
    input [`WEIGHT_SIZE-1:0] [`DATA_WIDTH-1:0] weight_in,
    input [`INPUT_SIZE-3:0] [`DATA_WIDTH*2-1:0] psum_in,
    output reg [`INPUT_SIZE-3:0] [`DATA_WIDTH*2-1:0] psum_out,
    output reg done
);

    reg [`INPUT_SIZE-1:0] [`DATA_WIDTH-1:0] data_row;
    reg [`WEIGHT_SIZE-1:0] [`DATA_WIDTH-1:0] weight_row;
    reg [`INPUT_SIZE-3:0] [`DATA_WIDTH*2-1:0] psum;
    reg [`WEIGHT_SIZE-1:0] [`DATA_WIDTH-1:0] data;
    reg [`DATA_WIDTH*2-1:0] res;

    reg [1:0] state;
    reg [1:0] next_state;
    reg [2:0] counter;

    parameter [1:0] IDLE = 2'd0, INPT = 2'd1, COMP = 2'd2, OUPT = 2'd3;

    reg flag;

    always @(posedge clk) begin
        if(rst) begin
            flag <= 0;
            counter <= 3'd0;
            done <= 0;
        end
        else if(en) begin
            flag <= 1;
        end
        else if(done) flag <= 0;
    end
    
    // switch state
    always @(posedge clk) begin
        if(rst) begin
            state <= IDLE;
        end
        else begin
            state <= next_state;
        end
//        $display("Step: %t", $time);
//        $display("State: %d", state);
    end
    
//    always @(posedge clk) begin
//        case (state) 
//            IDLE: if(en) next_state <= INPT;
//            INPT: if(flag) next_state <= COMP;    
//            COMP: if(counter == INPUT_SIZE-3) next_state <= OUPT;
//            OUPT: next_state <= IDLE;
//            default: next_state <= IDLE;
//        endcase
//    end
    
    always @(posedge clk) begin
        if(rst) next_state <= IDLE;
        else begin
        case (state) 
            IDLE: if(en) next_state <= INPT;
            INPT: if(flag) next_state <= COMP;    
            COMP: if(counter == `INPUT_SIZE-3) next_state <= OUPT;
            OUPT: next_state <= IDLE;
            default: next_state <= IDLE;
        endcase  
        end  
    end
    
    // INPT state
    always @(posedge clk) begin
        if(rst) begin
            data_row <= {8'h00,8'h00,8'h00,8'h00,8'h00,8'h00,8'h00};
            weight_row  <= {8'h00,8'h00,8'h00};
        end
        else if(next_state == INPT) begin
            data_row <= data_in;
            weight_row <= weight_in;
        end
//        $display("data_in = %h", data_in);
//        $display("data_row = %h", data_row);
//        $display("weight_in = %h", weight_in);
//        $display("weight_row = %h", weight_row);
    end
    
    assign psum_out = psum;

endmodule

/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off UNDRIVEN */
