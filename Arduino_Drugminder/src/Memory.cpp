#include <Arduino.h>
#include <EEPROM.h>
#include <Memory.h>

void save_in_EE(){
    EEPROM.put(eeAddress, the_setting);
    EEPROM.put(eeAd_set, Inventory);
}

Settings get_settings_from_EE(){
    return EEPROM.get(eeAddress, the_setting);
}

Pill get_pill_from_EE(int pill_nb){
    return EEPROM.get(eeAd_set+pill_nb*sizeof(Pill), Inventory[pill_nb]);
}