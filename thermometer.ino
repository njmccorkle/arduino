//www.elegoo.com
//2016.12.9

#include <SimpleDHT.h>
#include <LiquidCrystal.h>

// for DHT11, 
//      VCC: 5V or 3V
//      GND: GND
//      DATA: 2

int pinDHT11 = 2;
SimpleDHT11 dht11;

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

// initialize PWM backlight control parms
int backlight_pin10 = 3;
int brightness = 128; // This is default. Brightness = 0-255
int BrightnessButton = 4;
int BrightnessButtonState = 0;


void setup() {
  Serial.begin(9600);
  //setup LCD
  lcd.begin(16, 2);

  //setup PWM backlight controls
  pinMode(backlight_pin10, OUTPUT);         // sets pin10 as output
  pinMode(BrightnessButton, INPUT);
}

void loop() {

  analogWrite(backlight_pin10,brightness);  // PWM values from 0 to 255 (0% – 100% duty cycle)
  BrightnessButtonState = digitalRead(BrightnessButton);
  
  if (brightness == 256) {
    brightness = 0;
  }
  Serial.println("no");
  if (BrightnessButtonState == HIGH) {
    Serial.println("yes");
    brightness = brightness + 32;
  }
  

  //lcd.print("Hello world!");
  // start working...
  //Serial.println("=================================");
  //Serial.println("Sample DHT11...");
  
  // read with raw sample data.
  byte temperatureC = 0;
  long temperatureF = 0;
  byte humidity = 0;
  byte data[40] = {0};
  if (dht11.read(pinDHT11, &temperatureC, &humidity, data)) {
    //Serial.print("Read DHT11 failed");
    return;
  }
  
//  Serial.print("Sample RAW Bits: ");
//  for (int i = 0; i < 40; i++) {
//    Serial.print((int)data[i]);
//    if (i > 0 && ((i + 1) % 4) == 0) {
//      Serial.print(' ');
//    }
//  }
//  Serial.println("");

//  Serial.println("Sample OK: ");
//  Serial.print("Temp (F): "); Serial.print((int)temperatureF); Serial.println(" *F");
//  Serial.print("Temp (C): "); Serial.print((int)temperatureC); Serial.println(" *C");
//  Serial.print("Humidity: "); Serial.print((int)humidity); Serial.println(" %");

  temperatureF = temperatureC * 9 / 5 + 32.0;

  lcd.setCursor(0, 0);
  lcd.print("Temp: "); lcd.print((int)temperatureC);lcd.print("C/");lcd.print((int)temperatureF); lcd.print("F"); 
  lcd.setCursor(0, 1);
  lcd.print("Humidity: "); lcd.print((int)humidity); lcd.print(" %");
  // DHT11 sampling rate is 1HZ.
  delay(1000);
}
