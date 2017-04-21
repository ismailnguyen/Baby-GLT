#include "UbidotsMicroESP8266.h"

#define TOKEN  "fL7bB5nkQJ2NAkZNoaiy3U3Kz2H16V"  // Put here your Ubidots TOKEN
#define ID_1 "58f8b3af7625423887675651"
#define ID_2 "58f9c22076254238893ef4c8"// Put your variable ID here
//#define ID_2 "Your_variable_ID_here" // Put your variable ID here
#define WIFISSID "ESGI" // Put here your Wi-Fi SSID
#define PASSWORD "Reseau-GES" // Put here your Wi-Fi password

Ubidots client(TOKEN);

const int L1 = D4; // broche 2 du micro-contrôleur se nomme maintenant : L1
int scoreJ1 = 0;

// the setup routine runs once when you press reset:
void setup() {
  pinMode(L1, OUTPUT); //L1 est une broche de sortie
  pinMode(D3, OUTPUT);
  digitalWrite(D3, 0);
  // initialize serial communication at 115200 bits per second:
  Serial.begin(115200);
  delay(10);
  client.wifiConnection(WIFISSID, PASSWORD);
  
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  int gameOver = 0;
  // print out the value you read:
  Serial.printf("%d 0 500 \n",sensorValue);
  delay(1);        // delay in between reads for stability 
  if(sensorValue < 150 && client.getValue(ID_2)< 9){
    if(scoreJ1>10){
      scoreJ1 = 0;
      gameOver = 1;
    }else{
      scoreJ1++;
    }
      printf("score du joueur 1 : %d \n", scoreJ1);
      digitalWrite(L1, HIGH); //allumer L1
      delay(5000); // attendre 1 milliseconde
      digitalWrite(L1, LOW); // Eteindre 
      client.add(ID_1, static_cast<float>(scoreJ1));
      client.sendAll(false);
      delay(2000);
  }
  /*****Gestion bouton******/
  /*int sensorVal = digitalWrite(D3, 0);
   if (sensorVal == HIGH) {
    //Serial.println(78);
  } else {
    Serial.println("recommencer");
  }*/
}
