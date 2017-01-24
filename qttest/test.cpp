//Peter Smith 1 24 2017 git edit test

#include <iostream>

bool odd(int n){
if (n%2 == 0) return false;
return true;
}

int main(){
std::cout << "hello \n";

for(int i=0; i<100; i++) std::cout << odd(i) << "\t";

return 0;
}