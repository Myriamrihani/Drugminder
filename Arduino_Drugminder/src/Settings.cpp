using namespace std;

#include <Settings.h>

const char* week_str[WEEK_DAYS] = {"Mo" , "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
const char* month_num[MONTH_DAY] = {"1","2","3","4","5","6","7","8","9","10","11","12","13","14","15","16","17","18","19","20","21"};


Settings the_setting;
//All the set functions could be written as a direct interaction with the screen.
//This still needs to be determined

// void set_current_date(week_day d){
//     the_setting.current_date = d;
// }

// week_day get_current_date(){
//     return the_setting.current_date;
// }

// void edit_alarm_volume(double  v){
//     the_setting.vol = v;
// }
// double get_volume(){
//     return the_setting.vol;
// }

// void delete_password(){
//     the_setting.pass = 0;
// }

// void edit_password(unsigned int p){
//     the_setting.pass = p;
// }

// bool check_password(unsigned int p){
//     if(the_setting.pass == p){
//         return true;
//     }else {return false;}
// }

// void change_alarm_type(alarm_type t){
//     the_setting.type = t;
// }