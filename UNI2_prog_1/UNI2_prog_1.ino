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
 
  // prog 1 : simulacion de una compuera logiga AND con arduino y entrada 
  // ----> valor 1:0 o 1
  //----->valor 2: 0 o 1
  // salida : comparamiento del led (prendido o apagado)
