#include <iostream>
using namespace std;
void init(int *p,int size);
void display(int *p,int size);
int main() {

    int *ptr ;
    ptr = new int[5];
    init(ptr,5);
    display(ptr,5);

    return 0;
}
void init(int *p,int size){
    for (int i = 0; i < 5; ++i) {
        p[i] = i * 10 + 2;
    }
}
void display(int *p,int size){
    for (int i = 0; i < 5; ++i) {
        cout<<"ptr[ "<<i<<" ] = "<<p[i]<<endl;
    }
}
