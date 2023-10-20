int lightPen=A0;
int lightVal;
int dv=250;
void setup() {
  // put your setup code here, to run once:
  Pinmode(lightpen,INPUT);
  serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
lightVal=analogread(lightpen);
serial.print1n(lightVal);
delay(dv);
}
