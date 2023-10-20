int speedpin=5;
int dir1=4;
int dir2=3;
int mspeed;
int jpin=A1;
int jVal;
void setup() {
  // put your setup code here, to run once:
pinmode(speedpin,OUTPUT);
Pinmode(dir1,OUTPUT);
Pinmode(dir2,OUTPUT);
Pinmode(jpin,INPUT);
serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
jVal=analogRead(jpin);

serial.print1n(jVal);
if (jVal<512){
  digitalwrite(dir1,LOW);
  digitalwrite(dir2,HIGH);
  mspeed=-225./512.*jval+225.;
  analogwrite(speedpin,mspeed);
}
digitalwrite(dir1,LOW);
digitalwrite(dir2,HIGH);
analogwrite(speedpin,mspeed);
}