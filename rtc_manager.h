// rtc_manager.h

#ifndef RTC_MANAGER_H
#define RTC_MANAGER_H

#include <NTPClient.h>
#include <WiFiUdp.h>

// Define NTP server and timezone
#define NTP_SERVER "pool.ntp.org"
#define UTC_OFFSET 0 \ // Adjust according to your timezone

class RTCManager {
public:
    RTCManager();
    void begin();
    void update();
    String getCurrentTime();

private:
    WiFiUDP ntpUDP;
    NTPClient timeClient;
};

#endif // RTC_MANAGER_H