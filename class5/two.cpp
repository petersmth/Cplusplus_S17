#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

class Frog{
private:
  double a,b,c;
public:
  Frog(double a, double b, double c): a(a), b(b), c(c) {}
  double getsum() {
    return a+b+c;
  }
};

void func(Frog fr){
  cout<< fr.getsum() << '\t';
}

int main (){
  vector<Frog> a;
  a.push_back(Frog(0,0,0));
  a.push_back(Frog(0,3,.5));
  a.push_back(Frog(-1,-2,3333));
  a.push_back(Frog(.2,10,0));
  cout << a.size() << endl;
  for( auto x : a){
    func(x);

  }
  a.clear();
  cout << a.size() << endl;
}
