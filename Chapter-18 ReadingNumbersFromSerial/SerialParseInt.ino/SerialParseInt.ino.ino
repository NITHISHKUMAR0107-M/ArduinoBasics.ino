float radius;
string msg="what is the radius of your circle?";
float area;
string msg2="your circle has area of: ";
float pi=3.14;
void setup() {
  // put your setup code here, to run once:
serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
serial.print1n(msg);
while (serial.parsefloat();
area=pi*radius*radius;
serial.print(msg2);
serial.print(area);
}
