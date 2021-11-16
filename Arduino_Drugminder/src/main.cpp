#include <Arduino.h>
#include <Wire.h>
#include <SPI.h>
#include "Pills.h"
#include "Button.h"
#define onboard 13

int lastState = LOW;
int currentState = LOW;
Button button(2);
bool begin = true;

String inputString = "";         // a String to hold incoming data
bool stringComplete = false;  // whether the string is complete

Prescription pre;
String name = "";
int r,nb = 0;

void setup() {
  pinMode(onboard,OUTPUT);
  Serial.begin(9600);
  button.init();
  

  // put your setup code here, to run once:
}
//How the loop function works: 
//The code asks you if you want to add a new medication. To say yes, press on the button (pls indicate
//the pin of the button used). 
//WHen button is pressed, You are asked to enter a name for the pill. The rack number et nb of pills left
//are not done yet, as I didn;t want to go further without testing. -Myriam
void loop() {
  // put your main code here, to run repeatedly:
  if(begin){
    Serial.println("Do you want to add medication?");
    currentState = button.getState();

  }
  
  // if(!begin){
    if(currentState == HIGH){
        begin = false;
      if(!stringComplete){
        Serial.println("Pill name?");
      }else{
        name = inputString;
        inputString = "";
        pre.add_pill(name,r,nb);
        pre.print_prescription();
      }
    }
  // }
  // lastState = currentState;
}


void serialEvent() {
  while (Serial.available()) {
    // get the new byte:
    char inChar = (char)Serial.read();
    // add it to the inputString:
    inputString += inChar;
    // if the incoming character is a newline, set a flag so the main loop can
    // do something about it:
    if (inChar == '\n') {
      stringComplete = true;
    }
  }
}