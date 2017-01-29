/*
     Author: Peter Smith
     cite: geometry equation from https://www.mathsisfun.com/geometry/regular-polygons.html
*/

#include <iostream>
#include <cmath>
using namespace std;

double newradius (double radius, int n){
    //radius = radius of old circle, n = number of sides of polygon
    return radius/(cos(3.14159/n));
}

int main(){
    double currentrad = 1;
    cout << "Starting radius= " << currentrad << '\n';
    for (int currentn = 3; currentn <=1000000; currentn++){
        currentrad = newradius(currentrad, currentn);
        if (currentn == 3 || currentn == 10 || currentn == 100 || currentn == 10000 ||currentn == 100000 || currentn == 1000000){
            cout << "radius for n = " << currentn << " is " << currentrad << '\n';
        }
    }

    return 0;
}
