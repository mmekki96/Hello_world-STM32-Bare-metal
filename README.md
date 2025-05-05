# Hello World - STM32 Bare Metal Project
This project presents a basic **bare-metal** STM32 code that demonstrates basic GPIO control using direct register access (which means no HAL library). The project runs on the **STM32F407F** microcontroller and performs :
- **Turn ON a LED** when a button is pressed
- **Turn OFF a LED** when the button is not pressed

## Features
- Bare-metal programming (no CMSIS or HAL drivers)
- Written in **Embedded C**
- Uses GPIO input and output control
- Designed to run on **STM32F407** developement boards

## Hardware Requirements
- STM32F407G-DISC1 developement board
- Build-in push button and LED
- Power supply connection
- ST-Link V2

## Pin Configuration
Built-in LED -> PD12
Built-in push button -> PA0

## How It Works
1. The button is configured as **input**
2. The LED is configured as **output**
3. In main loop :
     - The code checks the state of the button input pin
     - If the button is pressed (Pull-down Resistor), the LED is turned ON
     - If the button is not pressed, the LED is turned OFF

## License
This project is open source under the MIT License.
