int delayTime=3;
void setup() {
  // put your setup code here, to run once:
 DDRB=B00001111;
}

void loop() {
  // put your main code here, to run repeatedly:
  PORTB=B00000001;
  delay(delayTime);
  PORTB=B00000010;
  delay(delayTime);
  PORTB=B00000100;
  delay(delayTime);
  PORTB=B00001000;
  delay(delayTime);

}
