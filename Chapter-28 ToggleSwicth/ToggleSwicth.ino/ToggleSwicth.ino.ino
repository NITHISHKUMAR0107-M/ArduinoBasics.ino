int LEDState=0;
int LEDPin=8;
int buttonPin=12;
int buttonNew;
int buttonOld=1;
dt=100;
void setup() {
  // put your setup code here, to run once:
serial.begin(9600);
Pinmode(LEDPin, OUTPUT);
Pinmode(buttonPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonNew=digitalRead(buttonPin);
if(buttonOld==0 && buttonNew==1){
  if (LEDState==0){
    digitalwrite(LEDPin, HIGH);
    LEDState=1
}
else{
  digitalwrite(LEDPin,LOW);
  LEDState=0;
}
buttonOld=buttonNew;
}