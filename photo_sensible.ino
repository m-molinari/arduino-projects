void setup() {

  // LED Pin
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int light = analogRead(A0);

  // This print brightness on Serial Monitor for choice threshold 
  //Serial.println(light);

  // Variable threshold, based on the desired brightness
  if (light < 25 ) {
    digitalWrite(13, HIGH);
  }
  else {
    digitalWrite(13, LOW);
  }

  //delay(200);
}
