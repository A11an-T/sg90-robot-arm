#include <Servo.h>

Servo servo;
void setup() {
  // put your setup code here, to run once:
  servo.attach(9);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly: 
  servo.write(constrain(map(analogRead(A0),0,1023,0,180), 0, 180));
  Serial.println(analogRead(A0));
}
