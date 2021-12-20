
#include<Servo.h>

Servo servo;
void trialF1();

const int dirPin_X = 3;
const int stepPin_X = 4;
const int dirPin_Y = 5;
const int stepPin_Y = 6;

int switc=8;
int switc_X=9;
int switc_Y=10;
int step_round_X; 
int step_round_Y=116;
int x_array[]={2,7};
int y_array[]={5,8};
int x_cor=0;
int y_cor=0;
int rack_type_array[]={1,1};
int rack_type;
int x_box;
int y_box;
int x_step=0;
int y_step=0;
int x_offset=0;
int y_offset=25;

void setup()
{

  pinMode(stepPin_X, OUTPUT);
  pinMode(dirPin_X, OUTPUT);
    pinMode(stepPin_Y, OUTPUT);
  pinMode(dirPin_Y, OUTPUT);
  pinMode(switc,INPUT);
   Serial.begin(9600);

}
void loop()
{
 
 
   trialF1();
 while(1);
 

 
}
