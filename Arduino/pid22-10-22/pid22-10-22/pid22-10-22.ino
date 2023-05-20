int led_pin = 6;      // select the pin for the LED
int sensorValue = 0; 
int data[600];
int x=100;
int error=0;
int ts,tf,tc;
void setup() {
Serial.begin(115200);
while (!Serial){
    ;
}
pinMode(led_pin, OUTPUT);
//bitSet(ADCSRA,ADPS0);
//bitSet(ADCSRA,ADPS1);
//bitSet(ADCSRA,ADPS2);
}

void loop() {
analogWrite(led_pin,x);
//  analogWrite(led_pin,x);
delay(200);
int t1=millis();
  for (int i=0;i<500;i++){
    sensorValue = analogRead(A0);
    data[i]=sensorValue;
   }
int t2=millis();
int t=t2-t1;
int i=0;
int count=0;
int a=1;
int b=0;
while(i<500){
  if (data[i]>50){
    while(data[i]>50){
      ;//donothing
      i=i+1;
      b=1;
    }
    }
  else if (data[i]<50){
  while(a>0&&b==1&&i<500){
    if (data[i]>50){
      ts=micros();
      while(data[i]>50){
      i=i+1;
      }
      tf=micros();
      a=0;
      tc=tf-ts;
      Serial.println("*");
      Serial.println(tc);
      error=38-tc;
      x=abs(160+1*error);
      Serial.print("**");
      Serial.print(x);
//      Serial.print(count);
      break;
    }
    else if (data[i]<50){
        a=1;
    }
    i=i+1;
  }
  }
 
 i=i+1;
}
}
