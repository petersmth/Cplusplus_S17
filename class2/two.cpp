#include <iostream>
#include <cmath>
using namespace std;

double f(double x){
  return x*x;
}

inline double fi(double x){ //puts computation in call without function call stuff?
  return x*x;
}

double hypot (double x, double y){
  return sqrt(x*x+y*y);
}

void polar2rect (double r, double theta, double& x, double& y){ //pass by referance
  x=r*cos(theta);
  y=r*sin(theta);
}

void rect2polar (double x, double y, double& r, double& theta){ //pass by referance
  r=hypot(x,y);
  theta=atan2(y,x);//gets rid of conditions where x=0 and other stuff
}
void quadratic (double A, double B, double C, double& root1, double& root2){ //pass by referance
  double disc = sqrt(B*B-4*A*C);
  root1 = (-B-disc)/(2*A);
  root2 = (-B+disc)/(2*A);
}

int main() {
  for (int i = 0; i < 10; i++) {
    std::cout << f(i) << '\n';
    std::cout << fi(i) << '\n';
  }

  std::cout << hypot(3,4) << '\n';
  std::cout << hypot(1,1) << '\n';

  double r=2, theta=45*M_PI/180;//M_PI in cmath
  double x,y;
  polar2rect(r,theta,x,y);//changes x and y (multi output)
  rect2polar(x,y,r,theta);
  cout << x << '\n'<< y << '\n'<< r << '\n'<< theta << '\n';

  double root1,root2;
  quadratic (2,0,-1,root1,root2);
  cout << root1 << ' ' << root2 << '\n';
  return 0;
}
