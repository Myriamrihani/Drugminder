using namespace std;

#include <Alarm.h>


RTC_DS1307 rtc;
bool start_alarm = false;

uint8_t what_day(){
    DateTime now = rtc.now();
    uint8_t flag = now.dayOfTheWeek();
    
    return flag;

}

int what_time(){
    DateTime now = rtc.now();
    int hour = now.hour();
    int minutes = now.minute();
    alarm_cycle flag = nope ;

    if((hour == the_setting.cycle.wake_up.hour) & (the_setting.cycle.wake_up.minute == minutes)){
        flag = wake;
    } else if ((hour ==the_setting.cycle.morning.hour) & (the_setting.cycle.morning.minute == minutes) )
    {
        flag = morn;
    }else if ((hour == the_setting.cycle.lunch.hour) & (the_setting.cycle.lunch.minute == minutes))
    {
        flag = lun;
    }
    else if ((hour == the_setting.cycle.afternoon.hour) & (the_setting.cycle.afternoon.minute == minutes))
    {
        flag = after;
    }
    else if ((hour == the_setting.cycle.dinner.hour) & (the_setting.cycle.dinner.minute == minutes))
    {
        flag = din;
    }
    else if ((hour == the_setting.cycle.bedtime.hour) & (the_setting.cycle.bedtime.minute == minutes))
    {
        flag = bed;
    }

    return flag;

}

void check_alarm(){
    uint8_t day = what_day();
    int time = what_time();
    set_alarm_matrix();

    for(int rack=0; rack<NB_RACKS ; rack++){
        if(day_matrix[rack][day]){
            if(time_matrix[rack][time]){
                pills_to_dis[rack] = true;
                start_alarm = true;
            }
        }
    }
}

void play_alarm(){
    //display alarm pages
    //play sound
    //Serial.println("ALARM TIME");
    start_alarm = false;
}