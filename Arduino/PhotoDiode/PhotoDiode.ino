int delayTime=3,val;
int receive=A0;
int trans=2;
int pin3=3;
int pin5=5;
void setup() {
  // put your setup code here, to run once:
 DDRB=B00001111;
 pinMode(trans,OUTPUT);
 Serial.begin(9600);
 pinMode(pin3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 // PORTB=B00000011;
  digitalWrite(trans,HIGH);
  digitalWrite(pin3,HIGH);
  
  val=analogRead(receive);
  if(val<=51)
  {
  analogWrite(pin5,255);
     
  }
  else
  {analogWrite(pin5,200);
    }  
  Serial.println(val);


}
