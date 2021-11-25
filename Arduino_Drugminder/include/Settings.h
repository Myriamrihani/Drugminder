#ifndef SETTINGS_H
#define SETTINGS_H
#include <Arduino.h>
using namespace std;

#define NB_OF_ALARMS    6 

enum set { a_type, a_times, date, volume, password};
enum alarm_type {Sound, Light};
enum week_day {Monday, Tuesday, Wednesday, Thrusday, Friday, Saturday, Sunday};
enum alarm_cycle {wake, morn, lun, after, din, bedtime};

struct Time{
    unsigned int hour;
    unsigned int minute;
};
struct Date{
    week_day day = Monday;
    alarm_cycle al_time = wake;
};
struct Day_cycle{
    Time wake_up = {8,0};
    Time morning = {9,0};
    Time lunch = {12,0};
    Time afternoon = {15,0};
    Time dinner = {19,0};
    Time bedtime = {22,0};
};
struct Settings{
    week_day current_date = Monday;
    double vol =0;
    unsigned int pass = 0;
    alarm_type type = Sound;
    Day_cycle cycle;
}settings;


void set_day_cycle();


void change_alarm_type(alarm_type t){
    settings.type = t;
}

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