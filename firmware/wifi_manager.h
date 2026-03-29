# WiFi Manager

// Include necessary libraries
#include <WiFi.h>
#include <WebServer.h>

// Replace with your network credentials
const char* ssid = "ESP32-Access-Point";
const char* password = "123456789";

WebServer server(80);

void setupWiFi()
{
    // Set the device in AP mode
    WiFi.softAP(ssid, password);
    
    // Print the IP address
    Serial.println("Access Point IP address: " + WiFi.softAPIP().toString());
}

void handleRoot() {
    server.send(200, "text/html", "<h1>Hello, world!</h1>");
}

void startWebServer() {
    server.on("/", handleRoot);
    server.begin();
    Serial.println("HTTP server started");
}

void setup() {
    Serial.begin(115200);
    setupWiFi();
    startWebServer();
}

void loop() {
    server.handleClient();
}