/*
 * DHT11 LCD Status Display
 *
 * Displays temperature and humidity measured by DHT11
 * on a 16x2 I2C LCD.
 *
 * Modification:
 * Added emoticons based on temperature and humidity
 * thresholds to make environmental conditions easier
 * to understand at a glance.
 */


#include <DHT.h>
DHT dht(12, DHT11);

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
//  Serial.begin(9600);
  pinMode(13, 1); digitalWrite(13, 1);
  dht.begin();
  
  // put your setup code here, to run once:
  lcd.init(); //초기화
  lcd.backlight(); //백라이트 작동하겠다

}

void loop() {
  // put your main code here, to run repeatedly:
  int h = dht.readHumidity();
  int t = dht.readTemperature();

  lcd.setCursor(0,0); // (x좌표, y좌표) 커서를 설정 한박스기준.
  lcd.print("Temp: ");
  lcd.setCursor(6,0); lcd.print(t);
  lcd.setCursor(0,1); lcd.print("Humi:");
  lcd.setCursor(6,1); lcd.print(h);

  if ( t < 30 ){
   lcd.setCursor(10,0); lcd.print("d^^d");
  }
  else {
    lcd.setCursor(10,0); lcd.print("q;_;");
  }

  if ( h < 52 ){
   lcd.setCursor(10,1); lcd.print("d^^d");
  }
  else{
    lcd.setCursor(10,1); lcd.print("q;_;");
  }
  

}
