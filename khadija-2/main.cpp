#include <iostream>
using namespace std;
int main() {
    int n=1,remainder,num,sum=0;

    cout<<"how many digit number ";
    cin>>n;
    cout<<"enter number";
    cin>>num;
    for (int i = 0; i < n; ++i) {
        remainder = (n % 10);
        sum = (remainder * n ) + sum;
        n = n * 2;
        num = num / 10;
    }
    cout<<"Decimal equivalent "<<sum<<endl;
    return 0;
}
