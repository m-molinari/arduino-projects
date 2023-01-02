int LED = 12;
int LED2 = 13;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);   
  digitalWrite(LED2, HIGH);
  delay(1000);               
  digitalWrite(LED, LOW);  
  digitalWrite(LED2, LOW);  
  delay(1000);      
}
