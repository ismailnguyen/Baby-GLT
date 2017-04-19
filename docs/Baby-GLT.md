# Baby-GLT Project.
This project is a system for count the table soccer goals.
For display the score we used ubidots.

1. Hardware.
2. Firmware.
3. Software.


## Hardware.


### Firmware : 
We used this [program](../babyfoot.ino) for communicate with [ubidots](http://www.ubidots.com) board.

***You need to [download](https://ubidots.com/docs/devices/ESP8266-arduino.html#ubidots-esp8266) the zip file and add to the arduino Library.***

You need to add the credentials access to the board.
``` C
#define TOKEN  "fL7bB5nkQJ2NAkZNoaiy3U3Kz2H16V"  // Put here your Ubidots TOKEN
#define ID_1 "58f8b3af7625423887675651"
#define ID_2 "58f9c22076254238893ef4c8"// Put your variable ID here

```

You need to configure with your wifi access.
``` C
#define WIFISSID "SSID"
#define PASSWORD "Password"
```





