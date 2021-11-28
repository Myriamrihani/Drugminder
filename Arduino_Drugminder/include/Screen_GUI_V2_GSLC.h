//<File !Start!>
// FILE: [Screen_GUI_V2_GSLC.h]
// Created by GUIslice Builder version: [0.17.0]
//
// GUIslice Builder Generated GUI Framework File
//
// For the latest guides, updates and support view:
// https://github.com/ImpulseAdventure/GUIslice
//
//<File !End!>

#ifndef _GUISLICE_GEN_H
#define _GUISLICE_GEN_H

// ------------------------------------------------
// Headers to include
// ------------------------------------------------
#include "GUIslice.h"
#include "GUIslice_drv.h"

// Include any extended elements
//<Includes !Start!>
// Include extended elements
#include "elem/XCheckbox.h"
#include "elem/XListbox.h"
#include "elem/XProgress.h"
#include "elem/XSlider.h"
#include "elem/XTextbox.h"
//<Includes !End!>

// ------------------------------------------------
// Headers and Defines for fonts
// Note that font files are located within the Adafruit-GFX library folder:
// ------------------------------------------------
//<Fonts !Start!>
#if defined(DRV_DISP_TFT_ESPI)
  #error Project tab->Target Platform should be tft_espi
#endif
#include <Adafruit_GFX.h>
#include "Fonts/FreeSans12pt7b.h"
#include "Fonts/FreeSans18pt7b.h"
#include "Fonts/FreeSans24pt7b.h"
#include "Fonts/FreeSans9pt7b.h"
#include "Fonts/FreeSerif12pt7b.h"
#include "Fonts/FreeSerif18pt7b.h"
//<Fonts !End!>

// ------------------------------------------------
// Defines for resources
// ------------------------------------------------
//<Resources !Start!>
//<Resources !End!>

// ------------------------------------------------
// Enumerations for pages, elements, fonts, images
// ------------------------------------------------
//<Enum !Start!>
enum {Default,settings,med_list,Prescription,Date_hour,Volume
      ,Alarm_type,Set_password,new_prescription_1,new_prescription_2
      ,Alarm_message,end_dispensing,add_edit,edit_prescription_1
      ,edit_prescription_2,edit_prescription_3,delete_done,refill_1
      ,refill_2,trip,password,dispensing,delete_conf,pw_options
      ,pw_del_conf,new_prescription_3,edit_prescription_4,alarm_times};
enum {ALL_PILLS_TEXTBOX,DRUG_NAME_TEXT,DRUG_NAME_TEXT_2
      ,DRUG_NAME_TEXT_3,E_ELEM_BTN1,E_ELEM_BTN10,E_ELEM_BTN11
      ,E_ELEM_BTN12,E_ELEM_BTN13,E_ELEM_BTN14,E_ELEM_BTN15,E_ELEM_BTN16
      ,E_ELEM_BTN17,E_ELEM_BTN18,E_ELEM_BTN19,E_ELEM_BTN2,E_ELEM_BTN21
      ,E_ELEM_BTN22,E_ELEM_BTN23,E_ELEM_BTN24,E_ELEM_BTN25,E_ELEM_BTN26
      ,E_ELEM_BTN27,E_ELEM_BTN29,E_ELEM_BTN3,E_ELEM_BTN30,E_ELEM_BTN31
      ,E_ELEM_BTN32,E_ELEM_BTN35,E_ELEM_BTN36,E_ELEM_BTN37,E_ELEM_BTN38
      ,E_ELEM_BTN39,E_ELEM_BTN4,E_ELEM_BTN40,E_ELEM_BTN41,E_ELEM_BTN42
      ,E_ELEM_BTN43,E_ELEM_BTN44,E_ELEM_BTN45,E_ELEM_BTN46,E_ELEM_BTN47
      ,E_ELEM_BTN48,E_ELEM_BTN49,E_ELEM_BTN5,E_ELEM_BTN50,E_ELEM_BTN52
      ,E_ELEM_BTN53,E_ELEM_BTN54,E_ELEM_BTN55,E_ELEM_BTN56,E_ELEM_BTN57
      ,E_ELEM_BTN58,E_ELEM_BTN7,E_ELEM_BTN8,E_ELEM_BTN9,E_ELEM_CHECK1
      ,E_ELEM_CHECK18,E_ELEM_CHECK19,E_ELEM_CHECK2,E_ELEM_CHECK20
      ,E_ELEM_CHECK21,E_ELEM_CHECK22,E_ELEM_CHECK23,E_ELEM_CHECK24
      ,E_ELEM_CHECK29,E_ELEM_CHECK30,E_ELEM_CHECK31,E_ELEM_CHECK32
      ,E_ELEM_CHECK33,E_ELEM_CHECK34,E_ELEM_CHECK41,E_ELEM_CHECK42
      ,E_ELEM_CHECK43,E_ELEM_CHECK44,E_ELEM_CHECK45,E_ELEM_CHECK46
      ,E_ELEM_CHECK47,E_ELEM_CHECK48,E_ELEM_CHECK49,E_ELEM_CHECK50
      ,E_ELEM_CHECK51,E_ELEM_CHECK52,E_ELEM_CHECK53,E_ELEM_PROGRESS3
      ,E_ELEM_PROGRESS4,E_ELEM_TEXT1,E_ELEM_TEXT101,E_ELEM_TEXT103
      ,E_ELEM_TEXT104,E_ELEM_TEXT105,E_ELEM_TEXT106,E_ELEM_TEXT107
      ,E_ELEM_TEXT108,E_ELEM_TEXT109,E_ELEM_TEXT114,E_ELEM_TEXT122
      ,E_ELEM_TEXT123,E_ELEM_TEXT124,E_ELEM_TEXT125,E_ELEM_TEXT127
      ,E_ELEM_TEXT131,E_ELEM_TEXT133,E_ELEM_TEXT134,E_ELEM_TEXT135
      ,E_ELEM_TEXT136,E_ELEM_TEXT137,E_ELEM_TEXT138,E_ELEM_TEXT139
      ,E_ELEM_TEXT140,E_ELEM_TEXT141,E_ELEM_TEXT142,E_ELEM_TEXT143
      ,E_ELEM_TEXT144,E_ELEM_TEXT145,E_ELEM_TEXT146,E_ELEM_TEXT147
      ,E_ELEM_TEXT149,E_ELEM_TEXT15,E_ELEM_TEXT150,E_ELEM_TEXT151
      ,E_ELEM_TEXT152,E_ELEM_TEXT153,E_ELEM_TEXT154,E_ELEM_TEXT155
      ,E_ELEM_TEXT156,E_ELEM_TEXT157,E_ELEM_TEXT158,E_ELEM_TEXT159
      ,E_ELEM_TEXT160,E_ELEM_TEXT161,E_ELEM_TEXT162,E_ELEM_TEXT163
      ,E_ELEM_TEXT165,E_ELEM_TEXT166,E_ELEM_TEXT167,E_ELEM_TEXT168
      ,E_ELEM_TEXT169,E_ELEM_TEXT170,E_ELEM_TEXT171,E_ELEM_TEXT173
      ,E_ELEM_TEXT174,E_ELEM_TEXT175,E_ELEM_TEXT176,E_ELEM_TEXT177
      ,E_ELEM_TEXT186,E_ELEM_TEXT187,E_ELEM_TEXT188,E_ELEM_TEXT189
      ,E_ELEM_TEXT19,E_ELEM_TEXT190,E_ELEM_TEXT192,E_ELEM_TEXT193
      ,E_ELEM_TEXT194,E_ELEM_TEXT195,E_ELEM_TEXT196,E_ELEM_TEXT197
      ,E_ELEM_TEXT198,E_ELEM_TEXT199,E_ELEM_TEXT20,E_ELEM_TEXT200
      ,E_ELEM_TEXT201,E_ELEM_TEXT202,E_ELEM_TEXT203,E_ELEM_TEXT204
      ,E_ELEM_TEXT205,E_ELEM_TEXT207,E_ELEM_TEXT208,E_ELEM_TEXT209
      ,E_ELEM_TEXT21,E_ELEM_TEXT210,E_ELEM_TEXT211,E_ELEM_TEXT212
      ,E_ELEM_TEXT213,E_ELEM_TEXT214,E_ELEM_TEXT215,E_ELEM_TEXT216
      ,E_ELEM_TEXT217,E_ELEM_TEXT218,E_ELEM_TEXT219,E_ELEM_TEXT220
      ,E_ELEM_TEXT221,E_ELEM_TEXT222,E_ELEM_TEXT223,E_ELEM_TEXT224
      ,E_ELEM_TEXT225,E_ELEM_TEXT226,E_ELEM_TEXT227,E_ELEM_TEXT228
      ,E_ELEM_TEXT229,E_ELEM_TEXT23,E_ELEM_TEXT230,E_ELEM_TEXT24
      ,E_ELEM_TEXT25,E_ELEM_TEXT26,E_ELEM_TEXT27,E_ELEM_TEXT3
      ,E_ELEM_TEXT32,E_ELEM_TEXT33,E_ELEM_TEXT34,E_ELEM_TEXT35
      ,E_ELEM_TEXT37,E_ELEM_TEXT38,E_ELEM_TEXT39,E_ELEM_TEXT4
      ,E_ELEM_TEXT40,E_ELEM_TEXT41,E_ELEM_TEXT42,E_ELEM_TEXT46
      ,E_ELEM_TEXT47,E_ELEM_TEXT48,E_ELEM_TEXT49,E_ELEM_TEXT5
      ,E_ELEM_TEXT50,E_ELEM_TEXT51,E_ELEM_TEXT54,E_ELEM_TEXT68
      ,E_ELEM_TEXT69,E_ELEM_TEXT7,E_ELEM_TEXT74,E_ELEM_TEXT76
      ,E_ELEM_TEXT77,E_ELEM_TEXT78,E_ELEM_TEXT79,E_ELEM_TEXT8
      ,E_ELEM_TEXT80,E_ELEM_TEXT81,E_ELEM_TEXT82,E_ELEM_TEXT83
      ,E_ELEM_TEXT84,E_ELEM_TEXT85,E_ELEM_TEXT86,E_ELEM_TEXT87
      ,E_ELEM_TEXT88,E_ELEM_TEXT89,E_ELEM_TEXT91,E_ELEM_TEXT92
      ,E_ELEM_TEXT93,E_ELEM_TEXT94,E_ELEM_TEXT95,E_ELEM_TEXT96
      ,E_ELEM_TEXT97,E_ELEM_TEXT98,E_ELEM_TEXT99,GIVEN_PILLS_TEXTBOX
      ,PRESCRIPTION_LISTBOX,PRESCRIPTION_LISTBOX_2,RACK_NUMBER_TEXT
      ,SETTINGS_LISTBOX,TODAY_INFO_TEXT,VOLUME_SLIDER};
// Must use separate enum for fonts with MAX_FONT at end to use gslc_FontSet.
enum {E_BUILTIN10X16,E_FREESANS12,E_FREESANS18,E_FREESANS24,E_FREESANS9
      ,E_FREESERIF12,E_FREESERIF18,MAX_FONT};
//<Enum !End!>

// ------------------------------------------------
// Instantiate the GUI
// ------------------------------------------------

// ------------------------------------------------
// Define the maximum number of elements and pages
// ------------------------------------------------
//<ElementDefines !Start!>
#define MAX_PAGE                28
// Define the maximum number of elements per page
// - To enable the same code to run on devices that support storing
//   data into Flash (PROGMEM) and those that don't, we can make the
//   number of elements in Flash dependent upon GSLC_USE_PROGMEM
// - This should allow both Arduino and ARM Cortex to use the same code.

#define MAX_ELEM_Default 7 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_Default_PROG 7 // # Elems in Flash
#else
  #define MAX_ELEM_Default_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_Default_RAM MAX_ELEM_Default - MAX_ELEM_Default_PROG 

#define MAX_ELEM_settings 3 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_settings_PROG 2 // # Elems in Flash
#else
  #define MAX_ELEM_settings_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_settings_RAM MAX_ELEM_settings - MAX_ELEM_settings_PROG 

#define MAX_ELEM_med_list 3 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_med_list_PROG 2 // # Elems in Flash
#else
  #define MAX_ELEM_med_list_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_med_list_RAM MAX_ELEM_med_list - MAX_ELEM_med_list_PROG 

#define MAX_ELEM_Prescription 5 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_Prescription_PROG 5 // # Elems in Flash
#else
  #define MAX_ELEM_Prescription_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_Prescription_RAM MAX_ELEM_Prescription - MAX_ELEM_Prescription_PROG 

#define MAX_ELEM_Date_hour 8 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_Date_hour_PROG 8 // # Elems in Flash
#else
  #define MAX_ELEM_Date_hour_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_Date_hour_RAM MAX_ELEM_Date_hour - MAX_ELEM_Date_hour_PROG 

#define MAX_ELEM_Volume 5 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_Volume_PROG 5 // # Elems in Flash
#else
  #define MAX_ELEM_Volume_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_Volume_RAM MAX_ELEM_Volume - MAX_ELEM_Volume_PROG 

#define MAX_ELEM_Alarm_type 8 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_Alarm_type_PROG 8 // # Elems in Flash
#else
  #define MAX_ELEM_Alarm_type_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_Alarm_type_RAM MAX_ELEM_Alarm_type - MAX_ELEM_Alarm_type_PROG 

#define MAX_ELEM_Set_password 7 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_Set_password_PROG 7 // # Elems in Flash
#else
  #define MAX_ELEM_Set_password_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_Set_password_RAM MAX_ELEM_Set_password - MAX_ELEM_Set_password_PROG 

#define MAX_ELEM_new_prescription_1 16 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_new_prescription_1_PROG 16 // # Elems in Flash
#else
  #define MAX_ELEM_new_prescription_1_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_new_prescription_1_RAM MAX_ELEM_new_prescription_1 - MAX_ELEM_new_prescription_1_PROG 

#define MAX_ELEM_new_prescription_2 18 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_new_prescription_2_PROG 18 // # Elems in Flash
#else
  #define MAX_ELEM_new_prescription_2_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_new_prescription_2_RAM MAX_ELEM_new_prescription_2 - MAX_ELEM_new_prescription_2_PROG 

#define MAX_ELEM_Alarm_message 6 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_Alarm_message_PROG 6 // # Elems in Flash
#else
  #define MAX_ELEM_Alarm_message_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_Alarm_message_RAM MAX_ELEM_Alarm_message - MAX_ELEM_Alarm_message_PROG 

#define MAX_ELEM_end_dispensing 5 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_end_dispensing_PROG 4 // # Elems in Flash
#else
  #define MAX_ELEM_end_dispensing_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_end_dispensing_RAM MAX_ELEM_end_dispensing - MAX_ELEM_end_dispensing_PROG 

#define MAX_ELEM_add_edit 4 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_add_edit_PROG 4 // # Elems in Flash
#else
  #define MAX_ELEM_add_edit_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_add_edit_RAM MAX_ELEM_add_edit - MAX_ELEM_add_edit_PROG 

#define MAX_ELEM_edit_prescription_1 6 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_edit_prescription_1_PROG 5 // # Elems in Flash
#else
  #define MAX_ELEM_edit_prescription_1_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_edit_prescription_1_RAM MAX_ELEM_edit_prescription_1 - MAX_ELEM_edit_prescription_1_PROG 

#define MAX_ELEM_edit_prescription_2 9 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_edit_prescription_2_PROG 9 // # Elems in Flash
#else
  #define MAX_ELEM_edit_prescription_2_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_edit_prescription_2_RAM MAX_ELEM_edit_prescription_2 - MAX_ELEM_edit_prescription_2_PROG 

#define MAX_ELEM_edit_prescription_3 20 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_edit_prescription_3_PROG 20 // # Elems in Flash
#else
  #define MAX_ELEM_edit_prescription_3_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_edit_prescription_3_RAM MAX_ELEM_edit_prescription_3 - MAX_ELEM_edit_prescription_3_PROG 

#define MAX_ELEM_delete_done 6 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_delete_done_PROG 6 // # Elems in Flash
#else
  #define MAX_ELEM_delete_done_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_delete_done_RAM MAX_ELEM_delete_done - MAX_ELEM_delete_done_PROG 

#define MAX_ELEM_refill_1 5 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_refill_1_PROG 4 // # Elems in Flash
#else
  #define MAX_ELEM_refill_1_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_refill_1_RAM MAX_ELEM_refill_1 - MAX_ELEM_refill_1_PROG 

#define MAX_ELEM_refill_2 7 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_refill_2_PROG 7 // # Elems in Flash
#else
  #define MAX_ELEM_refill_2_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_refill_2_RAM MAX_ELEM_refill_2 - MAX_ELEM_refill_2_PROG 

#define MAX_ELEM_trip 14 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_trip_PROG 14 // # Elems in Flash
#else
  #define MAX_ELEM_trip_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_trip_RAM MAX_ELEM_trip - MAX_ELEM_trip_PROG 

#define MAX_ELEM_password 7 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_password_PROG 7 // # Elems in Flash
#else
  #define MAX_ELEM_password_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_password_RAM MAX_ELEM_password - MAX_ELEM_password_PROG 

#define MAX_ELEM_dispensing 3 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_dispensing_PROG 3 // # Elems in Flash
#else
  #define MAX_ELEM_dispensing_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_dispensing_RAM MAX_ELEM_dispensing - MAX_ELEM_dispensing_PROG 

#define MAX_ELEM_delete_conf 7 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_delete_conf_PROG 7 // # Elems in Flash
#else
  #define MAX_ELEM_delete_conf_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_delete_conf_RAM MAX_ELEM_delete_conf - MAX_ELEM_delete_conf_PROG 

#define MAX_ELEM_pw_options 4 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_pw_options_PROG 4 // # Elems in Flash
#else
  #define MAX_ELEM_pw_options_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_pw_options_RAM MAX_ELEM_pw_options - MAX_ELEM_pw_options_PROG 

#define MAX_ELEM_pw_del_conf 7 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_pw_del_conf_PROG 7 // # Elems in Flash
#else
  #define MAX_ELEM_pw_del_conf_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_pw_del_conf_RAM MAX_ELEM_pw_del_conf - MAX_ELEM_pw_del_conf_PROG 

#define MAX_ELEM_new_prescription_3 16 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_new_prescription_3_PROG 16 // # Elems in Flash
#else
  #define MAX_ELEM_new_prescription_3_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_new_prescription_3_RAM MAX_ELEM_new_prescription_3 - MAX_ELEM_new_prescription_3_PROG 

#define MAX_ELEM_edit_prescription_4 18 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_edit_prescription_4_PROG 18 // # Elems in Flash
#else
  #define MAX_ELEM_edit_prescription_4_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_edit_prescription_4_RAM MAX_ELEM_edit_prescription_4 - MAX_ELEM_edit_prescription_4_PROG 

#define MAX_ELEM_alarm_times 27 // # Elems total on page
#if (GSLC_USE_PROGMEM)
  #define MAX_ELEM_alarm_times_PROG 27 // # Elems in Flash
#else
  #define MAX_ELEM_alarm_times_PROG 0 // No Elems in Flash
#endif
#define MAX_ELEM_alarm_times_RAM MAX_ELEM_alarm_times - MAX_ELEM_alarm_times_PROG 
//<ElementDefines !End!>

// ------------------------------------------------
// Create element storage
// ------------------------------------------------
gslc_tsGui                      m_gui;
gslc_tsDriver                   m_drv;
gslc_tsFont                     m_asFont[MAX_FONT];
gslc_tsPage                     m_asPage[MAX_PAGE];

//<GUI_Extra_Elements !Start!>
gslc_tsElem                     m_asPage1Elem[MAX_ELEM_Default_RAM];
gslc_tsElemRef                  m_asPage1ElemRef[MAX_ELEM_Default];
gslc_tsElem                     m_asPage2Elem[MAX_ELEM_settings_RAM];
gslc_tsElemRef                  m_asPage2ElemRef[MAX_ELEM_settings];
gslc_tsElem                     m_asPage3Elem[MAX_ELEM_med_list_RAM];
gslc_tsElemRef                  m_asPage3ElemRef[MAX_ELEM_med_list];
gslc_tsElem                     m_asPage4Elem[MAX_ELEM_Prescription_RAM];
gslc_tsElemRef                  m_asPage4ElemRef[MAX_ELEM_Prescription];
gslc_tsElem                     m_asPage5Elem[MAX_ELEM_Date_hour_RAM];
gslc_tsElemRef                  m_asPage5ElemRef[MAX_ELEM_Date_hour];
gslc_tsElem                     m_asPage6Elem[MAX_ELEM_Volume_RAM];
gslc_tsElemRef                  m_asPage6ElemRef[MAX_ELEM_Volume];
gslc_tsElem                     m_asPage7Elem[MAX_ELEM_Alarm_type_RAM];
gslc_tsElemRef                  m_asPage7ElemRef[MAX_ELEM_Alarm_type];
gslc_tsElem                     m_asPage8Elem[MAX_ELEM_Set_password_RAM];
gslc_tsElemRef                  m_asPage8ElemRef[MAX_ELEM_Set_password];
gslc_tsElem                     m_asPage9Elem[MAX_ELEM_new_prescription_1_RAM];
gslc_tsElemRef                  m_asPage9ElemRef[MAX_ELEM_new_prescription_1];
gslc_tsElem                     m_asPage10Elem[MAX_ELEM_new_prescription_2_RAM];
gslc_tsElemRef                  m_asPage10ElemRef[MAX_ELEM_new_prescription_2];
gslc_tsElem                     m_asPage11Elem[MAX_ELEM_Alarm_message_RAM];
gslc_tsElemRef                  m_asPage11ElemRef[MAX_ELEM_Alarm_message];
gslc_tsElem                     m_asPage12Elem[MAX_ELEM_end_dispensing_RAM];
gslc_tsElemRef                  m_asPage12ElemRef[MAX_ELEM_end_dispensing];
gslc_tsElem                     m_asPage13Elem[MAX_ELEM_add_edit_RAM];
gslc_tsElemRef                  m_asPage13ElemRef[MAX_ELEM_add_edit];
gslc_tsElem                     m_asPage14Elem[MAX_ELEM_edit_prescription_1_RAM];
gslc_tsElemRef                  m_asPage14ElemRef[MAX_ELEM_edit_prescription_1];
gslc_tsElem                     m_asPage15Elem[MAX_ELEM_edit_prescription_2_RAM];
gslc_tsElemRef                  m_asPage15ElemRef[MAX_ELEM_edit_prescription_2];
gslc_tsElem                     m_asPage16Elem[MAX_ELEM_edit_prescription_3_RAM];
gslc_tsElemRef                  m_asPage16ElemRef[MAX_ELEM_edit_prescription_3];
gslc_tsElem                     m_asPage17Elem[MAX_ELEM_delete_done_RAM];
gslc_tsElemRef                  m_asPage17ElemRef[MAX_ELEM_delete_done];
gslc_tsElem                     m_asPage18Elem[MAX_ELEM_refill_1_RAM];
gslc_tsElemRef                  m_asPage18ElemRef[MAX_ELEM_refill_1];
gslc_tsElem                     m_asPage19Elem[MAX_ELEM_refill_2_RAM];
gslc_tsElemRef                  m_asPage19ElemRef[MAX_ELEM_refill_2];
gslc_tsElem                     m_asPage20Elem[MAX_ELEM_trip_RAM];
gslc_tsElemRef                  m_asPage20ElemRef[MAX_ELEM_trip];
gslc_tsElem                     m_asPage21Elem[MAX_ELEM_password_RAM];
gslc_tsElemRef                  m_asPage21ElemRef[MAX_ELEM_password];
gslc_tsElem                     m_asPage22Elem[MAX_ELEM_dispensing_RAM];
gslc_tsElemRef                  m_asPage22ElemRef[MAX_ELEM_dispensing];
gslc_tsElem                     m_asPage23Elem[MAX_ELEM_delete_conf_RAM];
gslc_tsElemRef                  m_asPage23ElemRef[MAX_ELEM_delete_conf];
gslc_tsElem                     m_asPage24Elem[MAX_ELEM_pw_options_RAM];
gslc_tsElemRef                  m_asPage24ElemRef[MAX_ELEM_pw_options];
gslc_tsElem                     m_asPage25Elem[MAX_ELEM_pw_del_conf_RAM];
gslc_tsElemRef                  m_asPage25ElemRef[MAX_ELEM_pw_del_conf];
gslc_tsElem                     m_asPage26Elem[MAX_ELEM_new_prescription_3_RAM];
gslc_tsElemRef                  m_asPage26ElemRef[MAX_ELEM_new_prescription_3];
gslc_tsElem                     m_asPage27Elem[MAX_ELEM_edit_prescription_4_RAM];
gslc_tsElemRef                  m_asPage27ElemRef[MAX_ELEM_edit_prescription_4];
gslc_tsElem                     m_asPage28Elem[MAX_ELEM_alarm_times_RAM];
gslc_tsElemRef                  m_asPage28ElemRef[MAX_ELEM_alarm_times];
gslc_tsXListbox                 m_sListbox1;
// - Note that XLISTBOX_BUF_OH_R is extra required per item
char                            m_acListboxBuf1[100 + XLISTBOX_BUF_OH_R];
gslc_tsXTextbox                 m_sTextbox2;
char                            m_acTextboxBuf2[168]; // NRows=6 NCols=28
gslc_tsXTextbox                 m_sTextbox3;
char                            m_acTextboxBuf3[168]; // NRows=6 NCols=28
gslc_tsXListbox                 m_sListbox2;
// - Note that XLISTBOX_BUF_OH_R is extra required per item
char                            m_acListboxBuf2[39 + XLISTBOX_BUF_OH_R];
gslc_tsXListbox                 m_sListbox3;
// - Note that XLISTBOX_BUF_OH_R is extra required per item
char                            m_acListboxBuf3[39 + XLISTBOX_BUF_OH_R];

#define MAX_STR                 100

//<GUI_Extra_Elements !End!>

// ------------------------------------------------
// Program Globals
// ------------------------------------------------

// Element References for direct access
//<Extern_References !Start!>
extern gslc_tsElemRef* add_fri_check;
extern gslc_tsElemRef* add_mo_check;
extern gslc_tsElemRef* add_pfilled;
extern gslc_tsElemRef* add_rack;
extern gslc_tsElemRef* add_sat_check;
extern gslc_tsElemRef* add_sun_check;
extern gslc_tsElemRef* add_thu_check;
extern gslc_tsElemRef* add_tue_check;
extern gslc_tsElemRef* add_wed_check;
extern gslc_tsElemRef* after_h;
extern gslc_tsElemRef* after_min;
extern gslc_tsElemRef* alarm_progress;
extern gslc_tsElemRef* bde_min;
extern gslc_tsElemRef* bed_h;
extern gslc_tsElemRef* date_set;
extern gslc_tsElemRef* day_set;
extern gslc_tsElemRef* deadline_time;
extern gslc_tsElemRef* default_next;
extern gslc_tsElemRef* default_time;
extern gslc_tsElemRef* del_p_bttn;
extern gslc_tsElemRef* del_pw_bttn;
extern gslc_tsElemRef* dinn_h;
extern gslc_tsElemRef* dinn_min;
extern gslc_tsElemRef* dispense_progress;
extern gslc_tsElemRef* edit_after_check;
extern gslc_tsElemRef* edit_bed_check;
extern gslc_tsElemRef* edit_dinn_check;
extern gslc_tsElemRef* edit_fri_check;
extern gslc_tsElemRef* edit_lunch_check;
extern gslc_tsElemRef* edit_mo_check;
extern gslc_tsElemRef* edit_morn_check;
extern gslc_tsElemRef* edit_p_bttn;
extern gslc_tsElemRef* edit_p_bttn_2;
extern gslc_tsElemRef* edit_pfilled;
extern gslc_tsElemRef* edit_rack_nb;
extern gslc_tsElemRef* edit_sat_check;
extern gslc_tsElemRef* edit_sun_check;
extern gslc_tsElemRef* edit_thu_check;
extern gslc_tsElemRef* edit_tue_check;
extern gslc_tsElemRef* edit_wake_check;
extern gslc_tsElemRef* edit_wed_check;
extern gslc_tsElemRef* empty_rack_txt;
extern gslc_tsElemRef* full_date;
extern gslc_tsElemRef* hour_set;
extern gslc_tsElemRef* light_check;
extern gslc_tsElemRef* listbox_pill_given;
extern gslc_tsElemRef* lunch_h;
extern gslc_tsElemRef* lunch_min;
extern gslc_tsElemRef* m_pElemListbox1;
extern gslc_tsElemRef* m_pElemListbox1_2;
extern gslc_tsElemRef* m_pElemListbox1_2_3;
extern gslc_tsElemRef* m_pElemTextbox2;
extern gslc_tsElemRef* m_pListSlider1;
extern gslc_tsElemRef* m_pListSlider1;
extern gslc_tsElemRef* m_pListSlider1;
extern gslc_tsElemRef* m_pTextSlider2;
extern gslc_tsElemRef* m_pTextSlider2;
extern gslc_tsElemRef* min_set;
extern gslc_tsElemRef* morn_h;
extern gslc_tsElemRef* morn_min;
extern gslc_tsElemRef* name_char_1;
extern gslc_tsElemRef* name_char_2;
extern gslc_tsElemRef* name_char_3;
extern gslc_tsElemRef* name_char_4;
extern gslc_tsElemRef* name_char_5;
extern gslc_tsElemRef* name_char_6;
extern gslc_tsElemRef* name_char_7;
extern gslc_tsElemRef* name_char_8;
extern gslc_tsElemRef* new_after_check;
extern gslc_tsElemRef* new_bed_check;
extern gslc_tsElemRef* new_dinn_check;
extern gslc_tsElemRef* new_lunch_check;
extern gslc_tsElemRef* new_morn_check;
extern gslc_tsElemRef* new_pw_digit_1;
extern gslc_tsElemRef* new_pw_digit_2;
extern gslc_tsElemRef* new_pw_digit_3;
extern gslc_tsElemRef* new_pw_digit_4;
extern gslc_tsElemRef* new_wake_check;
extern gslc_tsElemRef* pills_refilled;
extern gslc_tsElemRef* pw_digit_1;
extern gslc_tsElemRef* pw_digit_2;
extern gslc_tsElemRef* pw_digit_3;
extern gslc_tsElemRef* pw_digit_4;
extern gslc_tsElemRef* refill_bttn;
extern gslc_tsElemRef* refill_bttn_2;
extern gslc_tsElemRef* sel_drug_del;
extern gslc_tsElemRef* sel_drug_edit1;
extern gslc_tsElemRef* sel_drug_edit2;
extern gslc_tsElemRef* sel_drug_edit3;
extern gslc_tsElemRef* sel_drug_refill;
extern gslc_tsElemRef* sound_check;
extern gslc_tsElemRef* trip_bttn;
extern gslc_tsElemRef* trip_date;
extern gslc_tsElemRef* trip_day;
extern gslc_tsElemRef* trip_hour;
extern gslc_tsElemRef* trip_min;
extern gslc_tsElemRef* vol_slider;
extern gslc_tsElemRef* wake_h;
extern gslc_tsElemRef* wake_min;
extern gslc_tsElemRef* wrong_pw_text;
//<Extern_References !End!>

// Define debug message function
static int16_t DebugOut(char ch);

// ------------------------------------------------
// Callback Methods
// ------------------------------------------------
bool CbBtnCommon(void* pvGui,void *pvElemRef,gslc_teTouch eTouch,int16_t nX,int16_t nY);
bool CbCheckbox(void* pvGui, void* pvElemRef, int16_t nSelId, bool bState);
bool CbDrawScanner(void* pvGui,void* pvElemRef,gslc_teRedrawType eRedraw);
bool CbKeypad(void* pvGui, void *pvElemRef, int16_t nState, void* pvData);
bool CbListbox(void* pvGui, void* pvElemRef, int16_t nSelId);
bool CbSlidePos(void* pvGui,void* pvElemRef,int16_t nPos);
bool CbSpinner(void* pvGui, void *pvElemRef, int16_t nState, void* pvData);
bool CbTickScanner(void* pvGui,void* pvScope);

// ------------------------------------------------
// Create page elements
// ------------------------------------------------
void InitGUIslice_gen()
{
  gslc_tsElemRef* pElemRef = NULL;

  if (!gslc_Init(&m_gui,&m_drv,m_asPage,MAX_PAGE,m_asFont,MAX_FONT)) { return; }

  // ------------------------------------------------
  // Load Fonts
  // ------------------------------------------------
//<Load_Fonts !Start!>
    if (!gslc_FontSet(&m_gui,E_BUILTIN10X16,GSLC_FONTREF_PTR,NULL,2)) { return; }
    if (!gslc_FontSet(&m_gui,E_FREESANS12,GSLC_FONTREF_PTR,&FreeSans12pt7b,1)) { return; }
    if (!gslc_FontSet(&m_gui,E_FREESANS18,GSLC_FONTREF_PTR,&FreeSans18pt7b,1)) { return; }
    if (!gslc_FontSet(&m_gui,E_FREESANS24,GSLC_FONTREF_PTR,&FreeSans24pt7b,1)) { return; }
    if (!gslc_FontSet(&m_gui,E_FREESANS9,GSLC_FONTREF_PTR,&FreeSans9pt7b,1)) { return; }
    if (!gslc_FontSet(&m_gui,E_FREESERIF12,GSLC_FONTREF_PTR,&FreeSerif12pt7b,1)) { return; }
    if (!gslc_FontSet(&m_gui,E_FREESERIF18,GSLC_FONTREF_PTR,&FreeSerif18pt7b,1)) { return; }
//<Load_Fonts !End!>

//<InitGUI !Start!>
  gslc_PageAdd(&m_gui,Default,m_asPage1Elem,MAX_ELEM_Default_RAM,m_asPage1ElemRef,MAX_ELEM_Default);
  gslc_PageAdd(&m_gui,settings,m_asPage2Elem,MAX_ELEM_settings_RAM,m_asPage2ElemRef,MAX_ELEM_settings);
  gslc_PageAdd(&m_gui,med_list,m_asPage3Elem,MAX_ELEM_med_list_RAM,m_asPage3ElemRef,MAX_ELEM_med_list);
  gslc_PageAdd(&m_gui,Prescription,m_asPage4Elem,MAX_ELEM_Prescription_RAM,m_asPage4ElemRef,MAX_ELEM_Prescription);
  gslc_PageAdd(&m_gui,Date_hour,m_asPage5Elem,MAX_ELEM_Date_hour_RAM,m_asPage5ElemRef,MAX_ELEM_Date_hour);
  gslc_PageAdd(&m_gui,Volume,m_asPage6Elem,MAX_ELEM_Volume_RAM,m_asPage6ElemRef,MAX_ELEM_Volume);
  gslc_PageAdd(&m_gui,Alarm_type,m_asPage7Elem,MAX_ELEM_Alarm_type_RAM,m_asPage7ElemRef,MAX_ELEM_Alarm_type);
  gslc_PageAdd(&m_gui,Set_password,m_asPage8Elem,MAX_ELEM_Set_password_RAM,m_asPage8ElemRef,MAX_ELEM_Set_password);
  gslc_PageAdd(&m_gui,new_prescription_1,m_asPage9Elem,MAX_ELEM_new_prescription_1_RAM,m_asPage9ElemRef,MAX_ELEM_new_prescription_1);
  gslc_PageAdd(&m_gui,new_prescription_2,m_asPage10Elem,MAX_ELEM_new_prescription_2_RAM,m_asPage10ElemRef,MAX_ELEM_new_prescription_2);
  gslc_PageAdd(&m_gui,Alarm_message,m_asPage11Elem,MAX_ELEM_Alarm_message_RAM,m_asPage11ElemRef,MAX_ELEM_Alarm_message);
  gslc_PageAdd(&m_gui,end_dispensing,m_asPage12Elem,MAX_ELEM_end_dispensing_RAM,m_asPage12ElemRef,MAX_ELEM_end_dispensing);
  gslc_PageAdd(&m_gui,add_edit,m_asPage13Elem,MAX_ELEM_add_edit_RAM,m_asPage13ElemRef,MAX_ELEM_add_edit);
  gslc_PageAdd(&m_gui,edit_prescription_1,m_asPage14Elem,MAX_ELEM_edit_prescription_1_RAM,m_asPage14ElemRef,MAX_ELEM_edit_prescription_1);
  gslc_PageAdd(&m_gui,edit_prescription_2,m_asPage15Elem,MAX_ELEM_edit_prescription_2_RAM,m_asPage15ElemRef,MAX_ELEM_edit_prescription_2);
  gslc_PageAdd(&m_gui,edit_prescription_3,m_asPage16Elem,MAX_ELEM_edit_prescription_3_RAM,m_asPage16ElemRef,MAX_ELEM_edit_prescription_3);
  gslc_PageAdd(&m_gui,delete_done,m_asPage17Elem,MAX_ELEM_delete_done_RAM,m_asPage17ElemRef,MAX_ELEM_delete_done);
  gslc_PageAdd(&m_gui,refill_1,m_asPage18Elem,MAX_ELEM_refill_1_RAM,m_asPage18ElemRef,MAX_ELEM_refill_1);
  gslc_PageAdd(&m_gui,refill_2,m_asPage19Elem,MAX_ELEM_refill_2_RAM,m_asPage19ElemRef,MAX_ELEM_refill_2);
  gslc_PageAdd(&m_gui,trip,m_asPage20Elem,MAX_ELEM_trip_RAM,m_asPage20ElemRef,MAX_ELEM_trip);
  gslc_PageAdd(&m_gui,password,m_asPage21Elem,MAX_ELEM_password_RAM,m_asPage21ElemRef,MAX_ELEM_password);
  gslc_PageAdd(&m_gui,dispensing,m_asPage22Elem,MAX_ELEM_dispensing_RAM,m_asPage22ElemRef,MAX_ELEM_dispensing);
  gslc_PageAdd(&m_gui,delete_conf,m_asPage23Elem,MAX_ELEM_delete_conf_RAM,m_asPage23ElemRef,MAX_ELEM_delete_conf);
  gslc_PageAdd(&m_gui,pw_options,m_asPage24Elem,MAX_ELEM_pw_options_RAM,m_asPage24ElemRef,MAX_ELEM_pw_options);
  gslc_PageAdd(&m_gui,pw_del_conf,m_asPage25Elem,MAX_ELEM_pw_del_conf_RAM,m_asPage25ElemRef,MAX_ELEM_pw_del_conf);
  gslc_PageAdd(&m_gui,new_prescription_3,m_asPage26Elem,MAX_ELEM_new_prescription_3_RAM,m_asPage26ElemRef,MAX_ELEM_new_prescription_3);
  gslc_PageAdd(&m_gui,edit_prescription_4,m_asPage27Elem,MAX_ELEM_edit_prescription_4_RAM,m_asPage27ElemRef,MAX_ELEM_edit_prescription_4);
  gslc_PageAdd(&m_gui,alarm_times,m_asPage28Elem,MAX_ELEM_alarm_times_RAM,m_asPage28ElemRef,MAX_ELEM_alarm_times);

  // NOTE: The current page defaults to the first page added. Here we explicitly
  //       ensure that the main page is the correct page no matter the add order.
  gslc_SetPageCur(&m_gui,Default);
  
  // Set Background to a flat color
  gslc_SetBkgndColor(&m_gui,GSLC_COL_WHITE);

  // -----------------------------------
  // PAGE: Default
  
  
  // Create E_ELEM_TEXT1 modifiable text using flash API
  static char m_sDisplayText1[6] = "09:41";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT1,Default,100,100,128,37,
    m_sDisplayText1,6,&m_asFont[E_FREESANS24],
    GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,0,0,
    false,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  default_time = gslc_PageFindElemById(&m_gui,Default,E_ELEM_TEXT1);
  
  // Create E_ELEM_TEXT3 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT3,Default,50,60,181,28,
    "current time",&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_BTN1 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN1,Default,370,140,100,40,
    "Prescription",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_BTN2 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN2,Default,400,270,70,40,
    "Settings",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT4 modifiable text using flash API
  static char m_sDisplayText4[6] = "12:00";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT4,Default,110,270,94,28,
    m_sDisplayText4,6,&m_asFont[E_FREESANS18],
    GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,0,0,
    false,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  default_next = gslc_PageFindElemById(&m_gui,Default,E_ELEM_TEXT4);
  
  // Create E_ELEM_TEXT5 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT5,Default,50,230,210,28,
    "next reminder",&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_BTN3 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN3,Default,320,10,150,40,
    "check medication",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.

  // -----------------------------------
  // PAGE: settings
  
   
  // Create listbox
  pElemRef = gslc_ElemXListboxCreate(&m_gui,SETTINGS_LISTBOX,settings,&m_sListbox1,
    (gslc_tsRect){40,50,400,200},E_FREESERIF18,
    (uint8_t*)&m_acListboxBuf1,sizeof(m_acListboxBuf1),0);
  gslc_ElemXListboxSetSize(&m_gui, pElemRef, 5, 1); // 5 rows, 1 columns
  gslc_ElemXListboxItemsSetSize(&m_gui, pElemRef, XLISTBOX_SIZE_AUTO, XLISTBOX_SIZE_AUTO);
  gslc_ElemSetTxtMarginXY(&m_gui, pElemRef, 5, 0);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,((gslc_tsColor){255,0,178}));
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_COL_BLUE_DK2);
  gslc_ElemXListboxSetSelFunc(&m_gui, pElemRef, &CbListbox);
  gslc_ElemXListboxAddItem(&m_gui, pElemRef, "Alarm times");
  gslc_ElemXListboxAddItem(&m_gui, pElemRef, "Alarm Type");
  gslc_ElemXListboxAddItem(&m_gui, pElemRef, "Date & Hour");
  gslc_ElemXListboxAddItem(&m_gui, pElemRef, "Volume");
  gslc_ElemXListboxAddItem(&m_gui, pElemRef, "Password");
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  m_pElemListbox1 = pElemRef;
  
  // Create E_ELEM_TEXT7 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT7,settings,200,20,81,20,
    "settings",&m_asFont[E_FREESANS12],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_BTN5 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN5,settings,10,270,60,40,
    "Back",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.

  // -----------------------------------
  // PAGE: med_list
  
  
  // create E_ELEM_BTN4 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN4,med_list,10,270,60,40,
    "Back",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT8 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT8,med_list,149,20,182,20,
    "medication status",&m_asFont[E_FREESANS12],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
   
  // Create textbox
  pElemRef = gslc_ElemXTextboxCreate(&m_gui,ALL_PILLS_TEXTBOX,med_list,&m_sTextbox2,
    (gslc_tsRect){30,50,420,210},E_BUILTIN10X16,
    (char*)&m_acTextboxBuf2,6,28);
  gslc_ElemXTextboxWrapSet(&m_gui,pElemRef,false);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,((gslc_tsColor){255,0,178}));
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_COL_BLUE_DK2);
  m_pElemTextbox2 = pElemRef;

  // -----------------------------------
  // PAGE: Prescription
  
  
  // create E_ELEM_BTN7 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN7,Prescription,410,140,60,40,
    "Refill",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  refill_bttn = gslc_PageFindElemById(&m_gui,Prescription,E_ELEM_BTN7);
  
  // create E_ELEM_BTN8 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN8,Prescription,410,270,60,40,
    "Trip",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  trip_bttn = gslc_PageFindElemById(&m_gui,Prescription,E_ELEM_BTN8);
  
  // create E_ELEM_BTN9 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN9,Prescription,390,10,80,40,
    "add/edit",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT15 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT15,Prescription,149,10,182,40,
    "Prescription",&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_BTN10 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN10,Prescription,10,270,60,40,
    "Back",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.

  // -----------------------------------
  // PAGE: Date_hour
  
  
  // create E_ELEM_BTN13 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN13,Date_hour,10,270,60,40,
    "Back",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT19 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT19,Date_hour,50,50,66,28,
    "date",&m_asFont[E_FREESANS18],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT32 modifiable text using flash API
  static char m_sDisplayText32[4] = "Mo";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT32,Date_hour,160,60,96,37,
    m_sDisplayText32,4,&m_asFont[E_FREESANS24],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_MID,10,10,
    true,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  day_set = gslc_PageFindElemById(&m_gui,Date_hour,E_ELEM_TEXT32);
  
  // Create E_ELEM_TEXT33 modifiable text using flash API
  static char m_sDisplayText33[3] = "27";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT33,Date_hour,280,60,70,37,
    m_sDisplayText33,3,&m_asFont[E_FREESANS24],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_MID,10,10,
    true,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  date_set = gslc_PageFindElemById(&m_gui,Date_hour,E_ELEM_TEXT33);
  
  // Create E_ELEM_TEXT34 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT34,Date_hour,50,200,68,28,
    "hour",&m_asFont[E_FREESANS18],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT35 modifiable text using flash API
  static char m_sDisplayText35[3] = "12";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT35,Date_hour,161,209,70,37,
    m_sDisplayText35,3,&m_asFont[E_FREESANS24],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,10,10,
    true,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  hour_set = gslc_PageFindElemById(&m_gui,Date_hour,E_ELEM_TEXT35);
  
  // Create E_ELEM_TEXT37 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT37,Date_hour,240,210,8,27,
    ":",&m_asFont[E_FREESANS24],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT38 modifiable text using flash API
  static char m_sDisplayText38[3] = "00";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT38,Date_hour,251,209,70,37,
    m_sDisplayText38,3,&m_asFont[E_FREESANS24],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,10,10,
    true,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  min_set = gslc_PageFindElemById(&m_gui,Date_hour,E_ELEM_TEXT38);

  // -----------------------------------
  // PAGE: Volume
  
  
  // create E_ELEM_BTN11 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN11,Volume,10,270,60,40,
    "Back",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT20 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT20,Volume,186,10,108,28,
    "volume",&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.

  // Create slider VOLUME_SLIDER 
  gslc_ElemXSliderCreate_P(&m_gui,VOLUME_SLIDER,Volume,120,130,240,40,
          0,30,0,10,false,GSLC_COL_BLUE_DK2,GSLC_COL_WHITE);
  pElemRef = gslc_PageFindElemById(&m_gui,Volume,VOLUME_SLIDER);
  gslc_ElemXSliderSetStyle(&m_gui,pElemRef,false,GSLC_COL_BLUE,10,5,((gslc_tsColor){255,0,178}));
  gslc_ElemXSliderSetPosFunc(&m_gui,pElemRef,&CbSlidePos);
  vol_slider = pElemRef;
  
  // Create E_ELEM_TEXT21 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT21,Volume,120,180,12,19,
    "0",&m_asFont[E_FREESANS12],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  
  // Create E_ELEM_TEXT23 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT23,Volume,330,180,36,19,
    "100",&m_asFont[E_FREESANS12],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.

  // -----------------------------------
  // PAGE: Alarm_type
  
  
  // create E_ELEM_BTN12 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN12,Alarm_type,10,270,60,40,
    "Back",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT24 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT24,Alarm_type,10,10,158,44,
    "alarm type",&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
   
  // create checkbox E_ELEM_CHECK1 in flash 
  gslc_ElemXCheckboxCreate_P(&m_gui,E_ELEM_CHECK1,Alarm_type,310,10,40,40,GSLC_COL_WHITE,true,
    GSLC_GROUP_ID_NONE,false,GSLCX_CHECKBOX_STYLE_BOX,((gslc_tsColor){255,0,178}),true);
  sound_check = gslc_PageFindElemById(&m_gui,Alarm_type,E_ELEM_CHECK1);
   
  // create checkbox E_ELEM_CHECK2 in flash 
  gslc_ElemXCheckboxCreate_P(&m_gui,E_ELEM_CHECK2,Alarm_type,310,140,40,40,GSLC_COL_WHITE,true,
    GSLC_GROUP_ID_NONE,false,GSLCX_CHECKBOX_STYLE_BOX,((gslc_tsColor){255,0,178}),false);
  light_check = gslc_PageFindElemById(&m_gui,Alarm_type,E_ELEM_CHECK2);
  
  // create E_ELEM_BTN15 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN15,Alarm_type,390,140,80,40,
    "Change",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_BTN16 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN16,Alarm_type,390,10,80,40,
    "Change",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT25 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT25,Alarm_type,220,20,63,20,
    "sound",&m_asFont[E_FREESANS12],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT26 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT26,Alarm_type,240,140,42,30,
    "light",&m_asFont[E_FREESANS12],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.

  // -----------------------------------
  // PAGE: Set_password
  
  
  // create E_ELEM_BTN14 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN14,Set_password,410,270,60,40,
    "Save",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_GREEN,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT27 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT27,Set_password,130,20,218,40,
    "new password",&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_BTN17 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN17,Set_password,10,270,60,40,
    "Abort",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT79 modifiable text using flash API
  static char m_sDisplayText79[2] = "0";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT79,Set_password,62,130,44,37,
    m_sDisplayText79,2,&m_asFont[E_FREESANS24],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_MID,10,10,
    true,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  new_pw_digit_1 = gslc_PageFindElemById(&m_gui,Set_password,E_ELEM_TEXT79);
  
  // Create E_ELEM_TEXT80 modifiable text using flash API
  static char m_sDisplayText80[2] = "0";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT80,Set_password,162,130,44,37,
    m_sDisplayText80,2,&m_asFont[E_FREESANS24],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_MID,10,10,
    true,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  new_pw_digit_2 = gslc_PageFindElemById(&m_gui,Set_password,E_ELEM_TEXT80);
  
  // Create E_ELEM_TEXT81 modifiable text using flash API
  static char m_sDisplayText81[2] = "0";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT81,Set_password,262,130,44,37,
    m_sDisplayText81,2,&m_asFont[E_FREESANS24],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_MID,10,10,
    true,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  new_pw_digit_3 = gslc_PageFindElemById(&m_gui,Set_password,E_ELEM_TEXT81);
  
  // Create E_ELEM_TEXT82 modifiable text using flash API
  static char m_sDisplayText82[2] = "0";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT82,Set_password,362,130,44,37,
    m_sDisplayText82,2,&m_asFont[E_FREESANS24],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_MID,10,10,
    true,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  new_pw_digit_4 = gslc_PageFindElemById(&m_gui,Set_password,E_ELEM_TEXT82);

  // -----------------------------------
  // PAGE: new_prescription_1
  
  
  // Create E_ELEM_TEXT39 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT39,new_prescription_1,40,0,400,42,
    "add new prescription (1/3)",&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT40 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT40,new_prescription_1,10,190,110,30,
    "drug name",&m_asFont[E_FREESANS12],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT41 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT41,new_prescription_1,210,70,129,20,
    "rack number",&m_asFont[E_FREESANS12],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_BTN18 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN18,new_prescription_1,10,270,60,40,
    "Abort",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_RED,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_BTN19 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN19,new_prescription_1,410,270,60,40,
    "Next",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT42 modifiable text using flash API
  static char m_sDisplayText42[3] = "1";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT42,new_prescription_1,350,70,57,28,
    m_sDisplayText42,3,&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_MID,10,10,
    true,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  add_rack = gslc_PageFindElemById(&m_gui,new_prescription_1,E_ELEM_TEXT42);
  
  // Create E_ELEM_TEXT46 modifiable text using flash API
  static char m_sDisplayText46[2] = "p";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT46,new_prescription_1,80,229,32,20,
    m_sDisplayText46,2,&m_asFont[E_FREESANS12],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_MID,10,10,
    true,true,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  name_char_1 = gslc_PageFindElemById(&m_gui,new_prescription_1,E_ELEM_TEXT46);
  
  // Create E_ELEM_TEXT47 modifiable text using flash API
  static char m_sDisplayText47[2] = "a";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT47,new_prescription_1,120,230,32,20,
    m_sDisplayText47,2,&m_asFont[E_FREESANS12],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,10,10,
    true,true,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  name_char_2 = gslc_PageFindElemById(&m_gui,new_prescription_1,E_ELEM_TEXT47);
  
  // Create E_ELEM_TEXT48 modifiable text using flash API
  static char m_sDisplayText48[2] = "r";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT48,new_prescription_1,160,230,32,20,
    m_sDisplayText48,2,&m_asFont[E_FREESANS12],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_MID,10,10,
    true,true,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  name_char_3 = gslc_PageFindElemById(&m_gui,new_prescription_1,E_ELEM_TEXT48);
  
  // Create E_ELEM_TEXT49 modifiable text using flash API
  static char m_sDisplayText49[2] = "a";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT49,new_prescription_1,200,230,32,20,
    m_sDisplayText49,2,&m_asFont[E_FREESANS12],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_MID,10,10,
    true,true,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  name_char_4 = gslc_PageFindElemById(&m_gui,new_prescription_1,E_ELEM_TEXT49);
  
  // Create E_ELEM_TEXT50 modifiable text using flash API
  static char m_sDisplayText50[2] = "c";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT50,new_prescription_1,240,230,32,20,
    m_sDisplayText50,2,&m_asFont[E_FREESANS12],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_MID,10,10,
    true,true,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  name_char_5 = gslc_PageFindElemById(&m_gui,new_prescription_1,E_ELEM_TEXT50);
  
  // Create E_ELEM_TEXT51 modifiable text using flash API
  static char m_sDisplayText51[2] = "e";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT51,new_prescription_1,280,230,32,20,
    m_sDisplayText51,2,&m_asFont[E_FREESANS12],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_MID,10,10,
    true,true,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  name_char_6 = gslc_PageFindElemById(&m_gui,new_prescription_1,E_ELEM_TEXT51);
  
  // Create E_ELEM_TEXT68 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT68,new_prescription_1,140,140,203,28,
    "amount of pills filled",&m_asFont[E_FREESANS12],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT69 modifiable text using flash API
  static char m_sDisplayText69[3] = "20";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT69,new_prescription_1,350,140,57,28,
    m_sDisplayText69,3,&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_MID,10,10,
    true,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  add_pfilled = gslc_PageFindElemById(&m_gui,new_prescription_1,E_ELEM_TEXT69);
  
  // Create E_ELEM_TEXT84 modifiable text using flash API
  static char m_sDisplayText84[2] = "t";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT84,new_prescription_1,320,229,32,20,
    m_sDisplayText84,2,&m_asFont[E_FREESANS12],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_MID,10,10,
    true,true,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  name_char_7 = gslc_PageFindElemById(&m_gui,new_prescription_1,E_ELEM_TEXT84);
  
  // Create E_ELEM_TEXT85 modifiable text using flash API
  static char m_sDisplayText85[2] = "a";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT85,new_prescription_1,360,229,32,20,
    m_sDisplayText85,2,&m_asFont[E_FREESANS12],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_MID,10,10,
    true,true,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  name_char_8 = gslc_PageFindElemById(&m_gui,new_prescription_1,E_ELEM_TEXT85);

  // -----------------------------------
  // PAGE: new_prescription_2
  
  
  // Create E_ELEM_TEXT54 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT54,new_prescription_2,40,0,400,42,
    "add new prescription (2/3)",&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_BTN21 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN21,new_prescription_2,10,270,80,40,
    "previous",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_BTN49 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN49,new_prescription_2,410,270,60,40,
    "Next",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT197 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT197,new_prescription_2,40,60,258,30,
    "choose prescription days",&m_asFont[E_FREESANS12],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
   
  // create checkbox E_ELEM_CHECK47 in flash 
  gslc_ElemXCheckboxCreate_P(&m_gui,E_ELEM_CHECK47,new_prescription_2,51,101,50,50,GSLC_COL_WHITE,true,
    GSLC_GROUP_ID_NONE,false,GSLCX_CHECKBOX_STYLE_BOX,((gslc_tsColor){255,0,178}),false);
  add_mo_check = gslc_PageFindElemById(&m_gui,new_prescription_2,E_ELEM_CHECK47);
   
  // create checkbox E_ELEM_CHECK48 in flash 
  gslc_ElemXCheckboxCreate_P(&m_gui,E_ELEM_CHECK48,new_prescription_2,161,101,50,50,GSLC_COL_WHITE,true,
    GSLC_GROUP_ID_NONE,false,GSLCX_CHECKBOX_STYLE_BOX,((gslc_tsColor){255,0,178}),false);
  add_tue_check = gslc_PageFindElemById(&m_gui,new_prescription_2,E_ELEM_CHECK48);
   
  // create checkbox E_ELEM_CHECK49 in flash 
  gslc_ElemXCheckboxCreate_P(&m_gui,E_ELEM_CHECK49,new_prescription_2,271,101,50,50,GSLC_COL_WHITE,true,
    GSLC_GROUP_ID_NONE,false,GSLCX_CHECKBOX_STYLE_BOX,((gslc_tsColor){255,0,178}),false);
  add_wed_check = gslc_PageFindElemById(&m_gui,new_prescription_2,E_ELEM_CHECK49);
   
  // create checkbox E_ELEM_CHECK50 in flash 
  gslc_ElemXCheckboxCreate_P(&m_gui,E_ELEM_CHECK50,new_prescription_2,381,101,50,50,GSLC_COL_WHITE,true,
    GSLC_GROUP_ID_NONE,false,GSLCX_CHECKBOX_STYLE_BOX,((gslc_tsColor){255,0,178}),false);
  add_thu_check = gslc_PageFindElemById(&m_gui,new_prescription_2,E_ELEM_CHECK50);
   
  // create checkbox E_ELEM_CHECK51 in flash 
  gslc_ElemXCheckboxCreate_P(&m_gui,E_ELEM_CHECK51,new_prescription_2,50,190,50,50,GSLC_COL_WHITE,true,
    GSLC_GROUP_ID_NONE,false,GSLCX_CHECKBOX_STYLE_BOX,((gslc_tsColor){255,0,178}),false);
  add_fri_check = gslc_PageFindElemById(&m_gui,new_prescription_2,E_ELEM_CHECK51);
   
  // create checkbox E_ELEM_CHECK52 in flash 
  gslc_ElemXCheckboxCreate_P(&m_gui,E_ELEM_CHECK52,new_prescription_2,160,190,50,50,GSLC_COL_WHITE,true,
    GSLC_GROUP_ID_NONE,false,GSLCX_CHECKBOX_STYLE_BOX,((gslc_tsColor){255,0,178}),false);
  add_sat_check = gslc_PageFindElemById(&m_gui,new_prescription_2,E_ELEM_CHECK52);
   
  // create checkbox E_ELEM_CHECK53 in flash 
  gslc_ElemXCheckboxCreate_P(&m_gui,E_ELEM_CHECK53,new_prescription_2,270,190,50,50,GSLC_COL_WHITE,true,
    GSLC_GROUP_ID_NONE,false,GSLCX_CHECKBOX_STYLE_BOX,((gslc_tsColor){255,0,178}),false);
  add_sun_check = gslc_PageFindElemById(&m_gui,new_prescription_2,E_ELEM_CHECK53);
  
  // Create E_ELEM_TEXT198 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT198,new_prescription_2,65,154,24,15,
    "Mo",&m_asFont[E_FREESANS9],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT199 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT199,new_prescription_2,170,154,30,15,
    "Tue",&m_asFont[E_FREESANS9],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_MID,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT200 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT200,new_prescription_2,275,154,37,15,
    "Wed",&m_asFont[E_FREESANS9],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_MID,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT201 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT201,new_prescription_2,390,154,30,15,
    "Thu",&m_asFont[E_FREESANS9],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_TOP_MID,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT202 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT202,new_prescription_2,65,240,20,15,
    "Fri",&m_asFont[E_FREESANS9],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT203 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT203,new_prescription_2,170,240,27,15,
    "Sat",&m_asFont[E_FREESANS9],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT204 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT204,new_prescription_2,280,240,31,15,
    "Sun",&m_asFont[E_FREESANS9],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.

  // -----------------------------------
  // PAGE: Alarm_message
  
  
  // Create E_ELEM_TEXT74 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT74,Alarm_message,127,10,226,28,
    "It's time to take",&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT76 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT76,Alarm_message,99,155,282,28,
    "Press the \"take pills\" button",&m_asFont[E_FREESANS12],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT77 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT77,Alarm_message,134,185,212,28,
    "to dispense the pills!",&m_asFont[E_FREESANS12],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.

  // Create E_ELEM_PROGRESS3 progress bar in flash
  gslc_ElemXProgressCreate_P(&m_gui,E_ELEM_PROGRESS3,Alarm_message,120,230,240,40,
    0,100,100,
    GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_COL_GREEN,false);
  alarm_progress = gslc_PageFindElemById(&m_gui,Alarm_message,E_ELEM_PROGRESS3);
  
  // Create E_ELEM_TEXT78 modifiable text using flash API
  static char m_sDisplayText78[21] = "30min left to take them";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT78,Alarm_message,122,280,259,20,
    m_sDisplayText78,21,&m_asFont[E_FREESANS12],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,0,0,
    false,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  deadline_time = gslc_PageFindElemById(&m_gui,Alarm_message,E_ELEM_TEXT78);
  
  // Create E_ELEM_TEXT83 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT83,Alarm_message,112,40,255,44,
    "your medication!",&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.

  // -----------------------------------
  // PAGE: end_dispensing
  
  
  // Create E_ELEM_TEXT86 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT86,end_dispensing,87,0,305,44,
    "dispensing finished!",&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT87 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT87,end_dispensing,29,40,422,44,
    "you can now grab your cup.",&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_BTN22 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN22,end_dispensing,410,270,60,40,
    "OK",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT88 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT88,end_dispensing,30,90,150,23,
    "you have recieved:",&m_asFont[E_FREESANS9],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
   
  // Create textbox
  pElemRef = gslc_ElemXTextboxCreate(&m_gui,GIVEN_PILLS_TEXTBOX,end_dispensing,&m_sTextbox3,
    (gslc_tsRect){90,120,300,200},E_BUILTIN10X16,
    (char*)&m_acTextboxBuf3,6,28);
  gslc_ElemXTextboxWrapSet(&m_gui,pElemRef,false);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,((gslc_tsColor){255,0,178}));
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_COL_BLUE_DK2);
  listbox_pill_given = pElemRef;

  // -----------------------------------
  // PAGE: add_edit
  
  
  // Create E_ELEM_TEXT89 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT89,add_edit,38,0,404,44,
    "what would you like to do?",&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_BTN23 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN23,add_edit,330,140,140,40,
    "add prescription",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_BTN24 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN24,add_edit,330,270,140,40,
    "edit prescription",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  edit_p_bttn = gslc_PageFindElemById(&m_gui,add_edit,E_ELEM_BTN24);
  
  // create E_ELEM_BTN25 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN25,add_edit,10,270,60,40,
    "Back",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.

  // -----------------------------------
  // PAGE: edit_prescription_1
  
  
  // Create E_ELEM_TEXT91 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT91,edit_prescription_1,77,0,326,42,
    "edit prescription (1/4)",&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_BTN26 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN26,edit_prescription_1,10,270,60,40,
    "Abort",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_BTN27 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN27,edit_prescription_1,410,270,60,40,
    "Edit",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  edit_p_bttn_2 = gslc_PageFindElemById(&m_gui,edit_prescription_1,E_ELEM_BTN27);
   
  // Create listbox
  pElemRef = gslc_ElemXListboxCreate(&m_gui,PRESCRIPTION_LISTBOX,edit_prescription_1,&m_sListbox2,
    (gslc_tsRect){100,110,280,200},E_FREESERIF12,
    (uint8_t*)&m_acListboxBuf2,sizeof(m_acListboxBuf2),0);
  gslc_ElemXListboxSetSize(&m_gui, pElemRef, 6, 1); // 6 rows, 1 columns
  gslc_ElemXListboxItemsSetSize(&m_gui, pElemRef, XLISTBOX_SIZE_AUTO, XLISTBOX_SIZE_AUTO);
  gslc_ElemSetTxtMarginXY(&m_gui, pElemRef, 5, 0);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,((gslc_tsColor){255,0,178}));
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_COL_BLUE_DK2);
  gslc_ElemXListboxSetSelFunc(&m_gui, pElemRef, &CbListbox);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  m_pElemListbox1_2 = pElemRef;
  
  // Create E_ELEM_TEXT92 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT92,edit_prescription_1,48,70,383,30,
    "select a prescription you want to edit:",&m_asFont[E_FREESANS12],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_BTN32 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN32,edit_prescription_1,390,140,80,40,
    "DELETE",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_RED,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  del_p_bttn = gslc_PageFindElemById(&m_gui,edit_prescription_1,E_ELEM_BTN32);

  // -----------------------------------
  // PAGE: edit_prescription_2
  
  
  // Create E_ELEM_TEXT93 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT93,edit_prescription_2,77,0,326,42,
    "edit prescription (2/4)",&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_BTN30 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN30,edit_prescription_2,10,270,80,40,
    "previous",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_BTN31 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN31,edit_prescription_2,410,270,60,40,
    "Next",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT95 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT95,edit_prescription_2,219,144,129,20,
    "rack number",&m_asFont[E_FREESANS12],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT96 modifiable text using flash API
  static char m_sDisplayText96[3] = "1";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT96,edit_prescription_2,359,144,57,28,
    m_sDisplayText96,3,&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_MID,10,10,
    true,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  edit_rack_nb = gslc_PageFindElemById(&m_gui,edit_prescription_2,E_ELEM_TEXT96);
  
  // Create E_ELEM_TEXT97 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT97,edit_prescription_2,149,214,203,28,
    "amount of pills filled",&m_asFont[E_FREESANS12],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT98 modifiable text using flash API
  static char m_sDisplayText98[3] = "0";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT98,edit_prescription_2,359,214,57,28,
    m_sDisplayText98,3,&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_MID,10,10,
    true,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  edit_pfilled = gslc_PageFindElemById(&m_gui,edit_prescription_2,E_ELEM_TEXT98);
  
  // Create E_ELEM_TEXT99 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT99,edit_prescription_2,80,50,122,23,
    "you are editing:",&m_asFont[E_FREESANS9],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create DRUG_NAME_TEXT modifiable text using flash API
  static char m_sDisplayText100[11] = "\"paraceta\"";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,DRUG_NAME_TEXT,edit_prescription_2,210,50,100,15,
    m_sDisplayText100,11,&m_asFont[E_FREESANS9],
    GSLC_COL_PURPLE,GSLC_COL_PURPLE,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,0,0,
    false,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  sel_drug_edit1 = gslc_PageFindElemById(&m_gui,edit_prescription_2,DRUG_NAME_TEXT);

  // -----------------------------------
  // PAGE: edit_prescription_3
  
  
  // Create E_ELEM_TEXT94 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT94,edit_prescription_3,77,0,326,42,
    "edit prescription (3/4)",&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_BTN29 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN29,edit_prescription_3,10,270,80,40,
    "previous",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT101 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT101,edit_prescription_3,40,70,220,30,
    "edit prescription days",&m_asFont[E_FREESANS12],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
   
  // create checkbox E_ELEM_CHECK18 in flash 
  gslc_ElemXCheckboxCreate_P(&m_gui,E_ELEM_CHECK18,edit_prescription_3,51,101,50,50,GSLC_COL_WHITE,true,
    GSLC_GROUP_ID_NONE,false,GSLCX_CHECKBOX_STYLE_BOX,((gslc_tsColor){255,0,178}),false);
  edit_mo_check = gslc_PageFindElemById(&m_gui,edit_prescription_3,E_ELEM_CHECK18);
   
  // create checkbox E_ELEM_CHECK19 in flash 
  gslc_ElemXCheckboxCreate_P(&m_gui,E_ELEM_CHECK19,edit_prescription_3,161,101,50,50,GSLC_COL_WHITE,true,
    GSLC_GROUP_ID_NONE,false,GSLCX_CHECKBOX_STYLE_BOX,((gslc_tsColor){255,0,178}),false);
  edit_tue_check = gslc_PageFindElemById(&m_gui,edit_prescription_3,E_ELEM_CHECK19);
   
  // create checkbox E_ELEM_CHECK20 in flash 
  gslc_ElemXCheckboxCreate_P(&m_gui,E_ELEM_CHECK20,edit_prescription_3,271,101,50,50,GSLC_COL_WHITE,true,
    GSLC_GROUP_ID_NONE,false,GSLCX_CHECKBOX_STYLE_BOX,((gslc_tsColor){255,0,178}),false);
  edit_wed_check = gslc_PageFindElemById(&m_gui,edit_prescription_3,E_ELEM_CHECK20);
   
  // create checkbox E_ELEM_CHECK21 in flash 
  gslc_ElemXCheckboxCreate_P(&m_gui,E_ELEM_CHECK21,edit_prescription_3,381,101,50,50,GSLC_COL_WHITE,true,
    GSLC_GROUP_ID_NONE,false,GSLCX_CHECKBOX_STYLE_BOX,((gslc_tsColor){255,0,178}),false);
  edit_thu_check = gslc_PageFindElemById(&m_gui,edit_prescription_3,E_ELEM_CHECK21);
   
  // create checkbox E_ELEM_CHECK22 in flash 
  gslc_ElemXCheckboxCreate_P(&m_gui,E_ELEM_CHECK22,edit_prescription_3,50,190,50,50,GSLC_COL_WHITE,true,
    GSLC_GROUP_ID_NONE,false,GSLCX_CHECKBOX_STYLE_BOX,((gslc_tsColor){255,0,178}),false);
  edit_fri_check = gslc_PageFindElemById(&m_gui,edit_prescription_3,E_ELEM_CHECK22);
   
  // create checkbox E_ELEM_CHECK23 in flash 
  gslc_ElemXCheckboxCreate_P(&m_gui,E_ELEM_CHECK23,edit_prescription_3,160,190,50,50,GSLC_COL_WHITE,true,
    GSLC_GROUP_ID_NONE,false,GSLCX_CHECKBOX_STYLE_BOX,((gslc_tsColor){255,0,178}),false);
  edit_sat_check = gslc_PageFindElemById(&m_gui,edit_prescription_3,E_ELEM_CHECK23);
   
  // create checkbox E_ELEM_CHECK24 in flash 
  gslc_ElemXCheckboxCreate_P(&m_gui,E_ELEM_CHECK24,edit_prescription_3,270,190,50,50,GSLC_COL_WHITE,true,
    GSLC_GROUP_ID_NONE,false,GSLCX_CHECKBOX_STYLE_BOX,((gslc_tsColor){255,0,178}),false);
  edit_sun_check = gslc_PageFindElemById(&m_gui,edit_prescription_3,E_ELEM_CHECK24);
  
  // Create E_ELEM_TEXT103 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT103,edit_prescription_3,65,154,24,15,
    "Mo",&m_asFont[E_FREESANS9],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT104 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT104,edit_prescription_3,170,154,30,15,
    "Tue",&m_asFont[E_FREESANS9],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_MID,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT105 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT105,edit_prescription_3,275,154,37,15,
    "Wed",&m_asFont[E_FREESANS9],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_MID,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT106 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT106,edit_prescription_3,390,154,30,15,
    "Thu",&m_asFont[E_FREESANS9],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_TOP_MID,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT107 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT107,edit_prescription_3,65,240,20,15,
    "Fri",&m_asFont[E_FREESANS9],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT108 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT108,edit_prescription_3,170,240,27,15,
    "Sat",&m_asFont[E_FREESANS9],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT109 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT109,edit_prescription_3,280,240,31,15,
    "Sun",&m_asFont[E_FREESANS9],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT114 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT114,edit_prescription_3,78,46,122,23,
    "you are editing:",&m_asFont[E_FREESANS9],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create DRUG_NAME_TEXT_2 modifiable text using flash API
  static char m_sDisplayText115[11] = "\"paraceta\"";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,DRUG_NAME_TEXT_2,edit_prescription_3,208,46,100,15,
    m_sDisplayText115,11,&m_asFont[E_FREESANS9],
    GSLC_COL_PURPLE,GSLC_COL_PURPLE,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,0,0,
    false,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  sel_drug_edit2 = gslc_PageFindElemById(&m_gui,edit_prescription_3,DRUG_NAME_TEXT_2);
  
  // create E_ELEM_BTN53 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN53,edit_prescription_3,410,270,60,40,
    "Next",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.

  // -----------------------------------
  // PAGE: delete_done
  
  
  // Create E_ELEM_TEXT122 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT122,delete_done,84,10,311,28,
    "Deletion succeeded!",&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT123 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT123,delete_done,47,70,385,44,
    "Make sure to empty rack:",&m_asFont[E_FREESANS18],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_BTN35 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN35,delete_done,410,270,60,40,
    "OK",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT124 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT124,delete_done,40,170,399,44,
    "for it to be ready for a new",&m_asFont[E_FREESANS18],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT125 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT125,delete_done,150,210,180,40,
    "prescription",&m_asFont[E_FREESANS18],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create RACK_NUMBER_TEXT modifiable text using flash API
  static char m_sDisplayText126[3] = "1";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,RACK_NUMBER_TEXT,delete_done,205,120,70,37,
    m_sDisplayText126,3,&m_asFont[E_FREESANS24],
    GSLC_COL_PURPLE,GSLC_COL_PURPLE,GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_MID,10,10,
    false,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  empty_rack_txt = gslc_PageFindElemById(&m_gui,delete_done,RACK_NUMBER_TEXT);

  // -----------------------------------
  // PAGE: refill_1
  
  
  // Create E_ELEM_TEXT127 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT127,refill_1,170,0,140,42,
    "refill (1/2)",&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_BTN36 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN36,refill_1,10,270,60,40,
    "Abort",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_BTN37 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN37,refill_1,410,270,60,40,
    "next",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  refill_bttn_2 = gslc_PageFindElemById(&m_gui,refill_1,E_ELEM_BTN37);
   
  // Create listbox
  pElemRef = gslc_ElemXListboxCreate(&m_gui,PRESCRIPTION_LISTBOX_2,refill_1,&m_sListbox3,
    (gslc_tsRect){100,110,280,200},E_FREESERIF12,
    (uint8_t*)&m_acListboxBuf3,sizeof(m_acListboxBuf3),0);
  gslc_ElemXListboxSetSize(&m_gui, pElemRef, 6, 1); // 6 rows, 1 columns
  gslc_ElemXListboxItemsSetSize(&m_gui, pElemRef, XLISTBOX_SIZE_AUTO, XLISTBOX_SIZE_AUTO);
  gslc_ElemSetTxtMarginXY(&m_gui, pElemRef, 5, 0);
  gslc_ElemSetTxtCol(&m_gui,pElemRef,((gslc_tsColor){255,0,178}));
  gslc_ElemSetCol(&m_gui,pElemRef,GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_COL_BLUE_DK2);
  gslc_ElemXListboxSetSelFunc(&m_gui, pElemRef, &CbListbox);
  gslc_ElemSetFrameEn(&m_gui,pElemRef,true);
  m_pElemListbox1_2_3 = pElemRef;
  
  // Create E_ELEM_TEXT134 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT134,refill_1,46,70,388,30,
    "select a prescription you want to refill:",&m_asFont[E_FREESANS12],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.

  // -----------------------------------
  // PAGE: refill_2
  
  
  // Create E_ELEM_TEXT131 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT131,refill_2,71,80,126,23,
    "you are refilling:",&m_asFont[E_FREESANS9],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create DRUG_NAME_TEXT_3 modifiable text using flash API
  static char m_sDisplayText132[11] = "\"paraceta\"";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,DRUG_NAME_TEXT_3,refill_2,201,80,100,15,
    m_sDisplayText132,11,&m_asFont[E_FREESANS9],
    GSLC_COL_PURPLE,GSLC_COL_PURPLE,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,0,0,
    false,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  sel_drug_refill = gslc_PageFindElemById(&m_gui,refill_2,DRUG_NAME_TEXT_3);
  
  // Create E_ELEM_TEXT133 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT133,refill_2,170,0,140,42,
    "refill (2/2)",&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_BTN38 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN38,refill_2,10,270,80,40,
    "previous",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_BTN39 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN39,refill_2,410,270,60,40,
    "Save",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_GREEN,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT135 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT135,refill_2,110,140,224,28,
    "amount of pills refilled",&m_asFont[E_FREESANS12],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT136 modifiable text using flash API
  static char m_sDisplayText136[3] = "20";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT136,refill_2,350,140,57,28,
    m_sDisplayText136,3,&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_MID,10,10,
    true,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  pills_refilled = gslc_PageFindElemById(&m_gui,refill_2,E_ELEM_TEXT136);

  // -----------------------------------
  // PAGE: trip
  
  
  // Create E_ELEM_TEXT137 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT137,trip,209,0,61,40,
    "Trip",&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT138 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT138,trip,43,40,393,30,
    "Select your return date, the device will",&m_asFont[E_FREESANS12],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT139 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT139,trip,13,70,454,30,
    "dispense all the pills you need till your return",&m_asFont[E_FREESANS12],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT140 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT140,trip,44,173,175,28,
    "return date:",&m_asFont[E_FREESANS18],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT141 modifiable text using flash API
  static char m_sDisplayText141[4] = "Tue";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT141,trip,230,160,96,37,
    m_sDisplayText141,4,&m_asFont[E_FREESANS24],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_MID,10,10,
    false,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  trip_day = gslc_PageFindElemById(&m_gui,trip,E_ELEM_TEXT141);
  
  // Create E_ELEM_TEXT142 modifiable text using flash API
  static char m_sDisplayText142[3] = "28";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT142,trip,334,163,70,37,
    m_sDisplayText142,3,&m_asFont[E_FREESANS24],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_MID,10,10,
    true,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  trip_date = gslc_PageFindElemById(&m_gui,trip,E_ELEM_TEXT142);
  
  // Create E_ELEM_TEXT143 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT143,trip,144,223,76,28,
    "hour:",&m_asFont[E_FREESANS18],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT144 modifiable text using flash API
  static char m_sDisplayText144[3] = "12";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT144,trip,234,223,70,37,
    m_sDisplayText144,3,&m_asFont[E_FREESANS24],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,10,10,
    true,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  trip_hour = gslc_PageFindElemById(&m_gui,trip,E_ELEM_TEXT144);
  
  // Create E_ELEM_TEXT145 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT145,trip,314,233,8,27,
    ":",&m_asFont[E_FREESANS24],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT146 modifiable text using flash API
  static char m_sDisplayText146[3] = "00";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT146,trip,334,223,70,37,
    m_sDisplayText146,3,&m_asFont[E_FREESANS24],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,10,10,
    true,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  trip_min = gslc_PageFindElemById(&m_gui,trip,E_ELEM_TEXT146);
  
  // create E_ELEM_BTN40 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN40,trip,350,270,120,40,
    "Dispense pills",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_BTN41 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN41,trip,10,270,60,40,
    "Abort",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT147 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT147,trip,180,120,36,12,
    "now:",&m_asFont[E_FREESANS9],
    GSLC_COL_PURPLE,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create TODAY_INFO_TEXT modifiable text using flash API
  static char m_sDisplayText148[21] = "Monday 27, 09:41";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,TODAY_INFO_TEXT,trip,240,120,200,15,
    m_sDisplayText148,21,&m_asFont[E_FREESANS9],
    GSLC_COL_PURPLE,GSLC_COL_PURPLE,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,0,0,
    false,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  full_date = gslc_PageFindElemById(&m_gui,trip,TODAY_INFO_TEXT);

  // -----------------------------------
  // PAGE: password
  
  
  // Create E_ELEM_TEXT149 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT149,password,122,30,235,40,
    "enter password",&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT150 modifiable text using flash API
  static char m_sDisplayText150[2] = "0";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT150,password,62,130,44,37,
    m_sDisplayText150,2,&m_asFont[E_FREESANS24],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_MID,10,10,
    true,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  pw_digit_1 = gslc_PageFindElemById(&m_gui,password,E_ELEM_TEXT150);
  
  // Create E_ELEM_TEXT151 modifiable text using flash API
  static char m_sDisplayText151[2] = "0";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT151,password,162,130,44,37,
    m_sDisplayText151,2,&m_asFont[E_FREESANS24],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_MID,10,10,
    true,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  pw_digit_2 = gslc_PageFindElemById(&m_gui,password,E_ELEM_TEXT151);
  
  // Create E_ELEM_TEXT152 modifiable text using flash API
  static char m_sDisplayText152[2] = "0";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT152,password,262,130,44,37,
    m_sDisplayText152,2,&m_asFont[E_FREESANS24],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_MID,10,10,
    true,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  pw_digit_3 = gslc_PageFindElemById(&m_gui,password,E_ELEM_TEXT152);
  
  // Create E_ELEM_TEXT153 modifiable text using flash API
  static char m_sDisplayText153[2] = "0";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT153,password,362,130,44,37,
    m_sDisplayText153,2,&m_asFont[E_FREESANS24],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_MID,10,10,
    true,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  pw_digit_4 = gslc_PageFindElemById(&m_gui,password,E_ELEM_TEXT153);
  
  // create E_ELEM_BTN42 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN42,password,10,270,60,40,
    "Back",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT154 modifiable text using flash API
  static char m_sDisplayText154[26] = "wrong password, try again!";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT154,password,130,200,250,15,
    m_sDisplayText154,26,&m_asFont[E_FREESANS9],
    GSLC_COL_RED,GSLC_COL_RED,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,0,0,
    false,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  wrong_pw_text = gslc_PageFindElemById(&m_gui,password,E_ELEM_TEXT154);

  // -----------------------------------
  // PAGE: dispensing
  

  // Create E_ELEM_PROGRESS4 progress bar in flash
  gslc_ElemXProgressCreate_P(&m_gui,E_ELEM_PROGRESS4,dispensing,120,160,240,40,
    0,100,0,
    GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_COL_GREEN,false);
  dispense_progress = gslc_PageFindElemById(&m_gui,dispensing,E_ELEM_PROGRESS4);
  
  // Create E_ELEM_TEXT155 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT155,dispensing,62,20,356,44,
    "Dispensing in progress,",&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT156 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT156,dispensing,149,60,181,40,
    "please wait!",&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.

  // -----------------------------------
  // PAGE: delete_conf
  
  
  // Create E_ELEM_TEXT157 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT157,delete_conf,56,20,367,28,
    "You are about to delete:",&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT158 modifiable text using flash API
  static char m_sDisplayText158[11] = "\"paraceta\"";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT158,delete_conf,160,60,189,28,
    m_sDisplayText158,11,&m_asFont[E_FREESANS18],
    GSLC_COL_PURPLE,GSLC_COL_PURPLE,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,0,0,
    false,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  sel_drug_del = gslc_PageFindElemById(&m_gui,delete_conf,E_ELEM_TEXT158);
  
  // create E_ELEM_BTN43 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN43,delete_conf,390,270,80,40,
    "DELETE",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_RED,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_BTN44 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN44,delete_conf,10,270,60,40,
    "Abort",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT159 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT159,delete_conf,44,110,391,28,
    "This action is irreversible!",&m_asFont[E_FREESANS18],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT160 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT160,delete_conf,70,140,338,44,
    "Are you sure you want",&m_asFont[E_FREESANS18],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT161 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT161,delete_conf,37,180,406,40,
    "to delete this prescription?",&m_asFont[E_FREESANS18],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.

  // -----------------------------------
  // PAGE: pw_options
  
  
  // Create E_ELEM_TEXT162 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT162,pw_options,104,0,271,40,
    "Password options",&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_BTN45 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN45,pw_options,310,140,160,40,
    "delete password",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_RED,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  del_pw_bttn = gslc_PageFindElemById(&m_gui,pw_options,E_ELEM_BTN45);
  
  // create E_ELEM_BTN46 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN46,pw_options,310,270,160,40,
    "set new password",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_BTN58 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN58,pw_options,10,270,60,40,
    "Back",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.

  // -----------------------------------
  // PAGE: pw_del_conf
  
  
  // Create E_ELEM_TEXT163 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT163,pw_del_conf,56,20,367,28,
    "You are about to delete:",&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_BTN47 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN47,pw_del_conf,390,270,80,40,
    "DELETE",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_RED,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_BTN48 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN48,pw_del_conf,10,270,60,40,
    "Abort",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT165 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT165,pw_del_conf,44,110,391,28,
    "This action is irreversible!",&m_asFont[E_FREESANS18],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT166 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT166,pw_del_conf,70,140,338,44,
    "Are you sure you want",&m_asFont[E_FREESANS18],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT167 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT167,pw_del_conf,56,180,367,40,
    "to delete the password?",&m_asFont[E_FREESANS18],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT168 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT168,pw_del_conf,138,50,204,40,
    "the password",&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.

  // -----------------------------------
  // PAGE: new_prescription_3
  
  
  // Create E_ELEM_TEXT169 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT169,new_prescription_3,40,60,265,28,
    "choose prescription times",&m_asFont[E_FREESANS12],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
   
  // create checkbox E_ELEM_CHECK29 in flash 
  gslc_ElemXCheckboxCreate_P(&m_gui,E_ELEM_CHECK29,new_prescription_3,60,100,50,50,GSLC_COL_WHITE,true,
    GSLC_GROUP_ID_NONE,false,GSLCX_CHECKBOX_STYLE_BOX,((gslc_tsColor){255,0,178}),false);
  new_wake_check = gslc_PageFindElemById(&m_gui,new_prescription_3,E_ELEM_CHECK29);
   
  // create checkbox E_ELEM_CHECK30 in flash 
  gslc_ElemXCheckboxCreate_P(&m_gui,E_ELEM_CHECK30,new_prescription_3,210,100,50,50,GSLC_COL_WHITE,true,
    GSLC_GROUP_ID_NONE,false,GSLCX_CHECKBOX_STYLE_BOX,((gslc_tsColor){255,0,178}),false);
  new_morn_check = gslc_PageFindElemById(&m_gui,new_prescription_3,E_ELEM_CHECK30);
   
  // create checkbox E_ELEM_CHECK31 in flash 
  gslc_ElemXCheckboxCreate_P(&m_gui,E_ELEM_CHECK31,new_prescription_3,360,100,50,50,GSLC_COL_WHITE,true,
    GSLC_GROUP_ID_NONE,false,GSLCX_CHECKBOX_STYLE_BOX,((gslc_tsColor){255,0,178}),false);
  new_lunch_check = gslc_PageFindElemById(&m_gui,new_prescription_3,E_ELEM_CHECK31);
   
  // create checkbox E_ELEM_CHECK32 in flash 
  gslc_ElemXCheckboxCreate_P(&m_gui,E_ELEM_CHECK32,new_prescription_3,60,190,50,50,GSLC_COL_WHITE,true,
    GSLC_GROUP_ID_NONE,false,GSLCX_CHECKBOX_STYLE_BOX,((gslc_tsColor){255,0,178}),false);
  new_after_check = gslc_PageFindElemById(&m_gui,new_prescription_3,E_ELEM_CHECK32);
  
  // Create E_ELEM_TEXT170 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT170,new_prescription_3,205,150,64,15,
    "morning",&m_asFont[E_FREESANS9],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT171 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT171,new_prescription_3,365,150,42,15,
    "lunch",&m_asFont[E_FREESANS9],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT173 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT173,new_prescription_3,355,240,63,15,
    "bedtime",&m_asFont[E_FREESANS9],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT174 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT174,new_prescription_3,40,0,400,42,
    "add new prescription (3/3)",&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_BTN50 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN50,new_prescription_3,10,270,80,40,
    "previous",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_BTN52 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN52,new_prescription_3,410,270,60,40,
    "Save",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_GREEN,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
   
  // create checkbox E_ELEM_CHECK33 in flash 
  gslc_ElemXCheckboxCreate_P(&m_gui,E_ELEM_CHECK33,new_prescription_3,210,190,50,50,GSLC_COL_WHITE,true,
    GSLC_GROUP_ID_NONE,false,GSLCX_CHECKBOX_STYLE_BOX,((gslc_tsColor){255,0,178}),false);
  new_dinn_check = gslc_PageFindElemById(&m_gui,new_prescription_3,E_ELEM_CHECK33);
   
  // create checkbox E_ELEM_CHECK34 in flash 
  gslc_ElemXCheckboxCreate_P(&m_gui,E_ELEM_CHECK34,new_prescription_3,360,190,50,50,GSLC_COL_WHITE,true,
    GSLC_GROUP_ID_NONE,false,GSLCX_CHECKBOX_STYLE_BOX,((gslc_tsColor){255,0,178}),false);
  new_bed_check = gslc_PageFindElemById(&m_gui,new_prescription_3,E_ELEM_CHECK34);
  
  // Create E_ELEM_TEXT175 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT175,new_prescription_3,50,240,75,15,
    "afternoon",&m_asFont[E_FREESANS9],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT176 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT176,new_prescription_3,210,240,50,15,
    "dinner",&m_asFont[E_FREESANS9],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT177 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT177,new_prescription_3,50,150,69,15,
    "wake-up",&m_asFont[E_FREESANS9],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.

  // -----------------------------------
  // PAGE: edit_prescription_4
  
  
  // Create E_ELEM_TEXT186 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT186,edit_prescription_4,77,0,326,42,
    "edit prescription (4/4)",&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT187 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT187,edit_prescription_4,40,70,227,28,
    "edit prescription times",&m_asFont[E_FREESANS12],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
   
  // create checkbox E_ELEM_CHECK41 in flash 
  gslc_ElemXCheckboxCreate_P(&m_gui,E_ELEM_CHECK41,edit_prescription_4,60,100,50,50,GSLC_COL_WHITE,true,
    GSLC_GROUP_ID_NONE,false,GSLCX_CHECKBOX_STYLE_BOX,((gslc_tsColor){255,0,178}),false);
  edit_wake_check = gslc_PageFindElemById(&m_gui,edit_prescription_4,E_ELEM_CHECK41);
   
  // create checkbox E_ELEM_CHECK42 in flash 
  gslc_ElemXCheckboxCreate_P(&m_gui,E_ELEM_CHECK42,edit_prescription_4,210,100,50,50,GSLC_COL_WHITE,true,
    GSLC_GROUP_ID_NONE,false,GSLCX_CHECKBOX_STYLE_BOX,((gslc_tsColor){255,0,178}),false);
  edit_morn_check = gslc_PageFindElemById(&m_gui,edit_prescription_4,E_ELEM_CHECK42);
   
  // create checkbox E_ELEM_CHECK43 in flash 
  gslc_ElemXCheckboxCreate_P(&m_gui,E_ELEM_CHECK43,edit_prescription_4,360,100,50,50,GSLC_COL_WHITE,true,
    GSLC_GROUP_ID_NONE,false,GSLCX_CHECKBOX_STYLE_BOX,((gslc_tsColor){255,0,178}),false);
  edit_lunch_check = gslc_PageFindElemById(&m_gui,edit_prescription_4,E_ELEM_CHECK43);
   
  // create checkbox E_ELEM_CHECK44 in flash 
  gslc_ElemXCheckboxCreate_P(&m_gui,E_ELEM_CHECK44,edit_prescription_4,60,190,50,50,GSLC_COL_WHITE,true,
    GSLC_GROUP_ID_NONE,false,GSLCX_CHECKBOX_STYLE_BOX,((gslc_tsColor){255,0,178}),false);
  edit_after_check = gslc_PageFindElemById(&m_gui,edit_prescription_4,E_ELEM_CHECK44);
  
  // Create E_ELEM_TEXT188 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT188,edit_prescription_4,205,150,64,15,
    "morning",&m_asFont[E_FREESANS9],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT189 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT189,edit_prescription_4,365,150,42,15,
    "lunch",&m_asFont[E_FREESANS9],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT190 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT190,edit_prescription_4,355,240,63,15,
    "bedtime",&m_asFont[E_FREESANS9],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_BTN54 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN54,edit_prescription_4,10,270,80,40,
    "previous",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_BTN55 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN55,edit_prescription_4,410,270,60,40,
    "Save",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_GREEN,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
   
  // create checkbox E_ELEM_CHECK45 in flash 
  gslc_ElemXCheckboxCreate_P(&m_gui,E_ELEM_CHECK45,edit_prescription_4,210,190,50,50,GSLC_COL_WHITE,true,
    GSLC_GROUP_ID_NONE,false,GSLCX_CHECKBOX_STYLE_BOX,((gslc_tsColor){255,0,178}),false);
  edit_dinn_check = gslc_PageFindElemById(&m_gui,edit_prescription_4,E_ELEM_CHECK45);
   
  // create checkbox E_ELEM_CHECK46 in flash 
  gslc_ElemXCheckboxCreate_P(&m_gui,E_ELEM_CHECK46,edit_prescription_4,360,190,50,50,GSLC_COL_WHITE,true,
    GSLC_GROUP_ID_NONE,false,GSLCX_CHECKBOX_STYLE_BOX,((gslc_tsColor){255,0,178}),false);
  edit_bed_check = gslc_PageFindElemById(&m_gui,edit_prescription_4,E_ELEM_CHECK46);
  
  // Create E_ELEM_TEXT192 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT192,edit_prescription_4,50,240,75,15,
    "afternoon",&m_asFont[E_FREESANS9],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT193 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT193,edit_prescription_4,210,240,50,15,
    "dinner",&m_asFont[E_FREESANS9],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT194 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT194,edit_prescription_4,50,150,69,15,
    "wake-up",&m_asFont[E_FREESANS9],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT195 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT195,edit_prescription_4,78,46,122,23,
    "you are editing:",&m_asFont[E_FREESANS9],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT196 modifiable text using flash API
  static char m_sDisplayText196[11] = "\"paraceta\"";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT196,edit_prescription_4,208,46,100,15,
    m_sDisplayText196,11,&m_asFont[E_FREESANS9],
    GSLC_COL_PURPLE,GSLC_COL_PURPLE,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,0,0,
    false,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  sel_drug_edit3 = gslc_PageFindElemById(&m_gui,edit_prescription_4,E_ELEM_TEXT196);

  // -----------------------------------
  // PAGE: alarm_times
  
  
  // Create E_ELEM_TEXT205 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT205,alarm_times,119,0,241,30,
    "change the alarm times",&m_asFont[E_FREESANS12],
    ((gslc_tsColor){255,0,178}),GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_BTN56 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN56,alarm_times,10,270,60,40,
    "Back",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_BLUE_DK4,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  
  // create E_ELEM_BTN57 button with text label
  gslc_ElemCreateBtnTxt_P(&m_gui,E_ELEM_BTN57,alarm_times,410,270,60,40,
    "Save",&m_asFont[E_FREESANS9],
    GSLC_COL_WHITE,GSLC_COL_BLUE_DK2,GSLC_COL_GREEN,GSLC_COL_BLUE_DK2,
    GSLC_COL_BLUE_DK1,GSLC_ALIGN_MID_MID,true,true,&CbBtnCommon,NULL);
  // gslc_ElemSetRoundEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT207 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT207,alarm_times,101,43,95,20,
    "wake-up:",&m_asFont[E_FREESANS12],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT208 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT208,alarm_times,111,88,89,20,
    "morning:",&m_asFont[E_FREESANS12],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT209 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT209,alarm_times,141,143,61,20,
    "lunch:",&m_asFont[E_FREESANS12],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT210 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT210,alarm_times,91,188,105,20,
    "afternoon:",&m_asFont[E_FREESANS12],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT211 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT211,alarm_times,131,233,70,20,
    "dinner:",&m_asFont[E_FREESANS12],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT212 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT212,alarm_times,111,278,88,20,
    "bedtime:",&m_asFont[E_FREESANS12],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT213 modifiable text using flash API
  static char m_sDisplayText213[3] = "08";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT213,alarm_times,210,40,57,28,
    m_sDisplayText213,3,&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,10,10,
    true,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  wake_h = gslc_PageFindElemById(&m_gui,alarm_times,E_ELEM_TEXT213);
  
  // Create E_ELEM_TEXT214 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT214,alarm_times,270,40,8,27,
    ":",&m_asFont[E_FREESANS24],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT215 modifiable text using flash API
  static char m_sDisplayText215[3] = "00";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT215,alarm_times,280,40,57,28,
    m_sDisplayText215,3,&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,10,10,
    true,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  wake_min = gslc_PageFindElemById(&m_gui,alarm_times,E_ELEM_TEXT215);
  
  // Create E_ELEM_TEXT216 modifiable text using flash API
  static char m_sDisplayText216[3] = "09";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT216,alarm_times,210,89,57,28,
    m_sDisplayText216,3,&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,10,10,
    true,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  morn_h = gslc_PageFindElemById(&m_gui,alarm_times,E_ELEM_TEXT216);
  
  // Create E_ELEM_TEXT217 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT217,alarm_times,270,90,8,27,
    ":",&m_asFont[E_FREESANS24],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT218 modifiable text using flash API
  static char m_sDisplayText218[3] = "00";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT218,alarm_times,280,90,57,28,
    m_sDisplayText218,3,&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,10,10,
    true,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  morn_min = gslc_PageFindElemById(&m_gui,alarm_times,E_ELEM_TEXT218);
  
  // Create E_ELEM_TEXT219 modifiable text using flash API
  static char m_sDisplayText219[3] = "12";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT219,alarm_times,210,137,57,28,
    m_sDisplayText219,3,&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,10,10,
    true,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  lunch_h = gslc_PageFindElemById(&m_gui,alarm_times,E_ELEM_TEXT219);
  
  // Create E_ELEM_TEXT220 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT220,alarm_times,270,138,8,27,
    ":",&m_asFont[E_FREESANS24],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT221 modifiable text using flash API
  static char m_sDisplayText221[3] = "00";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT221,alarm_times,280,137,57,28,
    m_sDisplayText221,3,&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,10,10,
    true,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  lunch_min = gslc_PageFindElemById(&m_gui,alarm_times,E_ELEM_TEXT221);
  
  // Create E_ELEM_TEXT222 modifiable text using flash API
  static char m_sDisplayText222[3] = "15";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT222,alarm_times,210,185,57,28,
    m_sDisplayText222,3,&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,10,10,
    true,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  after_h = gslc_PageFindElemById(&m_gui,alarm_times,E_ELEM_TEXT222);
  
  // Create E_ELEM_TEXT223 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT223,alarm_times,270,185,8,27,
    ":",&m_asFont[E_FREESANS24],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT224 modifiable text using flash API
  static char m_sDisplayText224[3] = "00";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT224,alarm_times,280,185,57,28,
    m_sDisplayText224,3,&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,10,10,
    true,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  after_min = gslc_PageFindElemById(&m_gui,alarm_times,E_ELEM_TEXT224);
  
  // Create E_ELEM_TEXT225 modifiable text using flash API
  static char m_sDisplayText225[3] = "19";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT225,alarm_times,210,233,57,28,
    m_sDisplayText225,3,&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,10,10,
    true,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  dinn_h = gslc_PageFindElemById(&m_gui,alarm_times,E_ELEM_TEXT225);
  
  // Create E_ELEM_TEXT226 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT226,alarm_times,270,235,8,27,
    ":",&m_asFont[E_FREESANS24],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT227 modifiable text using flash API
  static char m_sDisplayText227[3] = "00";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT227,alarm_times,280,233,57,28,
    m_sDisplayText227,3,&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,10,10,
    true,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  dinn_min = gslc_PageFindElemById(&m_gui,alarm_times,E_ELEM_TEXT227);
  
  // Create E_ELEM_TEXT228 modifiable text using flash API
  static char m_sDisplayText228[3] = "22";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT228,alarm_times,210,280,57,28,
    m_sDisplayText228,3,&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,10,10,
    true,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  bed_h = gslc_PageFindElemById(&m_gui,alarm_times,E_ELEM_TEXT228);
  
  // Create E_ELEM_TEXT229 text label using flash API
  gslc_ElemCreateTxt_P(&m_gui,E_ELEM_TEXT229,alarm_times,270,280,8,27,
    ":",&m_asFont[E_FREESANS24],
    GSLC_COL_BLUE_DK2,GSLC_COL_GRAY,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,false,true);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  
  // Create E_ELEM_TEXT230 modifiable text using flash API
  static char m_sDisplayText230[3] = "00";
  gslc_ElemCreateTxt_P_R_ext(&m_gui,E_ELEM_TEXT230,alarm_times,280,280,57,28,
    m_sDisplayText230,3,&m_asFont[E_FREESANS18],
    ((gslc_tsColor){255,0,178}),((gslc_tsColor){255,0,178}),GSLC_COL_BLUE_DK2,GSLC_COL_WHITE,GSLC_ALIGN_MID_LEFT,10,10,
    true,false,false,false,NULL,NULL,NULL,NULL);
  // gslc_ElemSetFillEn(); currently not supported by the FLASH _P calls.
  // gslc_ElemSetFrameEn(); currently not supported by the FLASH _P calls.
  bde_min = gslc_PageFindElemById(&m_gui,alarm_times,E_ELEM_TEXT230);
//<InitGUI !End!>

//<Startup !Start!>
//<Startup !End!>

}

#endif // end _GUISLICE_GEN_H
