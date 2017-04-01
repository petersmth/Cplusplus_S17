#include "vehicle.h"

  Vehicle::Vehicle(int s): speed (s){}
  int Vehicle::getSpeed () const{
    return speed;
  }
  int Vehicle::payToll() const{
    return 0;
  }
