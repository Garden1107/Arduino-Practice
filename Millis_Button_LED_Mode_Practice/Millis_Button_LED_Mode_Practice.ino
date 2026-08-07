
int mode = 0;


unsigned long currentMillis = 0;
unsigned long previousMillis = 0;

bool lightButton1 = false;
bool lightButton02 = false;
bool lightButtonON = false;

bool led = false;

int interval1 = 1000;
int interval02 = 200;

bool buttonState = HIGH;
bool previousButtonState = HIGH;

void setup() {
  // put your setup code here, to run once:
  pinMode(11, 1);
  pinMode(14, 2);

}

void loop() {
  // put your main code here, to run repeatedly:
  currentMillis = millis();
  buttonState = digitalRead(14);

  if(previousButtonState == LOW && buttonState == HIGH){
    mode++;
    if(mode == 1){
      lightButton1 = true;
      lightButton02 = false;
      lightButtonON = false;
    }
    else if(mode == 2){
      lightButton1 = false;
      lightButton02 = true;
      lightButtonON = false;
    }
    else if(mode == 3){
      lightButton1 = false;
      lightButton02 = false;
      lightButtonON = true;
    }
    if(mode == 4){
      digitalWrite(11, 0);
      lightButtonON = false;
      lightButton02 = false;
      lightButtonON = false;
    }
    if(mode > 4){
      mode = 0;
    }
  }
  previousButtonState = buttonState;



  if(lightButton1){
    if(currentMillis - previousMillis >= interval1){
      if(!led){
        digitalWrite(11, 1);
        led = true;
      }else{
        digitalWrite(11, 0);
        led = false;
      }
      previousMillis = currentMillis;
    }
  }

  if(lightButton02){
    if(currentMillis - previousMillis >= interval02){
      if(!led){
        digitalWrite(11, 1);
        led = true;
      }else{
        digitalWrite(11, 0);
        led = false;
      }
      previousMillis = currentMillis;
    }
  }

  if(lightButtonON){
    digitalWrite(11, 1);
  }

}
