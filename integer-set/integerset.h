//
// Created by nouman on 11/14/2023.
//

#ifndef INTEGER_SET_INTEGERSET_H
#define INTEGER_SET_INTEGERSET_H
#include<iostream>
using namespace std;
class IntegerSet{
public:
    // constructors, destructor, getter, setter, print, intersection, union
    IntegerSet();
    IntegerSet(string n);
    IntegerSet(int x[],int s,string n);

    void print();
    void insertElement(int x);
    void deleteElement(int x);
    IntegerSet unionOf(IntegerSet i);
    IntegerSet intersectionOf(IntegerSet i);

private:
    string name;
    int size;
    bool *ptr;
    int capacity;

    void init();
};
#endif //INTEGER_SET_INTEGERSET_H
