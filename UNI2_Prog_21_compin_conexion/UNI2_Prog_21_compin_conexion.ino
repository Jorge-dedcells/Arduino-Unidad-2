int led = 13;

void setup(){
pinMode(led, OUTPUT);

Serial.begin(9600);  
}

void loop (){
digitalWrite(led,1);
Serial.println("Led Prende");
delay(500);
digitalWrite(led,0);
Serial.println("Led se apaga");
delay(500);
  
}
