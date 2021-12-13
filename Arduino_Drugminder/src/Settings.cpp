using namespace std;

#include <Settings.h>
const char* type_list[RACK_TYPES] = {"A","B","C"};
const char* week_str[WEEK_DAYS] = {"Sun", "Mo" , "Tue", "Wed", "Thu", "Fri", "Sat"};
const char* alphabet_list[L_ALPHABET] = {"","a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"};
const char* month_str[NB_MONTHS] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};

Settings the_setting;

Time get_alarm_time(int index){
    Time al;
    switch(index){
        case 0:
            al = the_setting.cycle.wake_up;
            break;
        case 1:
            al = the_setting.cycle.morning;
            break;
        case 2:
            al = the_setting.cycle.lunch;
            break;
        case 3:
            al = the_setting.cycle.afternoon;
            break;
        case 4:
            al = the_setting.cycle.dinner;
            break;
        case 5:
            al = the_setting.cycle.bedtime;
            break;
    }

    return al; 
}
