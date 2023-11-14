#include <iostream>
using namespace std;

int main() {
    int **ptr ;
    int *p;
    int x = 10;
    p = & x;
    ptr = &p;
    cout<<"x = "<<x<<endl;
    cout<<"&x = "<<&x<<endl;
    cout<<endl;
    cout<<"p = "<<p<<endl;
    cout<<"*p = "<<*p<<endl;
    cout<<"&p = "<<&p<<endl;
    cout<<endl;
    cout<<"ptr = "<<ptr<<endl;
    cout<<"*ptr = "<<*ptr<<endl;
    cout<<"**ptr = "<<**ptr<<endl;
    cout<<"&ptr = "<<&ptr<<endl;
    return 0;
}
