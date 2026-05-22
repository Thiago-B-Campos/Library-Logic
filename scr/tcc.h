#ifndef Motor_h
#define Motor_h

class Motor {

public:

  Motor(int pin);

  void forward();
  void back();
  void right();
  void left();


private:

  int _pin;

};

class Gyro {

public:

  Gyro(int pin);

  void ReadRX());
  void ReadRY();
  void ReadRZ();
  void ReadAc();


private:

  int _pin;

};

class Sen {

public:

  Sen(int pin, String tipo);

  void Proximity();

private:

  int _pin;
  String _tipo;

};

#endif