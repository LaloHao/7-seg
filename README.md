7-seg
=====

An ANSI C console program that generates combinational Wincupl code for handling 7 segment displays.
----------------------------------------------------------------------------------------------------
Toggle your LCD segments and create any combination you like.

 z : exit
 h : displays help 
 x : change current display
 t : show table (wincupl code)
 i : modify index
 k : toggle between common anode/cathode


Usage:
Before you do anything it is advised you switch your display to Common Anode or Cathode.
To do this type 'k' then enter
This will toggle between anode and cathode.
7-seg(Common Cathode)






7-seg(Common Anode)
 ___   ___   ___   ___   ___   ___   ___  
|   | |   | |   | |   | |   | |   | |   | 
|___| |___| |___| |___| |___| |___| |___| 
|   | |   | |   | |   | |   | |   | |   | 
|___| |___| |___| |___| |___| |___| |___| 

Then you can start toggling your segments by sending letters from 'a' to 'g'
  0
       ___   ___   ___   ___   ___   ___  
|     |   | |   | |   | |   | |   | |   | 
|     |___| |___| |___| |___| |___| |___| 
|     |   | |   | |   | |   | |   | |   | 
|___  |___| |___| |___| |___| |___| |___| 
By now you probably noticed there is a 0 above our first combination. This number shows the
display that is currently being modified.
Type 'x' to switch between displays, this allow you to modify them all.
        1
       ___         ___         ___   ___  
|     |   | |     |   | |   | |   | |   | 
|     |___| |     |   | |___| |___| |   | 
|     |   | |     |   | |   | |   | |   | 
|___  |   | |___  |___| |   | |   | |___| 
Now you can type 't' and get your code as a response:
'd'0 => 'b'1110001;
'd'1 => 'b'0001000;
'd'2 => 'b'1110001;
'd'3 => 'b'0000001;
'd'4 => 'b'1001000;
'd'5 => 'b'0001000;
'd'6 => 'b'0000001;
