#include "Motor.h"
#include <Arduino.h>
#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>


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


Gyro::Gyro(int pin,int pinn, bool ser) {

  _pin = pin;
  _pinn = pinn
  _ser = ser
  Adafruit_MPU6050 mpu;

  if(_ser==True){
  Serial.println("Adafruit MPU6050 test!");}
  Wire.setPins(_pin, _pinn);
  Wire.begin();

  if (!mpu.begin()) {
    if(_ser==True){
    Serial.println("Failed to find MPU6050 chip");}
    while (1) {
      delay(10);
    }
  }
  if(_ser==True){
  Serial.println("MPU6050 Found!");}

  mpu.setAccelerometerRange(MPU6050_RANGE_8_G);
  if(_ser==True){
  Serial.print("Accelerometer range set to: ");}
  switch (mpu.getAccelerometerRange()) {
  case MPU6050_RANGE_2_G:
    if(_ser==True){
    Serial.println("+-2G");}
    break;
  case MPU6050_RANGE_4_G:
    if(_ser==True){
    Serial.println("+-4G");}
    break;
  case MPU6050_RANGE_8_G:
    if(_ser==True){
    Serial.println("+-8G");}
    break;
  case MPU6050_RANGE_16_G:
    if(_ser==True){
    Serial.println("+-16G");}
    break;
  }
  mpu.setGyroRange(MPU6050_RANGE_500_DEG);
  if(_ser==True){
  Serial.print("Gyro range set to: ");}
  switch (mpu.getGyroRange()) {
  case MPU6050_RANGE_250_DEG:
    Serial.println("+- 250 deg/s");
    break;
  case MPU6050_RANGE_500_DEG:
    Serial.println("+- 500 deg/s");
    break;
  case MPU6050_RANGE_1000_DEG:
    Serial.println("+- 1000 deg/s");
    break;
  case MPU6050_RANGE_2000_DEG:
    Serial.println("+- 2000 deg/s");
    break;
  }

  mpu.setFilterBandwidth(MPU6050_BAND_5_HZ);
  Serial.print("Filter bandwidth set to: ");
  switch (mpu.getFilterBandwidth()) {
  case MPU6050_BAND_260_HZ:
    Serial.println("260 Hz");
    break;
  case MPU6050_BAND_184_HZ:
    Serial.println("184 Hz");
    break;
  case MPU6050_BAND_94_HZ:
    Serial.println("94 Hz");
    break;
  case MPU6050_BAND_44_HZ:
    Serial.println("44 Hz");
    break;
  case MPU6050_BAND_21_HZ:
    Serial.println("21 Hz");
    break;
  case MPU6050_BAND_10_HZ:
    Serial.println("10 Hz");
    break;
  case MPU6050_BAND_5_HZ:
    Serial.println("5 Hz");
    break;
  }

  Serial.println("");
  delay(100);

}

float Gyro::ReadRX() {

  return analogRead(_pin);

}

float Gyro::ReadAX() {

  return analogRead(_pin);

}

float Gyro::ReadRY() {

  return analogRead(_pin);

}

float Gyro::ReadRY() {

  return analogRead(_pin);

}

float Gyro::ReadRZ() {

  return analogRead(_pin);

}

float Gyro::ReadAZ() {

  return analogRead(_pin);

}

float Gyro::ReadTemp() {

  return analogRead(_pin);

}
