# Led_blinking
simple Arduino LED blink project
# 💡 LED Blinking with Arduino

This is a beginner-level embedded systems project where an LED is programmed to blink at 1-second intervals using an Arduino Uno. This project is commonly used to test if a microcontroller board is functioning properly.

## 🔧 Components Used
- Arduino Uno
- 5mm LED (1x)
- 220Ω Resistor (1x)
- Breadboard
- Jumper Wires

## 🔌 Circuit Diagram
You can connect:
- **LED Anode (+)** → Arduino **Pin 13**
- **LED Cathode (-)** → 220Ω resistor → GND

![Circuit Diagram](circuit.png) <!-- optional image -->

## 🧠 Code Used
```cpp
void setup() {
  pinMode(13, OUTPUT); // Set pin 13 as output
}

void loop() {
  digitalWrite(13, HIGH); // Turn LED ON
  delay(1000);            // Wait 1 second
  digitalWrite(13, LOW);  // Turn LED OFF
  delay(1000);            // Wait 1 second
}

