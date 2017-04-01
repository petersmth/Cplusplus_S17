#include "car.h"
#include <iostream>
#include <string>
Car::Car(string color, int s): color(color), Vehicle(s) {}
  int Car::payToll() const{
    return 50;
  }
