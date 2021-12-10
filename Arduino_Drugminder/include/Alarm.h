#ifndef ALARM_H
#define ARALM_H
#include <Arduino.h>
#include <Wire.h>
#include <RTClib.h>
#include <Settings.h>
#include <Pills.h>
#include <Motor.h>
#include <Led.h>
#include <Memory.h>
#include "SoftwareSerial.h"
#include "DFRobotDFPlayerMini.h"

using namespace std;

#define Led_pin 53

extern RTC_DS1307 rtc;
extern bool start_alarm;
extern bool stop_alarm_waiting;
extern bool is_dispensing; 
extern bool dispensing_done;
extern int count_min;

extern SoftwareSerial mySoftwareSerial; // RX, TX
extern DFRobotDFPlayerMini Player;

uint8_t what_day();
int what_time();
void check_alarm();
void play_alarm();
void dispense_pills();
void play_sound();
void stop_sound();

#endif /* arlarm_hpp */
