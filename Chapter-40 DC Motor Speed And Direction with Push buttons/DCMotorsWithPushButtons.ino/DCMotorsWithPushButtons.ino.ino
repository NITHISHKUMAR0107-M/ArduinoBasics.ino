int speedpin=5;
int dir1=4;
int dir2=3;
int BP1=8;
int BP2=9;
int B1Val;
int B2Val;
int mspeed=225;
void setup() {
  // put your setup code here, to run once:
pinmode(speedpin,OUTPUT);
Pinmode(dir1,OUTPUT);
Pinmode(dir2,OUTPUT);
Pinmode(BP1,INPUT);
Pinmode(BP2,INPUT);
digitalwrite(BP1,HIGH);
digitalwrite(BP2,HIGH);
serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
B1Val=analogRead(BP1);
B2Val=analogRead(BP2);
serial.print("Button 1 ");
serial.print(B1Val);
serial.print("Button 2 ");
serial.print1n(B2Val);

digitalwrite(dir1,LOW);
digitalwrite(dir2,HIGH);
analogwrite(speedpin,mspeed);
}
