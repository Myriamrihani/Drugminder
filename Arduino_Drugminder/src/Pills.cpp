// In this file, the idea would be to have all the characteristics for one type of pills.
using namespace std;

#include <Arduino.h>
#include "Pills.h"

void Pill::edit_pill(String name, int r, int nb){
    pill_name = name;
    rack = r;
    nb_pills = nb;
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

void Pill::print_pill(){
    // cout<< "The Pill name is: " << pill_name << endl;
    // cout << "The Rack number is: " << rack <<endl;
    // cout << "The number of pills left is: " << nb_pills << endl;
    Serial.println("The Pill name is: ");
    Serial.print(pill_name);

    Serial.println("The rack number is: ");
    Serial.print(rack);

    Serial.println("The number of pills left is: ");
    Serial.print(nb_pills);
};


void Prescription::add_pill (String name, int r, int nb){
    total_pills += 1;
    Pill temp;
    temp.edit_pill(name, r, nb);

    for(unsigned int i=0; i < sizeof(Inventory); i++){
        if(Inventory[i].get_name() == "None"){
            Inventory[i].edit_pill(temp.get_name(), temp.get_rack(),temp.get_nb());
            break;
        }
    }
    
    temp.~Pill();

};

void Prescription::print_prescription(){
    for(unsigned int i=0; i < sizeof(Inventory); i++){
        if(Inventory[i].get_name() != "None"){
            Inventory[i].print_pill();
        }else break;
    }
};


