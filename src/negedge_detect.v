module negedge_detect (
  input clk,
  input signal,
  output reg neg_edge
);

  reg signalPrev;

  always @(posedge clk) begin
    signalPrev <= signal;
    neg_edge   <= (!signal && signalPrev);
  end

endmodule
