#include <LiquidCrystal_I2C.h>
//#include <LiquidCrystal.h>
#include <Wire.h>

//LiquidCrystal_I2C lcd(0);
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);


void setup() {
  // put your setup code here, to run once:
  lcd.begin(16,2);
  
  lcd.backlight();
  delay(100);
  lcd.noBacklight();
  delay(100);
  lcd.backlight();

}

void loop() {
  // put your main code here, to run repeatedly:
//  lcd.backlight();
//  delay(500);
//  lcd.noBacklight();
//  delay(500);

  //lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Hello, world!");
}
