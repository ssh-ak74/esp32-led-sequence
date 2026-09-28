#  ESP32 LED Sequence

A small ESP32 project that cycles through three LEDs in a timed sequence.

##  Features

*  Green LED
*  Blue LED
*  Red LED
*  Timed LED sequence
*  Automatically repeats
*  Built with PlatformIO
*  MIT licensed

## 🔌 Wiring

| LED      | ESP32 GPIO | Resistor |
| -------- | ---------: | -------: |
|  Green |    GPIO 25 |      1kΩ |
|  Blue  |    GPIO 26 |      1kΩ |
|  Red   |    GPIO 27 |      1kΩ |

For each LED:

```text
ESP32 GPIO → 1kΩ resistor → LED (+)
LED (-) → GND
```

## Sequence

The LEDs run in this order:

```text
 Green  → 5 seconds
 Blue   → 2 seconds
 Red    → 5 seconds
 Blue   → 2 seconds
            ↓
          repeat
```

##  Hardware

* ESP32 development board
* 1× Green LED
* 1× Blue LED
* 1× Red LED
* 3× 1kΩ resistors
* Breadboard
* Jumper wires

##  Getting Started

1. Wire the LEDs according to the wiring table.
2. Open the project in PlatformIO.
3. Connect the ESP32.
4. Upload the program.
5. Watch the LED sequence repeat.

##  Project Structure

```text
esp32-led-sequence/
├── src/
│   └── main.cpp
├── platformio.ini
├── LICENSE
└── README.md
```

##  License

This project is licensed under the **MIT License**.

See [`LICENSE`](LICENSE) for details.

---
