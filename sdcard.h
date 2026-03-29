#ifndef SDCARD_H
#define SDCARD_H

#include <SPI.h>
#include <SD.h>

class SDCard {
public:
    bool begin(int chipSelect);
    bool readFile(const char* filename, String& content);
    bool writeFile(const char* filename, const char* content);
    bool appendFile(const char* filename, const char* content);
    void listFiles();
    bool deleteFile(const char* filename);
};

#endif // SDCARD_H
