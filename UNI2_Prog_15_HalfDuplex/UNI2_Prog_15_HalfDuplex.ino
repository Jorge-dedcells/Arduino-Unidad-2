int sensor1 = A0;
int sensor2 = A1;
int sensor3 = A2;

int ledaccion = 13;
void setup() {
  pinMode(ledaccion,OUTPUT);
  
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.setTimeout(100);
}
int valor1;
int valor2;
int valor3;

int accion; 
void loop() {

  if(Serial.available()>0){
    accion = Serial.readString().toInt();
    digitalWrite(ledaccion, accion);
  }
  // put your main code here, to run repeatedly:
//valor1 = analogRead(sensor1);
//valor2 = analogRead(sensor2);
//valor3 = analogRead(sensor3);
valor1 = map(valor1, 0, 1023, 0, 100);
valor2 = map(valor2, 0, 1023, 0, 100);
valor3 = map(valor3, 0, 1023, 0, 100);

Serial.println("I" + String (valor1) + String (valor2) + String(valor3) + "F");

delay (100);
}
