🍷 Alcohol Detection System
A real-time Alcohol Detection System built using an Arduino microcontroller, ESP32 WiFi module, and an MQ-3 alcohol gas sensor. This project is designed to detect the presence of alcohol in the air and wirelessly display the data on a device connected through WiFi.

📌 Project Overview
This system uses the MQ-3 gas sensor to measure the alcohol content in the surrounding air. The Arduino reads sensor values and sends them to the ESP32 module, which processes the data and transmits it over WiFi to a web interface or serial monitor. The setup is ideal for educational, prototyping, and safety-related applications.

⚙️ Components Used
Arduino Uno / Nano / Mega (any compatible board)

ESP32 module (for WiFi communication)

MQ-3 Alcohol Gas Sensor

Breadboard & Jumper Wires

USB Cable

Power Supply (5V)

Optional: OLED/Display module for local display



🧠 How It Works
The MQ-3 sensor detects the concentration of alcohol in the air and outputs an analog signal.

The Arduino reads the analog value and sends it to the ESP32.

The ESP32 connects to a WiFi network and hosts a web server (or sends data to a specific IP/device).

Real-time alcohol levels are displayed on a connected device via a web interface or dashboard.


📶 Features
📡 Wireless Monitoring: Access alcohol concentration data via WiFi.

⏱️ Real-Time Detection: Instant updates on detected alcohol levels.

🔧 Customizable Thresholds: Easily change alert or detection thresholds in code.

🖥️ Web Dashboard (optional): View results on a browser-based interface.


🚨 Use Cases
Drunk driving detection systems

Breath analyzers

Safety monitoring in industrial environments

Alcohol level tracking in labs and testing zones
