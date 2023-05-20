int sensorPin = A0;   // select the input pin for the potentiometer
int digitalValue = 0;  // variable to store the value coming from the sensor
float analogVoltage = 0.00;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite (3, 30);
   digitalValue = analogRead(sensorPin);// read the value from the analog channel
  Serial.println("digital value = ");
  Serial.println(digitalValue);        //print digital value on serial monitor
  //convert digital value to analog voltage
  //analogVoltage = (digitalValue * 5.00)/1023.00;
 // Serial.print("  analog voltage = ");
 // Serial.println(analogVoltage);
 // delay(1000);

}
