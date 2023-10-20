int buttonpin1=12;
int buttonpin2=11;
int LEDpin=3;
int buttonVal1;
int buttonVal2;
int LEDbright=0;
int dt=250;
void setup() {
  // put your setup code here, to run once:
pinmode(buttonpin1, INPUT);
Pinmode(buttonpin2, INPUT);
Pinmode(LEDPin, OUTPUT);
serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonVal1=digitalRead(buttonPin1);
buttonVal2=digitalRead(buttonpin2);
serial.print("button 1 =");
serial.print(", ";);
serial.print(buttonVal2);
delay(dt);
if (buttonVal1==0){
  LEDbright=bright+5; 
}
if (buttonVal12==0){
  LEDbright=LEDbright-5;
}
if(LEDbright>225){
  LEDbright=225;
}
if(LEDbright<0){
  LEDbright=0;
}
analogwrite(LEDpin, LEDbright);
}    
