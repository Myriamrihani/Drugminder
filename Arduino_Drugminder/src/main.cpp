#include <Arduino.h>
#include <Wire.h>
#include <SPI.h>
#include "Pills.h"
#include "Button.h"
#define onboard 13


bool addPill = false;
bool next = false;
Button add_pill_button(4);
Button next_text_box(7);


String inputString = "";         // a String to hold incoming data
bool stringComplete = false;  // whether the string is complete

Prescription pre;
String name = "";
int r,nb = 0;
int pill_parametrs = 3;
int count = 0;
bool pill_edited = false;

void setup() {
  pinMode(onboard,OUTPUT);
  Serial.begin(9600);
  add_pill_button.init();
  next_text_box.init();

  // put your setup code here, to run once:
}
//How the loop function works: 
//The code asks you if you want to add a new medication. To say yes, press on the button (pls indicate
//the pin of the button used). 
//WHen button is pressed, You are asked to enter a name for the pill. The rack number et nb of pills left
//are not done yet, as I didn;t want to go further without testing. -Myriam
void loop() {
  // put your main code here, to run repeatedly:
  if(add_pill_button.getState() == HIGH){
    addPill = true;
  }

  if(next_text_box.getState() == HIGH){
    next = true;
  }


  if(addPill){
    Serial.println(count);
    if(stringComplete){
      Serial.println("string completed");
      switch (count)
      {
      case 0:
        name = inputString;  
        Serial.println(name);
        break;
      case 1:
        r = inputString.toInt(); 
        break;
      case 2:
        r = inputString.toInt(); 
        break;
      case 3:
        count =0;
        pill_edited = true;
      default:
        break;
      }


    }
    if(next){
        count +=1;
        stringComplete = false;
        Serial.println(count);
        next = false;
    }

    if(pill_edited){
        pre.add_pill(name,r,nb);
        pre.print_prescription(); 
        pill_edited = false;
        addPill = false;
    }

  }

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