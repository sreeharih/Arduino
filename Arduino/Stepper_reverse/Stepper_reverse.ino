int x=5;
void setup() {
  // put your setup code here, to run once:
  DDRB=B00001111;
}

void loop() {
  // put your main code here, to run repeatedly:
int j=256;
   while(j>0){
      PORTB = B00001001;
      delay(x);
      PORTB = B00000001;
      delay(x);
      PORTB = B00000011;
      delay(x);
      PORTB = B00000010;
      delay(x);
      PORTB = B00000110;
      delay(x);
      PORTB = B00000100;
      delay(x);
      PORTB = B00001100;
      delay(x);
      PORTB = B00001000;
      delay(x);
      j--;
  }
}
