#ifndef SETTINGS_H
#define SETTINGS_H
#include <Arduino.h>

using namespace std;

#define TEXT_INT        0
#define TEXT_WEEKDAY    1
#define SLIDER          2
#define LISTBOX_POS     3
#define TXT_ALPHABET    4
#define TXT_RACK_TYPE   5
#define TEXT_MONTH      6

#define NB_OF_ALARMS    6 
#define WEEK_DAYS       7
#define MAX_VOLUME      30
#define MONTH_DAY       31
#define MAX_H           24
#define MAX_MIN         60
#define NB_DIGITS       10
#define NB_MONTHS       12
#define MAX_NB_PILLS    20
#define L_ALPHABET      27
#define RACK_TYPES      3
#define RTC_MAX_YEAR    2099

enum alarm_type {None, Sound, Light, Both};
enum alarm_cycle {wake, morn, lun, after, din, bed, nope};

extern const char* week_str[WEEK_DAYS];
extern const char* alphabet_list[L_ALPHABET];
extern const char* type_list[RACK_TYPES];
extern const char* month_str[NB_MONTHS];

struct Time{
    int hour;
    int minute;
};

struct Date{
    int day = 0;
    int month_day = 1;
    Time time = {0,0};
    unsigned int year = 2021;
    int month = 0;
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
    bool password_set = false;
    unsigned int pass_dg1 = 0;
    unsigned int pass_dg2 = 0;
    unsigned int pass_dg3 = 0;
    unsigned int pass_dg4 = 0;
    alarm_type type = Sound;
    Day_cycle cycle;
};

extern Settings the_setting;

Time get_alarm_time(int index);

#endif 