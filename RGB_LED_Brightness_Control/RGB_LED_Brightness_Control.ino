void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  int pinA1 = analogRead(A1);

  //map함수 비율에 따라 조절해줌 본범위 => 변경범위 순으로 작성
  int blueValue = map(pinA1, 0, 1023, 0, 255); 
  analogWrite(11, blueValue);  
  int greenValue = map(pinA1, 0, 1023, 0, 125); 
  analogWrite(10, greenValue);  

  // 0V ~ 2.5V ~ 5V 읽음 (아날로그 입력)
  // ("0") ("512") ("1023")
  // 1024단계의 전압(0~5V)을 표현
  

}
