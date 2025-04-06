#include <LiquidCrystal.h> 
#include <SoftwareSerial.h>

#define MQ3pin A0
float sensorValue;

// Initialize Software Serial for ESP32 communication
SoftwareSerial espSerial(9, 10); // RX, TX

// LCD Setup
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  lcd.begin(16, 2);
  Serial.begin(9600);     // Monitor for Debugging
  espSerial.begin(115200); // Communication with ESP32
  lcd.print("Alcohol Level:");
}

void loop() {
  sensorValue = analogRead(MQ3pin);
  lcd.setCursor(0, 1);
  lcd.print("Level: ");
  lcd.print(sensorValue);

  // Send data to ESP32
  espSerial.println(sensorValue);
  Serial.print("Sent to ESP32: ");
  Serial.println(sensorValue);

  delay(1000);
}
