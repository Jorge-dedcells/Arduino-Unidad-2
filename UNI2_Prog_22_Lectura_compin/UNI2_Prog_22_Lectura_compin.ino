int led = 13;

void setup(){
pinMode(led, OUTPUT);

Serial.begin(9600); 
Serial.setTimeout(100); 
}

int valor;
void loop (){
if(Serial.available()>0){
  valor - Serial.readString().toInt();
  digitalWrite(led,valor);
Serial.println("Led se apaga");

}
delay(250);

  
}
