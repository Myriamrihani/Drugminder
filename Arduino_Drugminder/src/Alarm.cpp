using namespace std;

#include <Alarm.h>


RTC_DS1307 rtc;
bool start_alarm = false;

int alarm_counter = 0;
bool stop_alarm_waiting = false;
bool is_dispensing = false;

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

    // DateTime now = rtc.now();
    // int minutes = now.minute();
    // int hour = now.hour();
    // int min_waiting_done = minutes+30;
    // int hour_done = hour;
    // stop_alarm_waiting = false;

    // if(min_waiting_done > 59){
    //     min_waiting_done = min_waiting_done - 60;
    //     hour_done +=1;

    //     if(hour_done > 23){
    //         hour_done= 0;
    //     }
    // }

    // if((hour == hour_done) & (min_waiting_done == minutes)){
    //     stop_alarm_waiting = true;
    // }
    Serial.println("ALARM TIME");
    Serial.println(alarm_counter);
    //code to make sure right pills are dispensed. 
    for(int i = 0; i<NB_RACKS; i++){
        Serial.println("the pills to dispense are :");
        if(pills_to_dis[i] == true){
            Serial.println(drug_name_list[i]);
        }
        
    }

    alarm_counter += 1;
    // stop_alarm_waiting = false;
    if((alarm_counter >= 1800) or (stop_alarm_waiting == true)){ //the 100 needs to be calibrated
        alarm_counter = 0;
        
        if(stop_alarm_waiting == true){
            
            Serial.println("Pills will be dispensed");
            stop_alarm_waiting = false;
            start_alarm = false;
        }
        else{
            start_alarm = false;
            Serial.println("Pills won't be dispensed anymore");
        }
        
        
        
    }

}

//This function is called when DISPENSE button is pressed!
void dispense_pills(){
    int rack_array[] = {};
    int container_array[] = {};
    int type_array[] = {};

    for (int i = 0; i < NB_RACKS; i++)
    {
        //pills to dispense is an array that contains all the racks, 
        //with true if this rack is to dispense and false if not.
        //this should work, considering that pills_to_dis gives back the right pills to dispense
        if(pills_to_dis[i]==true){

            int rack_to_reach = Inventory[i].get_rack();
            int container_to_reach = Inventory[i].get_next_container();
            Serial.print("in rack ");
            Serial.println(rack_to_reach);
            Serial.print (" we have ");
            Serial.print(Inventory[i].get_nb());
            Serial.println(" pills");
            Serial.print(" We take the pill from container nb ");
            Serial.println(container_to_reach);

            //for me, the first container is the one near the refilling handle.
            //and the first rack the oen at the bottom. 
            //This would not change my code, but should change john's if he does not take the same considerations
            //john_function(rack_to_reach, container_to_reach, Inventory[i].get_rack_type());
           
           //at the end reset that pill to dispense
            pills_to_dis[i] = false;

            rack_array[size_t(rack_array) +1 ] = rack_to_reach;
            container_array[size_t(container_array) + 1] = container_to_reach;
            type_array[size_t(type_array) + 1] = Inventory[i].get_rack_type();

            //decrease the amout of pill in that rack 
            Inventory[i].take_a_pill();
            Serial.print("After dispensing, we should have ");
            Serial.print(Inventory[i].get_nb());
            Serial.print(" pills in rack ");
            Serial.println(rack_to_reach);

            

        }
    }

    proccess_dis_data(type_array, container_array, rack_array);
    is_dispensing = false;
    Serial.println("Dispensing done");
}