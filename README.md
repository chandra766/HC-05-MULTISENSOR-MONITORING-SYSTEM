# UART Button-Controlled LED (TX & RX)

A microcontroller-based project demonstrating UART serial communication between a sender and receiver. The sender detects push-button presses and transmits '1' or '0' commands at 9600 baud, while the receiver controls an LED according to the received command.

## Features
- Push-button input using INPUT_PULLUP
- LED state toggling
- UART serial communication
- Transmit '1' for LED ON and '0' for LED OFF
- Receiver-based LED control
- Simple button debouncing

## Working Principle
1. The sender reads the push button connected to digital pin 2.
2. On every button press, the LED state toggles.
3. The sender transmits '1' when the LED is ON and '0' when it is OFF.
4. The receiver reads the transmitted character.
5. The receiver turns the LED ON or OFF according to the received command.

## Communication Details
- Protocol: UART
- Baud Rate: 9600
- Data Bits: 8
- Parity: None
- Stop Bits: 1 (8N1)

## Hardware Requirements
- 2 Arduino boards / microcontrollers
- Push button
- LED
- 220Ω resistor
- Jumper wires

## Sender (TX)
The sender detects button presses, toggles the LED state, and transmits '1' or '0' through UART communication at 9600 baud. It uses the internal pull-up resistor and a debounce delay to avoid unwanted repeated triggers.

## Receiver (RX)
The receiver receives the UART commands and controls the LED accordingly. When '1' is received, the LED turns ON, and when '0' is received, the LED turns OFF.

## Applications
- UART communication practice
- Remote LED control
- Embedded systems learning
- Serial communication projects

## Author
Embedded Systems Project
