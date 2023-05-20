void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}
long int t1,t2;
int check=0;
void loop() {
  // put your main code here, to run repeatedly:
if(Serial.available()>0)
{Serial.read();
t1=millis();
for(int i=1;i<=200;i++)
{Serial.print(i);
 Serial.print(',');
 }
t2=millis(); 
Serial.print(t1);
Serial.print(',');  
Serial.print(t2);
check=1;
}
  


}
