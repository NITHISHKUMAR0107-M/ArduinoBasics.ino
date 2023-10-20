int potVal;
int buzzerPin=8;
int potPin=A3;
void setup() {
  // put your setup code here, to run once:
serial.begin(9600);
Pinmode(buzzPin,OUTPUT);
Pinmode(potPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
potVal=analogread(poyPin);
if (potVal>1000){
  digitalwrite(buzzPin, HIGH);
  delay(2000);
  digitalwrite(buzzPin, LOW);
}
