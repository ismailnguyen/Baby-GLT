# This file is a documentation for explain how to use Cayenne

1. You need to install the Arduino Environment on your computer.
2. You need to register on Cayenne Website.
3. Configure this program on your Arduino IDE.

## For install the Arduino IDE.
Go to this [webSite](https://www.arduino.cc/en/main/Ssoftware) for install the IDE (you need to choose your platform).

### Register in Cayenne Website.
You need to register in [Cayenne website](https://cayenne.mydevices.com).

#### You need to change the SSID (box name) and this password and install the component.
1. Download this Program and change the ssid and the password [here](ESP8266-Projet.ino).
``` C
char ssid[] = "your ssid";
char wifiPassword[] = "your password";
```
 
2. You need to install [MQTT](https://fr.wikipedia.org/wiki/MQTT) packages.
You need to download the zip content of this [github project](https://github.com/myDevicesIoT/Cayenne-MQTT-ESP8266).
After you need to load the zip file into your Arduino IDE.
<pre>
You need to Click on <b>Include Library</b> after click on <b>Add .ZIP library</b>.
And add the zip content.
</pre>


3. Inside the Cayenne website.
You need to click on *** Cayenne API ***, this API will use the MQTT protocole and you need to change the codes like this exemple : 
``` C
char username[] = "71996a50-25fe-11e7-b2af-55ba5adcb0d5"; // MQTT Username
char password[] = "d49b8e538c18beb1f39c622ea14c713486d6d6f5"; // MQTT Password.
char clientID[] = "758bb320-25fe-11e7-bc7d-0921ad51511b"; // Client ID.
```

4. You need to compile [this program](ESP8266-Projet.ino)
After on the Cayenne Webiste you need to see your board.
