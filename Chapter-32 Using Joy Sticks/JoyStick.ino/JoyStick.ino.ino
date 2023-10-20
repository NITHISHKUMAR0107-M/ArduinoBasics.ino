int xpin=A0;
int Ypin=A1;
int Spin=2;
int Xval;
int Yval;
int Sval;
void setup() {
  // put your setup code here, to run once:
serial.begin(9600);
pinmode(xpin,INPUT);
Pinmode(Ypin,INPUT);
Pinmode(Spin,INPUT);
digitalwrite(spin,INPUT;)
}

void loop() {
  // put your main code here, to run repeatedly:
Xval=analogRead(Xpin);
Yval=analogRead(Ypin);
Sval=analogRead(Spin);
delay(dt);

serial.print("X value = ");
serial.print(Xval);
serial.print("Y value = ");
serial.print(Yval);
serial.print("switch state is ");
serial.print(Sval);
}
