#include <iostream>
using namespace std;
int main() {
    int size = 5;
    int x[size];
    // Input
    for (int i = 0; i < size; ++i) {
        cout<<"X[ "<<i<<"] = ";
        cin>>x[i];
    }
    //processing
    for (int i = 0; i < size; ++i) {
       x[i] = x[i] * 2;
    }
    // Input
    for (int i = 0; i < size; ++i) {
        cout<<"X[ "<<i<<"] = "<<x[i]<<endl;
    }
    cout<<endl<<"Now through pointers "<<endl;
    int *p;
    p = new int[size];
    // Input
    for (int i = 0; i < size; ++i) {
        cout<<"PTR[ "<<i<<"] = ";
        //cin>>p[i];
        cin>>*(p+i);
    }
    //processing
    for (int i = 0; i < size; ++i) {
        *(p + i) = *(p + i) * 2;
    }
    // Input
    for (int i = 0; i < size; ++i) {
        cout<<"PTR[ "<<i<<"] = "<<*(p + i)<<endl;
    }
    return 0;
}
