

#include "pill.h"
using namespace std;


//class that would include:
    // - the pill number or name
    // - Position [ rack number ]
    // - number of pills in the machine
    // - day and time of dispensing
    // - ...



void Pill::edit_pill(string name, int r, int nb){
    pill_name = name;
    rack = r;
    nb_pills = nb;
};

string Pill::get_name(){
    return pill_name;
};

int Pill::get_rack(){
    return rack;
};

int Pill::get_nb(){
    return nb_pills;
};

void Pill::print_pill(){
    cout<< "The Pill name is: " << pill_name << endl;
    cout << "The Rack number is: " << rack <<endl;
    cout << "The number of pills left is: " << nb_pills << endl;
};


void Prescription::add_pill (string name, int r, int nb){
    total_pills += 1;
    Pill temp;
    temp.edit_pill(name, r, nb);

    for(int i=0; i < sizeof(Inventory); i++){
        if(Inventory[i].get_name() == "None"){
            Inventory[i].edit_pill(temp.get_name(), temp.get_rack(),temp.get_nb());
            break;
        }
    }
    
    temp.~Pill();

};

void Prescription::print_prescription(){
    for(int i=0; i < sizeof(Inventory); i++){
        if(Inventory[i].get_name() != "None"){
            Inventory[i].print_pill();
        }else break;
    }
};
