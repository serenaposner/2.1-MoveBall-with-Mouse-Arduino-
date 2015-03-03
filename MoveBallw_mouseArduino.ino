/*
Arduino code to respond to processing sketch and move servo to respond to mouse
Serena Posner
DIGF 2B03 Physical Computing
OCAD University
Created on 022515
*/


#include <Servo.h>

Servo myservo;
int val;

void setup(){
  Serial.begin(9600);
  myservo.attach(7);
}

void loop(){
  if (Serial.available());
  {
    val = Serial.read();
    val = map(val, 0,400,0,180);
    myservo.write(val);
    delay(15);
    Serial.write(val);
  }
}
