ESP8266
=======
An Arduino library to manage the ESP8266. https://github.com/joysfera/arduino-ESP8266

History
=======
0.4
---
* get rid of debugging as it corrupts data coming from ESP8266
* implement HW handshaking otherwise Arduino loses data coming from ESP8266
* FlashStringHelper in Client->print allows sending string from flash at once
* ESP8266Server added for compatibility with Arduino Ethernet library

0.3
---
* updated for AT command set v0.30 (SDK v1.2.0)
* removed all 'String' class occurences (I don't like them)
* parseHex() and send() optimized

0.2
---
* Patches from "taoyuan" to handle "IPD" data

0.1
---
* Initial version

About
=====
Author: Petr Stehlik

Original Author: Antoine Bertin
With patches from taoyuan.

License: MIT

Code formated with: ``astyle --break-blocks --remove-brackets``
