#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle { //abstract class (what cars and busses have in common)
private:
  int speed;
public:
  Vehicle(int s): speed(s) {}
  int getSpeed () const{
    return speed;
  }
  virtual int payToll() const = 0;
};

#endif
