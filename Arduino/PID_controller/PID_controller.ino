int photo=9;
int led=8;
int sensor,fan=3;
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(photo,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led,HIGH);
  digitalWrite(photo,HIGH);
  sensor=analogRead(A0);
  analogWrite(fan,255);
  Serial.println(sensor); 
}
