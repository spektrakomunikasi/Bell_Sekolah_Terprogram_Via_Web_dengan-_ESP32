#include <Arduino.h>

class Button {
public:
    Button(int pin);
    void begin();
    void update();
    bool isPressed();
    bool isReleased();
    
private:
    int pin;
    bool currentState;
    bool lastState;
    unsigned long lastDebounceTime;
    unsigned long debounceDelay;
};

Button::Button(int pin) : pin(pin), currentState(false), lastState(false), lastDebounceTime(0), debounceDelay(50) {}

void Button::begin() {
    pinMode(pin, INPUT_PULLUP);
}

void Button::update() {
    bool reading = digitalRead(pin);
    if (reading != lastState) {
        lastDebounceTime = millis();
    }

    if ((millis() - lastDebounceTime) > debounceDelay) {
        if (reading != currentState) {
            currentState = reading;
        }
    }
    
    lastState = reading;
}

bool Button::isPressed() {
    return !currentState; // Assuming active low
}

bool Button::isReleased() {
    return currentState; // Assuming active low
}

// Example usage:
// Button button1(2);
// button1.begin();
// In your loop, regularly call button1.update();
