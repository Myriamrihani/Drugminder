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
    int seconde = now.second();
    alarm_cycle flag = nope;

    if(seconde == 0){
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
    }

    return flag;

}

void check_alarm(){
    uint8_t day = what_day();
    int time = what_time();
    set_alarm_matrix();

    if(time != nope){
        for(int rack=0; rack<NB_RACKS ; rack++){
            if(day_matrix[rack][day]){
                if(time_matrix[rack][time]){
                    pills_to_dis[rack] = true;
                    start_alarm = true;
                    day_matrix[rack][day] = false;
                    time_matrix[rack][time]= false;
                }
            }
        }
    }
}

void play_alarm(){
    //display alarm pages
    //play sound
    Serial.println("ALARM TIME");
    //code to make sure right pills are dispensed. 
    for(int i = 0; i<NB_RACKS; i++){
        Serial.println("the pills to dispense are :");
        if(pills_to_dis[i] == true){
            Serial.println(Inventory[i].get_name());
        }
        
    }
    start_alarm = false;
}

void dispense_pills(){
    for (int i = 0; i < NB_RACKS; i++)
    {
        //pills to dispense is an array that contains all the racks, 
        //with true if this rack is to dispense and false if not.
        //this should work, considering that pills_to_dis gives back the right pills to dispense
        if(pills_to_dis[i]==true){
            int rack_to_go_to = Inventory[i].get_rack();
            int total_containers = 0;
            int container_to_reach = 0;
            switch (Inventory[i].get_rack_type())
            {
            case 0:
                total_containers = 16;
                break;
            case 1:
                total_containers = 12;
                break;

            case 2 :
                total_containers = 10;
                break;
            default:
                break;
            }

            //for me, the first container is the one near the refilling handle.
            //and the first rack the oen at the bottom. 
            //This would not change my code, but should change john's if he does not take the same considerations
            
        }
    }
    
}