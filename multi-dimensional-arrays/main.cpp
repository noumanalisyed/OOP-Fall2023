#include <iostream>
using namespace std;

int main() {

    int x[2][2][3];

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            for (int k = 0; k < 3; ++k) {
                cout << "Enter Value at X [" << i << "][ " << j << "][ " << k << "] = ";
                cin >> x[i][j][k];
            }
        }
    }

    int sum = 0;
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                for (int k = 0; k < 3; ++k) {
                    sum = sum + x[i][j][k];
                }
        }
    }
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                for (int k = 0; k < 3; ++k) {
                    cout << x[i][j][k] << "   ";
                }
                cout << endl;
            }
            cout<<endl<<endl;
    }
    cout<<"Sum is "<<sum<<endl;
    return 0;
}
