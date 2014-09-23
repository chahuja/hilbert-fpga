`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////

module fft32_TB;

parameter total_bits = 32;
	reg  ED;
	reg  RST;
	reg  CLK;
	reg  START;
	reg  ifft;
	wire  [total_bits-1:0] DImag;
	wire  [total_bits-1:0] DReal;
	wire signed [total_bits-1:0] DOImag;
	wire signed [total_bits-1:0] DOReal;
	wire RDY;
	
	reg [5:0] count;
	
	initial 
		begin
			CLK = 1'b0;
			forever #5 CLK = ~CLK;
		end		  
		
	initial 
		begin	
		   ifft = 1'b0;
			ED = 1'b1;
			RST = 1'b0;
			count = 0;
			START = 1'b0;
			#13 RST =1'b1;
			#43 RST =1'b0;
			#53 START =1'b1;
			#12 START =1'b0;
		end	
	
	reg [4:0] ct16;
	always @(posedge CLK or posedge START)  
		if (ED)	begin
			if (START) ct16 = 7'b000_0000;
			else ct16 = ct16+ 'd1;
		end	  
	
	wire [total_bits-1:0] D_R,D_I;	
	READ_ROM32 UG( .ADDR(ct16) ,
		.DATA_RE(D_R), .DATA_IM(D_I));
		
	assign DImag  = D_I;
	assign DReal  = D_R;
	
	hilbert UUT(
	.ED(ED),
	.RST(RST),
	.CLK(CLK),
	.START(START),
	.DImag(DImag),
	.DReal(DReal),
	.DOImag(DOImag),
	.DOReal(DOReal),
	.RDY(RDY));
	

	always @(posedge RDY)
		count <= 33;
		
	always @(posedge CLK)
	begin
		if(count!=0)
		begin
			if(count<=32)
			$display("%d,%d",DOReal,DOImag);
			count = count-1;
		end
	end
	
endmodule
