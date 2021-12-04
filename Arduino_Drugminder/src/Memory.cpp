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
    // for(int i =0; i<NB_RACKS; i++){
    //     Pill_param temp;
    //     temp.name =Inventory[i].get_name(); 
    //     temp.ra = Inventory[i].get_rack();
    //     temp.ra_type = Inventory[i].get_rack_type(); 
    //     temp.amount = Inventory[i].get_nb();
    //     for(int j=0; j<WEEK_DAYS; j++){
    //         temp.al_day[j] = Inventory[i].get_alarm_day(j);
    //     }
    //     for(int j=0; j<NB_OF_ALARMS; j++){
    //         temp.al_t[j] = Inventory[i].get_alarm_t(j);
    //     }
    //     EEPROM.put(eeAd_set+i*sizeof(temp), temp);
    // }

    EEPROM.put(eeAd_set, Inventory);
    EE_used();
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
