#ifndef MEMORY_H
#define MEMORY_H
#include <Arduino.h>
#include <EEPROM.h>
#include <Settings.h>
#include <Pills.h>
using namespace std;

extern int eeAddress;
extern int eeAdbool;
extern int eeAd_set;
extern bool used_EEPROM;
// int eeAd_Pill = eeAd_set + sizeof(Pill);
// int eeAd_Inventory = eeAd_set + sizeof(Inventory);

void EE_used();
void EE_empty();
void save_all_in_EE();
void save_pills_in_EE();
void save_settings_in_EE();
Settings get_settings_from_EE();

Pill get_pill_from_EE(int pill_nb);

#endif