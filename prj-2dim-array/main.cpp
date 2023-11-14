#include <iostream>
using namespace std;
int main() {
    const int row =2;
    const int col = 3;
    int mat[row][col];
    //for input
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout<<"Enter X["<<i<<"]["<<j<<"] = ";
            cin>>mat[i][j];
        }
    }
    //for processing
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            mat[i][j] = mat[i][j] * 2;
        }
    }
    //for output
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
    int **ptr;
    ptr = new int* [row];
    for (int i = 0; i < row; ++i) {
        ptr[i] = new int[col];
    }
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout<<"Enter X["<<i<<"]["<<j<<"] = ";
            //cin>>ptr[i][j];
            cin>>*(*(ptr+i)+j);
        }
    }
    //for processing
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            *(*(ptr+i)+j) = *(*(ptr+i)+j) * 2;
        }
    }
    //for output
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cout<<ptr[i][j]<<"  ";
        }
        cout<<endl;
    }

    return 0;
}
