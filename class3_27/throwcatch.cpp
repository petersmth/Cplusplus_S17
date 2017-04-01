#include <iostream>
#include <string>
using namespace std;
int a;
int dummy;
int a123;
//int 1a;
int arf3f4t4_dfdf_;
//int _abc; //reserved to compiler
//int __SYMBOLS; //reserved to standard

//__LINE__ // linenumber
//__FILE__ // file you are in


class BadSize {
private:
  int linenum;
  const string filename;
public:
  BadSize(int linenum, const char filename[]): linenum(linenum), filename(filename) {}
  friend ostream& operator <<(ostream& s, const BadSize& e) {
    return s << "BadSize at " << e.filename << ": " << e.linenum;
  }
};

class Matrix {
private:
  int rows, cols;
public:
  Matrix(int a, int b): rows(a), cols(b) {}
  friend Matrix operator+ (const Matrix& a, const Matrix& b) {
    if (a.rows != b.rows || a.cols != b.cols)
      throw BadSize(__LINE__, __FILE__);
  }
};

int main() {
  try{
    int a =5, b=5;
    if (a!=b) throw BadSize(__LINE__, __FILE__);
    Matrix(2,2) + Matrix(2,2);
  } catch (const BadSize& e){
    cout << e << '\n';
  }
}
