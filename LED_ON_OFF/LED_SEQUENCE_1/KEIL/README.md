# 8051 LED Sequence using Embedded C

## Overview
This project demonstrates LED sequencing using the 8051 microcontroller and Embedded C. Eight LEDs connected to Port 2 are controlled in sequence using a simple program.

## Tools Used
- **Microcontroller:** 8051
- **Programming Language:** Embedded C
- **IDE:** Keil uVision
- **Simulation:** Proteus Design Suite

## Working Principle
The program sends different hexadecimal values to Port 2 (`P2`) to activate one output bit at a time. The output pattern moves from the highest bit to the lowest bit and repeats continuously.

## LED Sequence
The program uses the following output values:

- `0x80`
- `0x40`
- `0x20`
- `0x10`
- `0x08`
- `0x04`
- `0x02`
- `0x01`

## Project Files
- `main1.c` – Embedded C source code
- `LED2.uvproj` – Keil project file
- `LED2.uvopt` – Keil configuration file
- `STARTUP.A51` – Startup assembly file, if required by the project

## How to Run
1. Open the Keil project.
2. Build the project and check for compilation errors.
3. Open the corresponding circuit in Proteus.
4. Load the compiled program into the microcontroller model.
5. Run the simulation and observe the LED sequence.

## Learning Outcomes
- Practiced 8051 Port 2 output control.
- Learned hexadecimal output patterns.
- Practiced Embedded C loops.
- Explored microcontroller simulation using Proteus.

## Status
Learning project. Update this status after verifying the complete simulation.

## Author
8051 Microcontroller Learning Portfolio
