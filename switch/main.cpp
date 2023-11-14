#include <iostream>
using namespace std;

int main() {
    int no1, no2;
    char op;
    int re1;
    cout<<"Enter the No1  ";
    cin>>no1;
    cout<<"Enter the no2  ";
    cin>>no2;
    cout<<"Enter the Ope (+ , -, *, /) "<<endl;
    cin>>op;

    switch (op) {
        case '+':
            re1 = no1 + no2;
            break;
        case '-':
            re1 = no1 - no2;
            break;
        case '*':
            re1 = no1 * no2;
            break;
        case '/':
            re1 = no1 / no2;
            break;

    }

    cout<<no1<<" "<<op<<" "<<no2<<" = "<<re1<<endl;

    return 0;
}
