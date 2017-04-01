#include "Bus.h"
#include "Car.h"
#include <iostream>
int main (){

  Car c1 ("Red",100);
  Bus b(55, 14);

  cout << c1.payToll() << b.payToll();

  Vehicle* p = &c1;
  std::cout << p->payToll();
  p=&b;
  std::cout << p->payToll();

  Vehicle* array[2];
  array[0] = &c1;
  array[1] = &b;
  
}
