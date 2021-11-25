// #include <Arduino.h>
// #include <Wire.h>
// #include <SPI.h>

// #include <ClickEncoder.h>

// // Rotary Encoder Inputs
// #define CLK 3 //interrupt pin
// #define DT 2 //interrupt pin
// #define SW 48

// int counter = 0;
// int currentStateCLK;
// int lastStateCLK;
// String currentDir ="";
// unsigned long lastButtonPress = 0;


// String inputString = "";         // a String to hold incoming data
// bool stringComplete = false;  // whether the string is complete




// void setup() {
//   Serial.begin(9600);

//   // Set encoder pins as inputs
//   pinMode(CLK,INPUT);
//   pinMode(DT,INPUT);
//   pinMode(SW, INPUT_PULLUP);

//   // Read the initial state of CLK
//   lastStateCLK = digitalRead(CLK);
  
//   attachInterrupt(digitalPinToInterrupt(CLK), updateEncoder, CHANGE);
// 	attachInterrupt(digitalPinToInterrupt(DT), updateEncoder, CHANGE);
// }

// void loop() {
//   // Read the button state
//   int btnState = digitalRead(SW);

//   //If we detect LOW signal, button is pressed
//   if (btnState == LOW) {
//     //if 50ms have passed since last LOW pulse, it means that the
//     //button has been pressed, released and pressed again
//     if (millis() - lastButtonPress > 50) {
//       Serial.println("Button pressed!");
//     }

//     // Remember last button press event
//     lastButtonPress = millis();
//   }

//   // Put in a slight delay to help debounce the reading
//   delay(1);
  
//   // // put your main code here, to run repeatedly:
//   // if(add_pill_button.getState() == HIGH){
//   //   addPill = true;
//   // }

//   // if(next_text_box.getState() == HIGH){
//   //   next = true;
//   // }


//   // if(addPill){
//   //   Serial.println(count);
//   //   if(stringComplete){
//   //     Serial.println("string completed");
//   //     switch (count)
//   //     {
//   //     case 0:
//   //       name = inputString;  
//   //       Serial.println(name);
//   //       break;
//   //     case 1:
//   //       r = inputString.toInt(); 
//   //       break;
//   //     case 2:
//   //       r = inputString.toInt(); 
//   //       break;
//   //     case 3:
//   //       count =0;
//   //       pill_edited = true;
//   //     default:
//   //       break;
//   //     }


//   //   }
//   //   if(next){
//   //       count +=1;
//   //       stringComplete = false;
//   //       Serial.println(count);
//   //       next = false;
//   //   }

//   //   if(pill_edited){
//   //       pre.add_pill(name,r,nb);
//   //       pre.print_prescription(); 
//   //       pill_edited = false;
//   //       addPill = false;
//   //   }

//   // }

// }


// void serialEvent() {
//   while (Serial.available()) {
//     // get the new byte:
//     char inChar = (char)Serial.read();
//     // add it to the inputString:
//     inputString += inChar;
//     // if the incoming character is a newline, set a flag so the main loop can
//     // do something about it:
//     if (inChar == '\n') {
//       stringComplete = true;
//     }
//   }
// }

// void updateEncoder(){
// 	// Read the current state of CLK
// 	currentStateCLK = digitalRead(CLK);

// 	// If last and current state of CLK are different, then pulse occurred
// 	// React to only 1 state change to avoid double count
// 	if (currentStateCLK != lastStateCLK  && currentStateCLK == 1){

// 		// If the DT state is different than the CLK state then
// 		// the encoder is rotating CCW so decrement
// 		if (digitalRead(DT) != currentStateCLK) {
// 			counter --;
// 			currentDir ="CCW";
// 		} else {
// 			// Encoder is rotating CW so increment
// 			counter ++;
// 			currentDir ="CW";
// 		}

// 		Serial.print("Direction: ");
// 		Serial.print(currentDir);
// 		Serial.print(" | Counter: ");
// 		Serial.println(counter);
// 	}

// 	// Remember last CLK state
// 	lastStateCLK = currentStateCLK;
// }