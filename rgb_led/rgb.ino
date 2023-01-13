
int RedPin = 11;
int GreenPin = 10;
int BluePin = 9;
 
void setup(){
  pinMode(RedPin, OUTPUT);
  pinMode(GreenPin, OUTPUT);
  pinMode(BluePin, OUTPUT);
}
 
void loop(){

  rgb(255, 60, 0);
  rgb(255, 120, 0);
  rgb(255, 180, 0);
  rgb(255, 240, 0);
  delay(1000);
  
  rgb(240, 255, 0);
  rgb(180, 255, 0);
  rgb(120, 255, 0);
  rgb(60, 255, 0);
  delay(1000);
  
  rgb(0, 255, 60);
  rgb(0, 255, 120);
  rgb(0, 255, 180);
  rgb(0, 255, 240);
  delay(1000);
  
  rgb(0, 240, 255);
  rgb(0, 180, 255);
  rgb(0, 120, 255);
  rgb(0, 60, 255);
  delay(1000);
  
  rgb(60, 0, 255);
  rgb(120, 0, 255);
  rgb(180, 0, 255);
  rgb(240, 0, 255);
  delay(1000);
  
  rgb(255, 0, 240);
  rgb(255, 0, 180);
  rgb(255, 0, 120);
  rgb(255, 0, 60);
  delay(1000);

}
 
void rgb(int Red, int Green, int Blue){
  analogWrite(RedPin, Red);
  analogWrite(GreenPin, Green);
  analogWrite(BluePin, Blue);
}
