#include <Arduino.h>
#include<Servo.h>
#include<Pills.h>

extern Servo servo;
extern const int dirPin_X;
extern const int stepPin_X;
extern const int dirPin_Y;
extern const int stepPin_Y;

extern const int switc_X;
extern const int switc_Y;


void trialF1(int rack_type_array[NB_RACKS] , int x_array[NB_RACKS] , int y_array[NB_RACKS]);