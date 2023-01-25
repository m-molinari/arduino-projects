#include <SimpleDHT.h> // This lib should be downloaded from Arduino IDE (SimpleDHT)
#include <LiquidCrystal.h>

SimpleDHT11 dht11;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
 
void setup(){
  lcd.begin(16, 2);
  lcd.print("Temperatura");
  lcd.setCursor(0,1);
  lcd.print("Umidita'");
}
 
void loop(){

  byte t = 0;
  byte h = 0;
  int error = SimpleDHTErrSuccess;

  if (( error = dht11.read(8, &t, &h, NULL )) != SimpleDHTErrSuccess)  {
    Serial.println("Errore di lettura");
    delay(500);
    return;
  }

  lcd.setCursor(12, 0);
  lcd.print(t);
  lcd.print ((char) 223);
  lcd.print ("C");
  lcd.setCursor(12, 1);
  lcd.print(h);
  lcd.print("%");
  delay(500);  
}

