`timescale 1ns / 1ps

module maze #( parameter maze_width = 6) (

input 		          clk,
input [maze_width - 1:0]  starting_col, starting_row, 	// indicii punctului de start
input  			  maze_in, 			// ofera informatii despre punctul de coordonate [row, col]
output reg [maze_width - 1:0] row, col,	 		// selecteaza un rând si o coloana din labirint
output 		reg	  maze_oe,			// output enable (activeaza citirea din labirint la rândul si coloana date) - semnal sincron	
output 		reg	  maze_we, 			// write enable (activeaza scrierea în labirint la rândul si coloana date) - semnal sincron
output 		reg	  done    );		 	// iesirea din labirint a fost gasita; semnalul ramane activ 

`define start 0
`define verif  1
`define rotate 2
`define prev_position 3
`define mark 4
`define verif_stop 5
`define change_position 6
`define stop 7

`define up 0 
`define right 1
`define down 2
`define left 3


reg [2:0] state, state_next ; // automatul are 8 stari => variabile pe 3 biti
reg [1:0] direction; // avem 4 directii in care ne putem deplasa deci putem folosi o variabila pe 2 biti
reg [maze_width - 1 : 0] prev_row, prev_col;

reg [maze_width - 1 : 0] aux_position; // variabila de tip "pahar"  pt interschimbare 



always @ (posedge clk) begin
		if(done == 0)
		state <= state_next;

end

always@(*) begin 
	state_next = `start;
	done = 0;
	maze_oe = 0;	
	maze_we = 0;
	
	case(state)
		// directia sus si trecem in starea de verificare
	`start:
	
		begin
			maze_oe = 1;
			
			row = starting_row;
			col = starting_col;
			direction = `up;
			state_next = `verif;
			prev_row = row;
			prev_col = col;
		end
	
		// verificam celula in care suntem si trecem in stare urm corespunzatoare
	`verif:
		begin
			maze_oe = 1;
			if(maze_in == 1) begin // daca avem perete trecem in starea de rotire
				state_next = 	`rotate;	
			end
			else 
				begin
					state_next = `mark;
				end
				
		end
		
	`rotate:
		begin
			case(direction)
			`up:
				direction = `down;
			`right:
				direction = `left;
			`down:
				direction = `up;
			`left:
				direction = `right;
				
			 endcase;
			 state_next = `prev_position;
			
				
				
		
		end
		
		
		 // trecem in starea anterioara
		`prev_position:
			begin
				maze_oe = 1;
				aux_position = row;
				row = prev_row;
				prev_row = aux_position;
				
				aux_position = col;
				col = prev_col;
				prev_col = aux_position;
				
				state_next = `verif;
				
				
			end
		`mark:
			begin
				maze_we = 1;
				state_next = `verif_stop;
			
			
			end
		
		`change_position:
			begin
				maze_oe = 1;
					case(direction)
						`up: // suntem cu fata in sus deci pentru a ne deplasa la dreapta trebuie sa 
							  //schimbam coloana in matrice si vom fi cu fata spre dreapta
							begin					
								prev_col = col;
								prev_row = row;
								col = col +1;
								direction = `right;
							end
					`right:
						begin
							prev_col = col;
							prev_row = row;
							row = row + 1;
							direction = `down;
						end
					`down:
						begin
							prev_row = row;
							prev_col = col;
							col = col - 1;
							direction = `left;
							
						end
					`left:
						begin
							prev_col = col;
							prev_row = row;
							row = row - 1;
							direction = `up;
						end
						
						
						endcase
						
						
						state_next = `verif;
				
				end
			`verif_stop:
				begin
					if( row == 0 || col == 0 || row == 63 || col == 63)
					begin
						state_next = `stop;
					end
					else
					begin
						state_next = `change_position;
					end
				end
			`stop:
				begin
					done = 1;
				
				end
		
			default: ;
			
	endcase
	
		

end


endmodule
