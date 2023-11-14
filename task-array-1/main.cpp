#include <iostream>
using namespace std;
const int size=5;
int main() {
    string candidates[size];
    int votes[size];
    float average[size];
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        cout<<"Enter the candidates name ";
        cin>>candidates[i];
        cout<<"Enter the candidates votes ";
        cin>>votes[i];
        sum = sum + votes[i];
    }
    for (int i = 0; i < size; ++i) {
        average[i] = (float)(votes[i] * 100)/ sum;
    }

    int j = 0;
    cout<<"Candidate \t\t Votes\t\t Average"<<endl;
    while (j < size){
        cout<<candidates[j]<<"\t\t\t"<<votes[j]<<"\t\t\t"<<average[j]<<endl;
        j++;
    }
    cout<<endl;
    cout<<"Total Votes : "<<sum<<endl;

    return 0;
}

