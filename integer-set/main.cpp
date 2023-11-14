#include <iostream>
using namespace std;

#include "integerset.cpp"
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
    int arr[] = {10,12,15,19,22,28};
    IntegerSet newSet(arr,6,"NewSet");
    newSet.print();
    return 0;
}
