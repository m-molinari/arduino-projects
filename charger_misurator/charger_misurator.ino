// WARNING never exceed 5V Battery!!!
// 5V is the max voltage for Arduino 
// This sketch is for single AA Battery (1.5 V)

int Val;  
int Red=11;  
int Yellow=10; 
int Green=9; 

void setup()
 { 
  Serial.begin(9600);
  pinMode(8, OUTPUT);  
  pinMode(9, OUTPUT);  
  pinMode(10, OUTPUT); 

 }
void loop()
{
  digitalWrite(Red, LOW);
  digitalWrite(Yellow, LOW);
  digitalWrite(Green, LOW);

  Val=analogRead(0);

  Serial.println(" Misured Volts: ");
  Serial.println(Val);

 if (Val > 250) 
   {
     digitalWrite(Red, LOW);
     digitalWrite(Yellow, LOW);
     digitalWrite(Green, HIGH);
   }
   if (( Val <250 ) && ( Val >= 150 ))
   {
     digitalWrite(Red, LOW);
     digitalWrite(Yellow, HIGH);
     digitalWrite(Green, LOW);
   }
   if ( Val < 150 )
   {
     digitalWrite(Red, HIGH);
     digitalWrite(Yellow, LOW);
     digitalWrite(Green, LOW);
   }

 delay(200);
}
