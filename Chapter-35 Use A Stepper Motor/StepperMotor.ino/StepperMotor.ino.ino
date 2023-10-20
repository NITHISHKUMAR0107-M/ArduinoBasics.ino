#include<stepper.h>
int stepsperRevolution=2048;
int motspeed=10;
int dt=500;
stepper mystepper(stepsPerRevolution,8,10,9,11);
void setup() {
  // put your setup code here, to run once:
serial.begin(9600);
mystepper.setspeed(motspeed);
}

void loop() {
  // put your main code here, to run repeatedly:
mystepper.step(stepsperRevolution);
delay(dt);
mystepper.step(-stepsPerRevolution);
delay(dt);
}
