/*
  AnalogReadSerial
  Reads an analog input on pin 0, prints the result to the serial monitor.
  Graphical representation is available using serial plotter (Tools > Serial Plotter menu)
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.
*/

const int L1 = D4; // broche 2 du micro-contrôleur se nomme maintenant : L1
int scoreJ1 = 0;

// the setup routine runs once when you press reset:
void setup() {
  pinMode(L1, OUTPUT); //L1 est une broche de sortie
  pinMode(D3, OUTPUT);
  digitalWrite(D3, 0);
  // initialize serial communication at 115200 bits per second:
  Serial.begin(115200);

}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.printf("%d 0 500 \n", sensorValue);
  delay(1);        // delay in between reads for stability
  if (sensorValue < 150) {
    scoreJ1++;
    printf("score du joueur 1 : %d \n", scoreJ1);
    digitalWrite(L1, HIGH); //allumer L1
    delay(5000); // attendre 1 milliseconde
    digitalWrite(L1, LOW); // Eteindre L1
  }
  /*****Gestion bouton******/
  /*int sensorVal = digitalWrite(D3, 0);
    if (sensorVal == HIGH) {
    //Serial.println(78);
    } else {
    Serial.println("recommencer");
    }*/
}
