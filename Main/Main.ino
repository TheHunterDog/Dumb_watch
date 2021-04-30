#include "DebugDisplay.h"
DebugDisplay dis;  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  Serial.begin(9600);
    dis.Clear();
dis.SetMessage("AAAAAAaaaa",1,0);
  dis.Clear();
}


void loop()
{
}
