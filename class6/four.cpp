#include <iostream>
#include <string>
using namespace std;

class Person{
private:
  string name;
  int age;
public:
    Person(const string& name, int age): name(name), age(age) {}
    friend ostream& operator<< (ostream& s, const Person& a){
      return s << a.name << ' ' << a.age;
    }
};


int main(){
  cout << sizeof(Person) << endl;
  Person c[3] = {
    Person("Dov", 50),
    Person("Yu-Dong", 34),
    Person("Peter", 21)
  };
  for (int i = 0; i<3; i++)
    cout << c[i] << endl;



  int a[10];
  int* b = a;
  for (int i = 0; i<10; i++)
    *b++ = 0; //writes 0 to *b and moves b to next index of a, fills with zeros
  // after for loop b points one past end of array
  b=&a[9];
  for (int i = 9; i>=0; i--)
    *b-- = i; //fills from end with 9 to 0
  //after for loop b point to a[-1]

}
