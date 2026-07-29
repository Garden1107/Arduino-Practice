void setup() {
  // put your setup code here, to run once:
//  pinMode(9, 2);
//  // INPUT_PULLUP
//  // 평소 5V("1") 버튼누르면 0V("0")
}

void loop() {
  //9번 빨강 //10번 초록 //11번 파랑  
  analogWrite(11, 255);
  analogWrite(10, 125);
  delay(500);
  analogWrite(11, 0);
  analogWrite(10, 0);
  analogWrite(11, 255);
  analogWrite(9, 125);
  delay(500);
  analogWrite(11, 0);
  analogWrite(9, 0);
  analogWrite(10, 125);
  analogWrite(9, 255);
  delay(500);
  analogWrite(10, 0);
  analogWrite(9, 0);
//  int pin9 = digitalRead(9);
//  if (pin9 == 0){ //버튼누름
//    for(int i = 255; i >= 0; i--){
//      analogWrite(11, i);
//      analogWrite(10, i);
//      delay(1);
//    }
  }
//  if (pin9 == 1){ //평소
//    analogWrite(11,0);
//    analogWrite(10,0);
//  }
