int led = 10;
void setup(){
  //
  }
int i;
  void loop(){
    //
  for (i =0; i<=255; i++){
    analogWrite (led,i);
    delay(10);
    //delayMicroseconds()
  }
  for (i = 254; i >0 ; i--){
    analogWrite (led,i);
    delay(10);
    //delayMicroseconds()
  }
  
  }
