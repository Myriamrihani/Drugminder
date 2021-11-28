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


// ------------------------------------------------
// Program Globals
// ------------------------------------------------

// Save some element references for direct access
//<Save_References !Start!>
gslc_tsElemRef* add_fri_check     = NULL;
gslc_tsElemRef* add_mo_check      = NULL;
gslc_tsElemRef* add_pfilled       = NULL;
gslc_tsElemRef* add_rack          = NULL;
gslc_tsElemRef* add_sat_check     = NULL;
gslc_tsElemRef* add_sun_check     = NULL;
gslc_tsElemRef* add_thu_check     = NULL;
gslc_tsElemRef* add_tue_check     = NULL;
gslc_tsElemRef* add_wed_check     = NULL;
gslc_tsElemRef* after_h           = NULL;
gslc_tsElemRef* after_min         = NULL;
gslc_tsElemRef* alarm_progress    = NULL;
gslc_tsElemRef* bed_min           = NULL;
gslc_tsElemRef* bed_h             = NULL;
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
gslc_tsElemRef* m_pElemListbox1_2 = NULL;
gslc_tsElemRef* m_pElemListbox1_2_3= NULL;
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
gslc_tsElemRef* sel_drug_edit1    = NULL;
gslc_tsElemRef* sel_drug_edit2    = NULL;
gslc_tsElemRef* sel_drug_edit3    = NULL;
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
    case PRESCRIPTION_LISTBOX_2:
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
//unsigned long lastButtonPress = 0;
int status1 = false;
int status2 = false;
int status3 = false;
int status4 = false;
int enc_btnState = false;
bool encoder_enabled = false;
bool enc_btnAction = false;
bool pw_enabled = false;
bool pw_for_pres = false;
int settings_item = 0;
int pos_encoder =0;
unsigned int temp_pw_1 = 0;
unsigned int temp_pw_2 = 0;
unsigned int temp_pw_3 = 0;
unsigned int temp_pw_4 = 0;


void btn1_action(int16_t current_page);
void btn2_action(int16_t current_page);
void btn3_action(int16_t current_page);
void btn4_action(int16_t current_page);
void updateEncoder();
void check_encoder(int16_t current_page);
int change_element_encoder(int value, int min_val, int max_val, gslc_tsElemRef * element, int element_type);


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

}

// -----------------------------------
// Main event loop
// -----------------------------------
void loop()
{
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
    Serial.println("Button pressed!");
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
      break;
    
    case new_prescription_2:
      encoder_enabled = true;
      break;

    case new_prescription_3:
      encoder_enabled = true;
      break;

    case edit_prescription_1:
      encoder_enabled = true;
      break;
      
    case edit_prescription_2:
      encoder_enabled = true;
      break;
      
    case edit_prescription_3:
      encoder_enabled = true;
      break;

    case edit_prescription_4:
      encoder_enabled = true;
      break;

    case refill_1:
      encoder_enabled = true;
      break;
    
    case refill_2:
      encoder_enabled = true;
      break;

    case trip:
      encoder_enabled = true;
      break;

    default:
      encoder_enabled = false;
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
      gslc_SetPageCur(&m_gui,delete_conf);
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
      gslc_SetPageCur(&m_gui,edit_prescription_2);
      break;
      
    case edit_prescription_2:
      gslc_SetPageCur(&m_gui,edit_prescription_3);
      break;

    case edit_prescription_3:
      gslc_SetPageCur(&m_gui,edit_prescription_4);
      break;

    case edit_prescription_4:
      //must save all data too
      gslc_SetPageCur(&m_gui,Prescription);
      break;

    case new_prescription_1:
      gslc_SetPageCur(&m_gui,new_prescription_2);
      break;

    case new_prescription_2:
      gslc_SetPageCur(&m_gui,new_prescription_3);
      break;

    case new_prescription_3:
      //must save all data too
      gslc_SetPageCur(&m_gui,Prescription);
      break;

    case delete_conf:
      //must delete the prescription too
      gslc_SetPageCur(&m_gui,delete_done);
      break;

    case delete_done:
      gslc_SetPageCur(&m_gui,Default);
      break;

    case refill_1:
      //add condition to check if a prescription has been selected
      gslc_SetPageCur(&m_gui,refill_2);
      break;

    case refill_2:
      //add the pills added in right prescription too
      gslc_SetPageCur(&m_gui,Prescription);
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
      break;

    case new_prescription_2:
      gslc_SetPageCur(&m_gui,new_prescription_1);
      break;

    case new_prescription_3:
      gslc_SetPageCur(&m_gui,new_prescription_2);
      break;

    case edit_prescription_1:
      gslc_SetPageCur(&m_gui,Prescription);
      break;

    case edit_prescription_2:
      gslc_SetPageCur(&m_gui,edit_prescription_1);
      break;

    case edit_prescription_3:
      gslc_SetPageCur(&m_gui,edit_prescription_2);
      break;

    case edit_prescription_4:
      gslc_SetPageCur(&m_gui,edit_prescription_3);
      break;

    case refill_1:
      gslc_SetPageCur(&m_gui,Prescription);
      break;

    case refill_2:
      gslc_SetPageCur(&m_gui,refill_1);
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
       gslc_ElemSetTxtStr(&m_gui,day_set,week_str[value]);
      break;

    case SLIDER:
      gslc_ElemXSliderSetPos(&m_gui,element,value);
      break;
    
    case LISTBOX_POS:
      gslc_ElemXListboxSetSel(&m_gui,element,value);
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
       gslc_ElemSetTxtStr(&m_gui,day_set,week_str[value]);
      break;

    case SLIDER:
      gslc_ElemXSliderSetPos(&m_gui,element,value);
      break;
    
    case LISTBOX_POS:
      gslc_ElemXListboxSetSel(&m_gui,element,value);
      break;

    default:
      break;
    }
  }

  return value;    
}