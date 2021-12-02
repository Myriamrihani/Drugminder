// In this file, the idea would be to have all the characteristics for one type of pills.
using namespace std;

#include <Arduino.h>
#include "Pills.h"

Pill Inventory [NB_RACKS];
Pill_param temp_presc;
int total_pills = 0;
bool day_matrix[NB_RACKS][WEEK_DAYS] = {false};
bool time_matrix[NB_RACKS][NB_OF_ALARMS] = {false};
bool pills_to_dis[NB_RACKS] = {false};
bool pills_to_refill[NB_RACKS] = {false};
bool refill = false;


void set_alarm_matrix(){
    for(int i= 0; i<NB_RACKS; ++i ){
        for(int j =0; j<WEEK_DAYS; ++j){
            day_matrix[i][j] = Inventory[i].get_alarm_day(j);
        }
        for(int t =0; t<NB_OF_ALARMS; ++t){
            time_matrix[i][t] = Inventory[i].get_alarm_t(t);
        }        
    }
}


void Pill::edit_pill(Pill_param temp){
    pill_name = temp.name;
    rack = temp.ra;
    nb_pills = temp.amount;

    for(int i=0;i<WEEK_DAYS ; i++){
       alarm_day[i] = temp.al_day[i];
    }
    for(int j=0; j<NB_OF_ALARMS; j++){
        alarm_t[j] = temp.al_t[j];    
    }
};

String Pill::get_name(){
    return pill_name;
};

int Pill::get_rack(){
    return rack;
};

int Pill::get_nb(){
    return nb_pills;
};

void get_prescription_size(){
    int size = 0;
    for(int i=0; i<NB_RACKS ; i++){
        if(Inventory[i].get_name() != "None"){
            size +=1;
        }
    }
    total_pills = size;
};


void Pill::reset(){
    pill_name = "None";
    rack = 0;
    nb_pills = 0;
    for(int i=0;i<WEEK_DAYS ; i++){
        alarm_day[i] = {false};
    }
    for(int j=0; j<NB_OF_ALARMS; j++){
        alarm_t[j]= {false};
    }
}

void add_pill (Pill_param temp){
    total_pills += 1;
    for(unsigned int i=0; i < sizeof(Inventory); i++){
        if(Inventory[i].get_name() == "None"){
            Inventory[i].edit_pill(temp);
            break;
        }
    }

};

void delete_pill(int nb){
    total_pills -=1;
    Inventory[nb].reset();
}

void reset_pill_param(Pill_param temp){
    temp.name = "None";
    temp.ra = 0;
    temp.amount = 0;
    for(int i=0;i<WEEK_DAYS ; i++){
        temp.al_day[i] = {false};
    }
    for(int j=0; j<NB_OF_ALARMS; j++){
        temp.al_t[j]= {false};
    }   
}

bool Pill::get_alarm_t(int index){
    return alarm_t[index] ;
}
bool Pill::get_alarm_day(int index){
    return alarm_day[index];
}

void Pill::refill_pill(int amount){
    nb_pills +=amount;
}

int Pill::get_rack_type(){
    return type;
}

void check_refill(){
    for(int i=0; i<NB_RACKS; ++i){
        if(Inventory[i].get_nb() <= 2){
            refill = true;
            pills_to_refill[i] = true;
        }
    }
}

void ask_for_refill(){
    //display the pills name and rack to be refilled


}