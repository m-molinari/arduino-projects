#define PIR_PIN 2 // Sensor Pin
#define LED_PIN 5 // Led Alarm Pin (Red)
#define LED_OP 7 // Operational Pin (Green)
#define BUZZER_PIN 6 // Buzzer Pin
int calibrationTime = 15; //Time for calibrate sensor
bool STATE = false; // STATE 
 
void setup(){
  Serial.begin(9600);
  pinMode(LED_PIN, OUTPUT);
  pinMode(LED_OP, OUTPUT);
  pinMode(PIR_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  Serial.print("Sensor calibration "); 
  for (int i = 0; i < calibrationTime; i++) {
    Serial.print(".");
    delay(1000);
  }
  Serial.println(" Done");
  Serial.println(" SENSOR IS READY");
  delay(50);
}

 
void loop(){

// Blinking Green Pin for showing that system is operational
digitalWrite(LED_OP, millis()/1200%2);

  if(digitalRead(PIR_PIN) == HIGH){
    if(!STATE) {
      STATE = true;
    }
    digitalWrite(LED_PIN, millis()/100%2);
    tone(BUZZER_PIN, millis()%1000+200);
    Serial.print("Movement captured");

  } else {
    if(STATE) {
      digitalWrite(LED_PIN, LOW);
      noTone(BUZZER_PIN);
      STATE = false;
    }
  }
  delay(10);
}
