#ifndef ALARM_H
#define ARALM_H
#include <Arduino.h>
#include <Settings.h>

using namespace std;

class Alarm
{
private:
    Time time = {0,0};
public:
    Alarm(Time t);
    ~Alarm();

    void edit_alarm_time(Time t);
    //this function would compare the alarm time with the clock and return true if they are equal.
    bool is_time();
};

Alarm::Alarm(Time t)
{
    time.hour = t.hour;
    time.minute = t.minute;
}

Alarm::~Alarm()
{
}




#endif /* arlarm_hpp */
