int lightPin=A0;
int buzzPin=8;
int lightVal;
int delayT;
void setup() {
  // put your setup code here, to run once:
Pinmode(A0, OUTPUT);
Pinmode(buzzPin, OUTPUT);
serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
lightVal=analogRead(lightPin);
delayT=(9./550.)*lightVal-(9.*200./550.)+1.;
serial.print(lightVal);
digitalwrite(buzzPin, HIGH);
delay(delayT);
digitalwrite(buzzPin, LOW);
delay(delay);
}
