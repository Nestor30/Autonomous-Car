#include <Servo.h>

Servo esc;

void setup(){
  esc.attach(9);
  delay(2000);
  esc.write(100);
  delay(5000);
}

void loop(){
  
}

