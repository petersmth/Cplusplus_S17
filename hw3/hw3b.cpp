//Peter Smith	EE553 HW3b

#include <iostream>
#include <string>
using namespace std;

class Person {
private:
	string name;
	int age;
	static int count;// in this context, static means class shared
public:
	Person(string n, int a):name(n), age(a) {
		count++;
	}

	~Person() {
		count--;
	}

	string getName() const{
		return name;
	}

	int getMemberCount() const{
		return count;
	}
	static int getCount() {
		return count;
	}

	friend ostream&  operator <<(ostream& s, const Person& p) {
    return s << p.name << " " << p.age;
	}
};

int Person::count = 0;

void f() {
	Person p3("Maria", 32);
}

void g(Person p) { //when this function is called, the constructor is not called to increase the count, but the destructor is called to reduce it.
	cout << p << '\n';
}

int main() {
	cout << Person::getCount();
	f();
	const Person p1("Dov", 50);
	cout << p1.getName() << '\n';

	const Person p2("Yu-Dong", 45);
	for (int i = 0; i < 5; i++)
		g(p2);
	cout << p1 << '\n';
	cout << p2.getMemberCount(); //2 people to start with, g(p2) run 5 times to reduce count by 5. 2-5=-3.
}