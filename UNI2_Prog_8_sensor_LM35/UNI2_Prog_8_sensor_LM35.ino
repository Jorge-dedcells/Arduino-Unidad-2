int ldr = A1;
void setup() {
  // put your setup code here, to run once:

Serial.begin (9600);
}

//int valor;
float valor;
void loop() {
  // put your main code here, to run repeatedly:

valor = analogRead(ldr);
Serial.println ("Temperatura" + String(valor));


}
