#include <iostream>
using namespace std;
int add(int *,int *);

int main() {

  /*  int x = 5;
    int *p = &x;

    cout<<"x = "<<x<<" "<<endl;
    cout<<"p = "<<p<<" "<<endl;
    cout<<"Address of x = "<<&x<<" "<<endl;
    cout<<"Address of p = "<<&p<<" "<<endl;
    cout<<"Indirect Refrencing of x through *p = "<<*p<<" "<<endl;*/

   /* int num1 = 7, num2 =9 ,sum;
    sum = add(&num1,&num2);
    cout<<num1<<" + "<<num2<<" = "<<sum<<endl;*/
    int row = 3;
    int col = 5;
    int **ptr;
    ptr = new int* [row];
    for (int i = 0; i < 3; ++i) {
        ptr[i] = new int[col];
        cout<<"5 Integers created "<<endl;
    }

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) {
            ptr[i][j]= i * j  + 2;
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout<<ptr[i][j]<<"  ";
        }
        cout<<endl;
    }

    return 0;
}
int add(int *a,int *b){
    return *a + *b;
}
