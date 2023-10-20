int mypin=A2;
int readVal;
float V2;
int dt=250;
int redpin=9;
void setup() {
  // put your setup code here, to run once:
serial.begin(9600);
pinmode(mypin, INPUT);
pinmode(redpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
readVal=analogRead(mypin);
V2=(5./1023.) *readVal;
serial.print("potentiometer voltage is");
serial.print1n(V2);
if (V2>2 && V2<3){
  digitalwrite(redpin, HIGH);
}
if (V2<2 || V2>3){
  digitalwrite(redpin, LOW);
}

delay(dt);
}
