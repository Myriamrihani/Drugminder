#ifndef PILLS_H
#define PILLS_H
#include <Arduino.h>

#include <Settings.h>
using namespace std;

#define NB_RACKS 10

//attention quand on passe au code arduino il faut rajouter changer string en String

struct Pill_param{
    String name = "None";
    unsigned int ra;
    unsigned int amount;
    bool al_day[WEEK_DAYS] = {false};
    bool al_t[NB_OF_ALARMS]= {false};
};
class Pill{
    public:
    void edit_pill(Pill_param temp);
    int pill_parameters = 3;
    String get_name();
    int get_rack();
    int get_nb();
    void reset();
    
    void print_pill();
    
    private:
    String pill_name = "None";
    unsigned int rack = 0 ;
    unsigned int nb_pills = 0;
    //creer un tableau d'alarm
    bool alarm_day[WEEK_DAYS] = {false};
    bool alarm_t[NB_OF_ALARMS]= {false};
};


extern Pill Inventory [NB_RACKS];
extern int total_pills;

void get_prescription_size();

// struct Prescription{
//     Pill pill_1;
//     Pill pill_2;
//     Pill pill_3;
//     Pill pill_4;
//     Pill pill_5;
//     Pill pill_6;
//     Pill pill_7;
//     Pill pill_8;
//     Pill pill
// };
// class Prescription{
//     private:
//     Pill Inventory [NB_RACKS];
//     int total_pills = 0;

//     public:
//     void add_pill(String name, int r, int nb);
//     void print_prescription();

// };


#endif /* pill_hpp */