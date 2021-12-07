
#include<Servo.h>

Servo servo;
void trialF();
const int dirPin_X = 3;
const int stepPin_X = 4;
const int dirPin_Y = 5;
const int stepPin_Y = 6;
int step_round_X; 
int step_round_Y=93;
int x_array[]={2,4};
int y_array[]={2,4};
int x_cor=0;
int y_cor=0;
int rack_type_array[]={1,3,1};
int rack_type;
int x_box;
int y_box;

void setup()
{
 Serial.begin(9600);

  pinMode(stepPin_X, OUTPUT);
  pinMode(dirPin_X, OUTPUT);
    pinMode(stepPin_Y, OUTPUT);
  pinMode(dirPin_Y, OUTPUT);
      
}
void loop(){
 Serial.println(sizeof(x_array)/ sizeof(int));
for(int i=0;i<sizeof(x_array)/ sizeof(int);i++){
  Serial.println(i);
  if(i==0){
    x_box=x_array[0];
    }
    else{
      x_box=x_array[i]-x_array[i-1];
      }

      
  if(i==0){
    y_box=y_array[0];
    }
    else{
      y_box=y_array[i]-y_array[i-1];
      }

rack_type=rack_type_array[i];
  switch(rack_type){
    case 1:
     step_round_X = 50;
    break;
    case 2:
     step_round_X= 80;
    break;
    case 3:
     step_round_X=96;
    break; 
    
    }
    
   trialF();

 }

  while(1){}
}
