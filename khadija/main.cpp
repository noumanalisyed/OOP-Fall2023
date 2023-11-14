#include <iostream>
using namespace std;
int main() {

    cout<<"The value of PI after 1000 terms is ";

    float m,n,sum,ans;

    m = 1;
    n =4;
    sum = 0;
    for(int i =0; i <1000; i++){
        ans = n/m;
        sum = sum + ans;
        m = m + 2;
        n = n * (-1);
    }
    cout<<sum;
    return 0;
}
