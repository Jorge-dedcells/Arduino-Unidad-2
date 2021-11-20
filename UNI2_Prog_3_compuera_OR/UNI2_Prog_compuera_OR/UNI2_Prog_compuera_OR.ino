int sw1 = 10;
int sw2 = 9;
int led = 11;
byte n1,n2;

void setup() {
  pinMode(sw1, INPUT_PULLUP);
  pinMode(sw2, INPUT_PULLUP);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}


void loop() {

     n1= digitalRead(sw1);
     n2= digitalRead(sw2);
    
     digitalWrite(led, n1==1|| n2==1?1:0);
    
  
  delay(250);
}

//Tarea (Programa).- Simulación de la Compuerta XOR con entrada de datos por "switch" y representación 
//del resultado en un LED
