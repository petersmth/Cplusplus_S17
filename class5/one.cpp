#include <iostream>
#include <fstream>
#include <string>
#include <cstdint>
using namespace std;

class Person{
private:
  string fName, lName;
  uint64_t phone;
public:
  Person(const string& fName, const string& lName, uint64_t phone): fName(fName), lName(lName), phone(phone) {}
  friend ostream& operator<< (ostream& s, const Person& p){
    return s<< p.fName << ' ' << p.lName << ' ' << p.phone;
  }
};

int main (){
  ofstream f ("phonebook.txt");
  Person p("Dov", "Kruger", 66565899343);
  f<<p;
}
