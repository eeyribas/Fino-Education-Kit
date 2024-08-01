# Fino-Education-Kit

The Fino Education Kit consists of electronic components and operates by loading software. The Fino Education Kit is a significant set for those interested in learning about electronic components and software.

The Fino Education Kit includes:

1.) Check Electronic Components
- The Fino Education Kit includes electronic components such as buttons, integrated circuits, LEDs, and sockets, allowing for the learning of these components.
- It sparks curiosity regarding the functions, applications, and potential uses of electronic components.
- Characteristics such as pin size, socket parts, input and output units vary among electronic components, encouraging exploration in the Fino Education Kit.

2.) Start
- The Fino Education Kit specifies the characteristics of the electronic parts mentioned. These electronic components are recognizable.
- It facilitates learning the IDE program used for software development and understanding how software is developed.

3.) Build
- Designed as a commercial product, the Fino Education Kit features custom PCBs and Plexiglas. Connections for the Fino Education Kit will be shared via GitHub. Connections can be made using elements like boards, jumper cables, and wires.

4.) Play
- Game examples can be loaded onto the Fino Education Kit to play games.

5.) Learn
- Animation examples can be uploaded to the Fino Education Kit to display animation designs.
- Electronic component examples can be uploaded to the Fino Education Kit to operate electronic parts.

6.) Explore
- Additional electronic components can be added to enhance the Fino Education Kit.
- Software can be developed for new animation designs.
- Electronic components can be operated in different combinations.
- New game software can be developed.


# Fino Education Kit Electronic Components

The brain of the Fino Education Kit is the Arduino Uno R3 development board. The Arduino Uno R3 development board is connected to various electronic components, including:
- 1 x 8x8 Led Matrix Display
- 1 x 3 Axis Accelerometer ADXL345
- 4 x TTP223B Digital Touch Sensors or Buttons
- 1 x XY Joystick Module
- 1 x Buzzer
- 1 x Red LED
- 1 x Yellow LED
- Resistors and capacitors for these electronic components

The connections of these electronic components with Arduino are as follows, indicated by arrows:

( Electronic Component - Arduino Pin - Connection Image )
- 8x8 Led Matrix Display -> Din = D12, Clk = D11, Cs = D10 -> 8x8-led-matrix-schematic.png
- 3 Axis Accelerometer ADXL345 -> SDA = A4, SCL = A5 -> accelerometer-schematic.jpg
- TTP223B Digital Touch Sensors or Buttons -> D6, D5, D4, D3 -> button-schematic.png
- XY Joystick Module -> Vrx = A0, Vry = A1 -> joystick-schematic.png
- Buzzer -> D7 -> buzzer-schematic.jpg
- Red LED -> D9 -> led-schematic.png
- Yellow LED -> D8 -> led-schematic.png
Images are provided in the 'Schematic' folder. The 'Pinout.txt' file in the 'Schematic' folder details the pin connection schema for the Arduino and electronic components mentioned above.


# Fino Education Kit Software Development Program

The Arduino IDE is used for software development in the Fino Education Kit. It can be downloaded from the official website.


# Fino Gamer Library

The Fino Gamer library provides convenience, practicality, fast learning, and support for software development. 
It is used for designing animations, operating electronic parts, and coding games. 
The Fino Gamer library is available on Github in the form of the FinoGamer folder and FinoGamer.zip file.
The Fino Education Kit Library is necessary for using the following examples:
- Drawing animations on the screen
- Creating code applications and designing games
- Running electronic components

Installation;
1. Install the latest version of **Arduino**. You can obtain this software [here](https://www.arduino.cc/en/Main/Software).
2. Open the Arduino software on your computer and navigate to **Sketch** → **Include Library** → **Add .ZIP Library...**
3. Install the downloaded `FinoGamer.zip` file. This library will appear as: **FinoGamer** 

The easiest way to test that the library has been successfully installed is to follow these steps;
1. Go to **File -> Open -> Fino-Education-Kit -> CodeGames -> ** and select one of the example programs (e.g., **Snake**)
2. Click the **Verify** button to compile the example, and if it compiles successfully (displays "Done compiling"), you can proceed with uploading.


# Coding With Fino Gamer

Animation design softwares consist of 16 examples located in the 'Ex-DesignAnimations' folder. These examples are independent from each other.

Software programs to operate electronic components consist of 35 examples located in the 'Ex-RunComponents' folder. These examples are independent from each other.

Game development through coding consists of 8 games in the 'Ex-CodeGames' folder. These games include:
1. Animation Designs: There are 10 animation designs. These animations are independent developments.
2. Colliding Wagons: There are 13 examples available. These examples are interrelated. Games are completed by developing based on example names.
3. CubeB Game: There are 9 examples available. These examples are interrelated. Games are completed by developing based on example names.
4. Flappy Bird: There are 12 examples available. These examples are interrelated. Games are completed by developing based on example names.
5. Number Puzzle: There are 8 examples available. These examples are interrelated. Games are completed by developing based on example names.
6. Snake: There are 14 examples available. These examples are interrelated. Games are completed by developing based on example names.
7. Snake And Dangerous Snake: There are 21 examples available. These examples are interrelated. Games are completed by developing based on example names.
8. Tennis: There are 12 examples available. These examples are interrelated. Games are completed by developing based on example names."


# License
All software in the Fino Education Kit and the Fino Gamer library are free software; however, they cannot be redistributed, modified, and/or used in any other way without permission.
Product rights include personal, patent office, GNU license laws, and manufacturer rights.
All software in the Fino Education Kit and the Fino Gamer library cannot be distributed without permission. These software packages cannot be used for commercial purposes. Please inform me if they are used commercially.

This product has received a copy of the GNU General Public License. The license can be viewed at the following address:
http://www.gnu.org/licenses/

Please maintain this license information. If you notice that this code has been copied in any way, modified for use in different products, please inform me. Please consider legal proceedings.