`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////

module hilbert(CLK,RST,ED,START,DReal,DImag,RDY,DOReal,DOImag);
parameter total_bits = 32;
input  CLK;
input  RST;
input  ED;
input  START;
input  [total_bits-1:0] DReal;
input  [total_bits-1:0] DImag;
output reg RDY;
output reg signed [total_bits-1:0] DOReal;
output reg signed [total_bits-1:0] DOImag;

wire rdy1;
wire signed [total_bits-1:0] dr1,di1;

wire start1;
reg startReg;
wire [total_bits-1:0] inr1,ini1;
reg signed [total_bits-1:0] RE,IM;
assign inr1   = (state==0)?DReal:RE;
assign ini1   = (state==0)?DImag:IM;
assign start1 = (state==0)?START:startReg;
reg signed [total_bits-1:0] dataREstage1[0:31];
reg signed [total_bits-1:0] dataIMstage1[0:31];

fft32 #(total_bits) FF(.CLK(CLK),.RST(RST),.ED(ED),.START(start1),.DReal(inr1),.DImag(ini1),.RDY(rdy1),.DOReal(dr1),.DOImag(di1),.ifft(1'b0));
reg [5:0] count;
reg [2:0] state;
reg flag;

initial begin
	state<=0;
	count<=0;
	flag<=0;
	startReg<=0;
	dataREstage1[0]<=0;
   dataIMstage1[0]<=0;
	dataREstage1[16]<=0;
   dataIMstage1[16]<=0;
end

always@(posedge CLK) begin
	if(RST) begin
		count<=32;
		state<=0;
	end
	else if(START) begin
		count<=0;
		state<=0;
	end
	else if(ED)begin
	RDY<=0;startReg<=0;
		if(rdy1)begin
			if(state==0)begin
				state<=1;
				count<=1;
			end
			if(state==2)begin
				state<=3;
				count<=1;
			end
		end
		if(state==1)begin
			if(count>=1&&count<=15)begin
				dataREstage1[count]<=di1;
				dataIMstage1[count]<=-1*dr1;
			end
			else if(count>=17&&count<=31)begin
				dataREstage1[count]<=-1*di1;
				dataIMstage1[count]<=dr1;
			end
			if(count<32)
				count<=count+1;
			//if(count<32)
				//$display("count:%d %d+i%d",count-1,dataREstage1[count-1],dataIMstage1[count-1]);
			if(count==31)
				flag<=1;
			if(count==32&&flag==1)begin
				startReg<=1;state=2;flag<=0;count<=0;end
		end
		if(state==2)begin
			RE<=dataREstage1[count];
			IM<=dataIMstage1[count];
			if(count<32)
				count<=count+1;
		end
		if(state==3)begin
			dataREstage1[32-count]<=(dr1>>>5);
			dataIMstage1[32-count]<=(di1>>>5);
			if(count<32)
				count<=count+1;
			if(count==31) begin
				state<=4; count<=0;RDY<=1;end
			//if(count<32)
				//$display("count:%d %d+i%d",count-1,dataREstage1[count-1],dataIMstage1[count-1]);
		end
		else if(state==2&&rdy1) begin
			dataREstage1[0]<=(dr1>>>5);
			dataIMstage1[0]<=(di1>>>5);
		end
		if(state==4) begin
			//$display("count:%d ")
			DOReal<=dataREstage1[count];
			DOImag<=dataIMstage1[count];
			if(count<32)
				count<=count+1;
		end

	end
end



endmodule
