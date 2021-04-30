/**
 * @brief DebugDisplay lets you connect A liquid crystal display with PCF8574T
 * 
 */

#include <LiquidCrystal_I2C.h>

class DebugDisplay{
  public:
    DebugDisplay();
    ~DebugDisplay();
    void SetMessage(String message, int cursorX, int cursorY);
    void Clear();
  private:
  int SDA;
  int SCL;
  LiquidCrystal_I2C LCD = LiquidCrystal_I2C(0x27,20,4);
  int a = 2;
};
