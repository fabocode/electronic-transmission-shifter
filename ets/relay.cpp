#include "relay.h"


void Relay::init() { 
    pinMode(_relay_1, OUTPUT);
    pinMode(_relay_2, OUTPUT);
    pinMode(_relay_3, OUTPUT);
    pinMode(_relay_4, OUTPUT);
}
