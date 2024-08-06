#include <Arduino.h>
#include <WiFi.h>
#include <WebServer.h>

const char* ssid = "TP-Link_70CB";
const char* password = "98591510";

WebServer server(80);

void handleRoot();

void setup() {
  Serial.begin(115200);
  
  // Connect to Wi-Fi
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  
  Serial.println("Connected to WiFi");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());

  // Define the endpoint
  server.on("/", handleRoot);

  // Start the server
  server.begin();
  Serial.println("HTTP server started");
}

void loop() {
  server.handleClient();
}

void handleRoot() {
  if (server.hasArg("data")) {
    String data = server.arg("data");
    Serial.print("Received data: ");
    Serial.println(data);
    server.send(200, "text/plain", "Data received: " + data);
  } else {
    server.send(400, "text/plain", "No data received");
  }
}