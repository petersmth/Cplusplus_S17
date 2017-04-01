#include <iostream>
using namespace std;

class Matrix{
private:
  double* m; //points to a single vector of double
  int rows, cols;
public:
  Matrix(int rows, int cols, double x = 0): rows(rows), cols(cols){
    //normal constructor
    m = new double [rows*cols];
    for (int i = 0; i < rows*cols; i++) m[i]=x;
  }
  Matrix(const Matrix& orig): rows(orig.rows), cols(orig.cols){
    //copy constructor
    m = new double [orig.rows*orig.cols];
    for (int i = 0; i < rows*cols; i++) m[i]=orig.m[i];
  }
  Matrix(Matrix&& orig) {
    //move constructor
    m = orig.m;
    rows = orig.rows;
    cols = orig.cols;
    orig.m = nullptr;
  }
  ~Matrix(){
    //destructor
    delete [] m;
  }
  Matrix& operator= (const Matrix& orig){
    //operator equals
    if (this != &orig){ //protects in case of copying itself
      delete [] m;
      m = new double [orig.rows*orig.cols];
      rows = orig.rows;
      cols = orig.cols;
      for (int i=0; i<rows*cols; i++) m[i] = orig.m[i];
    }
    return *this;
  }
  double& operator() (int i, int j){
    if (i >= rows || j >= cols || i < 0 || j < 0) return m[0]; //out of bounds
    return (m[i*cols+j]);
  }
  friend ostream& operator<< (ostream& s, Matrix a){
    for (int i=0; i < a.rows*a.cols; i++){
      if (i != 0 && i%a.cols == 0) s << '\n';
      s << a.m[i] << '\t';
    }
    return s;
  }
  friend Matrix operator+ (const Matrix& a,const Matrix& b){
    //test if two matrixes are equal in size
    Matrix sum(a.rows, a.cols);
    if (a.rows!=b.rows || a.cols!=b.cols) return sum; //inconsistant dimentions
    for (int i =0; i<a.rows*a.cols; i++) sum.m[i] = a.m[i]+b.m[i];
    return sum;
  }
};

int main(){
  Matrix m1(3,4); //rows, cols, fill with zeros
  Matrix m2(2,3,1.5); // fill with 1.5
  cout << m1 << '\n';
  cout << m2 << '\n';
  /*
  0 0 0 0
  0 0 0 0
  0 0 0 0
  */
  cout << m1(0,1) << '\n'; //print row 0, col 1 element - use operator() - return referance to double
  m1(0,1) = 5.5; // set 5.5 to referance to double
  Matrix m3 = m1 + m1; //addition
  Matrix m4 = m3; //copy constructor
  cout << m4 << '\n';
  m4(1,2) = 11.2;
  m3=m4; //operator =
}
