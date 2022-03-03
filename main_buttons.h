#pragma once
#include "defines.h"

#include <Arduino.h>

/* value is the position on the screen
 *  0 ..  4 first row 
 *    ..
 * 25 .. 29 last row
 * 
 * value can be changed to move buttons around
 */

const byte FREQ_DISP_A1 = 1;//6; 
const byte FREQ_DISP_A2 = 2;//7; 
const byte FREQ_DISP_B1 = 3;//8;
const byte FREQ_DISP_B2 = 4;//9;

#if defined USE_HAM_BAND || defined USE_BC_BAND
  const byte BUTTON_BAND  = 15;
#endif

#ifdef USE_ATTN
const byte BUTTON_ATTN  = 21;
#endif
#ifdef USE_LOCK
const byte BUTTON_LOCK  = 20;
#endif
const byte BUTTON_SETUP = 21;
const byte BUTTON_SPLIT = 24;
const byte BUTTON_MODE  = 20;
const byte BUTTON_STEP  = 16;
const byte BUTTON_FINP  = 18;
#ifdef USE_TUNE
const byte BUTTON_TUNE  = 23;
#endif
const byte BUTTON_CWS   = 19;
const byte BUTTON_RIT   = 23;
#ifdef USE_SPOT
const byte BUTTON_SPOT  = 19;
#endif
#ifdef USE_IF_SHIFT
const byte BUTTON_IF_SHIFT = 17;
#endif
#if defined USE_RF_SHIFT || defined USE_RF_SHIFT_STEP
const byte BUTTON_RF_SHIFT = 22;
#endif
#ifdef USE_MAN_SAVE
const byte BUTTON_SAVE  = 24;
#endif

#ifdef USE_MEMORY
const byte BUTTON_M1 = 25;
const byte BUTTON_M2 = 26;
const byte BUTTON_M3 = 27;
const byte BUTTON_M4 = 28;
const byte BUTTON_M5 = 29;
#endif
