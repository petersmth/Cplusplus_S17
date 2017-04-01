#ifndef CAR_H
#define CAR_H

#include "vehicle.h"
#include <string>
using namespace std;

class Car :public Vehicle{ //base class (parent)
private:
  string color;
public:
  Car(string color, int s): color(color), Vehicle(s) {}
  int payToll() const{
    return 15;
  }
};

#endif
