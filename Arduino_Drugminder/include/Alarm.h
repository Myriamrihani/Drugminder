#ifndef ALARM_H
#define ARALM_H
#include <Arduino.h>
#include <Wire.h>
#include <RTClib.h>
#include <Settings.h>
#include <Pills.h>
#include <Motor.h>
#include <Led.h>

using namespace std;

extern RTC_DS1307 rtc;
extern bool start_alarm;
extern bool stop_alarm_waiting;
extern bool is_dispensing; 

uint8_t what_day();
int what_time();
void check_alarm();
void play_alarm();
void dispense_pills();

#endif /* arlarm_hpp */
