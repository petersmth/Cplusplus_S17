//Peter Smith	EE553	HW1c	1/25/17

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {

	cout << "100(100+1)/2 = " << 100*(100+1)/2 << '\n';	

	int n = 0;
	for (int i =1;i<=100;i++) n=n+i;
	cout << "sum of 1 to 100 using a loop: " << n << '\n';
  return 0;
}
