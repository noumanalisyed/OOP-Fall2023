#include <iostream>
#include <math.h>

using namespace std;
float distanceFormula(int x1,int y1,int x2,int y2);
int square(int x);
float radius(int x1,int y1,int x2,int y2);
float area(float r);
float circumference(float r);
float pi = 3.14589;
int main() {

    cout<<distanceFormula(2,3,8,9);
    return 0;
}
float distanceFormula(int x1,int y1,int x2,int y2){
    return sqrt(square(x2 - x1) + square(y2-y1));
}
int square(int x){
    return x * x;
}
float radius(int x1,int y1,int x2,int y2){
    return distanceFormula(x1,y1,x2,y2);
}
float area(float r){
    return square(r) * pi;
}
float circumference(float r){
    return 2 * r * pi;
}
