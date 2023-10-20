int redPin=8;
int greenPin=9;
int bluePin=10;
string mycolour;
string msg="what colour do you want?";
void setup() {
  // put your setup code here, to run once:
serial.begin(9600);
Pinmode(redPin,OUTPUT);
Pinmode(greenPin,OUTPUT);
Pinmode(bluePin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
serial.print(msg);
while (sreial.available()==0){

}
mycolour=serial.readstring();

if  (mycolour=="off"){
  digitalwrite(redPin,HIGH);
  digitalwrite(greenPin,LOW);
  digitalwrite(bluePin,LOW);
}

if  (mycolour=="yellow"){
  analogwrite(redPin,HIGH);
  analogwrite(greenPin,LOW);
  analogwrite(bluePin,0);
}

if  (mycolour=="cyan"){
  digitalwrite(redPin,1000);
  digitalwrite(greenPin,500);
  digitalwrite(bluePin,0);
}
