#include <LiquidCrystal.h>

//LiquidCrystal lcd(8,9,4,5,6,7);
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);
int backlight_pin10 = 3;
int brightness = 128;
//int button1 = 2;
int button1 = 4;
int buttonState = 0;

void setup() {
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("Backlight");
  lcd.setCursor(0,1);
  lcd.print("Brightness");
  
  pinMode(backlight_pin10, OUTPUT);         // sets pin10 as output
  pinMode(button1, INPUT);

  Serial.begin(9600);

}

void loop() {

analogWrite(backlight_pin10,brightness);  // PWM values from 0 to 255 (0% – 100% duty cycle)

buttonState = digitalRead(button1);
delay(200);
//delay(1000);

if (brightness == 256)
{
brightness = 0;
}
Serial.println("no");
if (buttonState == HIGH)
{
  Serial.println("yes");
  brightness = brightness + 32;

}

}
