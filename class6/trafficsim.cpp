#include <iostream>
#include <string>
#include <vector>
#include <random>
#include "carstuff/car.h"
#include "carstuff/bus.h"
using namespace std;

class TrafficSim{
private:
  vector< Vehicle* > vehicles;
public:
  TrafficSim (int numVehicles){
    default_random_engine generator;
    uniform_int_distribution<int> dist(0,3);
    uniform_int_distribution<int> randSpeed(0,120);

    for (int i=0; i<numVehicles;i++){
      int r = dist(generator);
      int speed = randSpeed(generator);
      Vehicle* v;
      switch(r){
        case 0: v= new Car("Red", speed);
        break;
        case 1: v= new Bus(speed, 14);
        break;
        case 2: v= new Bus(speed, 3);
        break;
        case 3: v= new Car("orange", speed);
        break;
      }
      vehicles.push_back(v);
    }
  }
  ~TrafficSim(){
    for (auto z : vehicles) {
      delete z;
    }
  }
  void payToll(){
    for (auto z : vehicles){
      cout << z->payToll() << '\n';
    }
  }
};

int main(){
  Car a("Red",40);
  cout << a.payToll() << ' ' << a.getSpeed();


  TrafficSim sim1(100);
  sim1.payToll();
}
