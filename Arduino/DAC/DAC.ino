 
void setup() {
  // put your setup code here, to run once:
DDRD = B11111111;
}

void loop() {
  // put your main code here, to run repeatedly:
  PORTD=B00000000;
  delayMicroseconds(7);
 //
 //delay(3000);
 //PORTD=B01111111;
 //PORTD=B10000000;
 PORTD=B11111111;
  //delay(1);
  delayMicroseconds(7);
 
}
