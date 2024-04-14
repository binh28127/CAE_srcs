module posedge_detect (
  input clk,
  input signal,
  output reg pos_edge
);

  reg signalPrev;

  always @(posedge clk) begin
    signalPrev <= signal;
    pos_edge       <= (signal && !signalPrev);
  end

endmodule
