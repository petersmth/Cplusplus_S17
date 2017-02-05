//Peter Smith EE553 HW2e
#include <iostream>
using namespace std;

double fact(int n){
  double ans=1;
  for(int i=1;i<=n;i++) ans*=i;
  return ans;
}
double fact2(int n){
  if (n<=1) return 1;
  else return n*fact2(n-1);
}
int fibo(int n){
  int ans = 1;
  int a=1,b=1;
  for(int i=3;i<=n;i++){
    ans = a+b;
    b=a;
    a=ans;
  }
  return ans;
}
int fibo2(int n){
  if (n<=2) return 1;
  else return fibo2(n-1)+fibo2(n-2);
}
int choose (int n, int r){
  return fact(n)/(fact(r)*fact(n-r));
}
int main() {
  cout << fact(5) << ' ' << fact2(5) << '\n';
  cout << fact(15) << ' ' << fact2(15) << '\n';
  cout << fibo(5) << ' ' << fibo2(5) << '\n';
  cout << fibo(13) << ' ' << fibo2(13) << '\n';
  cout << choose(52,6) << '\n';
}
