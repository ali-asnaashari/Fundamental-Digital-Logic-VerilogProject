`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:46:46 07/05/2019 
// Design Name: 
// Module Name:    greater 
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
module greater(Number1, Number2, printout, balancebit, conclusion);
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
	reg [4:0] tempppppp;
	
	always@(Number1 or Number2 or printout)
	begin  
		if( printout == 6'b100000 )
		begin
			if( Number1 >= Number2 )
			begin 
				tempppppp = Number1;
			end
			else if( Number1 < Number2 )
			begin 
				tempppppp = Number2;
			end
			
			for ( k = 0 ; k < 5 ; k = k + 1 ) 
				begin
					if ( tempppppp[k] == 1 ) begin
				
						i = i + 1;
					end//end if
				
				end//end for 
				
			if ( i % 2 == 0 ) 
				begin
				
					balancebit =1'b1;
					
				end//end if
				
			else 
				begin
					
					balancebit =1'b0;
					
				end//end else
				
			// Sign Extend	
			conclusion = {{27{tempppppp[4]}},tempppppp[4:0]};
			
		end//end if
	
	
		
	end//end always
	


endmodule
