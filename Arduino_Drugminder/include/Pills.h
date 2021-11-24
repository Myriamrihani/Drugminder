#ifndef PILLS_H
#define PILLS_H
#include <Arduino.h>
#include <Alarm.h>
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
    Date get_date();
    
    void print_pill();
    Date date;
    
    
    private:
    String pill_name = "None";
    int rack = 0 ;
    int nb_pills = 0;

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