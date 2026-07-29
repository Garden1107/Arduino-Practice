void setup() {
  // put your setup code here, to run once:
//  pinMode(12, 1); // 디지털의 정확한 5V표현을 위해 필요함
      pinMode(2, 1); pinMode(3, 1);
      pinMode(4, 1); pinMode(5, 1);
  

  //OUTPUT: 출력설정 "1" 이쪽으로 전압을 발생시켜서 전류를 흐르게하겠다는 이야기
  //INPUT: 입력설정 "0" 외부기기로 부터 출력을 받겠다는 이야기 //초음파센서나 블루투스같은것들
  //INPUT_PULLUP: 풀업 스위치 "2"
}

void loop() {
  // put your main code here, to run repeatedly:
//   digitalWrite(12, 1); //HIGH : "1"(5V)
//   delay(500);
//   digitalWrite(12, 0); //LOW : "0"(0V)
//   delay(500);

int t = 100;
  for(int i = 2; i < 6; i++){
    digitalWrite(i, 1); delay(t);
    digitalWrite(i, 0);    
  }
    for(int i =  4; i > 2; i--){
    digitalWrite(i, 1); delay(t);
    digitalWrite(i, 0);    
  }

}
