#include <iostream>
using namespace std;
void create2DArray(int **&p,const int r,const int c);
void init2DArray(int **&p,int r,int c);
void display2DArray(int **&p,int r,int c);
void inpu2DArray(int **&p,int r,int c);
int ** add2DArrays(int **&p,int **&q,int r,int c);
int main() {
    int row,col;
    int **ptr1 = nullptr;
    int **ptr2 = nullptr;
    cout<<"Enter the Row count ";
    cin>>row;
    cout<<"Enter the Col count ";
    cin>>col;
   /* ptr = new int *[row];
    for (int i = 0; i < row; ++i) {
        ptr[i] = new int [col];
    }
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col ; j++) {
            ptr[i][j] = 0;
        }
    }
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j <col ; ++j) {
            cout<<ptr[i][j]<<"   ";
        }
        cout<<endl;
    }*/

    create2DArray(ptr1,row,col);
    init2DArray(ptr1,row,col);
    create2DArray(ptr2,row,col);
    init2DArray(ptr2,row,col);
    inpu2DArray(ptr1,row,col);
    inpu2DArray(ptr2,row,col);
    int ** res = add2DArrays(ptr1,ptr2,row,col);
    cout<<endl;
    display2DArray(ptr1,row,col);
    cout<<endl;
    display2DArray(ptr2,row,col);
    cout<<endl;
    display2DArray(res,row,col);
    return 0;
}
void create2DArray(int **&p,const int r,const int c){
    p = new int *[r];
    for (int i = 0; i < r; ++i) {
        *(p + i) = new int [c];
    }
}
void init2DArray(int **&p,int r,int c){
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c ; j++) {
            p[i][j] = 0;
        }
    }
}
void display2DArray(int **&p,int r,int c){
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j <c ; ++j) {
            cout<<p[i][j]<<"   ";
        }
        cout<<endl;
    }
}

int ** add2DArrays(int **&p,int **&q,int r,int c){
    int **result;
    create2DArray(result,r,c);
    init2DArray(result,r,c);
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            result[i][j] = p[i][j] + q[i][j];
        }
    }
    return result;
}
void inpu2DArray(int **&p,int r,int c){
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j <c ; ++j) {
            cout<<"Enter value at X["<<i<<"]["<<j<<"] = ";
            cin>>p[i][j];
        }
    }
    cout<<endl;
}