#include <Arduino.h>
#define onboard 13

void setup() {
  pinMode(onboard,OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  digitalWrite(onboard, LOW);
  delay(1000);
  digitalWrite(onboard,HIGH);
  delay(1000);
  // put your main code here, to run repeatedly:
}