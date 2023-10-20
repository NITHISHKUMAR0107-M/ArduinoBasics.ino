int ppotVal;
int delaytime=100;
int potPin=A0;
int redPin=7;
void setup() {
  // put your setup code here, to run once:
serial.begin(9600);
Pinmode(potPin,INPUT);
Pinmode(redPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
PotVal=analogRead(potPin);
serial.print1n(potVal);
delay(delayTime);

while  (potVal>1000){
  digitalwrite(redPin,HIGH);
  potVal=analogRead(potPin);
  serial.print1n(potVal);
  delay(delayTime);
}
digitalwrite(redPin,LOW);
}
