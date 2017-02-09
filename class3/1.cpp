#include <iostream>
#include <cmath>
using namespace std;

class Fraction {
/*
class = specification of an object
object = instance of a class
methods = function part of object (also called member function)
messages = calling method: object.method
encapsulation = hiding the details of an object internally(private)
*/
private:
  int num, den;
public:
  Fraction(int n, int d) : num(n), den(d){ //CONSTRUCTOR called automatically when initialized
    //above is C++ way (never not initialized), below is java way but still works
    num = n;
    den = d;
  }
  Fraction(int n) : num(n), den(1){
  }
  Fraction() : num(0), den(1){
  }

  //one line alternatice to above 3, this is better:
  //Fraction(int n=0, int d=1) : num(n), den(d) {}

  void print() const{ //const promises to not change const object
    cout << num << '/' << den << ' ';
  }

  //this->num  b.num
  Fraction add(const Fraction b) const{
    return Fraction(num*b.den + den*b.num,den * b.den);
  }
  friend Fraction operator +(Fraction a, Fraction b){
    return a.add(b);
  }
  friend ostream& operator <<(ostream& s, Fraction f); //allows use of private data in outside function
};

//Operator overload
ostream& operator <<(ostream& s, Fraction f){ // left side, right side
  s << f.num << "/" << f.den;
  return s;
}

int main(){
  const Fraction a(1,2); // 1/2
  Fraction b(3);  // 3/1
  Fraction c; // 1/1 or 0/1
  //Fraction d(); //THIS is not an object, thinks its a function prototype that returns Fraction

  a.print();
  b.print();
  c.print();
  cout << a << '\n';
  Fraction d = a + b + b;
  cout << d;
  return 0;
}
