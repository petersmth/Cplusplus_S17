#include <iostream>
#include <string>
using namespace std;

class Trump{
private: //childrem dont get to see private stuff
  double dollars;
protected:
  //children can see
public:
};

class Me : public Trump{
  //cant use trump dollars
};




class Vehicle { //abstract class (what cars and busses have in common)
private:
  int speed;
public:
  Vehicle(int s): speed (s){}
};

class Car :public Vehicle{ //base class (parent)
private:
  string color;
public:
  Car(const string& c, int s): color(c), Vehicle(s) {}
};

class SportsCar: public Car{ //derived class (child)
private:
  double horsePower;
public:
  SportsCar(const string& c, int s, double h): Car(c,s), horsePower(h) {}
};

class Bus: public Vehicle{
private:
  int numpassengers;
public:
  Bus(int s, int n): Vehicle(s), numpassengers(n){}
};

int main(){
  Car c1("Red", 100);
  SportsCar s1("Blue", 140, 400.0);
  Bus b1(55, 14); //speed numpassengers

}
