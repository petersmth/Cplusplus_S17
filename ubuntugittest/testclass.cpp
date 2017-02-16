#include <iostream>
#include <string>
#include "testclass.h"

testclass::testclass(int a1, int b1, char ch1): a(a1), b(b1), ch(ch1) { }

int testclass::add (){
	return a+b;
}

void testclass::print (){
	std::string str;
	str.push_back(ch);
	str += "undip";
	std::cout << str << '\n';
}


