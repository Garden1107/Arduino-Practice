#include <IRremote.h>
#include <Servo.h>

Servo motor;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  IrReceiver.begin(2); //2번 핀으로 IR신호 수신 시작
  motor.attach(3);
  motor.write(90);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (IrReceiver.decode()){ // IR신호가 있으면
    long data = IrReceiver.decodedIRData.decodedRawData;
    //4바이트 data변수에 RawData값 저장

    Serial.println(data, HEX); //16진수로 시리얼모니터 출력

    if (data == 0xBF40FF00) { // 각각의 버튼값
      motor.write(35); delay(300);
      motor.write(90); delay(300);
    }
    else if (data == 0xBB44FF00) {
      motor.write(140); delay(300);
      motor.write(90); delay(300);
    }

     IrReceiver.resume(); //IR신호를 다시 받음, 하지않으면 추가적인 신호를 받을수없으므로 주의
  }

}
