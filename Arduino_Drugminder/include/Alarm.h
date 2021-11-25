#ifndef ALARM_H
#define ARALM_H
#include <Arduino.h>
#include <Settings.h>

using namespace std;

class Alarm
{
private:
    week_day day;
    Time alarm_time;
public:
    Alarm(week_day d, alarm_cycle t);
    ~Alarm();

    void edit_alarm(week_day d, alarm_cycle t);
    //this function would compare the alarm time with the clock and return true if they are equal.
    bool is_time();
};

#endif /* arlarm_hpp */
