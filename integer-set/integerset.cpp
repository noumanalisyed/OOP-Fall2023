//
// Created by nouman on 11/14/2023.
//
#include "integerset.h"
    // constructors, destructor, getter, setter, print, intersection, union
    IntegerSet::IntegerSet(){
        name = "A";
        size = 101;
        ptr = new bool[size];
        init();
    }
    IntegerSet::IntegerSet(string n){
        name = n;
        size = 101;
        ptr = new bool[size];
        init();
    }
    IntegerSet::IntegerSet(int x[],int s,string n){
        name = n;
        size = 101;
        capacity = s;
        ptr = new bool[size];
        init();
        for(int i=0 ; i<capacity; i++){
            ptr[x[i]] = true;
        }
    }

    void IntegerSet::print(){
        cout<<name<<" = { ";
        for (int i = 0; i < size; ++i) {
            if(ptr[i] != false){
                cout<<i<<" ";
            }
        }
        cout<<" } "<<endl;
    }
    void IntegerSet::insertElement(int x){
        if(x >=0 && x<= size){
            ptr[x] = true;
        }else{
            cout<<x<<" is not in range "<<endl;
        }
    }
    void IntegerSet::deleteElement(int x){
        if(x >=0 && x<= size){
            ptr[x] = false;
        }else{
            cout<<x<<" is not in range "<<endl;
        }
    }
    IntegerSet IntegerSet::unionOf(IntegerSet i){
        IntegerSet result("U");
        for (int j = 0; j < size; ++j) {
            if(ptr[j] == true || i.ptr[j] == true){
                result.ptr[j] = true;
            }
        }
        return result;
    }
    IntegerSet IntegerSet::intersectionOf(IntegerSet i){
        IntegerSet result("I");
        for (int j = 0; j < size; ++j) {
            if(ptr[j] == true && i.ptr[j] == true){
                result.ptr[j] = true;
            }
        }
        return result;
    }
    void IntegerSet::init(){
        for (int i = 0; i < size; ++i) {
            ptr[i] = false;
        }
    }