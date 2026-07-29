// Reference: 물리공작소 LAB - ARDUINO R3 기초 강의
// Modified:
// - playNote() 함수 추가
// - 버튼 입력에 따라 멜로디 재생/중단 기능 추가


void setup() {
  // put your setup code here, to run once:
  pinMode(1, 2);

  //도(261) 레(293) 미(329) 파(349)
  //솔(392) 라(440) 시(493) 높은 도(523)

  //  analogWrite(3, 0);
// tone(11, 392, 200); delay(400);
//  tone(11, 392, 200); delay(400);
//   tone(11, 440, 200); delay(400);
//      tone(11, 440, 200); delay(400);
//       tone(11, 392, 200); delay(400);
//  tone(11, 392, 200); delay(400);
//    tone(11, 329, 400); delay(800);
//    
//     tone(11, 392, 200); delay(400);
//  tone(11, 392, 200); delay(400);
//    tone(11, 329, 200); delay(400);
//        tone(11, 329, 200); delay(400);
//            tone(11, 293, 400); delay(1000);
//
//             tone(11, 392, 200); delay(400);
//  tone(11, 392, 200); delay(400);
//   tone(11, 440, 200); delay(400);
//      tone(11, 440, 200); delay(400);
//       tone(11, 392, 200); delay(400);
//  tone(11, 392, 200); delay(400);
//      tone(11, 329, 400); delay(800);
//
//       tone(11, 392, 400); delay(400);
//           tone(11, 329, 400); delay(400);
//                      tone(11, 293, 400); delay(400);
//                                 tone(11, 329, 400); delay(400);
//             tone(11, 261, 400); delay(400);
       

}

bool playNote(int note, int duration){
  int pin1 = digitalRead(1);
  if (pin1 == 1) {
    noTone(11);
    return false; //버튼 off
  }

  tone(11, note, duration);
  delay(duration * 2);

  return true; //버튼 on
}


void loop() {
  
  // put your main code here, to run repeatedly:
//  tone( 11, 261, 500); //부저사용중인 핀, 음주파수, 지속시간
//  delay(1000); //딜레이의 시간이 톤에게 부여됨.
//  analogWrite(3, 1);
//  delay(100);
if (!playNote(392, 200)) return;
if (!playNote(392, 200)) return;
if (!playNote(440, 200)) return;
if (!playNote(440, 200)) return;
if (!playNote(392, 200)) return;
if (!playNote(392, 200)) return;
if (!playNote(329, 400)) return;

if (!playNote(392, 200)) return;
if (!playNote(392, 200)) return;
if (!playNote(329, 200)) return;
if (!playNote(329, 200)) return;
if (!playNote(293, 500)) return;

if (!playNote(392, 200)) return;
if (!playNote(392, 200)) return;
if (!playNote(440, 200)) return;
if (!playNote(440, 200)) return;
if (!playNote(392, 200)) return;
if (!playNote(392, 200)) return;
if (!playNote(329, 400)) return;

if (!playNote(392, 200)) return;
if (!playNote(329, 200)) return;
if (!playNote(293, 200)) return;
if (!playNote(329, 200)) return;
if (!playNote(261, 400)) return;

//
//
//   tone(11, 392, 200); delay(400);
//  tone(11, 392, 200); delay(400);
//   tone(11, 440, 200); delay(400);
//      tone(11, 440, 200); delay(400);
//       tone(11, 392, 200); delay(400);
//  tone(11, 392, 200); delay(400);
//    tone(11, 329, 400); delay(800);
//    
//     tone(11, 392, 200); delay(400);
//  tone(11, 392, 200); delay(400);
//    tone(11, 329, 200); delay(400);
//        tone(11, 329, 200); delay(400);
//            tone(11, 293, 600); delay(1000);
//
//             tone(11, 392, 200); delay(400);
//  tone(11, 392, 200); delay(400);
//   tone(11, 440, 200); delay(400);
//      tone(11, 440, 200); delay(400);
//       tone(11, 392, 200); delay(400);
//  tone(11, 392, 200); delay(400);
//      tone(11, 329, 400); delay(800);
//
//       tone(11, 392, 400); delay(400);
//           tone(11, 329, 400); delay(400);
//                      tone(11, 293, 400); delay(400);
//                                 tone(11, 329, 400); delay(400);
//             tone(11, 261, 400); delay(400);

//  if(pin1 == 1){
//    noTone(11);
//    return;
//  }
}
