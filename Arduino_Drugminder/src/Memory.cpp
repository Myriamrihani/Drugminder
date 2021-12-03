#include <Arduino.h>
#include <EEPROM.h>
#include <Memory.h>

int eeAddress = 0;
int eeAdbool = sizeof(bool);
int eeAd_set = eeAdbool + sizeof(Settings);
bool used_EEPROM = false;

void EE_used(){
    EEPROM.put(eeAddress, true);
}

void EE_empty(){
    EEPROM.put(eeAddress, false);
}

void save_settings_in_EE(){
    EEPROM.put(eeAdbool, the_setting);
    EE_used();
}

void save_pills_in_EE(){
    Serial.println("debut EE ");
    EEPROM.put(eeAd_set, Inventory);
    EE_used();
    Serial.println("fin EE ");
}

void save_all_in_EE(){
    save_pills_in_EE();
    save_settings_in_EE();
}

Settings get_settings_from_EE(){
    return EEPROM.get(eeAdbool, the_setting);
}

Pill get_pill_from_EE(int pill_nb){
    Pill temp = EEPROM.get(eeAd_set+pill_nb*sizeof(Pill), Inventory[pill_nb]);
    return temp;
}
