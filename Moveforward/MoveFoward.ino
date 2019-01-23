#include <Servo.h>

Servo esc;

void setup(){
  
esc.attach(9);
delay(2000);
esc.write(150); // HI
delay(5000);

}

void loop(){
 }
