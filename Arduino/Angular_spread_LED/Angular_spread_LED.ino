int delayTime=5,steps=0;
void setup() {
  // put your setup code here, to run once:
  DDRB=B00001111;
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  while(steps<=512)
 {PORTB=B00000001;
  delay(delayTime);
  PORTB=B00000011;
  delay(delayTime);
  PORTB=B00000010;
  delay(delayTime);
  PORTB=B00000110;
  delay(delayTime);
  PORTB=B00000100;
  delay(delayTime);
  PORTB=B00001100;
  delay(delayTime);
  PORTB=B00001000;
  delay(delayTime);
  PORTB=B00001001;
  delay(delayTime);
  steps++;
 }
}
