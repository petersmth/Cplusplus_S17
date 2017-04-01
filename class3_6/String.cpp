
#include <iostream>
using namespace std;

class String{
private:
  char* p; // --> "rjgkjn njenerjkgn djnf b js4 nrgnnjrng" last char is \0 (code is 0)
  int len;
  int capacity;
public:
  String(const char s[]){
    int count;
    for(count = 0; s[count] != '\0'; ++count);
    p = new char[count];
    for (int i=0; i<count; i++) p[i] = s[i];
    len = count;
    capacity = count;
  }
  String() : p(nullptr), len(0), capacity(0) {}
  String(const String& orig): p(new char[orig.capacity]), len(orig.len), capacity(orig.capacity) {
    for (int i=0; i<len; i++) p[i] = orig.p[i];
  }
  ~String() {
    delete [] p;
  }
  void set(int i, char c){
    p[i]=c;
  }
  friend ostream& operator<< (ostream& s, String a){
    for (int i = 0; i<a.len; i++) s << a.p[i];
    return s;
  }
  String& operator= (const String& orig){
    if (this != &orig){ //protects in case of copying itself
      delete [] p;
      p = new char[orig.capacity];
      len = orig.len;
      capacity = orig.capacity;
      for (int i=0; i<len; i++) p[i] = orig.p[i];
    }
    return *this;
  }
};

int main(){
  String s1("this is a string");
  String s2;
  cout << s1 << '\n';
  //String s3 = s1; //copying supported by default but wrong, will crash. points to same location, cant delete twice, need copy constructor
  String s3 = s1; // calls copy constructor, same as String s3(s1)
  cout << s3 << '\n';
  s1.set(0,'x');
  String s5("YOOHOO");
  s2 = s3 = s5; // equals operator
  cout << s2 << '\n';
}
