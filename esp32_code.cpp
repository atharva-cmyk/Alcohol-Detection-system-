#include <WiFi.h> 
#include <WebServer.h>

const char* ssid = "Harsh's Galaxy";       // Replace with your Wi-Fi name
const char* password = "galaxy@002"; // Replace with your Wi-Fi password

WebServer server(80);
String sensorData = "No Data";

// Read data from Arduino
void readSerialData() {
  while (Serial.available()) {
    sensorData = Serial.readStringUntil('\n'); // Read data until newline
  }
}

// HTML Page to display data
void handleRoot() {
  readSerialData();
  String html = "<html><head><title>Alcohol Sensor Data</title></head><body>";
  html += "<h1>Alcohol Level</h1>";
  html += "<p>Level: " + sensorData + " ppm</p>";
  html += "</body></html>";
  server.send(200, "text/html", html);
}

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("\nConnected to WiFi");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());

  server.on("/", handleRoot);
  server.begin();
}

void loop() {
  server.handleClient();
}
