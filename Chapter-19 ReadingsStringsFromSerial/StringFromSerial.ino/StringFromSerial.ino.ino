int erdPin=12;
int greenPin=11;
int bluePin=10;
string mycolour;
string msg="what colour LED?";
void setup() {
  // put your setup code here, to run once:
serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
serial.print1n(msg);
while (serial.available()==0){

}
mycolour=serial.readstring();

if (mycolour=="red"){
  digitalwrite(redPin,HIGH);
  digitalwrite(greenPin,LOW);
  digitalwrite(bluePin,LOW);

  digitalwrite(redPin,HIGH);
  digitalwrite(greenPin,LOW);
  digitalwrite(bluePin,HIGH);
}