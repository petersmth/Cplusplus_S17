#include  <iostream>
#include <iomanip> //change number of digits printed
int main() {
  std::cout << "hellp" << '\n';
  double b = 4/7.0;
  std::cout << std::setprecision(15) << b << '\n'; //from iomanip

  int n;
  do {
    std::cin >> n;
  } while(n<5 || n>15); // do while loop example

  //nested loop
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 2; j++) {
      std::cout << i << ' ' << j << '\n';
    }
  }

  //hw noaa windchill chart nested loop

  //arrays
  int b1[3]; //b[0] b[1] and b[2] are random junk, uninitialized!
  int c[3] = {1,2,3};
  int d[] = {1,2,3}; //d[0]=1, d[1]=2, d[2]=3
  int e[100]={0}; //all zeros
  int f[100]={5}; //all zeros except f[0]=5
  for (int i = 0; i < 100; i++) { //bad style bc you could change size of e and not change for loop, use seperate var instead for size
    e[i]=3;
  }
  //enum{SIZE = 200};
  const int SIZE = 200;
  int h[SIZE]={0};
  for (int i = 0; i < SIZE; i++) { //bad style bc you could change size of e and not change for loop, use seperate var instead for size
    h[i]=3;
  }

  int f2[2][3]={{5,4,3},{4,2,1}};
  int g2[2][3]={
    {5,4,3},
    {4,2,1}
  };
  for (int i=0;i<2;i++){
    for(int j=0; j<3;j++){
      std::cout << g2[i][j] <<' ';
    }
    std::cout << '\n';
  }
  int r4[3][2][5][3]; //4d array, 90 elements


  std::cout << sizeof(int) << '\n'; // on pc=4
  std::cout << sizeof(char) << '\n'; //always 1
  std::cout << sizeof(g2) << '\n'; //24 bytes
  std::cout << sizeof(g2[0]) << '\n'; //row 0, 12 bytes

  

  return 0;
}
