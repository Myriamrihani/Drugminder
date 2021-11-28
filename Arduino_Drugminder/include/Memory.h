#ifndef MEMORY_H
#define MEMORY_H
#include <Arduino.h>
#include <EEPROM.h>
#include <Settings.h>
#include <Pills.h>
using namespace std;

int eeAddress = 0;
int eeAd_set = eeAddress + sizeof(Settings);
int eeAd_Pill = eeAd_set + sizeof(Pill);
int eeAd_Inventory = eeAd_set + sizeof(Inventory);


void save_in_EE();


#endif