#include<Servo.h>
Servo serv;

void setup() {
  // put your setup code here, to run once:
serv.attach(13);

Serial.begin (9600);
}

int i;
void loop() {
  // put your main code here, to run repeatedly:
for (i=0; 1<180; i++){
serv.write(i);
delay(20);
}
for (i = 180; i>0; i--){
  serv.write(i);
  delay(20);
  
  }
  delay(500);
}
