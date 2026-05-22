#include "Motor.h"
#include <Arduino.h>

Motor::Motor(int pin) {

  _pin = pin;

  pinMode(_pin, OUTPUT);

}

void Motor::forward() {

  digitalWrite(_pin, HIGH);

}