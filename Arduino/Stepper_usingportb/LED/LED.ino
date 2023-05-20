//int ;
String data;
int delayTime=4000;
void setup() {
 // pinMode(LED, OUTPUT);
  // put your setup code here, to run once:
  DDRB=B00001111;
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
 if(Serial.available()>0)
 {
  data=Serial.readString();
  while(data=="glow")
  {
  PORTB=B00000001;
  delay(delayTime);
  PORTB=B00000011;
  PORTB=B00000010;
  PORTB=B00000110;
  PORTB=B00000110;
  
  
 // delay(delayTime);
  data=Serial.readString();
  }
 // Serial.println(data);
 }
 
}
