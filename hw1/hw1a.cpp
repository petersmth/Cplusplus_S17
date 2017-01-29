//Peter Smith	EE553	HW1a	1/25/17

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
	
	//read number from input
	string line;
	int x;
	getline(cin, line);
    	istringstream thisline(line);
	thisline >> x;
	if (x<0) x=-x; //no negative numbers

	cout << x << '\t';

	//if even divide by 2, if odd mult by 3 add 1, if 1 or 0 stop
	while (x!=1 && x!=0){
		if (x%2==0) x=x/2;
		else x=3*x+1;
		cout << x <<'\t';
	}

  return 0;
}
