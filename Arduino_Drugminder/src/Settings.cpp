using namespace std;

#include <Arduino.h>
#include <Settings.h>


//All the set functions could be written as a direct interaction with the screen.
//This still needs to be determined

// void set_current_date(week_day d){
//     settings.current_date = d;
// }

// week_day get_current_date(){
//     return settings.current_date;
// }

// void edit_alarm_volume(double  v){
//     settings.vol = v;
// }
// double get_volume(){
//     return settings.vol;
// }

// void delete_password(){
//     settings.pass = 0;
// };

// void edit_password(unsigned int p){
//     settings.pass = p;
// };

// bool check_password(unsigned int p){
//     if(settings.pass == p){
//         return true;
//     }else {return false;}
// };