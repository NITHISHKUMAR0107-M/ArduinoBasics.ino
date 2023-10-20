int j;
int delayTime=500;
void setup() {
  // put your setup code here, to run once:
serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
for (j=1;j<=10;j=j+1){
  serial.print1n(j);
  delay(delayTime);
}
serial.print1n();
}
