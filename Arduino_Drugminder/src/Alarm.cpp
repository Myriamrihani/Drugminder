using namespace std;

#include <Alarm.h>

RTC_DS1307 rtc;
SoftwareSerial mySoftwareSerial(10,11); // RX, TX
DFRobotDFPlayerMini Player;
bool start_alarm = false;
bool sound_on = false;

int alarm_counter = 0;
bool stop_alarm_waiting = false;
bool is_dispensing = false;
bool dispensing_done = false;
int count_min = 30;
int ten_min_count = 0;

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

void play_sound(){
    if(the_setting.type == Sound || the_setting.type == Both){
        //Serial.println("Play sound");
        Player.volume(1);
        Player.play(3);
        
    }
}

void stop_sound(){
    Player.stop();
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

void blink_led(){
    if(the_setting.type == Light || the_setting.type == Both){
        digitalWrite(Led_pin,HIGH);
        delay(1000);
        digitalWrite(Led_pin,LOW);
    }
}


void play_alarm(){
    //display alarm pages
    //play sound
    Serial.println("ALARM TIME");
    Serial.println(alarm_counter);
    
    //if light we loose 2sec for delays so increment by 2
    if(the_setting.type == Light || the_setting.type == Both){
        alarm_counter += 2;
    }
    else{
        alarm_counter += 1;
    } 
    delay(1000);

    blink_led();

    if(alarm_counter == 60){
        alarm_counter = 0;
        count_min -=1;
        ten_min_count +=1;
    }

    if(ten_min_count == 10){
        Serial.println("ten minutes up");
        play_sound();
        ten_min_count = 0;
    }

    // stop_alarm_waiting = false;
    if((count_min ==0) || (stop_alarm_waiting == true)){ //the 1800 needs to be calibrated
        count_min = 30;
        
        if(stop_alarm_waiting == true){
            Serial.println("Pills will be dispensed");
            //stop_alarm_waiting = false;
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
    stop_sound();
    int rack_array[NB_RACKS] = {0};
    int container_array[NB_RACKS] = {0};
    int type_array[NB_RACKS] = {0};
    int NP = 0;
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

            NP +=1;
            rack_array[i] = rack_to_reach - 1;
            container_array[i] = container_to_reach;
            type_array[i] = Inventory[i].get_rack_type() + 1;

            //decrease the amout of pill in that rack 
            Inventory[i].take_a_pill();

            Serial.print("After dispensing, we should have ");
            Serial.print(Inventory[i].get_nb());
            Serial.print(" pills in rack ");
            Serial.println(rack_array[i]);
            
        }
    }

    for (int i = 0; i < NB_RACKS; i++)
    {
       Serial.println(rack_array[i]);
    }
    

    save_pills_in_EE();
    dispensing_done = true;
    trialF(type_array, container_array, rack_array);
    is_dispensing = false;
    start_alarm = false;
    Serial.println("Dispensing done");
}