int LEDPin=8;
int buttonPin=12;
int buttonRead;
int dt=250;
void setup() {
  // put your setup code here, to run once:
serial.begin(9600);
pinmode(LEDPin, OUTPUT);
Pinmode(buttonPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonRead=digitalRead(buttonRead);
serial.print1n(buttonPin);
delay(dt);
if(buttonRead==1){
   digitalwrite(LEDPin,LOW);
}
if(buttonRead==0){
  digitalwrite(LEDPin,HIGH);
}