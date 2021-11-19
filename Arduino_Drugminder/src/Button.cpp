#include "Button.h"

/**
 * @brief Constructor for a button
 * @param pin Input connection on the board
 *
 */
Button::Button(byte pin)
{
    this->pin = pin;
    lastReading = LOW;
    init();
}

void Button::init()
{
    pinMode(pin, INPUT);
    update();
}

void Button::update()
{
    // You can handle the debounce of the button directly
    // in the class, so you don't have to think about it
    // elsewhere in your code
    byte newReading = digitalRead(pin);

    if (newReading != lastReading)
    {
        lastDebounceTime = millis();
    }
    if (millis() - lastDebounceTime > debounceDelay)
    {
        // Update the 'state' attribute only if debounce is checked
        state = newReading;
    }
    lastReading = newReading;
}

byte Button::getState()
{
    update();
    return state;
}

bool Button::isPressed()
{
    return (getState() == HIGH);
}

void Button::waitPressedAndReleased()
{
    while(!isPressed())
    {
        delay(5);
    }
    while(isPressed())
    {
        Serial.println("was pressed");
        delay(5);
    }
    
}