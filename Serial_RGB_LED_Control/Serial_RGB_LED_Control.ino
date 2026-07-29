void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0){
    //해당 매서드는 한번 부를때마다 한 글씩(1byte)읽음.
    char c = Serial.read(); 
    int n = Serial.parseInt();
    Serial.print(c);
    Serial.println(n);

    if (c == 'r') {analogWrite(9, n);}
    if (c == 'g') {analogWrite(10, n);}
    if (c == 'b') {analogWrite(11, n);}
  }

}
