#ifndef LCD_MANAGER_H
#define LCD_MANAGER_H

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

class LCDManager {
private:
    LiquidCrystal_I2C *lcd;

public:
    LCDManager(int addr, int columns, int rows) {
        lcd = new LiquidCrystal_I2C(addr, columns, rows);
        lcd->begin();
        lcd->backlight();
    }
    
    void print(const String &message) {
        lcd->clear();
        lcd->print(message);
    }

    void setCursor(int col, int row) {
        lcd->setCursor(col, row);
    }

    void clear() {
        lcd->clear();
    }

    ~LCDManager() {
        delete lcd;
    }
};

#endif // LCD_MANAGER_H