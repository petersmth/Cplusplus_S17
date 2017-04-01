#include "bus.h"

Bus::Bus(int s, int n): Vehicle(s), numpassengers(n){}
int Bus::payToll() const{
  return 30;
}
