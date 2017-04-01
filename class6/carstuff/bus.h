#ifndef BUS_H
#define BUS_H

#include "vehicle.h"

class Bus: public Vehicle{
private:
  int numpassengers;
public:
  Bus(int s, int n): Vehicle(s), numpassengers(n){}
  int payToll() const{
    return 3;
  }
};

#endif
