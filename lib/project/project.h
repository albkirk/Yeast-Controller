// **** Project code definition here ...
#include <ambient.h>
#define Switch 14                                        // Switch GPIO Pin --> Wemos D5 PIN


// **** Project code functions here ...
void project_hw() {
 // Output GPIOs
      pinMode(Switch, OUTPUT);
      SWITCH = config.SWITCH_Default;                   // Load the configured default SWITCH Status.
      digitalWrite(Switch, SWITCH);                     // initialize Switch status (RELAY)

 // Input GPIOs

}


void project_setup() {
  // Start Ambient devices
      ambient_setup();
      TIMER = 5;                                        // TIMER value (Recommended 15 minutes) to get Ambient data.

}

void project_loop() {
  // Ambient handing
    if (TIMER >0) if ((millis() - 3500) % (TIMER * 60000) < 5) {    // TIMER bigger than zero on div or dog bites!!
        ambient_data();
        //mqtt_publish(mqtt_pathtele(), "Temperature", String(getNTCThermister()));
        if (Temperature > 27) {
          SWITCH = false;                               // Turn SWITCH off
        }
        if (Temperature > -100  && Temperature < 24) {
          SWITCH = true;                                // Turn SWITCH on
        }
    };

    if (SWITCH != SWITCH_Last) {
            digitalWrite(Switch, SWITCH);               // Touggle Switch RELAY
            SWITCH_Last = SWITCH;
		        mqtt_publish(mqtt_pathtele(), "Switch", String(SWITCH));
    }


}
