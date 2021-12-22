#include <Arduino.h>
#include<Servo.h>
#include<Pills.h>

extern Servo servo;
extern const int dirPin_X;
extern const int stepPin_X;
extern const int dirPin_Y;
extern const int stepPin_Y;
// extern const int switc=8;
extern const int switc_X;
extern const int switc_Y;

// extern int step_round_X; 
// extern int step_round_Y;
// extern int x_cor;
// extern int y_cor;
// extern int rack_type;
// extern int x_box;
// extern int y_box;


// void proccess_dis_data(int rack_type_array[] , int x_array[] , int y_array[]);
// void trialF();

void trialF1(int rack_type_array[NB_RACKS] , int x_array[NB_RACKS] , int y_array[NB_RACKS]);