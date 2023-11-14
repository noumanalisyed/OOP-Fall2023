#include <iostream>
using namespace std;
const int row = 12;
const int col = 2;
void getData(float temp[][2], int month){
    cout<<"Enter the Highest temprature for Month "<<month<<endl;
    cin>>temp[month][0];
    cout<<"Enter the Lowest temprature for Month "<<month<<endl;
    cin>>temp[month][1];

}
float averageHigh(int temp[][2]){
    int sum = 0;
    for (int i = 0; i < 12; ++i) {
        sum = sum + temp[i][0];
    }
    return (float) sum/12;
}
int main() {
    float temprature[row][col];

    for (int month = 0; month < row; ++month) {
        getData(temprature,month);
    }


    return 0;
}
