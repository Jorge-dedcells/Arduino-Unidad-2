
int led = 10;
int res;
byte state = 0;
String arr[] = {"primero", "segundo"};
byte arrnums[] = {0, 0};

void setup() {
  //
  Serial.begin(9600);
  pinMode(led, OUTPUT);

}

void loop() {
  //

  if (state == 4)
  {
    state = 0;  if (arrnums[0] == 1 and arrnums[1] == 1) {
      res = 1;
    }
    else {
      res = 0;
    }

    Serial.println();
    digitalWrite(led, res);

  }
  else if (state % 2 == 0)
  {
    Serial.print("Inserta el " + arr[state / 2] + " valor: ");
    state++;
  }
  else if (Serial.available() > 0)
  {
    arrnums[state / 2] = (byte) Serial.readString().toInt();
    state++;
    Serial.println();
  }


  delay (100);
}


// prog 1 : simulacion de una compuera logiga AND con arduino y entrada
// ----> valor 1:0 o 1
//----->valor 2: 0 o 1
// salida : comparamiento del led (prendido o apagado)
