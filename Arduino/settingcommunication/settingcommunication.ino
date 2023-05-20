int sensorPin = A0;
int  sensorValue=0,val=0;
int drd[4096];



void setup() {
  //Initialize serial and wait for port to open:
  Serial.begin(9600);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB
  }
  DDRB=B00001111;
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available()>0){
    //String x=Serial.readString();
    //if (Serial.read){
    int x=Serial.readString().toInt();
    Serial.println(x);
    int i=256;
    //Serial.println(i);
    while(i>0){
      //Serial.println(i);
      PORTB = B00001000;
      delay(x);
      sensorValue = analogRead(sensorPin);
      Serial.println(sensorValue);
      //Serial.println(";");
      drd[val]=sensorValue;
      val=val+1;
      PORTB = B00001100;
      delay(x);
      sensorValue = analogRead(sensorPin);
      Serial.println(sensorValue);
      //Serial.println(";");
      drd[val]=sensorValue;
      val=val+1;
      PORTB = B00000100;
      delay(x);
      sensorValue = analogRead(sensorPin);
      Serial.println(sensorValue);
      //Serial.println(";");
      drd[val]=sensorValue;
      val=val+1;
      PORTB = B00000110;
      delay(x);
      sensorValue = analogRead(sensorPin);
      Serial.println(sensorValue);
      //Serial.println(";");
      drd[val]=sensorValue;
      val=val+1;
      PORTB = B00000010;
      delay(x);
      sensorValue = analogRead(sensorPin);
      Serial.println(sensorValue);
      //Serial.println(";");
      drd[val]=sensorValue;
      val=val+1;
      PORTB = B00000011;
      delay(x);
      sensorValue = analogRead(sensorPin);
      Serial.println(sensorValue);
      //Serial.println(";");
      drd[val]=sensorValue;
      val=val+1;
      PORTB = B00000001;
      delay(x);
      sensorValue = analogRead(sensorPin);
      Serial.println(sensorValue);
     // Serial.println(";");
      drd[val]=sensorValue;
      val=val+1;
      PORTB = B00001001;
      delay(x);
      sensorValue = analogRead(sensorPin);
      Serial.println(sensorValue);
      //Serial.println(";");
      drd[val]=sensorValue;
      val=val+1;
      
      i--;
    }
    Serial.println("ended The PROCESS");
    //int ar=drd[];
   //Serial.println(drd[5]);
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
  

  
}
