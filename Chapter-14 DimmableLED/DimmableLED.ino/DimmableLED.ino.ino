int potpin=A1;
int gpin=6;
int potVal;
void setup() {
  // put your setup code here, to run once:
  pinmode(potpin, INPUT);
  pinmode(gpin, OUTPUT);
  serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal=analogread(potpin);
  LEDVal=(255./1023.)*potVal;
  Analogwrite(gpin,LEDVal);
  serial.print(LEDVal);
}
