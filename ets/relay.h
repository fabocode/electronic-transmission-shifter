#include <stdint.h>
#include <Arduino.h> 

#define RELAY_1 7
#define RELAY_2 6
#define RELAY_3 5
#define RELAY_4 4

class Relay {
public:
    Relay(uint8_t relay_1, uint8_t relay_2, uint8_t relay_3, uint8_t relay_4) :
        _relay_1(relay_1), _relay_2(relay_2), _relay_3(relay_3), _relay_4(relay_4) 
    { };

    void init();

    void relay1_on() { digitalWrite(_relay_1, HIGH); }
    void relay1_off() { digitalWrite(_relay_1, LOW); }

    void relay2_on() { digitalWrite(_relay_2, HIGH); }
    void relay2_off() { digitalWrite(_relay_2, LOW); }

    void relay3_on() { digitalWrite(_relay_3, HIGH); }
    void relay3_off() { digitalWrite(_relay_3, LOW); }

    void relay4_on() { digitalWrite(_relay_4, HIGH); }
    void relay4_off() { digitalWrite(_relay_4, LOW); }
private:
    uint8_t _relay_1;
    uint8_t _relay_2;
    uint8_t _relay_3;
    uint8_t _relay_4;
};