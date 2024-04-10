/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off UNDRIVEN */

`timescale 1ns / 1ps

//import parameters::*;
`include "parameters.sv"


module accumulate(
    input logic clk, rst, en,
    input logic [2:0] flag,
    input logic [4:0] fc_wcol,
    input enum {CONV = 0, FC = 1} layer,
    input logic [`DATA_WIDTH*2+1:0] psum [`WEIGHT_SIZE-1:0],
    input logic [`BIAS_WIDTH-1:0] bias,
    output logic [`BIAS_WIDTH-1:0] sum,
    output logic done
);

    logic [`BIAS_WIDTH-1:0] tsum;
    logic [4:0] counter;

//    enum [1:0] {IDLE = 2'd0, ADDS = 2'd1, ADDB = 2'd2} state;

    
//    always @(posedge clk) begin
//        if(rst) state <= IDLE;
//        else begin
//        case (state) 
//            IDLE: begin
////                if(en == 1) state <= ADDS;
//                state <= ADDS;
//            end
//            ADDS: begin
//            case(layer)
//                CONV: state <= ADDB;
//                FC: if(flag != 3'b111) state <= ADDB;
//                default: state <= ADDS;
//            endcase
//            end
//            ADDB: begin
//                if(layer == FC) state <= IDLE;
//            end
//            default: state <= IDLE;
//        endcase  
//        end  
//    end
    
    always @(posedge clk) begin
        if (rst) tsum <= '{default: '0};
//        else if(state == ADDS && flag == 3'b111) begin
            if (layer == CONV) begin
                tsum <= {14'b0,psum[0]} + {14'b0,psum[1]} + {14'b0,psum[2]};
            end
            else begin
                tsum <= tsum + {14'b0,psum[0]} + {14'b0,psum[1]} + {14'b0,psum[2]};
            end
//        end
    end
    
    always @(posedge clk) begin
        if(rst) counter <= '{default: '0};
        else if(en) counter <= counter + 1;
    end
    
    always @(posedge clk) begin
        if(layer == CONV) sum <= tsum + bias;
        else if(counter == fc_wcol) sum <= tsum + bias;
        else sum <= tsum;
    end
    
//    always @(posedge clk) begin
//        if(rst) done <= 0;
//        else if(state == ADDB) done <= 1;
//        else done <= 0;
//    end

endmodule

/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off UNDRIVEN */
