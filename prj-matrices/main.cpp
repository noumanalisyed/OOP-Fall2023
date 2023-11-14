#include <iostream>
using namespace std;

class Matrix{

public:
    Matrix(){
        row = col = 0;
        ptr = 0;
    }
    Matrix(int r,int c){
        row = r;
        col = c;
        create();

    }
    void create(){
        ptr = new int *[row];
        for (int i = 0; i < row; ++i) {
            ptr[i] = new int[col];
        }
        init();
    }

    void display(){
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                cout<<ptr[i][j]<<"  ";
            }
            cout<<endl;
        }
    }
    void displayAddresses(){
        cout<<"Address of Ptr = "<<&ptr<<"  Value of Ptr = "<<ptr<<endl;
        for (int i = 0; i < row; ++i) {
            cout<<&ptr[i]<<" "<<endl;
            for (int j = 0; j < col; ++j) {
                cout<<&ptr[i][j]<<"  ";
            }
            cout<<endl;
        }
    }
    void input(){
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                cout<<"X [ "<<i<<"][ "<<j<<"] = ";
                cin>>ptr[i][j];
            }
        }
    }
    Matrix add(Matrix m){
        Matrix result ;
        if(row == m.row && col == m.col){
            result.setRow(row);
            result.setCol(col);
            result.create();
            for (int i = 0; i < row; ++i) {
                for (int j = 0; j < col; ++j) {
                    result.ptr[i][j] = this->ptr[i][j] + m.ptr[i][j];
                }
            }
        }
        else{
            cout<<"Matrix -- Addition not possible as Order does not match "<<endl;
        }
        return result;
    }
    /*
     * Subtraction of 2 Matrices
     */
    Matrix sub(Matrix m){
        Matrix result;
        if(row == m.row && col == m.col){
            result.setRow(row);
            result.setCol(col);
            result.create();
            for (int i = 0; i < row; ++i) {
                for (int j = 0; j < col; ++j) {
                    result.ptr[i][j] = this->ptr[i][j] - m.ptr[i][j];
                }
            }
        }
        else{
            cout<<"Matrix -- Subtraction not possible as Order does not match "<<endl;
        }
        return result;
    }
    Matrix mul(Matrix m){
        Matrix result;
        if(col == m.row){
            result.setRow(row);
            result.setCol(m.col);
            result.create();

            for (int i = 0; i <row ; ++i) {
                for (int j = 0; j <m.col ; ++j) {
                    for (int k = 0; k < col; ++k) {
                        result.ptr[i][j] = result.ptr[i][j] + this->ptr[i][k] * m.ptr[k][j];
                    }
                }
            }
        }
        else{
            cout<<"Matrix -- Multiplication not possible as Order does not match "<<endl;
        }

        return result;
    }

    int getRow() const {
        return row;
    }

    void setRow(int row) {
        Matrix::row = row;
    }

    int getCol() const {
        return col;
    }

    void setCol(int col) {
        Matrix::col = col;
    }

    int **getPtr() const {
        return ptr;
    }

    void setPtr(int **ptr) {
        Matrix::ptr = ptr;
    }

private:
    int row,col;
    int **ptr;

    void init(){
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                ptr[i][j] = 0;
            }
        }
    }
};

int main() {
    Matrix matrix1(2,2);
    matrix1.input();
    matrix1.display();
    cout<<endl<<endl;
    Matrix matrix2(2,2);
    matrix2.input();
    matrix2.display();
    cout<<endl<<endl;
    Matrix matrix3 = matrix2.add(matrix1);
    matrix3.display();
    cout<<endl<<endl;
    Matrix matrix4 = matrix1.mul(matrix2);
    matrix4.display();
    //matrix1.displayAddresses();
    return 0;
}
