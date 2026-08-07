const int intervalR = 1000;
const int intervalG = 500;


unsigned long currentMillis = 0;
unsigned long previousMillisG = 0;
unsigned long previousMillisR = 0;


bool rLight = false;
bool gLight = false;



void setup() {
  // put your setup code here, to run once:
  pinMode(11, 1);
  pinMode(14, 1);

}

void loop() {
  currentMillis = millis();

  if(currentMillis - previousMillisG >= intervalG){
    if(!gLight){
      digitalWrite(11, 1);
      gLight = true;
    }
    else{
      digitalWrite(11, 0);
      gLight = false;
    }
    previousMillisG = currentMillis;
  }
  
  
  if(currentMillis - previousMillisR >= intervalR){
    if(!rLight){
      digitalWrite(14, 1);
      rLight = true;
    }
    else{
      digitalWrite(14, 0);
      rLight = false;
    }
    previousMillisR = currentMillis;
  }

  
}
