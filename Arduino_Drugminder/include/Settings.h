#ifndef SETTINGS_H
#define SETTINGS_H
#include <Arduino.h>
using namespace std;

#define NB_OF_ALARMS    6 
#define WEEK_DAYS       7
#define MAX_VOLUME      30
#define MONTH_DAY       31
#define MAX_H           24
#define MAX_MIN         60

// enum set { a_type, a_times, date, volume, password};
enum alarm_type {Sound, Light, Both, None};
// enum week_day {Monday=0, Tuesday=1, Wednesday=2, Thrusday=3, Friday=4, Saturday=5, Sunday=6};
enum alarm_cycle {wake, morn, lun, after, din, bed};

extern const char* week_str[WEEK_DAYS];
extern const char* month_num[MONTH_DAY];

struct Time{
    unsigned int hour;
    unsigned int minute;
};

struct Date{
    int day = 0;
    int month_day = 1;
    Time time = {0,0};
    unsigned int year = 2021;
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
    Date current_date;
    int vol =0;
    unsigned int pass = 0;
    alarm_type type = Sound;
    Day_cycle cycle;
};

extern Settings the_setting;

// void set_day_cycle();

// void set_current_date();
// // Date get_current_date();

// void edit_alarm_volume();
// double get_volume();

// void delete_password();
// void edit_password(unsigned int p);
// bool check_password(unsigned int p);

// void change_alarm_type(alarm_type t);


#endif 