int sw = 14;
void setup() {
  //
  pinMode (sw,INPUT_PULLUP);
  Serial.begin (9600);
}
int i;
void loop() {
  //
  i = digitalRead(sw);
  //PWM da valores (0-255)
  //Digital (0 - 1) <-- digital read o write
  
      Serial.println(i);
}
