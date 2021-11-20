int sw1 = 10;
int sw2 = 9;
int led = 11;
byte suma;

void setup() {
  pinMode(sw1, INPUT_PULLUP);
  pinMode(sw2, INPUT_PULLUP);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}


void loop() {

     suma= digitalRead(sw1)+digitalRead(sw2);
     digitalWrite(led, suma%2);
    
  
  delay(250);
}

//Tarea (Programa).- Simulación de la Compuerta XOR con entrada de datos por "switch" y representación 
//del resultado en un LED
