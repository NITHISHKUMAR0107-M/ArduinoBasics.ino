int tiltpin=2;
int tiltVal;
int reedpin=7;
int greenpin=6;
void setup() {
  // put your setup code here, to run once:
pinmode(tiltpin,INPUT);
digitalwrite(redpin,OUTPUT);
pinmode(greenpin,OUTPUT);
digitalwrite(tiltpin,HIGH);
serial.brgin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
tiltval=digitalRead(tiltpin);
serial.print1n(tiltval);
if (tiltval==0){
  digitalwrite(greenpin,HIGH);
  digitalerite(redpin,LOW);
}
if (tiltval==1){
  digitalwrite(greenpin,HIGH);
  digitalerite(redpin,HIGH);
}