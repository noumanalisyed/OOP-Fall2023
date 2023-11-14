#include <iostream>
using namespace std;

class IntegerSet{
public:
    // constructors, destructor, getter, setter, print, intersection, union
    IntegerSet(){
        name = "A";
        size = 101;
        ptr = new bool[size];
        init();
    }
    IntegerSet(string n){
        name = n;
        size = 101;
        ptr = new bool[size];
        init();
    }

    void print(){
        cout<<name<<" = { ";
        for (int i = 0; i < size; ++i) {
            if(ptr[i] != false){
                cout<<i<<" ";
            }
        }
        cout<<" } "<<endl;
    }
    void insertElement(int x){
        if(x >=0 && x<= size){
            ptr[x] = true;
        }else{
            cout<<x<<" is not in range "<<endl;
        }
    }
    void deleteElement(int x){
        if(x >=0 && x<= size){
            ptr[x] = false;
        }else{
            cout<<x<<" is not in range "<<endl;
        }
    }
    IntegerSet unionOf(IntegerSet i){
        IntegerSet result("U");
        for (int j = 0; j < size; ++j) {
            if(ptr[j] == true || i.ptr[j] == true){
                result.ptr[j] = true;
            }
        }
        return result;
    }
    IntegerSet intersectionOf(IntegerSet i){
        IntegerSet result("I");
        for (int j = 0; j < size; ++j) {
            if(ptr[j] == true && i.ptr[j] == true){
                result.ptr[j] = true;
            }
        }
        return result;
    }

private:
    string name;
    int size;
    bool *ptr;

    void init(){
        for (int i = 0; i < size; ++i) {
            ptr[i] = false;
        }
    }
};
int main() {
    IntegerSet A("A");
    IntegerSet B("B");
    A.insertElement(1);
    A.insertElement(3);
    A.insertElement(4);
    A.insertElement(7);
    A.insertElement(9);
    A.insertElement(10);
    A.print();
    B.insertElement(2);
    B.insertElement(4);
    B.insertElement(6);
    B.insertElement(8);
    B.insertElement(10);
    B.print();
    //B.deleteElement(10);
    B.print();
    IntegerSet C = A.unionOf(B);
    C.print();
    IntegerSet D = A.intersectionOf(B);
    D.print();
    return 0;
}
