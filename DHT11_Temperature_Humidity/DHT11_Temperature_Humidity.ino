#include <DHT.h>
DHT dht(12, DHT11);


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(13, 1); digitalWrite(13, 1);
  dht.begin();

}

void loop() {
  // put your main code here, to run repeatedly:
  int h = dht.readHumidity();
  int t = dht.readTemperature();
  Serial.print("습도:");
  Serial.print(h);
  Serial.print("% 온도:");
  Serial.print(t);
  Serial.println("도");

}
