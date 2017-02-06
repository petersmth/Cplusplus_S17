//Peter Smith EE553 HW2f

#include <iostream>
#include <fstream>
using namespace std;

double avg(int a[],int n){
  double sum = 0;
  for(int i=0;i<n;i++) sum+=a[i];
  return sum/n;
}

int main(){
  int n=0;
  ifstream readfile;
  readfile.open("2f.dat");
  if (readfile.is_open()) {
    readfile >> n;
    int array[n]={0};
    int count=0;
    while (!readfile.eof() && count<n) {
      readfile >> array[count];
      count++;
    }
    cout << avg(array,n);
  }
  readfile.close();
  return 0;
}
