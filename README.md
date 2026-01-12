# IOT-PROJECT-ALCHOL-DETECTION-SYSTEM
A smart IoT-based Alcohol Detection System using Arduino Uno and an MQ-3 sensor. Features a real-time dual-alert system (LED &amp; Buzzer) to detect ethanol levels and enhance safety in driving or industrial environments.

# 🛡️ IoT Alcohol Detection & Alert System

A real-time safety monitoring project built with Arduino. This system detects the concentration of alcohol in the air and triggers both a visual and audible alarm when levels exceed a safe threshold.

#Circuital Diagram :--

![Circuit](https://github.com/user-attachments/assets/79500bac-ea06-46df-af62-28e28b4c0475)

## 🚀 Overview
This project uses an **MQ-3 Gas Sensor** to monitor ethanol levels. It is designed for applications such as breathalyzers, vehicle ignition interlocks, or industrial safety monitors.

### Features
* **Real-time Monitoring:** Continuous air sampling via the MQ-3 sensor.
* **Dual Alert System:** High-decibel 5V buzzer and high-visibility LED indicator.
* **Compact Design:** Optimized for low power consumption and easy deployment.

---

## 🛠️ Hardware Requirements

| Component | Specification |
| :--- | :--- |
| **Microcontroller** | Arduino UNO R3 |
| **Sensor** | MQ-3 Alcohol Gas Sensor |
| **Alert 1** | 5V Piezo Buzzer |
| **Alert 2** | Blue LED Bulb |
| **Resistor** | 180 ohm (for LED protection) |
| **Wiring** | Jumper Wires & Breadboard |

---

## 🔌 Circuit Connection

The system is wired according to the following configuration:

* **MQ-3 Sensor:**
    * VCC ➡️ Arduino 5V
    * GND ➡️ Arduino GND
    * AO (Analog Out) ➡️ Arduino Pin A0
* **LED Circuit:**
    * Anode (+) ➡️ 180Ω Resistor ➡️ Arduino Digital Pin 2
    * Cathode (-) ➡️ Arduino GND
* **Buzzer:**
    * Positive (+) ➡️ Arduino Digital Pin 13
    * Negative (-) ➡️ Arduino GND

---

🛠️ Installation & Usage
Clone the Repo:

Bash

git clone [https://github.com/YOUR_USERNAME/YOUR_REPO_NAME.git](https://github.com/YOUR_USERNAME/YOUR_REPO_NAME.git)
Hardware Setup: Connect the components as shown in the circuit diagram.

Upload Code: Open the .ino file in the Arduino IDE and upload it to your Uno board.

Calibration: Use the onboard potentiometer on the MQ-3 sensor to fine-tune the sensitivity.

#Model made by Me:---

![WhatsApp Image 2025-12-20 at 11 30 35](https://github.com/user-attachments/assets/7023eba6-8acd-461a-9f08-41ec0e19d704)


📝 License
This project is open-source and available under the MIT License.


**Would you like me to generate the full, ready-to-upload `.ino` code file for this project as well?**
