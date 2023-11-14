#include <iostream>
using namespace std;

class HugeInteger{
public:
    HugeInteger(){
        size = 40;
        ptr = new short[size];
        init();
    }
    HugeInteger(int s){
        size = s;
        ptr = new short[size];
        init();
    }
    void init(){
        for (int i = 0; i < size; ++i) {
            ptr[i] = 0;
        }
    }
    void display(){
        for (int i = size-1; i >= 0; --i) {
           // if(ptr[i] != 0)
                cout<<ptr[i]<<" ";
        }
    }
    void setData(string str){
        int length = str.size();
        for (int i = 0, j = length-1; i < size ; i++, j--) {
            if(j >= 0)
                ptr[i] = str[j]-48;
            else
                break;
        }
    }
private:
    int size;
    short *ptr;
};
int main() {
    HugeInteger hugeInteger1(50), hugeInteger2;
    hugeInteger1.display();
    cout<<endl;
    hugeInteger2.display();
    string strData = "7654389";
    hugeInteger1.setData(strData);
    cout<<endl;
    hugeInteger1.display();
    hugeInteger2.setData("56778889990066554433233");
    cout<<endl;
    hugeInteger2.display();
    return 0;
}
