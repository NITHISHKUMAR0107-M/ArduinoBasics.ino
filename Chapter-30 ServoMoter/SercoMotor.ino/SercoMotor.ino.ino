#include <servo.h>
int servoPin=9;
int servoPos=165;
servo myservo;
void setup() {
  // put your setup code here, to run once:
serial.begin(9600);
myservo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
serial.print1n("what angle for the servo?");
while (serial.available()==0){
}
