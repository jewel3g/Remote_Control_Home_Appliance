# Remote Control Home Appliance

Control electrical appliances remotely using a microcontroller and an IR remote.

---

## Project Overview

This project allows you to control electrical loads (like lights, fans, or other appliances) using a standard IR remote and a microcontroller such as Arduino. It decodes the signals sent by the remote and activates relays to switch the connected appliances.

---

## Required Components

1. **Arduino Uno** (or any compatible microcontroller)  
2. **IR Receiver Module** (compatible with 38kHz signals)  
3. **Transformer** (2A or higher, depending on load)  
4. **Relay Shield**  
5. **ULN2003** (for driving relays if needed)  
6. **Voltage Regulator**  
7. **Wire connectors & jumper cables**

---

## How It Works

1. Every IR remote transmits a unique code, typically 4–8 bits per button.  
2. The IR receiver module captures 38kHz IR signals from the remote.  
3. The microcontroller decodes the received signal to identify the button pressed.  
4. Based on the decoded signal, the microcontroller switches the corresponding relay, turning the connected appliance ON or OFF.  
5. The decoded signal can also be monitored on the Serial Monitor for testing purposes.

---

## Software / Libraries

We use the [Arduino-IRremote library](https://github.com/z3t0/Arduino-IRremote) for decoding IR signals.  
Example sketch for decoding IR signals: [IRtest2](https://github.com/z3t0/Arduino-IRremote/blob/master/examples/IRtest2/IRtest2.ino)

---

## Steps to Run

1. Install the **IRremote** library in Arduino IDE.  
2. Connect the IR receiver to your Arduino (VCC, GND, and signal pin).  
3. Open the `IRtest2.ino` example sketch in Arduino IDE.  
4. Upload the sketch to the Arduino board.  
5. Open the **Serial Monitor** (set baud rate 9600) to view the decoded codes from your remote.  
6. Map the decoded codes to specific relay actions in your main control sketch.  
7. Connect the relay shield to control your appliances safely.

---

## Safety Notes

- Always ensure proper **isolation** between the low-voltage Arduino circuit and high-voltage AC loads.  
- Use a **relay rated for the appliance load**.  
- Avoid touching live AC wires.  
- Double-check all connections before powering the system.

---

## References

- [Arduino-IRremote GitHub Repository](https://github.com/z3t0/Arduino-IRremote)  
- [IRtest2 Example Sketch](https://github.com/z3t0/Arduino-IRremote/blob/master/examples/IRtest2/IRtest2.ino)  

---

## License

This project is licensed under the MIT License – see the LICENSE file for details.
