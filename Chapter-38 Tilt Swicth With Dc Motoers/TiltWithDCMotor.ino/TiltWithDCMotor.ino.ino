int speedpin=5;
int dir1=4;
int dir2=3;
int mspeed=90;
int tiltpin=2;
void setup() {
  // put your setup code here, to run once:
Pinmode(speedpin,OUTPUT);
Pinmode(Tiltpin,INPUT);
serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalwrite(dir1,LOW);
digitalwrite(dir2,HIGH);
analogwrite(speedpin,225);
analogwrite(speedpin,mspeed);
dealy(5000);
}
