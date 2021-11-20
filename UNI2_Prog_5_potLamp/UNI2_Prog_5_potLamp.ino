int pot = A1;
int lamp = 10;
void setup() {
  //
  Serial.begin (9600);
}
int i;
void loop() {
  //
  i = analogRead(pot);
  //PWM da valores (0-255)
  //Digital (0 - 1) <-- digital read o write
  
  i = map(1, 0, 1023, 0 , 255);
      analogWrite (lamp, 1);
      Serial.println(i);
}
