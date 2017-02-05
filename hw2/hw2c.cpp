//Peter Smith EE553 HW2c

#include <iostream>
using namespace std;

bool isPrime(unsigned long long n){
  if (n==1 || (n%2==0 && n!=2))  return false;
  for(int i=3; i<=n/2;i+=2){
    if (n%i==0) return false;
  }
  return true;
}

int main() {
  unsigned long long n = 0,m=0;
  cout << "enter 2 integers: ";
  cin>> n >> m;
  if (n>m){//swich order if needed
    unsigned long long t=n;
    n=m;
    m=t;
  }
  int count =0;
  while(n<=m){
    if (isPrime(n)) count++;
    n++;
  }
  cout << count;
  return 0;
}
