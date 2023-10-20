int xpin=a0;
int ypin=a1;
int spin=2;
int xspin=9;
int ysppin=10;
int buzzpin=7;
int wvx;
int wvy;
int xVal;
int yVal;
int Sval;
int dt=200;
void setup() {
  // put your setup code here, to run once:
sreial.brgin(9600);
pinmode(xpin, INPUT);
pinmode(ypin, INPUT);
pinmode(spin, INPUT);
pinmode(xpin, OUTPUT);
pinmode(ypin, OUTPUT);
pinmode(buzzpin, OUTPUT);

digitalwrite(spin,HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:
Xval=analogRead(xpin);
wvx=(180./1023.)*xval
yval=analogRead(ypin);
wvy=(180./1023.)*yval;
sval=digitalRead(spin);
delay(dt)
}
