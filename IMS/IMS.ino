byte state=0;
String messages []= {"el peso", "la altura"};
float arr[] = {0,0};
float res;
void setup() {Serial.begin(9600);}

void loop() {

  if(state==4)
  {
    res= arr[1]*arr[1];
    res =arr[0]/res;

    Serial.println("El resultado es: "+String(res));
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
