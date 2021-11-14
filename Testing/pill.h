//
//  pill.hpp
//  drugminder
//
//  Created by Myriam Rihani on 14.11.21.
//

#ifndef pill_h
#define pill_h

#include <stdio.h>
#include <iostream>
using namespace std;
#include <string>


//attention quand on passe au code arduino il faut rajouter changer string en String
class Pill{
    public:
    void edit_pill(string name, int r, int nb);
    string get_name();
    int get_rack();
    int get_nb();
    
    void print_pill();
    
    
    private:
    string pill_name = "None";
    int rack = 0 ;
    int nb_pills = 0;

};


class Prescription{
    private:
    Pill Inventory [10];
    int total_pills = 0;

    public:
    void add_pill(string name, int r, int nb);
    void print_prescription();

};


#endif /* pill_hpp */
