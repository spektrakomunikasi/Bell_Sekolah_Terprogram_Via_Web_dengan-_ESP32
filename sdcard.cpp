// sdcard.cpp

#include <SD.h>
#include <SPI.h>

// Define the chip select pin for the SD card
const int chipSelect = 5; // Adjust as necessary

void setup() {
    Serial.begin(9600);
    while (!Serial) {
        ; // Wait for serial port to connect. Needed for native USB
    }

    Serial.print("Initializing SD card...");
    if (!SD.begin(chipSelect)) {
        Serial.println("SD card initialization failed!");
        return;
    }
    Serial.println("SD card initialized successfully.");
}

void loop() {
    // Your code for managing SD card operations
}