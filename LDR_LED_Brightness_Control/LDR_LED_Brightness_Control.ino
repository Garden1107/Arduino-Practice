/*
 * CdS 조도센서를 이용한 LED 밝기 자동 조절
 *
 * - A3에서 조도센서의 아날로그 값을 읽음
 * - analogRead()의 0~1023 범위를 map()을 이용해 0~255로 변환
 * - 변환된 값을 PWM 출력으로 사용하여 LED 밝기를 조절
 * - 주변이 어두워질수록 센서값이 증가하고 LED가 밝아지도록 구현
 *
 * 학습한 내용을 바탕으로 센서값과 LED 밝기의 관계를 응용하여 구현함.
 */

 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int n = analogRead(A3);
  int light = map(n, 0, 1023, 0, 255);
  Serial.print("Sensor: ");
  Serial.print(n);
  Serial.print("  Light: ");
  Serial.println(light);

  analogWrite(10, light);

//  if (n >= 600){analogWrite(10, 255);}
//  else {analogWrite(10, 0);}

}
