/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off UNDRIVEN */

`timescale 1ns / 1ps

//import parameters::*;
`include "parameters.sv"

module pe (
    input logic clk, rst, en,
    input enum {CONV = 0, FC = 1} layer,
    input logic [`DATA_WIDTH-1:0] data_in [`INPUT_SIZE-1:0],
    input logic [`DATA_WIDTH-1:0] weight_in [`INPUT_SIZE-1:0],
//    output logic [`DATA_WIDTH*2+1:0] psum [`INPUT_SIZE-3:0],
    output logic [`DATA_WIDTH*2+1:0] psum,
    output logic flag_comp, done
);

    logic [`DATA_WIDTH-1:0] data_row [`INPUT_SIZE-1:0];
    logic [`DATA_WIDTH-1:0] weight_row [`INPUT_SIZE-1:0];
    logic [`DATA_WIDTH-1:0] data [`WEIGHT_SIZE-1:0];
    logic [`DATA_WIDTH-1:0] weight [`WEIGHT_SIZE-1:0];
    logic [`DATA_WIDTH*2+1:0] res;
//    logic [`DATA_WIDTH*2+1:0] psum [`INPUT_SIZE-3:0];
    logic flag_en;

    logic [4:0] counter;

    enum [1:0] {IDLE = 2'd0, INPT = 2'd1, COMP = 2'd2, OUPT = 2'd3} state, next_state;

//    logic flag;

    always @(posedge clk) begin
        if(rst) flag_en <= 0;
        else if(en) flag_en <= 1;
        else if(done) flag_en <= 0;
    end
    
    // switch state
    always @(posedge clk) begin
        if(rst) state <= IDLE;
        else state <= next_state;
    end
    
    always @(posedge clk) begin
        if(rst) next_state <= IDLE;
        else begin
        case (state) 
            IDLE: begin
                if(en) next_state <= INPT;
                else if(next_state == INPT) next_state <= COMP;
                else next_state <= IDLE;
            end
            INPT: begin
                if(flag_en) next_state <= COMP;
                else next_state <= INPT;
            end
            COMP: begin
                if(layer == CONV) begin
                    if(counter == `INPUT_SIZE-3) next_state <= OUPT;
                    else if(counter > `INPUT_SIZE-3) next_state <= IDLE;
                    else next_state <= COMP;
                end
                else begin
                    if(counter == `INPUT_SIZE-1) next_state <= OUPT;
                    else if(counter > `INPUT_SIZE-1) next_state <= IDLE;
                    else next_state <= COMP;
                end
            end
            OUPT: next_state <= IDLE;
            default: next_state <= IDLE;
        endcase
        end
    end

    // INPT state
    always @(posedge clk) begin
        if(rst) begin
            data_row <= '{default: '0};
            weight_row  <= '{default: '0};
        end
        else if(next_state == INPT) begin
            data_row <= data_in;
            weight_row <= weight_in;
        end
    end
    
    // COMP state
    always @(posedge clk) begin
        if(rst||en) counter <= '{default: '0};
        else if(next_state == COMP && flag_en) begin
            if(layer == CONV) counter <= counter + 1;
            else counter <= counter + 3;
        end
    end
    
    always @(posedge clk) begin
        if(rst) data <= '{default: '0};
        else data <= {data_row[counter+2], data_row[counter+1], data_row[counter]};
    end
    
    always @(posedge clk) begin
        if(rst) weight <= '{default: '0};
        else if (layer == CONV) weight <= weight_row[`WEIGHT_SIZE-1:0];
        else weight <= {weight_row[counter+2], weight_row[counter+1], weight_row[counter]};
    end
    
    always @(posedge clk) begin
        if(rst) psum <= '{default: '0};
        else if(counter > 0) psum <= res;
    end
    
    vector_mult vmult_0 (
                            .a(weight),
                            .b(data),
                            .psum(res)
                        );
    
    always @(posedge clk) begin
        if(state == COMP) flag_comp <= 1;
        else flag_comp <= 0;
    end
    
    // OUPT state
    always @(posedge clk) begin
        if(rst) done <= 0;
        else if(next_state == OUPT) done <= 1;
        else done <= 0;    
    end
    
//    always @(posedge clk) begin
//        psum_out <= psum[counter-1];
//    end

endmodule

/* verilator lint_off UNUSEDSIGNAL */
/* verilator lint_off UNDRIVEN */
