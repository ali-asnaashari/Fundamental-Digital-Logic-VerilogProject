`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:55:18 07/05/2019 
// Design Name: 
// Module Name:    count1 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module count1(Number1, Number2, printout, balancebit, conclusion);
	//input
	input [4:0] Number1;
	input [4:0] Number2;
	input [5:0] printout;
	//output
	output reg balancebit;
	output reg [31:0] conclusion;
	//counter and variable
	integer k;
	integer i;
	//reg
	reg [9:0] tempppp;
	
	always @ (Number1 or Number2 or printout)
	begin
	
	i = 0;
	
	if ( printout == 6'b001000 ) 
		begin
	
		for (k = 0 ; k < 5 ; k = k + 1 )
			begin
	
				if ( Number1[k] == 1 )
					begin
			
						k = k + 1;
			
					end//end if
			end//end for
		
	
		for ( k = 0 ; k < 5 ; k = k + 1) 
		begin
	
			if ( Number2[k] == 1)
				begin
			
					i = i + 1;
			
				end//end if
			
			end//end for
		
		
		tempppp = i;//save i in tempppp
	
		i = 0;
	
		for ( k = 0 ; k < 4 ; k = k + 1 ) 
			begin
				if ( tempppp[k] == 1 ) 
				begin
				
					i = i + 1;
					
				end
				
			end 
				
		if ( i % 2 == 0 ) 
			begin
				
					balancebit =1'b1;
					
			end
				
		else 
			begin
					
					balancebit =1'b0;
					
			end//end else
				
			// Sign Extend
			conclusion = {{28{tempppp[3]}},tempppp[3:0]};
	
	end//end if

	end//end always
	

endmodule
