/* Writen By SoggyToast */
#include "DigiKeyboard.h"

void setup() {
DigiKeyboard.delay(500);
DigiKeyboard.sendKeyStroke(KEY_M, MOD_GUI_LEFT);

DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);

  DigiKeyboard.delay(1000);
  DigiKeyboard.println("Notepad");
  DigiKeyboard.delay(500);
  
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);

  DigiKeyboard.println("Somebody once told me the world is gonna roll me I ain't the sharpest tool in the shed!");    
  DigiKeyboard.delay(500);
   
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(1000);

  DigiKeyboard.sendKeyStroke(22,MOD_CONTROL_LEFT);
  DigiKeyboard.delay(1000);

  DigiKeyboard.println("All Star");
  DigiKeyboard.delay(1000);

  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.delay(500);

  DigiKeyboard.sendKeyStroke(KEY_F4,MOD_ALT_LEFT);
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}
