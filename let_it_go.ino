/*
Name: Thanoosan Sathiescumar
Course: TEJ3M1
Song: Let It Go - Frozen (From don't let them in...can't hold it back anymore)
Date: 4/13/2016
notes: 
most of the notes were not pitched well so I had to improvise, 
thus why some parts may seem screeched
every note is a lyric(conveniently the melodies lyrics were 1-2 syllable)
*/

void setup() {//assign pin roles
  
  pinMode(8, OUTPUT);//pin number 2 behaves as an output
  
}

void loop(){

  //don't let them in
  tone(2,440.00,200);
  delay(200);
  tone(2,440.00,250);
  delay(250);
  tone(2,587.33,250);
  delay(300);
  tone(2,587.33,250);
  delay(500);
  
  //don't let them see
  tone(2,440.00,250);
  delay(250);
  tone(2,440.00,250);
  delay(250);
  tone(2,587.33,250);
  delay(300);
  tone(2,659.25,250);
  delay(500);
  
  //Be the good girl you always have to be
  tone(2,659.25,150);
  delay(200);
  tone(2,587.33,150);
  delay(150);
  tone(2,659.25,150);
  delay(200);
  tone(2,659.25,150);
  delay(300);
  
  tone(2,659.25,250);
  delay(250);
  tone(2,739.99,150);
  delay(300);
  tone(2,783.99,150);
  delay(450);
  tone(2,739.99,150);
  delay(300);
  tone(2,587.33,200);
  delay(500);
  
  //conceal don't feel, don't let them know
  tone(2,440.00,125);
  delay(250);
  tone(2,440.00,250);
  delay(250);
  tone(2,587.33,250);
  delay(300);
  tone(2,587.33,250);
  delay(500);
  
  tone(2,440.00,125);
  delay(250);
  tone(2,440.00,250);
  delay(250);
  tone(2,587.33,250);
  delay(250);
  tone(2,659.25,500);
  delay(700);
  
  //well now they know
  tone(2,587.33,125);
  delay(250);
  tone(2,659.25,150);
  delay(200);
  tone(2,739.99,250);
  delay(300);
  tone(2,783.99,500);
  delay(600);
 
  //let it go
  tone(2,659.25,200);
  delay(250);
  tone(2,739.99,200);
  delay(250);
  tone(2,783.99,400);
  delay(1000);
 
  //let it go
  tone(2,587.33,200);
  delay(225);
  tone(2,587.33,150);
  delay(225);
  tone(2,880.00,400);
  delay(1000);
  
  //can't hold it back anymore-had to comprimise the notes
  tone(2,783.99,150);
  delay(200);
  tone(2,659.25,125);
  delay(200);
  tone(2,659.25,300);
  delay(250);
  tone(2,659.25,300);
  delay(300);
  tone(2,739.99,150);
  delay(200);
  tone(2,783.99,400);
  delay(500);
  
  //ended it here because it is already long enough and the rest of the melody is repeated enough already                         rubenislyfe
}
  
