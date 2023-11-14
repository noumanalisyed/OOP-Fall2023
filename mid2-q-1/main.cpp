#include <iostream>
#include <string>
using namespace std;
int power(int b,int e);
int main() {
    string no = "1101101";
    cout<<"Enter the binary no";
    cin>>no;
    int length = no.length();
    int decimal = 0;
    int *ptr = new int[length];

    for (int i = 0; i < length; ++i) {
        ptr[i] = no[i] - 48;
    }

    for (int i = length-1, j = 0; i >= 0; --i , j++) {
        decimal = decimal + ptr[i] * power(2, j);
    }
    cout<<no<< "  = "<<decimal<<endl;






    return 0;
}
int power(int b,int e){
    int pow = 1;
    int i = 1;
    while (i <= e){
        pow = pow * b;
        i++;
    }
    return pow;
}