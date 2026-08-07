unsigned long previousMillis = 0;
const long interval = 1000;
bool light = false;


void setup() {
  // put your setup code here, to run once:
  pinMode(11, 1);

}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned long currentMillis = millis();
  if(currentMillis - previousMillis >= interval){
    if(!light){
      digitalWrite(11, 1);
      light = true;
    }else{
      digitalWrite(11, 0);
      light = false;
    }
    previousMillis = currentMillis;
  }
}
