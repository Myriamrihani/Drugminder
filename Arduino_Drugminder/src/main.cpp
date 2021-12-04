#include <Arduino.h>
//<App !Start!>
// FILE: [Screen_GUI_V2.ino]
// Created by GUIslice Builder version: [0.17.0]
//
// GUIslice Builder Generated File
//
// For the latest guides, updates and support view:
// https://github.com/ImpulseAdventure/GUIslice
//
//<App !End!>

// ------------------------------------------------
// Headers to include
// ------------------------------------------------
#include "Screen_GUI_V2_GSLC.h"
#include <Pills.h>
#include <Alarm.h>
#include <Settings.h>
#include <Memory.h>

// ------------------------------------------------
// Program Globals
// ------------------------------------------------

// Save some element references for direct access
//<Save_References !Start!>
gslc_tsElemRef* Listbox_prescription= NULL;
gslc_tsElemRef* Listbox_prescription_2= NULL;
gslc_tsElemRef* add_fri_check     = NULL;
gslc_tsElemRef* add_mo_check      = NULL;
gslc_tsElemRef* add_pfilled       = NULL;
gslc_tsElemRef* add_rack          = NULL;
gslc_tsElemRef* add_rack_type     = NULL;
gslc_tsElemRef* add_sat_check     = NULL;
gslc_tsElemRef* add_sun_check     = NULL;
gslc_tsElemRef* add_thu_check     = NULL;
gslc_tsElemRef* add_tue_check     = NULL;
gslc_tsElemRef* add_wed_check     = NULL;
gslc_tsElemRef* after_h           = NULL;
gslc_tsElemRef* after_min         = NULL;
gslc_tsElemRef* alarm_progress    = NULL;
gslc_tsElemRef* bed_h             = NULL;
gslc_tsElemRef* bed_min           = NULL;
gslc_tsElemRef* date_set          = NULL;
gslc_tsElemRef* day_set           = NULL;
gslc_tsElemRef* deadline_time     = NULL;
gslc_tsElemRef* default_next      = NULL;
gslc_tsElemRef* default_time      = NULL;
gslc_tsElemRef* del_p_bttn        = NULL;
gslc_tsElemRef* del_pw_bttn       = NULL;
gslc_tsElemRef* dinn_h            = NULL;
gslc_tsElemRef* dinn_min          = NULL;
gslc_tsElemRef* dispense_progress = NULL;
gslc_tsElemRef* edit_after_check  = NULL;
gslc_tsElemRef* edit_bed_check    = NULL;
gslc_tsElemRef* edit_dinn_check   = NULL;
gslc_tsElemRef* edit_fri_check    = NULL;
gslc_tsElemRef* edit_lunch_check  = NULL;
gslc_tsElemRef* edit_mo_check     = NULL;
gslc_tsElemRef* edit_morn_check   = NULL;
gslc_tsElemRef* edit_p_bttn       = NULL;
gslc_tsElemRef* edit_p_bttn_2     = NULL;
gslc_tsElemRef* edit_pfilled      = NULL;
gslc_tsElemRef* edit_rack_nb      = NULL;
gslc_tsElemRef* edit_rack_type    = NULL;
gslc_tsElemRef* edit_sat_check    = NULL;
gslc_tsElemRef* edit_sun_check    = NULL;
gslc_tsElemRef* edit_thu_check    = NULL;
gslc_tsElemRef* edit_tue_check    = NULL;
gslc_tsElemRef* edit_wake_check   = NULL;
gslc_tsElemRef* edit_wed_check    = NULL;
gslc_tsElemRef* empty_rack_txt    = NULL;
gslc_tsElemRef* full_date         = NULL;
gslc_tsElemRef* hour_set          = NULL;
gslc_tsElemRef* light_check       = NULL;
gslc_tsElemRef* listbox_pill_given= NULL;
gslc_tsElemRef* lunch_h           = NULL;
gslc_tsElemRef* lunch_min         = NULL;
gslc_tsElemRef* m_pElemListbox1   = NULL;
gslc_tsElemRef* m_pElemTextbox2   = NULL;
gslc_tsElemRef* min_set           = NULL;
gslc_tsElemRef* morn_h            = NULL;
gslc_tsElemRef* morn_min          = NULL;
gslc_tsElemRef* name_char_1       = NULL;
gslc_tsElemRef* name_char_2       = NULL;
gslc_tsElemRef* name_char_3       = NULL;
gslc_tsElemRef* name_char_4       = NULL;
gslc_tsElemRef* name_char_5       = NULL;
gslc_tsElemRef* name_char_6       = NULL;
gslc_tsElemRef* name_char_7       = NULL;
gslc_tsElemRef* name_char_8       = NULL;
gslc_tsElemRef* new_after_check   = NULL;
gslc_tsElemRef* new_bed_check     = NULL;
gslc_tsElemRef* new_dinn_check    = NULL;
gslc_tsElemRef* new_lunch_check   = NULL;
gslc_tsElemRef* new_morn_check    = NULL;
gslc_tsElemRef* new_pw_digit_1    = NULL;
gslc_tsElemRef* new_pw_digit_2    = NULL;
gslc_tsElemRef* new_pw_digit_3    = NULL;
gslc_tsElemRef* new_pw_digit_4    = NULL;
gslc_tsElemRef* new_wake_check    = NULL;
gslc_tsElemRef* pills_refilled    = NULL;
gslc_tsElemRef* pw_digit_1        = NULL;
gslc_tsElemRef* pw_digit_2        = NULL;
gslc_tsElemRef* pw_digit_3        = NULL;
gslc_tsElemRef* pw_digit_4        = NULL;
gslc_tsElemRef* refill_bttn       = NULL;
gslc_tsElemRef* refill_bttn_2     = NULL;
gslc_tsElemRef* sel_drug_del      = NULL;
gslc_tsElemRef* sel_drug_edit2    = NULL;
gslc_tsElemRef* sel_drug_edit3    = NULL;
gslc_tsElemRef* sel_drug_edit4    = NULL;
gslc_tsElemRef* sel_drug_refill   = NULL;
gslc_tsElemRef* sound_check       = NULL;
gslc_tsElemRef* trip_bttn         = NULL;
gslc_tsElemRef* trip_date         = NULL;
gslc_tsElemRef* trip_day          = NULL;
gslc_tsElemRef* trip_hour         = NULL;
gslc_tsElemRef* trip_min          = NULL;
gslc_tsElemRef* vol_slider        = NULL;
gslc_tsElemRef* wake_h            = NULL;
gslc_tsElemRef* wake_min          = NULL;
gslc_tsElemRef* wrong_pw_text     = NULL;
//<Save_References !End!>

// Define debug message function
static int16_t DebugOut(char ch) { if (ch == (char)'\n') Serial.println(""); else Serial.write(ch); return 0; }

// ------------------------------------------------
// Callback Methods
// ------------------------------------------------
// Common Button callback
bool CbBtnCommon(void* pvGui,void *pvElemRef,gslc_teTouch eTouch,int16_t nX,int16_t nY)
{
  // Typecast the parameters to match the GUI and element types
  gslc_tsGui*     pGui     = (gslc_tsGui*)(pvGui);
  gslc_tsElemRef* pElemRef = (gslc_tsElemRef*)(pvElemRef);
  gslc_tsElem*    pElem    = gslc_GetElemFromRef(pGui,pElemRef);

  if ( eTouch == GSLC_TOUCH_UP_IN ) {
    // From the element's ID we can determine which button was pressed.
    switch (pElem->nId) {
//<Button Enums !Start!>
      case E_ELEM_BTN1:
        gslc_SetPageCur(&m_gui, Prescription);
        break;
      case E_ELEM_BTN2:
        gslc_SetPageCur(&m_gui, settings);
        break;
      case E_ELEM_BTN3:
        gslc_SetPageCur(&m_gui,  med_list);
        break;
      case E_ELEM_BTN5:
        gslc_SetPageCur(&m_gui, Default);
        break;
      case E_ELEM_BTN4:
        gslc_SetPageCur(&m_gui, Default);
        break;
      case E_ELEM_BTN7:
        gslc_SetPageCur(&m_gui, refill_1);
        break;
      case E_ELEM_BTN8:
        gslc_SetPageCur(&m_gui, trip);
        break;
      case E_ELEM_BTN9:
        gslc_SetPageCur(&m_gui, add_edit);
        break;
      case E_ELEM_BTN10:
        gslc_SetPageCur(&m_gui, Default);
        break;
      case E_ELEM_BTN13:
        gslc_SetPageCur(&m_gui, settings);
        break;
      case E_ELEM_BTN11:
        gslc_SetPageCur(&m_gui, settings);
        break;
      case E_ELEM_BTN12:
        gslc_SetPageCur(&m_gui, settings);
        break;
      case E_ELEM_BTN15:
        break;
      case E_ELEM_BTN16:
        break;
      case E_ELEM_BTN14:
        gslc_SetPageCur(&m_gui, settings);
        break;
      case E_ELEM_BTN17:
        gslc_SetPageCur(&m_gui, pw_options);
        break;
      case E_ELEM_BTN18:
        gslc_SetPageCur(&m_gui, Prescription);
        break;
      case E_ELEM_BTN19:
        gslc_SetPageCur(&m_gui, new_prescription_2);
        break;
      case E_ELEM_BTN21:
        gslc_SetPageCur(&m_gui, new_prescription_1);
        break;
      case E_ELEM_BTN49:
        gslc_SetPageCur(&m_gui, new_prescription_3);
        break;
      case E_ELEM_BTN22:
        gslc_SetPageCur(&m_gui, Default);
        break;
      case E_ELEM_BTN23:
        gslc_SetPageCur(&m_gui, new_prescription_1);
        break;
      case E_ELEM_BTN24:
        gslc_SetPageCur(&m_gui, edit_prescription_1);
        break;
      case E_ELEM_BTN25:
        gslc_SetPageCur(&m_gui, Prescription);
        break;
      case E_ELEM_BTN26:
        gslc_SetPageCur(&m_gui, Prescription);
        break;
      case E_ELEM_BTN27:
        gslc_SetPageCur(&m_gui, edit_prescription_2);
        break;
      case E_ELEM_BTN32:
        gslc_SetPageCur(&m_gui, delete_conf);
        break;
      case E_ELEM_BTN30:
        gslc_SetPageCur(&m_gui, edit_prescription_1);
        break;
      case E_ELEM_BTN31:
        gslc_SetPageCur(&m_gui, edit_prescription_3);
        break;
      case E_ELEM_BTN29:
        gslc_SetPageCur(&m_gui, edit_prescription_2);
        break;
      case E_ELEM_BTN53:
        gslc_SetPageCur(&m_gui, edit_prescription_4);
        break;
      case E_ELEM_BTN35:
        gslc_SetPageCur(&m_gui, Prescription);
        break;
      case E_ELEM_BTN36:
        gslc_SetPageCur(&m_gui, Prescription);
        break;
      case E_ELEM_BTN37:
        gslc_SetPageCur(&m_gui, refill_2);
        break;
      case E_ELEM_BTN38:
        gslc_SetPageCur(&m_gui, refill_1);
        break;
      case E_ELEM_BTN39:
        gslc_SetPageCur(&m_gui, Prescription);
        break;
      case E_ELEM_BTN40:
        gslc_SetPageCur(&m_gui, dispensing);
        break;
      case E_ELEM_BTN41:
        gslc_SetPageCur(&m_gui, Prescription);
        break;
      case E_ELEM_BTN42:
        gslc_SetPageCur(&m_gui, Default);
        break;
      case E_ELEM_BTN43:
        gslc_SetPageCur(&m_gui, delete_done);
        break;
      case E_ELEM_BTN44:
        gslc_SetPageCur(&m_gui, edit_prescription_1);
        break;
      case E_ELEM_BTN45:
        gslc_SetPageCur(&m_gui, pw_del_conf);
        break;
      case E_ELEM_BTN46:
        gslc_SetPageCur(&m_gui, Set_password);
        break;
      case E_ELEM_BTN58:
        gslc_SetPageCur(&m_gui, settings);
        break;
      case E_ELEM_BTN47:
        gslc_SetPageCur(&m_gui, Default);
        break;
      case E_ELEM_BTN48:
        gslc_SetPageCur(&m_gui, pw_options);
        break;
      case E_ELEM_BTN50:
        gslc_SetPageCur(&m_gui, new_prescription_2);
        break;
      case E_ELEM_BTN52:
        gslc_SetPageCur(&m_gui, Prescription);
        break;
      case E_ELEM_BTN54:
        gslc_SetPageCur(&m_gui, edit_prescription_3);
        break;
      case E_ELEM_BTN55:
        gslc_SetPageCur(&m_gui, Prescription);
        break;
      case E_ELEM_BTN56:
        gslc_SetPageCur(&m_gui, settings);
        break;
      case E_ELEM_BTN57:
        gslc_SetPageCur(&m_gui, settings);
        break;
//<Button Enums !End!>
      default:
        break;
    }
  }
  return true;
}
//<Checkbox Callback !Start!>
//<Checkbox Callback !End!>
//<Keypad Callback !Start!>
//<Keypad Callback !End!>
//<Spinner Callback !Start!>
//<Spinner Callback !End!>
bool CbListbox(void* pvGui, void* pvElemRef, int16_t nSelId)
{
  gslc_tsGui*     pGui     = (gslc_tsGui*)(pvGui);
  gslc_tsElemRef* pElemRef = (gslc_tsElemRef*)(pvElemRef);
  gslc_tsElem*    pElem    = gslc_GetElemFromRef(pGui, pElemRef);
  char            acTxt[MAX_STR + 1];
  
  if (pElemRef == NULL) {
    return false;
  }

  // From the element's ID we can determine which listbox was active.
  switch (pElem->nId) {
//<Listbox Enums !Start!>
    case SETTINGS_LISTBOX:
      if (nSelId != XLISTBOX_SEL_NONE) {
        gslc_ElemXListboxGetItem(&m_gui, pElemRef, nSelId, acTxt, MAX_STR);
      }
      break;
    case PRESCRIPTION_LISTBOX:
      if (nSelId != XLISTBOX_SEL_NONE) {
        gslc_ElemXListboxGetItem(&m_gui, pElemRef, nSelId, acTxt, MAX_STR);
      }
      break;

    case E_ELEM_LISTBOX4:
      if (nSelId != XLISTBOX_SEL_NONE) {
        gslc_ElemXListboxGetItem(&m_gui, pElemRef, nSelId, acTxt, MAX_STR);
      }
      break;
//<Listbox Enums !End!>
    default:
      break;
  }
  return true;
}
//<Draw Callback !Start!>
//<Draw Callback !End!>

// Callback function for when a slider's position has been updated
bool CbSlidePos(void* pvGui,void* pvElemRef,int16_t nPos)
{
  gslc_tsGui*     pGui     = (gslc_tsGui*)(pvGui);
  gslc_tsElemRef* pElemRef = (gslc_tsElemRef*)(pvElemRef);
  gslc_tsElem*    pElem    = gslc_GetElemFromRef(pGui,pElemRef);
  int16_t         nVal;

  // From the element's ID we can determine which slider was updated.
  switch (pElem->nId) {
//<Slider Enums !Start!>
    case VOLUME_SLIDER:
      // Fetch the slider position
      nVal = gslc_ElemXSliderGetPos(pGui,vol_slider);
      break;

//<Slider Enums !End!>
    default:
      break;
  }

  return true;
}
//<Tick Callback !Start!>
//<Tick Callback !End!>

const int button1Pin = 22;
const int button2Pin = 23;
const int button3Pin = 24;
const int button4Pin = 25;

// Rotary Encoder Inputs
#define CLK 3 //interrupt pin
#define DT 2 //interrupt pin
#define SW 30

#define NB_SETTINGS_ITEM 5

int currentStateCLK;
int lastStateCLK;
volatile int currentDir = 0;
int status1 = false;
int status2 = false;
int status3 = false;
int status4 = false;
int enc_btnState = false;
bool encoder_enabled = false;
bool enc_btnAction = false;
bool pw_enabled = false;
bool rack_taken[NB_RACKS] = {false};
bool pw_for_pres = false;
int settings_item = 0;
int pos_encoder =0;
unsigned int temp_pw_1 = 0;
unsigned int temp_pw_2 = 0;
unsigned int temp_pw_3 = 0;
unsigned int temp_pw_4 = 0;
unsigned int temp_pills = 1;
unsigned int free_rack_index = 0;
unsigned int previous_rack = 0;

unsigned int temp_char_1 = 0;
unsigned int temp_char_2 = 0;
unsigned int temp_char_3 = 0;
unsigned int temp_char_4 = 0;
unsigned int temp_char_5 = 0;
unsigned int temp_char_6 = 0;
unsigned int temp_char_7 = 0;
unsigned int temp_char_8 = 0;

char drug_name_list[NB_RACKS][10];
//contains index of inventory for a pill we are editing
int inventory_i = 0;


//functions declaration
void btn1_action(int16_t current_page);
void btn2_action(int16_t current_page);
void btn3_action(int16_t current_page);
void btn4_action(int16_t current_page);
void updateEncoder();
void check_encoder(int16_t current_page);
int change_element_encoder(int value, int min_val, int max_val, gslc_tsElemRef * element, int element_type);
int check_rack_avaible(gslc_tsElemRef * element, int value);
int checkbox_encoder_nav(int value, int min_val, int max_val);
void reset_default_elements_add();
void load_pill_data_to_elements(int value);
void save_new_pill();
void save_edited_pill();
void delete_pill_prescription(int pill_pos_inventory);
void edit_prescription_listbox(gslc_tsElemRef * listbox);
void load_inventory();
void load_settings();
void edit_gui_element(gslc_tsElemRef * element,int element_type,int value);

void setup()
{
  // ------------------------------------------------
  // Initialize
  // ------------------------------------------------
  Serial.begin(9600);
  // Wait for USB Serial 
  //delay(1000);  // NOTE: Some devices require a delay after Serial.begin() before serial port can be used

  gslc_InitDebug(&DebugOut);
  pinMode(button1Pin, INPUT);
  pinMode(button2Pin, INPUT);
  pinMode(button3Pin, INPUT);
  pinMode(button4Pin, INPUT);
   // Set encoder pins as inputs
  pinMode(CLK,INPUT);
  pinMode(DT,INPUT);
  pinMode(SW, INPUT_PULLUP);

   // Read the initial state of CLK
  lastStateCLK = digitalRead(CLK);
  
  attachInterrupt(digitalPinToInterrupt(CLK), updateEncoder, CHANGE);
  attachInterrupt(digitalPinToInterrupt(DT), updateEncoder, CHANGE);
  
  InitGUIslice_gen();
  gslc_ElemSetVisible(&m_gui,wrong_pw_text,false);


  if (! rtc.begin()) {
    Serial.println("Couldn't find RTC");
    //while (1);
  }
 


  if (! rtc.isrunning()) {
    Serial.println("RTC is NOT running!");
    // following line sets the RTC to the date & time this sketch was compiled
    rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
    // This line sets the RTC with an explicit date & time, for example to set
    // January 21, 2014 at 3am you would call:
    // rtc.adjust(DateTime(2021, 12, 3, 17, 52, 0));
  }
  // DateTime hh = rtc.now();
  // Serial.print(hh.year(), DEC);        
  // Serial.print('/');        
  // Serial.print(hh.month(), DEC);        
  // Serial.print('/');        
  // Serial.print(hh.day(), DEC);

  rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));
  // for (int i = 0 ; i < EEPROM.length() ; i++) {
  //   EEPROM.write(i, 0);
  // }
  EEPROM.get(eeAddress, used_EEPROM);
  Serial.println(used_EEPROM);
  if(used_EEPROM){
    EEPROM.get(eeAdbool, the_setting);
    //load the settings
    load_settings();

    Serial.println(get_settings_from_EE().vol);
    for(int i =0; i<NB_RACKS; i++){
      // Pill_param pill_load;
      // EEPROM.get(eeAd_set+i*sizeof(pill_load), pill_load);
      // add_pill(pill_load); 
      EEPROM.get(eeAd_set + i*sizeof(Pill), Inventory[i]);
      Serial.println(Inventory[i].get_rack());
    }

    load_inventory();
  }
}

// -----------------------------------
// Main event loop
// -----------------------------------
void loop()
{
  check_alarm();
  check_refill();
  if(start_alarm){play_alarm();}
  if(refill){ask_for_refill();}

  
  //else{//mettre tout le reste, le bool start_alarm doit jouer comme une interruption}
  if(digitalRead(button1Pin) == true){
    status1 = !status1;
    btn1_action(gslc_GetPageCur(&m_gui));
    }while(digitalRead(button1Pin) == true);
      delay(10);

  if(digitalRead(button2Pin) == true){
    status2 = !status2;
    btn2_action(gslc_GetPageCur(&m_gui));
    }while(digitalRead(button2Pin) == true);
      delay(10);

  if(digitalRead(button3Pin) == true){
    status3 = !status3;
    btn3_action(gslc_GetPageCur(&m_gui));
    }while(digitalRead(button3Pin) == true);
      delay(10);

  if(digitalRead(button4Pin) == true){
    status4 = !status4;
    btn4_action(gslc_GetPageCur(&m_gui));
    }while(digitalRead(button4Pin) == true);
      delay(10);

   // Read the encoder button state
  if(digitalRead(SW) == LOW && encoder_enabled == true){
    enc_btnState = !enc_btnState;
    //Serial.println("Button pressed!");
    enc_btnAction = true;
    }while(digitalRead(SW) == LOW && encoder_enabled == true);
      delay(10);

  // Put in a slight delay to help debounce the reading
  delay(1);
  
  check_encoder(gslc_GetPageCur(&m_gui));
  gslc_Update(&m_gui);  
}

void check_encoder(int16_t current_page){
  switch (current_page){
    case settings:
      encoder_enabled = true;
      settings_item = change_element_encoder(settings_item,0,NB_SETTINGS_ITEM-1,m_pElemListbox1,LISTBOX_POS);

      if(enc_btnAction == true){
        switch(settings_item){
          case 0:
            gslc_SetPageCur(&m_gui,alarm_times);
            break;
          case 1:
            gslc_SetPageCur(&m_gui,Alarm_type);
            break;
          case 2:
            gslc_SetPageCur(&m_gui,Date_hour);
            break;
          case 3:
            gslc_SetPageCur(&m_gui,Volume);
            break;
          case 4:
            if(pw_enabled == true){
              gslc_ElemSetVisible(&m_gui,del_pw_bttn,true);
              gslc_SetPageCur(&m_gui,password);
            }
            else{
              gslc_ElemSetVisible(&m_gui,del_pw_bttn,false);
              gslc_SetPageCur(&m_gui,pw_options);
            }
            break;
        }
        enc_btnAction = false;
      }
      break;
    
    case alarm_times:
      encoder_enabled = true;
      switch(pos_encoder){
        case 0:
          the_setting.cycle.wake_up.hour = change_element_encoder(the_setting.cycle.wake_up.hour,0,MAX_H-1,wake_h,TEXT_INT);
          break;
        case 1:
          the_setting.cycle.wake_up.minute = change_element_encoder(the_setting.cycle.wake_up.minute,0,MAX_MIN-1,wake_min,TEXT_INT);
          break;
        case 2:
          the_setting.cycle.morning.hour = change_element_encoder(the_setting.cycle.morning.hour,0,MAX_H-1,morn_h,TEXT_INT);
          break;
        case 3:
          the_setting.cycle.morning.minute = change_element_encoder(the_setting.cycle.morning.minute,0,MAX_MIN-1,morn_min,TEXT_INT);
          break;
        case 4:
          the_setting.cycle.lunch.hour = change_element_encoder(the_setting.cycle.lunch.hour,0,MAX_H-1,lunch_h,TEXT_INT);
          break;
        case 5:
          the_setting.cycle.lunch.minute = change_element_encoder(the_setting.cycle.lunch.minute,0,MAX_MIN-1,lunch_min,TEXT_INT);
          break;
        case 6:
          the_setting.cycle.afternoon.hour = change_element_encoder(the_setting.cycle.afternoon.hour,0,MAX_H-1,after_h,TEXT_INT);
          break;
        case 7:
          the_setting.cycle.afternoon.minute = change_element_encoder(the_setting.cycle.afternoon.minute,0,MAX_MIN-1,after_min,TEXT_INT);
          break;
         case 8:
          the_setting.cycle.dinner.hour = change_element_encoder(the_setting.cycle.dinner.hour,0,MAX_H-1,dinn_h,TEXT_INT);
          break;
        case 9:
          the_setting.cycle.dinner.minute = change_element_encoder(the_setting.cycle.dinner.minute,0,MAX_MIN-1,dinn_min,TEXT_INT);
          break;
         case 10:
          the_setting.cycle.bedtime.hour = change_element_encoder(the_setting.cycle.bedtime.hour,0,MAX_H-1,bed_h,TEXT_INT);
          break;
        case 11:
          the_setting.cycle.bedtime.minute = change_element_encoder(the_setting.cycle.bedtime.minute,0,MAX_MIN-1,bed_min,TEXT_INT);
          break;
      }

      if(enc_btnAction == true){
        pos_encoder++;
      }
      //go to beginning after all changed (loop)
      if(pos_encoder>=12){pos_encoder=0;}

      enc_btnAction = false;
      break;

    case Date_hour:
      encoder_enabled = true;
      switch (pos_encoder)
      {
      case 0:
        the_setting.current_date.day = change_element_encoder(the_setting.current_date.day,0,WEEK_DAYS-1,day_set,TEXT_WEEKDAY);
        break;
      case 1:
        the_setting.current_date.month_day = change_element_encoder(the_setting.current_date.month_day,1,MONTH_DAY-1,date_set,TEXT_INT);
        break;
      
      case 2:
        the_setting.current_date.time.hour= change_element_encoder(the_setting.current_date.time.hour,0,MAX_H-1,hour_set,TEXT_INT);
        break;

      case 3:
        the_setting.current_date.time.minute= change_element_encoder(the_setting.current_date.time.minute,0,MAX_MIN-1,min_set,TEXT_INT);
        break;
      
      default:
        break;
      }
      
      if(enc_btnAction == true){
        pos_encoder++;
      }
      enc_btnAction = false;
    break;

    case Volume:
      encoder_enabled = true;
      the_setting.vol = change_element_encoder(the_setting.vol,0,MAX_VOLUME-1,vol_slider,SLIDER);
      break;

    case password:
      encoder_enabled = true;
      switch (pos_encoder)
      {
      case 0:
        temp_pw_1 = change_element_encoder(temp_pw_1,0,NB_DIGITS-1,pw_digit_1,TEXT_INT);    
        break;

      case 1:
        temp_pw_2 = change_element_encoder(temp_pw_2,0,NB_DIGITS-1,pw_digit_2,TEXT_INT);
      break;

      case 2:
        temp_pw_3 = change_element_encoder(temp_pw_3,0,NB_DIGITS-1,pw_digit_3,TEXT_INT);    
      break;

      case 3:
        temp_pw_4 = change_element_encoder(temp_pw_4,0,NB_DIGITS-1,pw_digit_4,TEXT_INT);       
      break;

      case 4:
        //check if password is correct
        if(temp_pw_1 == the_setting.pass_dg1 && temp_pw_2 == the_setting.pass_dg2 && temp_pw_3== the_setting.pass_dg3 && temp_pw_4 == the_setting.pass_dg4){
          //password is correct
          gslc_ElemSetVisible(&m_gui,wrong_pw_text,false);
          temp_pw_1 = temp_pw_2 = temp_pw_3 = temp_pw_4 = pos_encoder = 0;
          //check if we want to go to Prescription
          if(pw_for_pres == true){
            gslc_SetPageCur(&m_gui,Prescription);
            pw_for_pres = false;
          }
          //else go to password options
          else{
            gslc_SetPageCur(&m_gui,pw_options);
          }
          //put every digit ON DISPLAY to 0
          char s[12];
          gslc_ElemSetTxtStr(&m_gui,pw_digit_1,itoa(0, s, 10 ));
          gslc_ElemSetTxtStr(&m_gui,pw_digit_2,itoa(0, s, 10 ));
          gslc_ElemSetTxtStr(&m_gui,pw_digit_3,itoa(0, s, 10 ));
          gslc_ElemSetTxtStr(&m_gui,pw_digit_4,itoa(0, s, 10 ));
        }
        else{
          //password is not correct
          gslc_ElemSetVisible(&m_gui,wrong_pw_text,true);
          pos_encoder = 0;
        }
      
      default:
        break;
      }
      
      if(enc_btnAction == true){
        pos_encoder++;
      }
      enc_btnAction = false;

      break;
    break;

    case Set_password:
      encoder_enabled = true;
      switch (pos_encoder)
      {
      case 0:
        temp_pw_1 = change_element_encoder(temp_pw_1,0,NB_DIGITS-1,new_pw_digit_1,TEXT_INT);       
        break;

      case 1:
         temp_pw_2 = change_element_encoder(temp_pw_2,0,NB_DIGITS-1,new_pw_digit_2,TEXT_INT);      
       break;

      case 2:
        temp_pw_3 = change_element_encoder(temp_pw_3,0,NB_DIGITS-1,new_pw_digit_3,TEXT_INT);    
      break;

      case 3:
        temp_pw_4 = change_element_encoder(temp_pw_4,0,NB_DIGITS-1,new_pw_digit_4,TEXT_INT);     
      break;  
      
      default:
        break;
      }
      
      if(enc_btnAction == true && pos_encoder<3){
        pos_encoder++;
      }
      enc_btnAction = false;
      break;

    case new_prescription_1:
      encoder_enabled = true;
      switch(pos_encoder){
        case 0:
          temp_presc.ra = check_rack_avaible(add_rack,temp_presc.ra);
          break;
        case 1:
          temp_presc.ra_type = (change_element_encoder(temp_presc.ra_type,0,RACK_TYPES-1,add_rack_type,TXT_RACK_TYPE));
          break;
        case 2:
          temp_presc.amount = change_element_encoder(temp_presc.amount,1,max_pills_per_type[temp_presc.ra_type],add_pfilled,TEXT_INT);
          break;
        case 3:
          temp_char_1 = change_element_encoder(temp_char_1,0,L_ALPHABET-1,name_char_1,TXT_ALPHABET);
          break;
        case 4:
          temp_char_2 = change_element_encoder(temp_char_2,0,L_ALPHABET-1,name_char_2,TXT_ALPHABET);
          break;
        case 5:
          temp_char_3 = change_element_encoder(temp_char_3,0,L_ALPHABET-1,name_char_3,TXT_ALPHABET);
          break;
        case 6:
          temp_char_4 = change_element_encoder(temp_char_4,0,L_ALPHABET-1,name_char_4,TXT_ALPHABET);
          break;
        case 7:
          temp_char_5 = change_element_encoder(temp_char_5,0,L_ALPHABET-1,name_char_5,TXT_ALPHABET);
          break;
        case 8:
          temp_char_6 = change_element_encoder(temp_char_6,0,L_ALPHABET-1,name_char_6,TXT_ALPHABET);
          break;
        case 9:
          temp_char_7 = change_element_encoder(temp_char_7,0,L_ALPHABET-1,name_char_7,TXT_ALPHABET);
          break;
        case 10:
          temp_char_8 = change_element_encoder(temp_char_8,0,L_ALPHABET-1,name_char_8,TXT_ALPHABET);
          break;
        
      }

      if(enc_btnAction == true && pos_encoder<10){
        pos_encoder++;
      }
      enc_btnAction = false;
      break;
    
    case new_prescription_2:
      encoder_enabled = true;
      pos_encoder = checkbox_encoder_nav(pos_encoder,0,WEEK_DAYS-1);

      switch(pos_encoder){
        case 0:
          if(enc_btnAction == true){gslc_ElemXCheckboxToggleState(&m_gui,add_mo_check);}
          break;
        case 1:
          if(enc_btnAction == true){gslc_ElemXCheckboxToggleState(&m_gui,add_tue_check);}
          break;
        case 2:
          if(enc_btnAction == true){gslc_ElemXCheckboxToggleState(&m_gui,add_wed_check);}
          break;
        case 3:
          if(enc_btnAction == true){gslc_ElemXCheckboxToggleState(&m_gui,add_thu_check);}
          break;
        case 4:
          if(enc_btnAction == true){gslc_ElemXCheckboxToggleState(&m_gui,add_fri_check);}
          break;
        case 5:
          if(enc_btnAction == true){gslc_ElemXCheckboxToggleState(&m_gui,add_sat_check);}
          break;
        case 6:
          if(enc_btnAction == true){gslc_ElemXCheckboxToggleState(&m_gui,add_sun_check);}
          break;
      }

      enc_btnAction = false;
      break;

    case new_prescription_3:
      encoder_enabled = true;
       pos_encoder = checkbox_encoder_nav(pos_encoder,0,NB_OF_ALARMS-1);

      switch(pos_encoder){
        case 0:
          if(enc_btnAction == true){gslc_ElemXCheckboxToggleState(&m_gui,new_wake_check);}
          break;
        case 1:
          if(enc_btnAction == true){gslc_ElemXCheckboxToggleState(&m_gui,new_morn_check);}
          break;
        case 2:
          if(enc_btnAction == true){gslc_ElemXCheckboxToggleState(&m_gui,new_lunch_check);}
          break;
        case 3:
          if(enc_btnAction == true){gslc_ElemXCheckboxToggleState(&m_gui,new_after_check);}
          break;
        case 4:
          if(enc_btnAction == true){gslc_ElemXCheckboxToggleState(&m_gui,new_dinn_check);}
          break;
        case 5:
          if(enc_btnAction == true){gslc_ElemXCheckboxToggleState(&m_gui,new_bed_check);}
          break;
      }

      enc_btnAction = false;
      break;

    case edit_prescription_1:
      encoder_enabled = true;
      pos_encoder = change_element_encoder(pos_encoder,0,NB_RACKS-1,Listbox_prescription,LISTBOX_POS);
      break;
      
    case edit_prescription_2:
      encoder_enabled = true;
      switch(pos_encoder){
        case 0:
          temp_presc.ra = check_rack_avaible(edit_rack_nb,temp_presc.ra);
          break;
        case 1:
          temp_presc.ra_type = (change_element_encoder(temp_presc.ra_type,0,RACK_TYPES-1,edit_rack_type,TXT_RACK_TYPE));
          break;  
        case 2:
          temp_presc.amount = change_element_encoder(temp_presc.amount,1,max_pills_per_type[temp_presc.ra_type],edit_pfilled,TEXT_INT);
          break;
      }
       if(enc_btnAction == true && pos_encoder<2){
        pos_encoder++;
      }
      enc_btnAction = false;
      break;
      
    case edit_prescription_3:
      encoder_enabled = true;
      pos_encoder = checkbox_encoder_nav(pos_encoder,0,WEEK_DAYS-1);

      switch(pos_encoder){
        case 0:
          if(enc_btnAction == true){gslc_ElemXCheckboxToggleState(&m_gui,edit_mo_check);}
          break;
        case 1:
          if(enc_btnAction == true){gslc_ElemXCheckboxToggleState(&m_gui,edit_tue_check);}
          break;
        case 2:
          if(enc_btnAction == true){gslc_ElemXCheckboxToggleState(&m_gui,edit_wed_check);}
          break;
        case 3:
          if(enc_btnAction == true){gslc_ElemXCheckboxToggleState(&m_gui,edit_thu_check);}
          break;
        case 4:
          if(enc_btnAction == true){gslc_ElemXCheckboxToggleState(&m_gui,edit_fri_check);}
          break;
        case 5:
          if(enc_btnAction == true){gslc_ElemXCheckboxToggleState(&m_gui,edit_sat_check);}
          break;
        case 6:
          if(enc_btnAction == true){gslc_ElemXCheckboxToggleState(&m_gui,edit_sun_check);}
          break;
      }
      enc_btnAction = false;
      break;

    case edit_prescription_4:
      encoder_enabled = true;
      pos_encoder = checkbox_encoder_nav(pos_encoder,0,NB_OF_ALARMS-1);

      switch(pos_encoder){
        case 0:
          if(enc_btnAction == true){gslc_ElemXCheckboxToggleState(&m_gui,edit_wake_check);}
          break;
        case 1:
          if(enc_btnAction == true){gslc_ElemXCheckboxToggleState(&m_gui,edit_morn_check);}
          break;
        case 2:
          if(enc_btnAction == true){gslc_ElemXCheckboxToggleState(&m_gui,edit_lunch_check);}
          break;
        case 3:
          if(enc_btnAction == true){gslc_ElemXCheckboxToggleState(&m_gui,edit_after_check);}
          break;
        case 4:
          if(enc_btnAction == true){gslc_ElemXCheckboxToggleState(&m_gui,edit_dinn_check);}
          break;
        case 5:
          if(enc_btnAction == true){gslc_ElemXCheckboxToggleState(&m_gui,edit_bed_check);}
          break;
      }

      enc_btnAction = false;
      break;

    case refill_1:
      encoder_enabled = true;
      pos_encoder = change_element_encoder(pos_encoder,0,NB_RACKS-1,Listbox_prescription_2,LISTBOX_POS);
      break;
    
    case refill_2:
      encoder_enabled = true;
      temp_pills = change_element_encoder(temp_pills,1,max_pills_per_type[Inventory[inventory_i].get_rack_type()]-Inventory[inventory_i].get_nb(),pills_refilled,TEXT_INT);
      break;

    case trip:
      encoder_enabled = true;
      break;

    default:
      encoder_enabled = false;
      break;
  }

}

void updateEncoder(){

  if(encoder_enabled == true){
    // Read the current state of CLK
    currentStateCLK = digitalRead(CLK);
  
    // If last and current state of CLK are different, then pulse occurred
    // React to only 1 state change to avoid double count
    if (currentStateCLK != lastStateCLK){
  
      // If the DT state is different than the CLK state then
      // the encoder is rotating CW so increment
      if (digitalRead(DT) != currentStateCLK) {
        currentDir =1;
      } else {
        // Encoder is rotating CCW so decrement
        currentDir =-1;
      }
  
      //Serial.print("Direction: ");
      //Serial.println(currentDir);
    }
  
    // Remember last CLK state
    lastStateCLK = currentStateCLK;
  }

}

void btn1_action(int16_t current_page){
  switch(current_page){
    
    case Default:
      gslc_SetPageCur(&m_gui,med_list);
      break;
      
    case Prescription:
      gslc_SetPageCur(&m_gui,add_edit);
      break;
      
    case Alarm_type:
      gslc_ElemXCheckboxToggleState(&m_gui,sound_check);
      break;
  }
}

void btn2_action(int16_t current_page){
  switch(current_page){
    char s[12];
    case Default:
      if(pw_enabled == true){
        pw_for_pres = true;
        gslc_SetPageCur(&m_gui,password);
      }
      else{
        gslc_SetPageCur(&m_gui,Prescription);
      }
      break;
      
    case Prescription:
      gslc_SetPageCur(&m_gui,refill_1);
      break;
      
    case Alarm_type:
      gslc_ElemXCheckboxToggleState(&m_gui,light_check);
      break;

    case add_edit:
      gslc_SetPageCur(&m_gui,new_prescription_1);
      break;

    case edit_prescription_1:
      //add condition to check if a prescription has been selected
       if(rack_taken[pos_encoder] == true){

        //find corresponding pill in Inventory
        for (int i = 0; i < NB_RACKS; i++){
          if(Inventory[i].get_rack()==(pos_encoder+1)){
            inventory_i = i;
            break;
          }
        }

        //get data and display it in next page
        gslc_ElemSetTxtStr(&m_gui,sel_drug_del,drug_name_list[pos_encoder]);
        gslc_ElemSetTxtStr(&m_gui,empty_rack_txt,itoa(pos_encoder+1,s,10));
        gslc_SetPageCur(&m_gui,delete_conf);
        //pos_encoder = 0;
      }
      break;
      
    case pw_options:
      //a password must exist to perform this
      if(pw_enabled==true){
        gslc_SetPageCur(&m_gui,pw_del_conf);
      }
      break;
  }
}

void btn3_action(int16_t current_page){
  switch(current_page){
    
    case Default:
      gslc_SetPageCur(&m_gui,settings);
      break;
      
    case Prescription:
      gslc_SetPageCur(&m_gui,trip);
      break;
      
    case add_edit:
      gslc_SetPageCur(&m_gui,edit_prescription_1);
      break;
      
    case edit_prescription_1:
      //add condition to check if a prescription has been selected
       if(rack_taken[pos_encoder] == true){
        //call function to get data and display in next page
        gslc_ElemSetTxtStr(&m_gui,sel_drug_edit2,drug_name_list[pos_encoder]);
        gslc_ElemSetTxtStr(&m_gui,sel_drug_edit3,drug_name_list[pos_encoder]);
        gslc_ElemSetTxtStr(&m_gui,sel_drug_edit4,drug_name_list[pos_encoder]);
        load_pill_data_to_elements(pos_encoder);

        gslc_SetPageCur(&m_gui,edit_prescription_2);
        pos_encoder = 0;
      }
      break;
      
    case edit_prescription_2:
      gslc_SetPageCur(&m_gui,edit_prescription_3);
      pos_encoder = 0;
      break;

    case edit_prescription_3:
      gslc_SetPageCur(&m_gui,edit_prescription_4);
      pos_encoder = 0;
      break;

    case edit_prescription_4:
      //must save all data too
      gslc_SetPageCur(&m_gui,Prescription);
      save_edited_pill();
      pos_encoder = 0;
      break;

    case new_prescription_1:
      gslc_SetPageCur(&m_gui,new_prescription_2);
      pos_encoder = 0;
      break;

    case new_prescription_2:
      gslc_SetPageCur(&m_gui,new_prescription_3);
      pos_encoder = 0;
      break;

    case new_prescription_3:
      //must save all data too
      gslc_SetPageCur(&m_gui,Prescription);
      save_new_pill();
      reset_default_elements_add();
      break;

    case delete_conf:
      //must delete the prescription too
      delete_pill_prescription(inventory_i);
      gslc_SetPageCur(&m_gui,delete_done);
      break;

    case delete_done:
      gslc_SetPageCur(&m_gui,Default);
      break;

    case refill_1:
      //add condition to check if a prescription has been selected
      if(rack_taken[pos_encoder] == true){
        //call function to get data and display in next page
        gslc_ElemSetTxtStr(&m_gui,sel_drug_refill,drug_name_list[pos_encoder]);

        //find corresponding pill in Inventory
        for (int i = 0; i < NB_RACKS; i++){
          if(Inventory[i].get_rack()==(pos_encoder+1)){
            inventory_i = i;
            break;
          }
        }
        temp_pills = 1;
        gslc_ElemSetTxtStr(&m_gui,pills_refilled,"1");
        gslc_SetPageCur(&m_gui,refill_2);
        pos_encoder = 0;
      }
      break;

    case refill_2:
      //add the pills added in right prescription too
      gslc_SetPageCur(&m_gui,Prescription);
      Inventory[inventory_i].refill_pill(temp_pills);
      
      //Serial.println(Inventory[inventory_i].get_nb());
      pos_encoder = 0;
      break;

    case pw_options:
      gslc_SetPageCur(&m_gui,Set_password);
      break;

    case pw_del_conf:
      //delete the password too
      pw_enabled = false;
      the_setting.password_set = false;
      gslc_SetPageCur(&m_gui,settings);
      break;

    case Set_password:
      char s[12];
      //new password is set in the settings
      the_setting.password_set = true;
      the_setting.pass_dg1 = temp_pw_1;
      the_setting.pass_dg2 = temp_pw_2;
      the_setting.pass_dg3 = temp_pw_3;
      the_setting.pass_dg4 = temp_pw_4;
      temp_pw_1 = temp_pw_2 = temp_pw_3 = temp_pw_4 = pos_encoder = 0;
      pw_enabled = true;
      gslc_ElemSetVisible(&m_gui,del_pw_bttn,true);
      gslc_SetPageCur(&m_gui,settings);
      gslc_ElemSetTxtStr(&m_gui,new_pw_digit_1,itoa(0, s, 10 ));
      gslc_ElemSetTxtStr(&m_gui,new_pw_digit_2,itoa(0, s, 10 ));
      gslc_ElemSetTxtStr(&m_gui,new_pw_digit_3,itoa(0, s, 10 ));
      gslc_ElemSetTxtStr(&m_gui,new_pw_digit_4,itoa(0, s, 10 ));
      break;

    case alarm_times:
      //save all the alarm times too
      pos_encoder = 0;
      gslc_SetPageCur(&m_gui,settings);
      break;

    case trip:
      //despensing function too
      gslc_SetPageCur(&m_gui,dispensing);
      break;

    case end_dispensing:
      gslc_SetPageCur(&m_gui,Default);
      break;
  }
}

void btn4_action(int16_t current_page){
  switch(current_page){
    char s[12];
    case med_list:
      gslc_SetPageCur(&m_gui,Default);
      break;

    case password:
      gslc_SetPageCur(&m_gui,Default);
      pw_for_pres = false;
      temp_pw_1 = temp_pw_2 = temp_pw_3 = temp_pw_4 = pos_encoder = 0;
      gslc_ElemSetTxtStr(&m_gui,pw_digit_1,itoa(0, s, 10 ));
      gslc_ElemSetTxtStr(&m_gui,pw_digit_2,itoa(0, s, 10 ));
      gslc_ElemSetTxtStr(&m_gui,pw_digit_3,itoa(0, s, 10 ));
      gslc_ElemSetTxtStr(&m_gui,pw_digit_4,itoa(0, s, 10 ));
      break;

    case settings:
      gslc_SetPageCur(&m_gui,Default);
      save_settings_in_EE();
      break;

    case Volume:
      gslc_SetPageCur(&m_gui,settings);
      break;

    case Date_hour:
      pos_encoder = 0;
      gslc_SetPageCur(&m_gui,settings);
      break;

    case Alarm_type:
      gslc_SetPageCur(&m_gui,settings);

      if(gslc_ElemXCheckboxGetState(&m_gui,sound_check) == true && gslc_ElemXCheckboxGetState(&m_gui,light_check) == true){
        the_setting.type = Both;
      }else if(gslc_ElemXCheckboxGetState(&m_gui,sound_check) == true && gslc_ElemXCheckboxGetState(&m_gui,light_check) == false){
        the_setting.type = Sound;
      }else if(gslc_ElemXCheckboxGetState(&m_gui,sound_check) ==false && gslc_ElemXCheckboxGetState(&m_gui,light_check) == true){
        the_setting.type = Light;
      }else{the_setting.type = None;}

      break;

    case pw_options:
      gslc_SetPageCur(&m_gui,settings);
      break;

    case alarm_times:
      pos_encoder = 0;
      gslc_SetPageCur(&m_gui,settings);
      break;

    case Set_password:
      gslc_SetPageCur(&m_gui,pw_options);
      temp_pw_1 = temp_pw_2 = temp_pw_3 = temp_pw_4 = pos_encoder = 0;
      gslc_ElemSetTxtStr(&m_gui,new_pw_digit_1,itoa(0, s, 10 ));
      gslc_ElemSetTxtStr(&m_gui,new_pw_digit_2,itoa(0, s, 10 ));
      gslc_ElemSetTxtStr(&m_gui,new_pw_digit_3,itoa(0, s, 10 ));
      gslc_ElemSetTxtStr(&m_gui,new_pw_digit_4,itoa(0, s, 10 ));
      break;

    case pw_del_conf:
      gslc_SetPageCur(&m_gui,pw_options);
      break;
      
    case Prescription:
      gslc_SetPageCur(&m_gui,Default);
      break;

    case add_edit:
      gslc_SetPageCur(&m_gui,Prescription);
      break;

    case new_prescription_1:
      gslc_SetPageCur(&m_gui,Prescription);
      reset_default_elements_add();
      break;

    case new_prescription_2:
      gslc_SetPageCur(&m_gui,new_prescription_1);
      pos_encoder = 0;
      break;

    case new_prescription_3:
      gslc_SetPageCur(&m_gui,new_prescription_2);
      pos_encoder = 0;
      break;

    case edit_prescription_1:
      gslc_SetPageCur(&m_gui,Prescription);
      pos_encoder = 0;
      break;

    case edit_prescription_2:
      gslc_SetPageCur(&m_gui,edit_prescription_1);
      pos_encoder = 0;
      break;

    case edit_prescription_3:
      gslc_SetPageCur(&m_gui,edit_prescription_2);
      pos_encoder = 0;
      break;

    case edit_prescription_4:
      gslc_SetPageCur(&m_gui,edit_prescription_3);
      pos_encoder = 0;
      break;

    case refill_1:
      gslc_SetPageCur(&m_gui,Prescription);
      pos_encoder = 0;
      break;

    case refill_2:
      gslc_SetPageCur(&m_gui,refill_1);
      pos_encoder = 0;
      break;

    case trip:
      gslc_SetPageCur(&m_gui,Prescription);
      break;

    case delete_conf:
      gslc_SetPageCur(&m_gui,edit_prescription_1);
      break;
  }
}

int change_element_encoder(int value, int min_val, int max_val, gslc_tsElemRef * element, int element_type){
  char s[12];
  if(currentDir == 1 && value<max_val){
    value++;
    currentDir=0;

    switch (element_type)
    {
    case TEXT_INT:
      gslc_ElemSetTxtStr(&m_gui,element,itoa(value, s, 10 ));
      break;

    case TEXT_WEEKDAY:
      gslc_ElemSetTxtStr(&m_gui,element,week_str[value]);
      break;

    case SLIDER:
      gslc_ElemXSliderSetPos(&m_gui,element,value);
      break;
    
    case LISTBOX_POS:
      gslc_ElemXListboxSetSel(&m_gui,element,value);
      break;
    
    case TXT_ALPHABET:
      gslc_ElemSetTxtStr(&m_gui,element,alphabet_list[value]);
      break;
    
    case TXT_RACK_TYPE:
      gslc_ElemSetTxtStr(&m_gui,element,type_list[value]);
      break;

    default:
      break;
    }
    
  }
  else if(currentDir == -1 && value>min_val){
    value--;
    currentDir=0;
    switch (element_type)
    {
    case TEXT_INT:
      gslc_ElemSetTxtStr(&m_gui,element,itoa(value, s, 10 ));
      break;

    case TEXT_WEEKDAY:
      gslc_ElemSetTxtStr(&m_gui,element,week_str[value]);
      break;

    case SLIDER:
      gslc_ElemXSliderSetPos(&m_gui,element,value);
      break;
    
    case LISTBOX_POS:
      gslc_ElemXListboxSetSel(&m_gui,element,value);
      break;

    case TXT_ALPHABET:
      gslc_ElemSetTxtStr(&m_gui,element,alphabet_list[value]);
      break;

    case TXT_RACK_TYPE:
      gslc_ElemSetTxtStr(&m_gui,element,type_list[value]);
      break;

    default:
      break;
    }
  }

  return value;    
}

int check_rack_avaible(gslc_tsElemRef * element, int value){
  unsigned int nb_free = 0;
  for(int i = 0;i<NB_RACKS;i++){
    if(rack_taken[i]==false){
      nb_free++;
    }
  }
  int free_rack[nb_free];
  int j = 0;

  for(int i = 0;i<NB_RACKS;i++){
    if(rack_taken[i]==false){
      free_rack[j] = i;
      j++;
    }
  }

  if(currentDir == 1 && free_rack_index<nb_free-1){
    free_rack_index++;
    value = free_rack[free_rack_index];

    //real rack value (because of 0 index)
    value = value + 1;
    currentDir=0;
  } 
  else if(currentDir == -1 && free_rack_index>0){
    free_rack_index--;
    value = free_rack[free_rack_index];

    //real rack value (because of 0 index)
    value = value + 1;
    currentDir=0;
  }
  char s[12];
  gslc_ElemSetTxtStr(&m_gui,element,itoa(value, s, 10 ));
  //Serial.println(nb_free);
  //Serial.println(value);
  return value;
}

int checkbox_encoder_nav(int value, int min_val, int max_val){
  if(currentDir == 1 && value<max_val){
    value++;
    currentDir=0;
  }
  else if(currentDir == -1 && value>min_val){
    value--;
    currentDir=0;
  }
  return value;
}

void reset_default_elements_add(){
  pos_encoder = 0;
  gslc_ElemSetTxtStr(&m_gui,add_rack,"");
  gslc_ElemSetTxtStr(&m_gui,add_rack_type,"A");
  gslc_ElemSetTxtStr(&m_gui,add_pfilled,"1");
  gslc_ElemSetTxtStr(&m_gui,name_char_1,"");
  gslc_ElemSetTxtStr(&m_gui,name_char_2,"");
  gslc_ElemSetTxtStr(&m_gui,name_char_3,"");
  gslc_ElemSetTxtStr(&m_gui,name_char_4,"");
  gslc_ElemSetTxtStr(&m_gui,name_char_5,"");
  gslc_ElemSetTxtStr(&m_gui,name_char_6,"");
  gslc_ElemSetTxtStr(&m_gui,name_char_7,"");
  gslc_ElemSetTxtStr(&m_gui,name_char_8,"");

  gslc_ElemXCheckboxSetState(&m_gui,add_sun_check,false);
  gslc_ElemXCheckboxSetState(&m_gui,add_mo_check,false);
  gslc_ElemXCheckboxSetState(&m_gui,add_tue_check,false);
  gslc_ElemXCheckboxSetState(&m_gui,add_wed_check,false);
  gslc_ElemXCheckboxSetState(&m_gui,add_thu_check,false);
  gslc_ElemXCheckboxSetState(&m_gui,add_fri_check,false);
  gslc_ElemXCheckboxSetState(&m_gui,add_sat_check,false);
  
  gslc_ElemXCheckboxSetState(&m_gui,new_wake_check,false);
  gslc_ElemXCheckboxSetState(&m_gui,new_morn_check,false);
  gslc_ElemXCheckboxSetState(&m_gui,new_lunch_check,false);
  gslc_ElemXCheckboxSetState(&m_gui,new_after_check,false);
  gslc_ElemXCheckboxSetState(&m_gui,new_dinn_check,false);
  gslc_ElemXCheckboxSetState(&m_gui,new_bed_check,false);

  temp_char_1 = temp_char_2 = temp_char_3 = temp_char_4 = temp_char_5 = temp_char_6 = temp_char_7 = temp_char_8 = free_rack_index = 0;
  temp_presc.ra = temp_presc.ra_type = 0;
  temp_presc.amount = 1;

}

void load_pill_data_to_elements(int value){
  //find corresponding pill in Inventory
  for (int i = 0; i < NB_RACKS; i++){
    if(Inventory[i].get_rack()==(value+1)){
      inventory_i = i;
      break;
    }
  }
  //load temp_presc data
  char s[10];
  temp_presc.name = Inventory[inventory_i].get_name();
  temp_presc.ra = Inventory[inventory_i].get_rack();
  previous_rack = temp_presc.ra;
  temp_presc.ra_type = Inventory[inventory_i].get_rack_type();
  temp_presc.amount = Inventory[inventory_i].get_nb();

  gslc_ElemSetTxtStr(&m_gui,edit_rack_nb,itoa(temp_presc.ra, s, 10 ));
  gslc_ElemSetTxtStr(&m_gui,edit_rack_type,type_list[temp_presc.ra_type]);
  gslc_ElemSetTxtStr(&m_gui,edit_pfilled,itoa(temp_presc.amount, s, 10 ));

  gslc_ElemXCheckboxSetState(&m_gui,edit_sun_check,Inventory[inventory_i].get_alarm_day(0));
  gslc_ElemXCheckboxSetState(&m_gui,edit_mo_check,Inventory[inventory_i].get_alarm_day(1));
  gslc_ElemXCheckboxSetState(&m_gui,edit_tue_check,Inventory[inventory_i].get_alarm_day(2));
  gslc_ElemXCheckboxSetState(&m_gui,edit_wed_check,Inventory[inventory_i].get_alarm_day(3));
  gslc_ElemXCheckboxSetState(&m_gui,edit_thu_check,Inventory[inventory_i].get_alarm_day(4));
  gslc_ElemXCheckboxSetState(&m_gui,edit_fri_check,Inventory[inventory_i].get_alarm_day(5));
  gslc_ElemXCheckboxSetState(&m_gui,edit_sat_check,Inventory[inventory_i].get_alarm_day(6));
  
  
  gslc_ElemXCheckboxSetState(&m_gui,edit_wake_check,Inventory[inventory_i].get_alarm_t(0));
  gslc_ElemXCheckboxSetState(&m_gui,edit_morn_check,Inventory[inventory_i].get_alarm_t(1));
  gslc_ElemXCheckboxSetState(&m_gui,edit_lunch_check,Inventory[inventory_i].get_alarm_t(2));
  gslc_ElemXCheckboxSetState(&m_gui,edit_after_check,Inventory[inventory_i].get_alarm_t(3));
  gslc_ElemXCheckboxSetState(&m_gui,edit_dinn_check,Inventory[inventory_i].get_alarm_t(4));
  gslc_ElemXCheckboxSetState(&m_gui,edit_bed_check,Inventory[inventory_i].get_alarm_t(5));

  //Serial.println(temp_presc.name);
  //Serial.println(inventory_i);
  //Serial.println(temp_presc.ra);
  //Serial.println(temp_presc.amount);

}

void save_new_pill(){
  rack_taken[temp_presc.ra-1] = true;

  char buf[8];

  //get a full word of each drug name character
  strcpy(buf,alphabet_list[temp_char_1]);
  strcat(buf,alphabet_list[temp_char_2]);
  strcat(buf,alphabet_list[temp_char_3]);
  strcat(buf,alphabet_list[temp_char_4]);
  strcat(buf,alphabet_list[temp_char_5]);
  strcat(buf,alphabet_list[temp_char_6]);
  strcat(buf,alphabet_list[temp_char_7]);
  strcat(buf,alphabet_list[temp_char_8]);

  temp_presc.name = buf;
  strcpy(drug_name_list[temp_presc.ra-1], buf);

  temp_presc.al_day[0] = gslc_ElemXCheckboxGetState(&m_gui,add_sun_check);
  temp_presc.al_day[1] = gslc_ElemXCheckboxGetState(&m_gui,add_mo_check);
  temp_presc.al_day[2] = gslc_ElemXCheckboxGetState(&m_gui,add_tue_check);
  temp_presc.al_day[3] = gslc_ElemXCheckboxGetState(&m_gui,add_wed_check);
  temp_presc.al_day[4] = gslc_ElemXCheckboxGetState(&m_gui,add_thu_check);
  temp_presc.al_day[5] = gslc_ElemXCheckboxGetState(&m_gui,add_fri_check);
  temp_presc.al_day[6] = gslc_ElemXCheckboxGetState(&m_gui,add_sat_check);
  

  temp_presc.al_t[0] = gslc_ElemXCheckboxGetState(&m_gui,new_wake_check);
  temp_presc.al_t[1] = gslc_ElemXCheckboxGetState(&m_gui,new_morn_check);
  temp_presc.al_t[2] = gslc_ElemXCheckboxGetState(&m_gui,new_lunch_check);
  temp_presc.al_t[3] = gslc_ElemXCheckboxGetState(&m_gui,new_after_check);
  temp_presc.al_t[4] = gslc_ElemXCheckboxGetState(&m_gui,new_dinn_check);
  temp_presc.al_t[5] = gslc_ElemXCheckboxGetState(&m_gui,new_bed_check);

  edit_prescription_listbox(Listbox_prescription);
  edit_prescription_listbox(Listbox_prescription_2);

  add_pill(temp_presc);

  free_rack_index = 0;
  //Serial.println(temp_presc.name);

}

void save_edited_pill(){

  //name, rack, rack type and amount are already set at edited value

  //now, we just need to load new checkbox state

  temp_presc.al_day[0] = gslc_ElemXCheckboxGetState(&m_gui,edit_sun_check);
  temp_presc.al_day[1] = gslc_ElemXCheckboxGetState(&m_gui,edit_mo_check);
  temp_presc.al_day[2] = gslc_ElemXCheckboxGetState(&m_gui,edit_tue_check);
  temp_presc.al_day[3] = gslc_ElemXCheckboxGetState(&m_gui,edit_wed_check);
  temp_presc.al_day[4] = gslc_ElemXCheckboxGetState(&m_gui,edit_thu_check);
  temp_presc.al_day[5] = gslc_ElemXCheckboxGetState(&m_gui,edit_fri_check);
  temp_presc.al_day[6] = gslc_ElemXCheckboxGetState(&m_gui,edit_sat_check);

  temp_presc.al_t[0] = gslc_ElemXCheckboxGetState(&m_gui,edit_wake_check);
  temp_presc.al_t[1] = gslc_ElemXCheckboxGetState(&m_gui,edit_morn_check);
  temp_presc.al_t[2] = gslc_ElemXCheckboxGetState(&m_gui,edit_lunch_check);
  temp_presc.al_t[3] = gslc_ElemXCheckboxGetState(&m_gui,edit_after_check);
  temp_presc.al_t[4] = gslc_ElemXCheckboxGetState(&m_gui,edit_dinn_check);
  temp_presc.al_t[5] = gslc_ElemXCheckboxGetState(&m_gui,edit_bed_check);

  //update the prescription list if rack number changed
  if(previous_rack != temp_presc.ra){
    rack_taken[previous_rack-1] = false;
    rack_taken[temp_presc.ra-1] = true;

    strcpy(drug_name_list[previous_rack-1],"");
    char buf[10];
    temp_presc.name.toCharArray(buf,10);
    strcpy(drug_name_list[temp_presc.ra-1],buf);
    //Serial.println(buf);
    //Serial.println(drug_name_list[temp_presc.ra-1]);

    //redraw the listboxes
    edit_prescription_listbox(Listbox_prescription);
    edit_prescription_listbox(Listbox_prescription_2);
  }

  //we edit the inventory pill with its new data
  Inventory[inventory_i].edit_pill(temp_presc);
  // Serial.println(get_pill_from_EE(inventory_i).get_name());
  // Serial.println(get_pill_from_EE(inventory_i).get_alarm_day(0)); 
  // Serial.println(get_pill_from_EE(inventory_i).get_alarm_t(0));
  // Serial.println(get_pill_from_EE(inventory_i).get_rack());
  // Serial.println(get_pill_from_EE(inventory_i).get_rack_type());
  // Serial.println(get_pill_from_EE(inventory_i).get_nb());
}

void delete_pill_prescription(int pill_pos_inventory){
  
  //delete from Inventory
  delete_pill(pill_pos_inventory);

  //delete from the rest
  rack_taken[pos_encoder] = false;
  strcpy(drug_name_list[pos_encoder],"");

  //redraw the listboxes
  edit_prescription_listbox(Listbox_prescription);
  edit_prescription_listbox(Listbox_prescription_2);
}

void edit_prescription_listbox(gslc_tsElemRef * listbox){
  gslc_ElemXListboxReset(&m_gui,listbox);

  char buf[12];
  strcpy(buf,"1) ");
  strcat(buf,drug_name_list[0]);
  gslc_ElemXListboxAddItem(&m_gui, listbox, buf);
  memset(&buf[0], 0, sizeof(buf));

  strcpy(buf,"2) ");
  strcat(buf,drug_name_list[1]);
  gslc_ElemXListboxAddItem(&m_gui, listbox, buf);
  memset(&buf[0], 0, sizeof(buf));

  strcpy(buf,"3) ");
  strcat(buf,drug_name_list[2]);
  gslc_ElemXListboxAddItem(&m_gui, listbox, buf);
  memset(&buf[0], 0, sizeof(buf));

  strcpy(buf,"4) ");
  strcat(buf,drug_name_list[3]);
  gslc_ElemXListboxAddItem(&m_gui, listbox, buf);
  memset(&buf[0], 0, sizeof(buf));

  strcpy(buf,"5) ");
  strcat(buf,drug_name_list[4]);
  gslc_ElemXListboxAddItem(&m_gui, listbox, buf);
  memset(&buf[0], 0, sizeof(buf));

  strcpy(buf,"6) ");
  strcat(buf,drug_name_list[5]);
  gslc_ElemXListboxAddItem(&m_gui, listbox, buf);
  memset(&buf[0], 0, sizeof(buf));

  strcpy(buf,"7) ");
  strcat(buf,drug_name_list[6]);
  gslc_ElemXListboxAddItem(&m_gui, listbox, buf);
  memset(&buf[0], 0, sizeof(buf));

  strcpy(buf,"8) ");
  strcat(buf,drug_name_list[7]);
  gslc_ElemXListboxAddItem(&m_gui, listbox, buf);
  memset(&buf[0], 0, sizeof(buf));

  strcpy(buf,"9) ");
  strcat(buf,drug_name_list[8]);
  gslc_ElemXListboxAddItem(&m_gui, listbox, buf);
  memset(&buf[0], 0, sizeof(buf));

  strcpy(buf,"10) ");
  strcat(buf,drug_name_list[9]);
  gslc_ElemXListboxAddItem(&m_gui, listbox, buf);
  //memset(&buf[0], 0, sizeof(buf));

}

void load_settings(){

  //load alarm times
  edit_gui_element(wake_h,the_setting.cycle.wake_up.hour,TEXT_INT);
  edit_gui_element(wake_min,the_setting.cycle.wake_up.minute,TEXT_INT);
  edit_gui_element(morn_h,the_setting.cycle.morning.hour,TEXT_INT);
  edit_gui_element(morn_min,the_setting.cycle.morning.minute,TEXT_INT);
  edit_gui_element(lunch_h,the_setting.cycle.lunch.hour,TEXT_INT);
  edit_gui_element(lunch_min,the_setting.cycle.lunch.minute,TEXT_INT);
  edit_gui_element(after_h,the_setting.cycle.afternoon.hour,TEXT_INT);
  edit_gui_element(after_min,the_setting.cycle.afternoon.minute,TEXT_INT);
  edit_gui_element(dinn_h,the_setting.cycle.dinner.hour,TEXT_INT);
  edit_gui_element(dinn_min,the_setting.cycle.dinner.minute,TEXT_INT);
  edit_gui_element(bed_h,the_setting.cycle.bedtime.hour,TEXT_INT);
  edit_gui_element(bed_min,the_setting.cycle.bedtime.minute,TEXT_INT);

  //load alarm type
  if(the_setting.type == None){
    gslc_ElemXCheckboxSetState(&m_gui,sound_check,false);
    gslc_ElemXCheckboxSetState(&m_gui,light_check,false);
  }
  else if(the_setting.type == Sound){
    gslc_ElemXCheckboxSetState(&m_gui,sound_check,true);
    gslc_ElemXCheckboxSetState(&m_gui,light_check,false);
  }
  else if(the_setting.type == Light){
    gslc_ElemXCheckboxSetState(&m_gui,sound_check,false);
    gslc_ElemXCheckboxSetState(&m_gui,light_check,true);
  }
  else{
    gslc_ElemXCheckboxSetState(&m_gui,sound_check,true);
    gslc_ElemXCheckboxSetState(&m_gui,light_check,true); 
  }

  //load date & hour
  edit_gui_element(day_set, rtc.now().dayOfTheWeek(),TEXT_WEEKDAY);
  edit_gui_element(date_set, rtc.now().day(),TEXT_INT);
  edit_gui_element(hour_set, rtc.now().hour(),TEXT_INT);
  edit_gui_element(min_set, rtc.now().minute(),TEXT_INT);
  

  //load volume
  edit_gui_element(vol_slider,the_setting.vol,SLIDER);

  //load password
  pw_enabled = the_setting.password_set;

}

void load_inventory(){

  //prepare rack_taken and drug_name_list
  for (int i = 0; i < NB_RACKS; i++){
    if(Inventory[i].get_rack() != 0){
      rack_taken[Inventory[i].get_rack()-1] = true;
      strcpy(drug_name_list[Inventory[i].get_rack()-1], Inventory[i].get_name().c_str());
    }
  }

  //create the listboxes
  edit_prescription_listbox(Listbox_prescription);
  edit_prescription_listbox(Listbox_prescription_2);
}

void edit_gui_element(gslc_tsElemRef * element,int value,int element_type){
  char s[10];
  switch (element_type)
    {
    case TEXT_INT:
      gslc_ElemSetTxtStr(&m_gui,element,itoa(value, s, 10 ));
      break;

    case TEXT_WEEKDAY:
      gslc_ElemSetTxtStr(&m_gui,element,week_str[value]);
      break;

    case SLIDER:
      gslc_ElemXSliderSetPos(&m_gui,element,value);
      break;
    
    case LISTBOX_POS:
      gslc_ElemXListboxSetSel(&m_gui,element,value);
      break;
    
    case TXT_ALPHABET:
      gslc_ElemSetTxtStr(&m_gui,element,alphabet_list[value]);
      break;
    
    case TXT_RACK_TYPE:
      gslc_ElemSetTxtStr(&m_gui,element,type_list[value]);
      break;

    default:
      break;
    }

}
