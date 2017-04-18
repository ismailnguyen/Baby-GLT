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
```
You need to Click on ***Include Library*** after click on *** Add .ZIP library ***.
And add the zip content

```


