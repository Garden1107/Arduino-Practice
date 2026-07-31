// Combined DHT11, DS1302 RTC, and I2C LCD modules
// to display temperature, humidity, date, and time together.
// DHT11, DS1302 RTC, I2C LCD를 결합하여
// 온도, 습도, 날짜, 시간을 한 화면에 표시하는 응용 실습

#include <DHT.h>
DHT dht(12, DHT11);

#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DS1302.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);
DS1302 rtc(7, 6, 5); //(RST, DAT, CLK)


void setup() {
  // put your setup code here, to run once:
    Serial.begin(9600); //for test
  
    pinMode(13, 1); digitalWrite(13, 1);

    analogWrite(4, 0); // GND
    analogWrite(3, 255); // VCC (5V)

    dht.begin();

    lcd.init();
    lcd.backlight();

    rtc.writeProtect(false);  //comment out these lines once you finish setting the time.
    rtc.setDOW(SATURDAY);
    rtc.setTime(00,58,30);
    rtc.setDate(01, 8, 2026);
}


void loop() {
  // put your main code here, to run repeatedly:
  int h = dht.readHumidity();
  int t = dht.readTemperature();

  String data = rtc.getDateStr();
  String dd = data.substring(0, 2);
  String mm = data.substring(2, 6);
  String yyyy = data.substring(6, 10);

  String timeStr = rtc.getTimeStr();
  String hourMin = timeStr.substring(0, 5);

//for test
//  Serial.print(h);  
//  Serial.println(t);
//  Serial.println(rtc.getTimeStr());
//  lcd.print("test");
//  delay(1000);


  lcd.setCursor(0,0);
  lcd.print(yyyy); lcd.print(mm); lcd.print(dd);
  
  lcd.setCursor(0,1); lcd.print(rtc.getTimeStr());
  
//  lcd.print(hourMin);  //if you want to use a shorter time string, you can use this.

  lcd.setCursor(11, 0);
  lcd.print("T"); lcd.print(": "); lcd.print(t);
  lcd.setCursor(11, 1);
  lcd.print("H"); lcd.print(": "); lcd.print(h); 


  

}
