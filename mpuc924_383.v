
module MPUC924_383 ( CLK,DS ,ED, MPYJ,C383,DR,DI ,DOR ,DOI  );
	parameter total_bits = 32;
	input CLK ;
	wire CLK ;
	input DS ;
	wire DS ;
	input ED; 					//data strobe
	input MPYJ ;				//the result is multiplied by -j
	wire MPYJ ;
	input C383 ;				//the coefficient is 0.383
	wire C383 ;
	input [total_bits-1:0] DR ;
	wire signed [total_bits-1:0] DR ;
	input [total_bits-1:0] DI ;
	wire signed [total_bits-1:0] DI ;	   
	
	output [total_bits-1:0] DOR ;
	reg [total_bits-1:0] DOR ;	
	output [total_bits-1:0] DOI ;
	reg [total_bits-1:0] DOI ;	 
	
	reg signed [total_bits+1 :0] dx7;	 
	reg signed [total_bits :0] dx3;	 
	reg signed [total_bits-1 :0] dii;	 
	reg signed	[total_bits-1 : 0] dt;		   
	wire signed [total_bits+1 : 0]  dx5p; 
	wire  signed  [total_bits+1 : 0] dot;	
	reg edd,edd2, edd3;        		//delayed data enable impulse        
	reg mpyjd,mpyjd2,mpyjd3,c3d,c3d2,c3d3;
	reg [total_bits-1:0] doo ;	
	reg [total_bits-1:0] droo ;	
	
	always @(posedge CLK)
		begin
			if (ED) begin	  
					edd<=DS;
					edd2<=edd;	
					edd3<=edd2;	
					mpyjd<=MPYJ;
					mpyjd2<=mpyjd;
					mpyjd3<=mpyjd2;		
					c3d<=C383;
					c3d2<=c3d;
					c3d3<=c3d2;
					if (DS)	 begin				   		//	 1_00T0_1100_1000_0011	
							dx7<=(DR<<2) - (DR >>>1);	 //multiply by 7 
							dx3<=DR+(DR >>>1);	 //multiply by 3, 
							dt<=DR;	  
							dii<=DI;
						end
					else	 begin
							dx7<=(dii<<2) - (dii >>>1);	 //multiply by 7
							dx3<=dii +(dii >>>1);	 //multiply by  3 
							dt<=dii;
					end	  
					if (c3d || c3d2)  	doo<=dot >>>2;	
					else			doo<=dot >>>2;		 
						
					droo<=doo;	
					if (edd3) 	 
						if (mpyjd3) begin
								DOR<=doo;
							DOI<= - droo; end
						else begin
								DOR<=droo;
							DOI<=  doo; end					
				end 
		end		
		
	assign dx5p=	(c3d || c3d2)? ((dt>>>5)+dx3)  : ( dx7+(dx3>>>3));		// multiply by  0_0110_001	
                     	//or  multiply by  1_00T0_11
	
	
	assign   dot=	(c3d || c3d2)? dx5p-(dt>>>11) :(dx5p+((dt>>>7) +(dx3>>>13)));// by 	0_0110_0010_0000_T 
	            //or  multiply by 	1_00T0_1100_1000_0011
 	
	
	
	
endmodule
