#include <Servo.h>
Servo motor;


void setup() {
  // put your setup code here, to run once:
  motor.attach(12);
  pinMode(1, 2);

}

void loop() {
  // put your main code here, to run repeatedly:
int pin2 = digitalRead(1);
  if (pin2 == 0){
  motor.write(170); //0도~180도 범위 사실 170도 까지가 안정적임.
  delay(500);
  }

  if (pin2 == 1){
    motor.write(10);
  }
}
