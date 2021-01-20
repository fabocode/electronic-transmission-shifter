#include "relay.h"

Relay relay(RELAY_1, RELAY_2, RELAY_3, RELAY_4);

void setup() {
    // put your setup code here, to run once:
    Serial.begin(9600);
    relay.init();
}

void loop() {
    // put your main code here, to run repeatedly:
    relay.relay1_on();
    Serial.println("relay 1 is ON");
    delay(1000);
    relay.relay1_off();
    Serial.println("relay 1 is OFF");
    delay(1000);

    relay.relay2_on();
    Serial.println("relay 2 is ON");
    delay(1000);
    relay.relay2_off();
    Serial.println("relay 2 is OFF");
    delay(1000);
}
