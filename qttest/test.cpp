#include <iostream>

bool odd(int n){
if (n%2 == 0) return false;
return true;
}

int main(){
std::cout << "testqt \n";

for(int i=0; i<100; i++) std::cout << odd(i) << "\t";

return 0;
}