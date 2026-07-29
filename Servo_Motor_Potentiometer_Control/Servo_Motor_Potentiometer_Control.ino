#include <Servo.h>
Servo motor1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  motor1.attach(12);
}

void loop() {
  // put your main code here, to run repeatedly:
  int pinA1 = analogRead(A1);
  int value = map(pinA1, 0 , 1023, 170, 10); //가변저항의 돌리는 방향과 맞추고 싶다면 10, 170자리를 서로 바꾸면 됨.
  Serial.println(value);
  motor1.write(value);
  
}
