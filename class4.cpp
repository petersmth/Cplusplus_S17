#include <iostream>
using namespace std;

class Bitmap{
private:
  enum { ROWS = 30, COLS = 40}
  int a[ROWS][COLS];
public:
  Bitmap(){
    for (int i=0; i<ROWS; i++)
      for (int j=0; j<COLS; j++)
        a[i][j];
  }

};
/*
365 days/year
LEAP YEAR: any year divisible by 4 except if not div by 100 but not 400
365.2425 days/year

2000 leap, 2004 leap, 2100 not leap

J2000 = Jan 1 2000 =0
Jan 2 2000 = 1
Jan 3 = 2

*/
class JulianDate{
private:
  double jday;
public:
  //stuff
};

int main (){
  int a = 1;
  int b = a++; //b=1 a=2
  int c = ++a; //a=3 c=3
  int d = a++ + a++; //depends on implementation, DONT DO THIS

  Bitmap b1;
  Bitmap b2(3); //3???
  // no sizes yet...  Bitmap b3(100,200);
  b2.horizLine(5, 1, 27); //row 5, col 1 to 27
  b2.vertLine(19, 5, 20); //col 19, row 5 to 20
  b2.rect(9,9,5,8); // x=9, y=9. w=5, h=8
  b2.line(28,7, 8, 25); // diagonal line using Bresenham
  cout << b2;


  const JulianDate d1(2017, 2, 13, 20, 00, 00);
  const JulianDate d2(2017, 2, 19); // 00:00:00 midnight
  const JulianDate d3 = d3 + 3; //3 days later, account for month rollover
  double days = d3 - d1; //double acounting for time fraction of days
  int year = d3.getYear();
  int month = d3.getMonth();
  int day = d3.getDay();
  int hour = d3.getHour();
  int min = d3.getMin();
  int sex = d3.getSec();
  cout << d1 << '\n'<< d2 << '\n'<< d3 << '\n';
  cout << year << ' ' << month << ' ' << day << ' '<< min << ' ' << sec << '\n';
}
