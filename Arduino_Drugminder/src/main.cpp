#include <Arduino.h>
#include <Wire.h>
#include <SPI.h>
#include "Keyboard.h"
#include "Pills.h"
#define onboard 13

void setup() {
  pinMode(onboard,OUTPUT);
  Serial.begin(9600);
  Keyboard.begin();
  // put your setup code here, to run once:
  key_pressed = false;
}

void loop() {
  // put your main code here, to run repeatedly:
  if
}