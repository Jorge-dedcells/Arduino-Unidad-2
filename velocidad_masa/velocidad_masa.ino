byte state=0;
String messages []= {"la distancia", "el tiempo"};
float arr[] = {0,0};
void setup() {Serial.begin(9600);}

void loop() {

  if(state==4)
  {
    
    Serial.println("El resultado es: "+String(arr[0]/arr[1]));
    Serial.println();
    state=0;
  }
  else if(state %2==0)
  {
     Serial.print("Dame "+messages[state/2]+": ");
     state++;
   }
   else if(Serial.available()>0)
   {

      arr[state/2]= Serial.readString().toFloat();
      state++;
      
      Serial.println();
    }

    delay(200);
}
