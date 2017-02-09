#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Person {
private:
  string name;
  int age;
  static int count; //one value shared btw class
public:
  Person(string name, int age): name(name), age(age){
    count++;
  }
  ~Person(){ //destructor called when object is gotten rid of
    count--;
  }
  friend ostream& operator <<(ostream& s, const Person& p){ //const referance is better since you dont have to make a copy of a large object, but still can change original
    return s << p.name << " " << p.age;
  }
  static int getCount (){
    return count;
  }
};
int Person::count=0;
void f(){
  Person f3("Maria", 32);
  //destructor called at end of function
}
int main(){
  cout << Person::getCount() << '\n';
  Person p1("Dov", 50);
  Person p2("Yu-Dong", 45);
  cout << p1 << '\n';
  cout << p2.getCount();
  return 0;
}
