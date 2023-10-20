int buttonpin=2;
int buttonvalue;
int dt=100;
void setup() {
  // put your setup code here, to run once:
pinmode(buttonpin,INPUT);
digitalwrite(buttonpin,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonvalue=digitalRead(buttonpin);
serial.print("your button is: ");
serial.print1n(buttonvalue);
delay(dt);
}
