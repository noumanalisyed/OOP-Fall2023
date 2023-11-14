#include <iostream>
#include <math.h>

using namespace std;
float mean(float x1,float x2,float x3,float x4, float x5);
float standard_deviation(float x1,float x2,float x3,float x4, float x5);
float square(float x);
int main() {
    float x1, x2, x3, x4,x5;
    float x, sd;
    cout<<"Enter x1 = ";
    cin>>x1;
    cout<<"Enter x2 = ";
    cin>>x2;
    cout<<"Enter x3 = ";
    cin>>x3;
    cout<<"Enter x4 = ";
    cin>>x4;
    cout<<"Enter x5 = ";
    cin>>x5;
    x = mean(x1,x2,x3,x4,x5);
    cout<<"Mean = "<<x<<endl;
    sd = standard_deviation(x1,x2,x3,x4, x5);
    cout<<"Standard Deviation = "<<sd<<endl;
    return 0;
}
float mean(float x1,float x2,float x3,float x4, float x5){
    return (x1 + x2 + x3 + x4 + x5)/5;
}
float standard_deviation(float x1,float x2,float x3,float x4, float x5){
    float x = mean(x1,x2,x3,x4,x5);
    return sqrt((square(x1-x) + square(x2-x)+ square(x3-x)+ square(x4-x)+ square(x5-x))/5);
}
float square(float x){
    return x * x;
}
