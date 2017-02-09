#include <iostream>
#include <cmath>
using namespace std;

//write class Vec3d to do this main

int main(){
  const Vec3d a(1.0, 2, 2.5);
  cout << a << '\n';
  Vec3d b(5.0); //5,0,0
  Vec3d c = a +b;
  cout << c << '\n';
  Vec3d c = a.add(b);
  double d = a.dot(b);
  cout << d << '\n';
  Vec3d e = a*2;
  Vec3d f = 2*a;
  return 0;
}
