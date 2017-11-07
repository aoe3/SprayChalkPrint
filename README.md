# SprayChalkPrint
Overall Design

Features
Code:

The code was first implemented as intended to be used by a user typing in whatever they wanted to be printed into the serial port and the code reading the input and sending the information to the printer. This was done by creating a large list of if-statements, one for each letter, number, and symbol we would allow to be printed, that dictated what each of seven servos would do for each column of a five-column grid (the seven rows by five columns grid being how we designed each symbol). For example, for the letter B, for the first column all seven servos would be activated (moved to their “active” degree), and then the next column only the first, fourth, and seventh servos would be activated and the others would all move back to their “resting” degree. Between each column the code made the stepper motors move forward one rotation to be able to print the next part of the symbol.

This first code was long and clunky and the serial input was hard to do. There were also some issues with how the servos were being called that caused them to interfere with each other. Therefore, we streamlined the code a bit by getting rid of the if-statements and replacing them with an individual function for each letter, number, and symbol (e.g. printA()). The code still was relatively the same within these functions, but we discovered we needed to call the servos one at a time to prevent them from interfering with one another. Also, we discovered that each servo began at a different angle, and thus the angles in the code were dependent on our testing how each servo moved before we began. Also, once we got rid of the motors, we got rid of the code for them as well.

In the end, the code functioned well. It was easy to input a word or phrase to be printed, as all you had to do was type in the functions you wanted in order. Once we calibrated the servo angles, they moved how they were supposed to, when they were supposed to.

Circuitry
The components include:
1 Arduino Mega 2560 microcontroller
2 Stepper Motors
2 DRV8825 Stepper motor controllers
7 5V Servos
4 UA7805C 5V Regulators
2 100µF capacitors
4 10µF capacitors
4 1µF capacitors

First implemented using the Photon as the microcontroller. In this phase,were only able to power control the 7 servos and one of the stepper motors using a 9V wall outlet power source. In as much as every component worked seamless, we realized the ineffectiveness of this approach given that one of the goal is to design a motorized sidewalk chalk printer. Consequently, we switched to the  Arduino Mega 2560 microcontroller which provides multiple PWM pins and facilitates direct connection to a larger power source. Initially, we anticipated to use 3.7V Lithium-ion  battery but realized we required a larger power source to power 2 stepper motors and 7 servos. We opted to use a 12V Lithium ion battery as a larger power source. Secondly,we powered the servos using a the 5V connection from the microcontroller which constantly made it to heat up. 

We finally use to separate breadboards to complete circuit: one for the stepper motors and the second for the servos.  On the breadboard for stepper motors: 12V power is directly connected onto the breadboard then to the the VIN of the microcontroller. Each stepper motor is connected to a DRV8825 motor controller then to the microcontroller using the driver and step pins from the controller. 
