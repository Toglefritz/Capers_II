# Capers II, a Hexapod Robot

## Project Description

Capers II is a hexapod robot. The code in this repository is designed to control Capers II. Hexapod robots are robots with six legs. Capers II is designed with three degrees of freedom per leg. Each leg is actuated by three servos. The first servo moves the leg forward/backward, the second servo moves the leg up and down, and the third servo bends the leg in the middle. With six legs and three servos per leg, the robot is driven by 18 servos in total.

The parts necessary to build the robot's frame can be found in the *frame* directory of this repository.

## Attribution

The code in this repository was originally developed by GitHub user KurtE.
The source of this fork is: [https://github.com/KurtE/Arduino_Phoenix_Parts](https://github.com/KurtE/Arduino_Phoenix_Parts).

## Hardware

Generally speaking, a hexapod robot's electronics system has three main subsystems:  the microcontroller, servo controller, and control input.

This code assumes that the hexapod uses the following electronics systems:

* The microcontroller is a Botboarduino from [Lynxmotion](http://www.lynxmotion.com/c-153-botboarduino.aspx).
* The servo controller is an SSC-32U from [Lynxmotion](http://www.lynxmotion.com/p-1032-ssc-32u-usb-servo-controller.aspx).
* For input the robot uses a wireless Platstation 2 controller like one from [Lynxmotion](http://www.lynxmotion.com/p-1096-ps2-robot-controller-v4.aspx)

Hexapod robots use a total of 18 servos. Since the robot itself can be quite heavy depending upon the construction, it is important to equip
the robot with servos that are strong enough to support the robot's weight. Servos which provide at least 8 kg/cm of torque are
recommended.

The robot's frame is constructed from CNC cut aluminum which is strong but also light weight. The design files for the frame can be found in the *frame* directory of this repository. It is possible to find a range of ready-made frames from various online vendors if you do not wish to fabricate your own.

## Installation

To use this code you need to copy each of the folders inside the *libraries* directory into your Arduino Library directory.  

In the Arduino IDE, open **Capers_II_PS2_SSC32.ino**. If the frame on your robot differs from the design in the *frame* directory, the .ino file contains robot configuration options for inputting the geometry of your frame.

## Build Instructions

Instructions for building the robot can be found on Instructables [Instructables](https://www.instructables.com/id/Capers-II-a-Hexapod-Robot).
