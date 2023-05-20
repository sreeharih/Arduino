
//Initializing LED Pin
int led_pin = 6;
int trans
void setup() {
  //Declaring LED pin as output
  pinMode(led_pin, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  //Fading the LED
  for(int i=0; i<255; i++){
    analogWrite(led_pin, i);
    delay(5);
  }
  for(int i=255; i>0; i--){
    analogWrite(led_pin, i);
    delay(5);
  }
}
