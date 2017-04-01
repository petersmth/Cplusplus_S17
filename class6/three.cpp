#include <iostream>
using namespace std;
int a=1; //global a
int main(){
  int a = 1;
  cout << &a << '\n'; //prints address of a
  cout << & ::a << '\n'; //address of global a
  const int b=2;
  int * c; //c is a pointer to an integer
  c=&a; //c points to a
  cout << *c <<endl; //prints what c is pointing at (value of a)

  //c=(int*)a;
  //cout << *c;

  int d[5] = {1,2,3};
  c = &d[0];
  cout << *c;
  *c++ = 5; // writes 5 to d[0], now c = &d[1]
  ++*c; //d[1] = 3
  *++c = 4; // first increment c, then write 4 into d[2]
  cout << (*c)++; //first print out d[2] (4) then d[2]=5
}
