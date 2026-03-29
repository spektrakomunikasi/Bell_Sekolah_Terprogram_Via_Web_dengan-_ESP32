#include <Arduino.h>  

class RTCManager {  
public:  
    void begin() {  
        // Initialize the real-time clock  
    }  
  
    void setDateTime(int year, int month, int day, int hour, int minute, int second) {  
        // Set the RTC date and time  
    }  
  
    void getDateTime(int &year, int &month, int &day, int &hour, int &minute, int &second) {  
        // Get the current RTC date and time  
    }  
};  

RTCManager rtcManager;  

void setup() {  
    Serial.begin(115200);  
    rtcManager.begin();  
    rtcManager.setDateTime(2026, 3, 29, 7, 8, 0);  
}  

void loop() {  
    int year, month, day, hour, minute, second;  
    rtcManager.getDateTime(year, month, day, hour, minute, second);  
    Serial.printf("Current Date and Time: %04d-%02d-%02d %02d:%02d:%02d\n", year, month, day, hour, minute, second);  
    delay(1000);  
}