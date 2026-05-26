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

  Gyro(int pin,int pinn, bool ser);

  void ReadRX();
  void ReadAX();
  void ReadRY();
  void ReadAY();
  void ReadRZ();
  void ReadAZ();
  void ReadTemp();


private:

  int _pin;
  int _pinn;
  bool _ser;
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