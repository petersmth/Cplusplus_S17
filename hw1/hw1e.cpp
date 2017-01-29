//Peter Smith	EE553	HW1e	1/25/17

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

long int fact(long int n){
	//calculates factorial using recursion
	if (n==1) return 1;
	else return n*fact(n-1);
}

int main() {
	
	//read number from input
	cout << "type number: ";
	string line;
	int x;
	getline(cin, line);
    	istringstream thisline(line);
	thisline >> x;
	if (x<0) x=-x; //no negative numbers

	cout << "The factorial of "<< x << " is: " << fact(x) << "\n\n";
	
	//output test results
	//cout << "The factorial of 10 is: " << fact(10) << "\n";
	//cout << "The factorial of 20 is: " << fact(20) << "\n";
	//cout << "The factorial of 30 is: " << fact(30) << "\n";
  return 0;
}
