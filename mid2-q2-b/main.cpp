#include <iostream>
using namespace std;
bool perfectNumber(int no);
int main() {
    for (int i = 1; i <= 10000; ++i) {
        if(perfectNumber(i) == 1)
        cout<<i<<".   is a perfect number  =  "<<perfectNumber(i)<<endl;
    }
    return 0;
}
bool perfectNumber(int no){
    bool flag = false;
    int sum = 1;
    int i = 2;
    while (i < no){
        if(no % i == 0) {
            sum = sum + i;
        }
        i++;
    }
    if(sum == no)
        flag = true;
    return flag;
}
