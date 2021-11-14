// In this file, the idea would be to have all the characteristics for one type of pills.
using namespace std;

#include <Arduino.h>
#include "Pills.h"

//class that would include:
    // - the pill number or name 
    // - Position [ rack number ]
    // - number of pills in the machine
    // - day and time of dispensing 
    // - ... 


Pill :: Pill(String name, int r, int nb){
    pill_name = name;
    rack = r;
    nb_pills = nb;
 }

void Pill::edit_pill(String name, int r, int nb){
    pill_name = name;
    rack = r;
    nb_pills = nb;
};

