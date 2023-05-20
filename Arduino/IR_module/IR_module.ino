int trans=6;
int reciev=A0;

void setup() {
  // put your setup code here, to run once:
 pinMode(trans, OUTPUT);
 pinMode(reciev, INPUT);
 Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 //Serial.println("HAI");
 analogWrite(trans,255);
 v=analogRead(reciev);
}
