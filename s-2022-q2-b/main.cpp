#include <iostream>
#include <math.h>

using namespace std;
const int sales_man = 4, products= 5, days=30;
void displayData(int d[][products],int s,int p);
void inputSales(int d[][products],int day, int s,int p);
int main() {
    int data[sales_man][products] = {0};
    displayData(data,sales_man,products);
    for (int k = 0; k < days; ++k) {
        for (int i = 0; i < sales_man; ++i) {
            inputSales(data, k, i, products);
        }
    }
    displayData(data,sales_man,products);

    return 0;
}
void displayData(int d[][products], int s,int p){
    cout<<"\t\tProduct1\tProduct2\tProduct3\tProduct4\tProduct5\n";
    for (int i = 0; i < s; ++i) {
        cout<<"Sales Man"<<(i+1)<<"\t";
        for (int j = 0; j < p; ++j) {
            cout<<d[i][j]<<"\t\t";
        }
        cout<<endl;
    }
}
void inputSales(int d[][products],int day,int sales_man,int p){
    int x = 0;
    cout<<"Day "<<day<<endl;
    cout<<"Enter the Sales of Sales Man"<<(sales_man+1)<<endl;
    for (int i = 0; i < p; ++i) {
        cout<<"Enter the Product"<<(i+1)<<" Sales = "<<endl;
        cin>>x;
        d[sales_man][i] += x;
    }
}
