# Software-Challenge

Overview

This program is designed to take the input of the dimensions of a room and output the area of the floor, the volume of paint needed to cover the walls and the volume of the room. 

Principals

The program uses a constant of 0.0625 to calculate the volume of paint needed. It is the amount of paint needed to cover 1 square metre and was obtained from the Dulux website in the form that 1 litre of paint is needed to cover 16 square metres. The inputs from the user of the length, width and height of the room are assumed to be in metres. The room is assumed to be a cuboid in shape. The formula for the area of the floor is area = length * width. The formula for the volume of paint is volume = 2 * paint constant * height * (length + width). The volume of the room is calculated using volume = length * width * height.

Quality Checks

The program uses a loop for when the user inputs each dimension and if this input does not fit the float type or is less than 0 it is discarded, and error message displayed and the user is again prompted to enter the value. The program was written using Code::Blocks 13.12. The code was built, run and debugged within this environment. It was tested using various inputs both for the accuracy of the calculations and to ensure that invalid user inputs were dealt with accordingly.

Requirements and instillation

The program consists of a single .cpp C++ source file. The program uses includes of iostream, string and sstream.
