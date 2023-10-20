int buzzPin=8;
int potPin=A1;
int potVal;
int toneVal;
void setup() {
  // put your setup code here, to run once:
 Pinmode(buzzPin, OUTPUT);
 Pinmode(potPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal=analogRead(potPin);
  toneVal=(9940./1023.)*potVal+60;
digitalwrute(buzzPin, HIGH);
delaymicroseconds(toneVal);
digitalwrite(buzzPin, LOW);
delaymicroseconds(toneVal);  
}
