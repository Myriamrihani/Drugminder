#ifndef PILLS_H
#define PILLS_H
#include <Arduino.h>



class Pill{
    public:
    Pill(String name, int r, int nb);

    void edit_pill(String name, int r, int nb);
    
    private:
    String pill_name = "None";
    int rack = 0 ; 
    int nb_pills = 0;

};


class Prescription{
    private:
    Pill Inventory [10];


    public:
    Prescription();
    ~Prescription();

};

#endif