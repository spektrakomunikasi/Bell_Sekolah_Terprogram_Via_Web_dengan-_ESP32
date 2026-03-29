#ifndef SD_MANAGER_H
#define SD_MANAGER_H

#include <SD.h>
#include <SPI.h>

class SDManager {
public:
    SDManager();
    bool begin();
    bool readFile(const char* path);
    bool writeFile(const char* path, const char* message);
    void listFiles();
};

#endif // SD_MANAGER_H