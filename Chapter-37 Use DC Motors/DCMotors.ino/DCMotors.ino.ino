int speedpin=5;
int dir1=4;
int dir2=3;
int mspeed=100;
void setup() {
  // put your setup code here, to run once:
pinmode(speedpin,OUTPUT);
Pinmode(dir1,OUTPUT);
Pinmode(dir2,OUTPUT);
serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalwrite(dir1,LOW);
digitalwrite(dir2,HIGH);
analogwrite(speedpin,mspeed);
}
