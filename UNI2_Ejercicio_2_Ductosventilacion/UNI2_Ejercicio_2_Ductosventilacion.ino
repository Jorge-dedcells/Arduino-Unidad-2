#include<Servo.h>
//int relevador = 12;

Servo V1;
Servo V2;
Servo V3;
Servo V4;

int S1=A0;
int S2=A1;
int S3=A2;
int S4=A3;

void setup() {
// put your setup code here, to run once:
V1.attach(13);
V2.attach(12);
V3.attach(11);
V4.attach(10);
Serial.begin(9600);
}

float tempS1,tempS2,tempS3,tempS4;
float temDeseadaC1 = 24,
temDeseadaC2 = 16,
temDeseadaC3 = 30,
temDeseadaC4 = 27;
void loop() {
// put your main code here, to run repeatedly:
tempS1 = 5.0 * analogRead(S1)* 100/1023.0;
tempS2 = 5.0 * analogRead(S2)* 100/1023.0;
tempS3 = 5.0 * analogRead(S3)* 100/1023.0;
tempS4 = 5.0 * analogRead(S4)* 100/1023.0;

 Serial.println("Temp C1: "+ String(tempS1)+"\r\n Temp C2: "+ String(tempS2)+
"\r\n Temp C3: "+ String(tempS3)+"\r\n Temp C4: "+ String(tempS4));

 if (tempS1 > temDeseadaC1){
V1.write(100);
}else{
V1.write(0);
}
if (tempS2 > temDeseadaC2){
V2.write(100);
}else{
V2.write(0);
}

 if (tempS3 > temDeseadaC3){
V3.write(100);
}else{
V3.write(0);
}

 if (tempS4 > temDeseadaC4){
V4.write(100);
}else{
V4.write(0);
}
delay(500);
}
