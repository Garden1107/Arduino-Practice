// Application project
// Applied concepts learned from previous Arduino exercises:
// - Arrays
// - sizeof()
// - Button input
// - tone()
// - Conditional statements


void setup() {
  // put your setup code here, to run once:
    pinMode(1, 2);

}

int melody[] = {392, 392, 440, 440, 392, 392, 329,  392, 392, 329, 329, 293,  
  392, 392, 440, 440, 392, 392, 329,  392, 329, 293, 329, 261};
int duration[] = {200, 200, 200, 200, 200, 200, 400,  200, 200, 200, 200, 500, 
  200, 200, 200, 200, 200, 200, 400, 200, 200, 200, 200, 400 }; 
 
int count = 0;


void loop() {
  // put your main code here, to run repeatedly:
    int pin1 = digitalRead(1);
    int melodySize = sizeof(melody) / sizeof(melody[0]);


    if (pin1 == 0 && count < melodySize){
      tone(11, melody[count], duration[count]);
      delay(duration[count] * 2);
      count++;

      if (count == melodySize){
        count = 0;
      }
      
    }
}
