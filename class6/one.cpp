#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
  double x = 5.5 + 2.75;
  cout << x << '\n';
  cout << setprecision(15) << x << '\n';
  cout << setw(10) << setprecision (8) << x << '\n';

  vector<int> a;
  for (int i=0; i<10; i++)
    a.push_back(i);
  for (int i=0; i<10; i++)
    cout << a[i] << ' ';
  cout << '\n';
  auto x1=5; //int
  auto y=5.2; //double

  for (auto z : a){
    cout << z;
  }
  cout << '\n';
  for (auto& z : a){
    z*=2;
  }
  cout << '\n';

  int perm[]={1,2,3,4};
  do {
    for (auto p :perm) cout << p;
    cout << '\n';
  } while(next_permutation(perm, perm+4));
}
