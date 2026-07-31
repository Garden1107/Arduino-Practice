#include <DS1302.h>
DS1302 rtc(13, 12, 11); //(RST, DAT, CLK)
// 시간끊김없이 사용하고 싶다면 RTC모듈먼저 제거하지말고 전원을 먼저 뽑은 뒤 뽑을것

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  analogWrite(9, 255); // VCC (5V)
  analogWrite(10, 0); // GND

//  rtc.writeProtect(false); //쓰기방지 끄기 (초기시간설정) 처음에만 업로드하고 그이후로는 주석처리(매번입력방지)
//  rtc.setDOW(FRIDAY); //Day Of Week(=DOW)
//  rtc.setTime(23, 04, 0); //(hour, min, sec)
//  rtc.setDate(31, 7, 2026); //(day, month, year)

}

void loop() {
  // put your main code here, to run repeatedly:
  String data = rtc.getDateStr(); //dd.mm.yyyy
  String dd = data.substring(0, 2); //dd
  String mm = data.substring(2, 6); //mm
  String yyyy = data.substring(6, 10); //yyyy
  Serial.print(yyyy);
  Serial.print(mm);
  Serial.print(dd);   Serial.print(" ");
  Serial.print(rtc.getDOWStr()); 
  Serial.print(" ");
  Serial.println(rtc.getTimeStr());
  delay(1000);

}
