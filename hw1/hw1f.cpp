//Peter Smith EE553 HW1f
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float sum = 0.0f;
	int i = 1;
	while (i<=50000){
		sum += 1.0f/(i*i);
		i++;
	}
	cout << "result adding forward:\t" << sqrt(6*sum) << '\n';

	float sum2 = 0.0f;
	int i2 = 50000;
	while (i2>=1){
		sum2 += 1.0f/(i2*i2);
		i2--;
	}
	cout << "result adding backward:\t" << sqrt(6*sum2) << '\n';

	return 0;
}