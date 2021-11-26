#ifndef PILLS_H
#define PILLS_H
#include <Arduino.h>

#include <Settings.h>
using namespace std;

#define NB_RACKS 10

//attention quand on passe au code arduino il faut rajouter changer string en String

class Pill{
    public:
    void edit_pill(String name, int r, int nb);
    int pill_parameters = 3;
    String get_name();
    int get_rack();
    int get_nb();
    
    void print_pill();
    
    private:
    String pill_name = "None";
    unsigned int rack = 0 ;
    unsigned int nb_pills = 0;
    //creer un tableau d'alarm
    bool alarm_day[WEEK_DAYS] = {false};
    bool alarm_t[NB_OF_ALARMS]= {false};
};


class Prescription{
    private:
    Pill Inventory [NB_RACKS];
    int total_pills = 0;

    public:
    void add_pill(String name, int r, int nb);
    void print_prescription();

};


#endif /* pill_hpp */