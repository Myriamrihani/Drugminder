// In this file, the idea would be to have all the characteristics for one type of pills.
using namespace std;

#include <Arduino.h>
#include "Pills.h"

Pill Inventory [NB_RACKS];
int total_pills = 0;

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



// void Pill::print_pill(){
//     // cout<< "The Pill name is: " << pill_name << endl;
//     // cout << "The Rack number is: " << rack <<endl;
//     // cout << "The number of pills left is: " << nb_pills << endl;
//     Serial.println("The Pill name is: ");
//     Serial.print(pill_name);

//     Serial.println("The rack number is: ");
//     Serial.print(rack);

//     Serial.println("The number of pills left is: ");
//     Serial.print(nb_pills);  
// };
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

// void Prescription::print_prescription(){
//     for(unsigned int i=0; i < sizeof(Inventory); i++){
//         if(Inventory[i].get_name() != "None"){
//             Inventory[i].print_pill();
//         }else break;
//     }
// };


