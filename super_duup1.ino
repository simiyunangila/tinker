#include<Servo.h>//headerfile for servo
Servo myservo;//declare servo object
int potpin = A0;
int val;
void setup(){myservo.attach(9);
            }
void loop(){val = analogRead(potpin);
            val = map(val,0,1023,0,180);
            myservo.write(val);
            delay(15);
           }