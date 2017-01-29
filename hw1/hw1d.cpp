//Peter Smith EE553 HW1d
#include <iostream>
using namespace std;
int main(){

	//float

	float sum1 = 0.0f;
	for (int i=1; i<=100; i++) sum1 += 1.0f/i; //calculate adding largest terms first
	cout << "sum1: " << sum1 << '\n';

	float sum2 = 0.0f;
	for (int i=100; i>=1; i--) sum2 += 1.0f/i; //calculate adding smallest terms first
	cout << "sum2: " << sum2 << '\n';
	
	cout << "sum1-sum2: " << sum1-sum2 << "\n\n";

	//double

	double sum1d = 0.0;
	for (int i=1; i<=100; i++) sum1d += 1.0/i; //calculate adding largest terms first
	cout << "sum1d: " << sum1d << '\n';

	double sum2d = 0.0;
	for (int i=100; i>=1; i--) sum2d += 1.0/i; //calculate adding smallest terms first
	cout << "sum2d: " << sum2d << '\n';
	
	cout << "sum1d-sum2d: " << sum1d-sum2d << "\n\n";

	cout << "adding smaller terms first is more accurate \n";
	return 0;
}