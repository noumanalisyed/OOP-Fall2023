#include <iostream>
using namespace std;

int add(int *p,int *q);
int mul(int *p,int *q);
int main() {

    int x = 10, y = 12, z = 0;
    int *p  = NULL;

    p = &x;

    cout<<"x = "<<x<<endl;
    cout<<"*p = "<<*p<<endl;

    z = add(&x,&y);
    cout<<x<<" + "<<y<<" = "<<z<<endl;
    z = mul(&x,&y);
    cout<<x<<" * "<<y<<" = "<<z<<endl;

    return 0;
}
int add(int *p,int *q){
    return *p + *q;
}
int mul(int *p,int *q){
    return *p * *q;
}