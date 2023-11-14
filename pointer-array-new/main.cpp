#include <iostream>
using namespace std;
int main() {
    int row = 2, col =3;
    int **ptr;

    ptr = new int* [row];
    for (int i = 0; i < row; ++i) {
        ptr[i] = new int[col];
    }


    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
                cout << "Enter Value at X [" << i << "][ " << j << "] = ";
                cin >> ptr[i][j];
            }
    }

    int sum = 0;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
                sum = sum + ptr[i][j];
            }
    }
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
                cout << ptr[i][j] << "   ";
        }
        cout<<endl<<endl;
    }
    cout<<"Sum is "<<sum<<endl;

    return 0;
}
