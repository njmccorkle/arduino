// define pins
#define RedPin 6
#define GreenPin 5
#define BluePin 3

#define DelayTime 50

int LightValue = 0;
int Increment = 113;
  
void setup() {
  pinMode(RedPin, OUTPUT);
  pinMode(GreenPin, OUTPUT);
  pinMode(BluePin, OUTPUT);
  //digitalWrite(RED, HIGH);
  //digitalWrite(GREEN, LOW);
  //digitalWrite(BLUE, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  //SetColor (LightValue,255-LightValue,abs(LightValue-128));
  //SetColor (LightValue,0,0);
  //SetColor (0,LightValue,0);
  //SetColor (0,0,LightValue);
  delay (DelayTime);

  SetColor (0,0,0);
  //delay (DelayTime);
  //SetColor (0,0,0);
  //delay (DelayTime);
  
  if (LightValue >=  255) {
    Increment = -1;
  }

  if (LightValue <= 1) {
    Increment = 1;
  }

  LightValue += Increment;
}

void SetColor (int RedValue, int GreenValue, int BlueValue) {
  analogWrite (RedPin, RedValue);
  analogWrite (GreenPin, GreenValue);
  analogWrite (BluePin, BlueValue);


  
}

