#include <servo.h>
int servpPin=9;
int lightVal;
int lightPin=A4;
int dt=250;
int angle;
servo myservo;
void setup() {
  // put your setup code here, to run once:
serial.begin(9600);
Pinmode(lightPin, INPUT);
Pinmode(servoPin, OUTPUT);
mysrevo.attach(servoPin);

}

void loop() {
  // put your main code here, to run repeatedly:
lighhtVal=analogRead(lightPin);
serial.print(lightVal);
delay(dt);
angle=(-16./63.)*lightVal+16.*780./63.;
myservo.write(angle);
}
