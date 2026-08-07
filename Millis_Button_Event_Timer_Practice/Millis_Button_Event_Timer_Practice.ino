const int interval = 3000;
const int intervalG = 500;

unsigned long currentMillis = 0;
unsigned long previousMillis = 0;
unsigned long previousMillisG = 0;

unsigned long blinkStartMillis = 0;

bool ledState = false;
bool blinkS = false;
bool previousButtonState = HIGH; 
bool buttonState = HIGH;


void setup() {
  // put your setup code here, to run once:
  pinMode(11, 1);
  pinMode(14, 2);

}

void loop() {
  // put your main code here, to run repeatedly:
  int A0 = digitalRead(14);
  buttonState = digitalRead(14);
  
  currentMillis = millis();

  if(previousButtonState == HIGH && buttonState == LOW){
    blinkS = true;
    blinkStartMillis = millis();
  }else{
    if(currentMillis - blinkStartMillis >= interval){
      digitalWrite(11, 0);
      blinkS = false;
    }
  }
  previousButtonState = buttonState;

  if(blinkS){
    if(currentMillis - previousMillisG >= intervalG){
      if(!ledState){
        digitalWrite(11, 1);
        ledState = true;
      }
      else{
        digitalWrite(11, 0);
        ledState = false;
      }
      previousMillisG = currentMillis;
    }
  }
}
