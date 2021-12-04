#ifndef PILLS_H
#define PILLS_H
#include <Arduino.h>
// #include <Memory.h>
#include <Settings.h>
using namespace std;

#define NB_RACKS 10

//enum rack_type {A, B, C};
struct Pill_param{
    String name = "None";
    unsigned int ra = 0;
    unsigned int ra_type = 0;
    unsigned int amount = 0;
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
    bool get_alarm_t(int index);
    bool get_alarm_day(int index);
    int get_rack_type();
    void reset();
    void refill_pill(int amount);
    
    private:
    String pill_name = "None";
    unsigned int rack = 0 ;
    unsigned int nb_pills = 0;
    unsigned int type = 0;
    //creer un tableau d'alarm
    bool alarm_day[WEEK_DAYS] = {false};
    bool alarm_t[NB_OF_ALARMS]= {false};
};


extern Pill Inventory [NB_RACKS];
extern int total_pills;
extern Pill_param temp_presc;
extern bool day_matrix[NB_RACKS][WEEK_DAYS];
extern bool time_matrix[NB_RACKS][NB_OF_ALARMS];
extern bool pills_to_dis[NB_RACKS];
extern bool pills_to_refill[NB_RACKS];
extern bool refill;
extern int max_pills_per_type[RACK_TYPES];

void check_refill();
void set_alarm_matrix();
void get_prescription_size();
void add_pill (Pill_param temp);
void delete_pill(int nb);
void reset_pill_param(Pill_param temp);
void ask_for_refill();

#endif /* pill_hpp */