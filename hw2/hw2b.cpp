//Peter Smith EE553 HW2b

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(unsigned long long n){
  if (n==1 || (n%2==0 && n!=2))  return false;
  for(int i=3; i<=n/2;i+=2){
    if (n%i==0) return false;
  }
  return true;
}

int main() {
  unsigned long long n = 0;
  cout << "enter a positive integer: ";
  cin>>n;
  if (isPrime(n)) cout<< "\nPRIME\n";
  else cout << "\nNOT PRIME\n";
  return 0;
}
