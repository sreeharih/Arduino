void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int a=1;
    int ts=micros();
      while(a>0){
//      count=count+1;
//     Serial.println(count);
//    Serial.println(a);
      a=0;
      }
      int tf=micros();
      Serial.print("*");
      Serial.print(tf-ts);
      delay(100);
}
