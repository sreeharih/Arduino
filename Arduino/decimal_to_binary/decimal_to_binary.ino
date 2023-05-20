 int a=15;
 int b,i=0,t1,t2,t;
 int c[100],check=0;
 void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
if(check==0)
{
t1=micros();
while(a!=0)
{b=a%2;
 a=a/2;
 //Serial.print(b);
 c[i]=b;
 i++; 
}
t2=micros();
t=t2-t1;
Serial.println(t);

 for(int j=10;j>=0;j--)
 {
   Serial.print(c[j]);
  }
  check=1; 
 }

}
