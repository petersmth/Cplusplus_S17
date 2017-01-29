//Peter Smith EE553 HW1g 1/25/17

#include <iostream>
#include <string>
using namespace std;

int main(){
    int n = 52291; 				//number to be converted to string
    string str;					//stores digits of number as a string
    char c; 					//stores current last digit of n as char
    
    while(n>0){					//repeat loop until all of the digits in the number have been added to the string
	c = n%10 + '0'; 			//current last digit of n converted to character and assigned to c
	str.insert(str.begin(),c); 		//add last digit of n to beginning of string
	n=n/10; 				//remove last digit of n
    }
    cout << str << '\n';			//print number as a string
    return 0;
}
