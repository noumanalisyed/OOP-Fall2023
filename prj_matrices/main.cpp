#include <iostream>
#include <vector>

using namespace std;
class Matrix{
public:
    Matrix(){
        row = col = 0;
        ptr = NULL;
    }
    Matrix(int row,int col){
        Matrix::row = row;
        Matrix::col = col;
        createMatrix();
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
    void inputMatrix(int m[2][3]){
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                ptr[i][j] = m[i][j];
            }
        }
    }
    void inputMatrix(string *d){

        for (int i = 0; i < row; ++i) {
            int *x = mystrtok(d[i],',');
            for (int j = 0; j < col; j++) {
               // cout<<x[j]<<"  ";
                ptr[i][j] = x[j];
                /*if(d[i][k] != 44) {
                    ptr[i][j] = d[i][k] - 48;
                    cout<<ptr[i][j];
                }
                else{
                    j++;
                }*/
            }
        }
    }
    Matrix add(Matrix m){
        Matrix result(row,col);
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                result.ptr[i][j] = this->ptr[i][j] + m.ptr[i][j];
            }
        }
        return result;
    }
    Matrix sub(Matrix m){
        Matrix result(row,col);
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                result.ptr[i][j] = this->ptr[i][j] - m.ptr[i][j];
            }
        }
        return result;
    }


private:
    void init(){
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                *(*(ptr+i)+j) = 0;
            }
        }
    }
    void createMatrix(){
        ptr = new int *[row];
        for (int i = 0; i < row; ++i) {
            ptr[i] = new int[col];
        }
    }
    int * mystrtok(string str, char delim){
        int *tokens = new int[col];
        int temp = 0;
        for(int i = 0, j = 0; i < str.length(); i++){
            if (str[i] != delim) {
                tokens[j] = str[i] - 48;
                j++;
            }
        }
        return tokens;
    }

    int row,col;
    int **ptr;
};


int main() {
    const int row=3,col=4;
    string mat1[row] = {"1,2,3,4","5,6,8,9","3,4,2,1"};
    string mat2[row] = {"7,4,3,2","9,6,2,1","6,7,8,2"};

   /* int m1[row][col] ={{1,2,4},{5,6,8}};
    int m2[row][col] ={{7,4,3},{9,6,2}};*/

    Matrix matrix1(row,col);
    Matrix matrix2(row,col);
    matrix1.inputMatrix(mat1);
    matrix2.inputMatrix(mat2);
    matrix1.display();
    cout<<endl<<endl;
    matrix2.display();
    Matrix matrix3 = matrix1.add(matrix2);
    cout<<endl<<endl;
    matrix3.display();
    Matrix matrix4 = matrix1.sub(matrix2);
    cout<<endl<<endl;
    matrix4.display();

   /* int *p = mystrtok(mat1[0],',');
    for (int i = 0; i < col; ++i) {
        cout<<p[i]<<"  ";
    }*/

    return 0;
}
void init(){

}
