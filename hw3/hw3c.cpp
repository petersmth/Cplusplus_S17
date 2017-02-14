//Peter Smith EE553 HW3c

#include <iostream>
#include <cmath>
using namespace std;

class Robot {
private:
  double x, y;
public:
  Robot(): x(0), y(0){}
  void printloc(){
    cout<< "x: " << x << "\t\ty: " << y << '\n';
  }
  void move(double angle, double dist){
    x += dist*cos((-angle+90)*M_PI/180);
    y += dist*sin((-angle+90)*M_PI/180);
  }
};

int main() {
  Robot a;
  double angle=0;//in degrees
  double dist=0;
  cin >> angle >> dist;
  while(angle>=0 && dist >=0){
    a.move(angle, dist);
    a.printloc();
    cin >> angle >> dist;
  }

  return 0;
}
