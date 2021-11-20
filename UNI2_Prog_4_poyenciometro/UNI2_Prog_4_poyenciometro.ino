int pot=A1;
void setup(){
  //
  Serial.begin (9600);
  }
int i;
  void loop(){
    //
    i = analogRead(pot);
    //PWM da valores (0-255)
    //Digital (0 - 1) <-- digital read o write

    Serial.println(i);
  }
