#include <random>
#include <iostream>
using namespace std;

int main(){
  mt19937 rnd(0);
  normal_distribution<> normal (0,1); //mean 0, var 1
  for (int i=0; i<10; i++){
    cout << normal(rnd) << '\n';
  }
}
