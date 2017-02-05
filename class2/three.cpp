#include <iostream>
#include <cmath>
#include <random>
using namespace std;

void fillRandom (int a[], int n, int m){
  //cout << sizeof(a); //gives size of the pointer not the array, different result than in main
  default_random_engine generator;
  uniform_int_distribution<int> distribution (0,m);
  for (int i =0; i<n;i++){ //functions will go out of array bound if a parameter in array, will write over other data, very dangerous if n is out of bounds
    a[i] = distribution(generator); //fill a with rand ints from 0 to m
  }
}

int main() {
  int a[100] = {0};
  fillRandom(a,sizeof(a)/sizeof(int), 999);
  cout << a [70];
  return 0;
}
//use g++ -std=gnu++11 main.cpp
