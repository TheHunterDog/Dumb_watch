/**
 * @brief DebugDisplay lets you connect A liquid crystal display with PCF8574T
 * 
 */

#include "DebugDisplay.h"

// LiquidCrystal_I2C LCD(0x27,20,4);
DebugDisplay::DebugDisplay()
{
  // this->LCD = LiquidCrystal_I2C(0x27,20,4);

  // this->LCD(0x27,20,4);
  this->LCD.init();
  this->LCD.backlight();

}
DebugDisplay::~DebugDisplay(){
}

void DebugDisplay::SetMessage(String message, int cursorX, int cursorY){
  this->LCD.setCursor(cursorX,cursorY);
  this->LCD.print(message);

}
void DebugDisplay::Clear(){
  this->LCD.clear();

}
