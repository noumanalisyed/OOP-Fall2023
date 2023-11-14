//
// Created by nouman on 12/7/2022.
//

#ifndef ASSOCIATION_PERSON_H
#define ASSOCIATION_PERSON_H
#include <iostream>
#include "car.h"
#include "mobile.h"
#include "laptop.h"
using namespace std;
class Person{
    friend ostream &operator<<(ostream &os, const Person &person);
public:
    Person();
    Person(int i,string n,string ad, Car c[],Mobile m[],Laptop lapy[],int s);

    int getId();

    void setId(int i);

    string getName();

    void setName(string n);

    string getAddress();

    void setAddress(string a);

    Car **getMyCar();

    void setMyCar(Car **m);

    int getSize() const ;

    void setSize(int size) ;

    Mobile ** getMyMobile();

    void setMyMobile(Mobile **m);
    Laptop ** getMyLaptops();

    void setMyLaptops(Laptop **l);
private:
    int id;
    string name;
    string address;
    int size;
    Car **myCar;
    Mobile **mobile;
    Laptop **laptop;
};
#endif //ASSOCIATION_PERSON_H
