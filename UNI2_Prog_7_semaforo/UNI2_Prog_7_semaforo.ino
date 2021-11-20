int swGreen = 14;
int swYellow = 15;
int swRed = 16;

int ledGreen = 11;
int ledYellow = 12;
int ledRed = 13;

void setup() {
  pinMode(swGreen, INPUT_PULLUP);
  pinMode(swYellow, INPUT_PULLUP);
  pinMode(swRed, INPUT_PULLUP);

  pinMode(ledGreen, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledRed, OUTPUT);
  
  Serial.begin(9600);
}

bool vG, vY, vR;
void loop() {

  vG = digitalRead(swGreen);  // [0 - 1] 
  vY = digitalRead(swYellow);  // [0 - 1] 
  vR = digitalRead(swRed);  // [0 - 1] 

  vG = !vG;
  vY = !vY;
  vR = !vR;

  Serial.println(String(vG) + " " + String(vY) + " " + String(vR));

  digitalWrite(ledGreen,vG);
  digitalWrite(ledYellow,vY);
  digitalWrite(ledRed,vR);

  delay(250);
}

//Tarea (Programa).- Simulación de la Compuerta XOR con entrada de datos por "switch" y representación 
//del resultado en un LED
