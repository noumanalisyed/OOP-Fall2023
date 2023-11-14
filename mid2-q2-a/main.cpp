#include <iostream>
using namespace std;
int main() {

    float no = 4, series = 0, pi = 0, odd = 3;
    bool flag = false;

    int i = 1;
    series = series + no;
    while(i <= 1000){
        if(flag == true){
            series = series + (float) no/odd;
            flag = false;
        }
        else{
            series =  series - (float) no/odd;
            flag = true;
        }
        odd = odd + 2;
        i++;
    }
    cout<<"pi = "<<series<<endl;
    return 0;
}
