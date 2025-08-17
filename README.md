# Fino-Education-Kit

Fino Education Kit is an educational platform designed for individuals interested in learning about electronic components and software development. 
It combines hands-on hardware with programmable features to provide an engaging learning experience.

The Fino Education Kit includes:

1.) Check Electronic Components
- The kit includes essential electronic components such as buttons, integrated circuits (ICs), LEDs, and sockets, enabling users to gain familiarity with these parts.
- It encourages curiosity about how electronic components work, where they are used, and what they can do.
- Components vary in characteristics such as pin configuration, socket types, and input/output behavior, inviting learners to investigate and experiment.

2.) Start
- The Fino Kit clearly identifies the properties and functions of each electronic part, making them easily recognizable and understandable.
- It supports learning how to use an IDE (Integrated Development Environment) for software development and helps users understand the basics of writing and uploading code.

3.) Build
- Designed as a commercial-quality product, the kit features custom-designed PCBs and a plexiglass casing.
- All connection diagrams and documentation are available via GitHub, allowing users to build circuits using components such as boards, jumper wires, and connectors.

4.) Play
- The Fino Kit allows users to upload game examples and play interactive games, adding a fun and practical dimension to the learning process.

5.) Learn
- Animation examples can be uploaded to the kit to visualize motion and design concepts.
- Various electronic part examples can also be uploaded, allowing learners to interact with and understand how different components function in real-time.

6.) Explore
- The Fino Kit can be expanded by adding additional electronic components.
- Users can develop new software for custom animation designs or experiment with varied component combinations.
- Electronic components can be operated in different combinations.
- It's also possible to create and run new game applications, providing endless opportunities for creativity and innovation.


# Fino Education Kit Electronic Components

At the heart of the Fino Education Kit is the Arduino Uno R3 development board.
This board is connected to a variety of electronic components, including:
- 1 x 8x8 Led Matrix Display
- 1 x 3 Axis Accelerometer ADXL345
- 4 x TTP223B Digital Touch Sensors or Buttons
- 1 x XY Joystick Module
- 1 x Buzzer
- 1 x Red LED
- 1 x Yellow LED
- Resistors and capacitors for these electronic components

The connections between these electronic components and the Arduino are shown below, indicated with arrows.

( Electronic Component - Arduino Pin - Connection Image )
- 8x8 Led Matrix Display -> Din = D12, Clk = D11, Cs = D10 -> 8x8-led-matrix-schematic.png
- 3 Axis Accelerometer ADXL345 -> SDA = A4, SCL = A5 -> accelerometer-schematic.jpg
- TTP223B Digital Touch Sensors or Buttons -> D6, D5, D4, D3 -> button-schematic.png
- XY Joystick Module -> Vrx = A0, Vry = A1 -> joystick-schematic.png
- Buzzer -> D7 -> buzzer-schematic.jpg
- Red LED -> D9 -> led-schematic.png
- Yellow LED -> D8 -> led-schematic.png

All diagrams are located in the 'Schematic' folder.
The file ‘Pinout.txt’ within this folder provides detailed information on the pin configuration between the Arduino and the electronic components mentioned above.


# Fino Education Kit Software Development IDE

Software development for the Fino Education Kit is done using the Arduino IDE, which can be downloaded from the official Arduino website.


# Fino Gamer Library

The Fino Gamer library offers convenience, ease of use, rapid learning, and comprehensive support for software development.
It is designed for creating animations, controlling electronic components, and programming games.
The library is available on GitHub as both the FinoGamer folder and the FinoGamer.zip file.
The Fino Education Kit Library is required to use the following examples:
- Drawing animations on the screen
- Developing applications and designing games
- Operating electronic components

Installation;
1. Install the latest version of **Arduino** which can be downloaded [here](https://www.arduino.cc/en/Main/Software).
2. Launch the Arduino IDE on your computer, then go to **Sketch** → **Include Library** → **Add .ZIP Library...**
3. Select and install the downloaded `FinoGamer.zip` file. After installation, the library will appear as: **FinoGamer** 

The easiest way to verify that the library has been installed successfully is to follow these steps:
1. Navigate to **File -> Open -> Fino-Education-Kit -> CodeGames -> ** and select one of the example programs (e.g., **Snake**)
2. Click the **Verify** button to compile the example. If the compilation completes successfully and shows "Done compiling", you can proceed to upload the program.


# Coding With Fino Gamer

The animation design software includes 16 independent examples located in the 'Ex-DesignAnimations' folder.

Software programs for operating electronic components consist of 35 independent examples found in the 'Ex-RunComponents' folder.

Game development through coding is organized into 8 different games within the 'Ex-CodeGames' folder. These games include:
1. Animation Designs: Contains 10 independent animation examples.
2. Colliding Wagons: Includes 13 interconnected examples. Games are completed by developing progressively according to the example names.
3. CubeB Game: Contains 9 interconnected examples. Games are developed sequentially based on the example names.
4. Flappy Bird: Features 12 interconnected examples, with game development following the order of the example names.
5. Number Puzzle: Includes 8 interconnected examples that build upon each other by example name.
6. Snake: Contains 14 interconnected examples, developed progressively based on the example names.
7. Snake And Dangerous Snake: Comprises 21 interconnected examples, with development continuing according to the example sequence.
8. Tennis: Features 12 interconnected examples, completed by following the example names.


# License

All software in the Fino Education Kit and the Fino Gamer library is free software; however, it cannot be redistributed, modified, and/or used in any other way without permission.
Product rights include personal rights, patent office regulations, GNU license laws, and manufacturer rights.
All software in the Fino Education Kit and the Fino Gamer library cannot be distributed without permission. 
These software packages may not be used for commercial purposes. Please inform me if they are used commercially.

This product has received a copy of the GNU General Public License. The license can be viewed at the following address:
http://www.gnu.org/licenses/

Please maintain this license information. If you notice that this code has been copied in any way or modified for use in other products, please inform me. 
Legal action will be taken.