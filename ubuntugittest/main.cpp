#include <iostream>
#include <string>

class testclass{
	public:
	int a;
	int b;
	char ch;

	testclass(int a1, int b1, char ch1){
		a = a1;
		b=b1;
		ch=ch1;
	}

	int add (){
		return a+b;
	}
	
	void print (){
		std::string str;
		str.push_back(ch);
		str.insert(1,"ool");
		std::cout << str << '\n';
	}
};

int main(){
testclass inst(3,20,'t');
std::cout << inst.add() << '\t';
inst.print();
return 0;
} 
