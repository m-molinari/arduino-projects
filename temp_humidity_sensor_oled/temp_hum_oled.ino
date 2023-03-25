// Oled Screen Libraries
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// DH11 sensor Library
#include <SimpleDHT.h>

// Screen Define
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 32
#define OLED_RESET     -1
#define SCREEN_ADDRESS 0x3C
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

// Sensor define
SimpleDHT11 dht11;

void setup() {
  //Serial.begin(9600);

// Test Screen
  if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 allocation failed"));
    for(;;);
  }

// Adafruit Logo
  display.display();
  delay(2000);
  display.clearDisplay();
}

void loop() {
  // Setting Variables, Temperature and Humidity
  byte t = 0;
  byte h = 0;
  int error = SimpleDHTErrSuccess;

  // Check sensor functionality
  if (( error = dht11.read(8, &t, &h, NULL )) != SimpleDHTErrSuccess )  {
    display.print("Errore di lettura");
    delay(500);
    return;
  }
  else
  {
    // Setting color
    display.setTextColor(WHITE);
    // Setting Test size
    display.setTextSize(2);    
    // Font
    display.cp437(true);
    // Print Temperature with newline
    Serial.println(t);
    display.clearDisplay();
    // Point cursor
    display.setCursor(0, 0);
    // Print Temperature variable
    display.print("Temp: ");
    display.print(t);
    display.print("C");
    // Empty line
    display.println("");
    // Point cursor
    display.setCursor(0, 18);
    // Print Humidity variable
    display.print("Umid: ");
    display.print(h);
    display.print("%");
    display.display();
    // Delay 1 second
    delay(1000);
  }
}

