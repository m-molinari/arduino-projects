#include <LiquidCrystal.h>

LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

void setup() 
{
  lcd.begin(16, 2); 
  lcd.clear();
  lcd.print("Hello ");     
  lcd.print("World!");
}

void loop() 
{
   lcd.setCursor(0, 1);
}
