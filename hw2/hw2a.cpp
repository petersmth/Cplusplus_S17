//Peter Smith EE553 HW2a
//http://www.nws.noaa.gov/om/winter/windchill-images/windchillchart3.pdf

#include <iostream>
#include <cmath>
using namespace std;

int windchill(int temp, int wind){
  return round(35.74 + 0.6215*temp - 35.75*pow(wind,.16) + 0.4275*temp*pow(wind,.16));
}

int main() {
  for(int i = 0; i<=60; i+=5){//i is wind speed in mph, rows in table
    if (i>0) cout << i << "\t\b\b\b\b|"; //wind speed axis
    for(int j = 40;j>=-45;j-=5){//j is temp in F, columns in table
      if (i==0){  //temperature axis
        cout<< '\t' << j;
      }
      else {
        cout <<'\t'<< windchill(j,i);
      }
    }
    cout<<'\n';
    if (i==0) cout <<"______\t______\t______\t______\t______\t______\t______\t______\t______\t______\t______\t______\t______\t______\t______\t______\t______\t______\t______\n";
  }
  return 0;
}
