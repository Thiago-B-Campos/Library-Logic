#include "Motor.h"
#include <Arduino.h>

Motor::Motor(int pin) {

  _pin = pin;

  pinMode(_pin, OUTPUT);

}

void Motor::forward() {

  digitalWrite(_pin, HIGH);

}

void Motor::back() {

  digitalWrite(_pin, HIGH);

}

void Motor::right() {

  digitalWrite(_pin, HIGH);

}

void Motor::left() {

  digitalWrite(_pin, HIGH);

}


Gyro::Gyro(int pin) {

  _pin = pin;

  pinMode(_pin, INPUT);

}

float Gyro::ReadRX() {

  return analogRead(_pin);

}

float Gyro::ReadRY() {

  return analogRead(_pin);

}

float Gyro::ReadRZ() {

  return analogRead(_pin);

}

float Gyro::ReadAx() {

  return analogRead(_pin);

}