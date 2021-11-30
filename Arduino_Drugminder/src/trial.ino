
#include<Servo.h>

Servo servo;
void trialF();
const int dirPin_X = 3;
const int stepPin_X = 4;
const int dirPin_Y = 5;
const int stepPin_Y = 6;
const int step_round = 200;
int x_cor=0;
int y_cor=0;
int x_box=3;
int y_box=3;

void setup()
{
 Serial.begin(9600);

  pinMode(stepPin_X, OUTPUT);
  pinMode(dirPin_X, OUTPUT);
    pinMode(stepPin_Y, OUTPUT);
  pinMode(dirPin_Y, OUTPUT);
      
}
void loop()
{
   trialF();



  while(1){}
}
