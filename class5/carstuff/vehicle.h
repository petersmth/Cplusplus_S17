#ifndef VEHICLE_H
#define VEHICLE_H

class Vehicle { //abstract class (what cars and busses have in common)
private:
  int speed;
public:
  Vehicle(int s);
  int getSpeed () const;
  virtual int payToll() const;
};

#endif
