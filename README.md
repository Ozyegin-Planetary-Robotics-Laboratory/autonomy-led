Use NMOS For LED Control
IRFZ44 is suitable for Arduinos at 5V logic but Jetson cannot turn them on.
Connect Gate pin of the mosfet to a digital pin, connect drain pin of the nmos to the light's color pin, connect source pin to ground and connect the common anode of the led to 12V and 12V only.
CS people DONT CONNECT IT REVERSE 
