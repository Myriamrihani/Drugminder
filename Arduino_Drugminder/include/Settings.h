#ifndef SETTINGS_H
#define SETTINGS_H
#include <Arduino.h>
using namespace std;

#define NB_OF_ALARMS    6 

struct Time{
    unsigned int hour;
    unsigned int minute;

};

struct Date{
    String day;
    Time time;
};

enum settings { a_type, a_times, date, volume, password};
enum alarm_type {Sound, Light};
enum alarm_times { wake_up, morning, lunch, afternoon, dinner, bedtime };



struct Settings{
    Date current_date;
    double vol =0;
    unsigned int pass = 0;
    alarm_type type = Sound;
    Time alarms [NB_OF_ALARMS] = {{8, 0} ,{9, 0} , {12, 0}, {15, 0}, {19, 0}, {22, 0}};
}settings;





void change_alarm_type(alarm_type t){
    settings.type = t;
}

void set_alarms(alarm_times a_t, unsigned int hour , unsigned int minute);


void set_current_date();
// Date get_current_date();

void edit_alarm_volume();
double get_volume();


void delete_password(){
    settings.pass = 0;
};

void edit_password(unsigned int p){
    settings.pass = p;
};

bool check_password(unsigned int p){
    if(settings.pass == p){
        return true;
    }else {return false;}
};


#endif 