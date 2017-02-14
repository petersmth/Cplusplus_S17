#include <iostream>
#include <string>
#include "class.h"

	Classs::Classs(int a = 0, int b = 0): a(a), b(b) {}
	int Classs::sum () const{
		return a+b;
	}
	std::string Classs::str() const {
		return "hello";
	}

