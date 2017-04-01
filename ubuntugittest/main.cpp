#include <iostream>
#include "testclass.h"
#include "function.h"

int main(){
testclass inst(300,-20,'f');
std::cout << inst.add() << '\t';
inst.print();
std::cout << f(2,'X') << '\n';
return 0;
} 
