#include <iostream>
using namespace std;

class IntegerSet
{
public:
    IntegerSet(){
        size = 101;
        capacity = 0;
        bptr = new bool [size];
        initialise();
    }
    IntegerSet(int s){
        size = s;
        capacity = 0;
        bptr = new bool [size];
        initialise();
    }
    void initialise(){
        for (int i = 0; i < size; ++i) {
            bptr[i] = false;
        }
    }
    void print(){
        cout<<"{ ";
        for (int i = 0 ,j=0; i < size; ++i) {
            if (bptr[i] != 0) {
                cout << i;
                if (j < capacity-1) {
                    cout << " , ";
                }
                else {
                    cout << " ";
                }
                j++;
            }
        }
        cout<<" } "<<endl;
    }
    void input(int x[],int s){
        capacity = s;
        for (int i = 0; i < s; ++i) {
            bptr[x[i]] = true;
        }
    }
    IntegerSet unionOf(IntegerSet x){
        IntegerSet result;
        for (int i = 0; i < size; ++i) {
            if(this->bptr[i]==true || x.bptr[i] == true){
                result.bptr[i] = true;
            }
        }
        return result;
    }
    IntegerSet intersectionOf(IntegerSet x){
        IntegerSet result;
        for (int i = 0; i < size; ++i) {
            if(this->bptr[i]==true && x.bptr[i] == true){
                result.bptr[i] = true;
            }
        }
        return result;
    }
private:
    int size;
    int capacity;
    bool *bptr;
};

int main() {
    IntegerSet integerSet1(101);
    int p[] = {3,5,7,8,10,34,78};
    integerSet1.input(p,7);
    integerSet1.print();
    cout<<endl<<endl;
    IntegerSet integerSet2(101);
    int t[] = {3,25,17,38,50,84,98};
    integerSet2.input(t,7);
    integerSet2.print();
    IntegerSet integerSet3 = integerSet1.unionOf(integerSet2);
    integerSet3.print();
    IntegerSet integerSet4 = integerSet1.intersectionOf(integerSet2);
    integerSet4.print();
    return 0;
}
