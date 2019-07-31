# 8 Segment Display - Guess the Number Game
This project include a guess the number game with 10 chances.
The player would be allowed to input his guess via SERIAL PORT window using Arduino Software.
At the end of the game the score will be displayed.

# Things Required
1. 8 Segment Display
2. 220 Ohm Resistor
3. 9 Male to Male Connector Wire
4. Arduino Board
5. Breadboard
6. A Short Wire
7. Laptop with Arduino Installed in it.

# Circuit Diagram

# How to Play
Connect the wiring according to the circuit diagram,
Upload the code given in this repo
After Succesful Upload, Open the SERIAL PORT and you'll will be requested to enter a number.
Since to make it quick you need to enter number quickly and output will be shown on 
Serial Port display as well as the 8 Segment Display on your Breadboard.

# What modification you can do?
Try to modify random (0,10) to randomSeed(analogRead(A0)) {Check Documentation}
Make repetitive loop untill you find the correct answer
Feel free to either fork it or add a PR.
