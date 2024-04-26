# Rover Status LED

## Introduction
This guide explains how to control status LEDs for a rover using NMOS (N-channel MOSFET) with an Arduino at 5V logic. It also provides instructions for software implementation.

## Hardware Setup
1. **Gate Pin Connection:**
   - Connect the Gate pin of the NMOS to a digital pin on the Arduino.

2. **Drain Pin Connection:**
   - Connect the Drain pin of the NMOS to the corresponding pin of the LED that controls its color.

3. **Source Pin Connection:**
   - Connect the Source pin of the NMOS to ground (GND).

4. **Common Anode Connection:**
   - Connect the common anode of the LED to a 12V power source.

**Note:** Ensure correct polarity and avoid reverse connections. Avoid touching the MOSFET gates and board without grounding yourself.

## Software Guide
- **0: Toggle Red LED**
- **1: Toggle Green LED**
- **2: Toggle Blue LED**
- **3: Toggle Yellow LED**

**Communication Protocol:**
- The communication between the Arduino and the controlling device should be at 9600 baud.

Feel free to adjust the formatting or add more details as needed!
