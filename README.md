# ESP8266 12F Project "Kick Start" Template


This is a personal project to create a starting point for all my ESP projects.
It is written in C++ under PlatformIO IDE (integrated on ATOM or Visual Studio Code platforms).
I'm coding my own variant of this popular project, with some inspiration and lessons (code Snippets) from some well know projects like:

- ESPURNA: [GitHub Espurna Page](https://github.com/SensorsIot/Espurna-Framework)
- TASMOTA: [GitHub Tasmota Page](https://github.com/arendst/Sonoff-Tasmota)

## Supported Features:
	1. Project should run locally, even when LAN (WiFi) newtork is down (it seems obvious, but ...)
	2. Remote upgrade Over-the-Air (OTA) or/and HTTP Update.
	3. Local Flash store configuration (ex.: DeviceName, Location, ...) 
	4. MQTT Publish/Subscribe support
        	4.1.  ALl data is sent under "/<clientID>/<location>/<device name>/*telemetry*/<topic name>" in string format
        	4.2.  ALl data received sent under "/<clientID>/<location>/<device name>/*configure*/<topic name>" in string format
	5. User commands feedback by flashing the "internal" LED and/or adittional active buzzer.
	6. OTA, TELNET, LED, RESET, REBOOT, STORE and DEEPSLEEP functionalities can be remotely enabled/disabled/triggered via defined "true"/"false" MQTT commands.
	7. Battery and Status sent via MQTT (with "will message" defined)
	8. DeepSleep support with configurable On-Time(+ extended time) and Sleep-Time
	9. Remote "Debug" using Telnet (enabled via MQTT)
	10. Long operational live (it will be running 365 days a year, so, it recovers from Wifi or MQTT loss)
	11. Date / Time with NTP sync
	12. WiFi "Air" sniffing for APs, Registered Stations and "Unregistered" Stations

## Future features!!
	1. Web Page for "minimum" configuration (it kinda works...)
	2. Power consumption optimization
	3. Secure communication (https or other methods)
   

MAX 
12 v
1.5 A
5 W (Resistors)

----> 15 Ohm
R = 			3 * 5 Ohm	3 * 10 Ohm // 3 * 10 Ohm
I = 12/15 = 	0.8 A		0.8 A
P = 12 * 0.8 = 	9.6 W		9.6 W
P per Res = 	3.2 W		1.6 W

----> 20 Ohm
R = 			4 * 5 Ohm	2 * 10 Ohm
I = 12/20 = 	0.6 A		0.6 A
P = 12 * 0.6 = 	7.2 W		7.2 W
P per Res = 	1.8 W		3.6 W

----> 25 Ohm
R = 			5 * 5 Ohm
I = 12/25 = 	0.48 A
P = 12 * 0.8 = 	5.76 W
P per Res = 	1.15 W

----> 30 Ohm
R = 			6 * 5 Ohm	3 * 10 Ohm
I = 12/30 = 	0.4 A		0.4 A
P = 12 * 0.6 = 	4.8 W		4.8 W
P per Res = 	0.8 W		1.6 W

----> 40 Ohm
R = 			8 * 5 Ohm	4 * 10 Ohm
I = 12/40 = 	0.3 A		0.3 A
P = 12 * 0.6 = 	3.6 W		3.6 W
P per Res = 	0.45 W		0.9 W
