//
// Created by nouman on 12/7/2022.
//

//
// Created by nouman on 12/7/2022.
//
#include "person.h"

Person::Person(){
    id = 0;
    name = "";
    address = "";
    size = 0;
    myCar = new Car*[size];
    mobile = new Mobile*[size];
}
Person::Person(int i,string n,string ad, Car c[],Mobile m[],Laptop lapy[],int s){
    id = i;
    name = n;
    address = ad;
    size = s;
    myCar = new Car*[size];
    for (int j = 0; j < size; ++j) {
        myCar[j] = new Car(c[j].getCarId(),c[j].getRegNo(),c[j].getChasis(),c[j].getDescription(),c[j].getPrice());
    }
    mobile = new Mobile*[size];
    for (int j = 0; j < size; ++j) {
        mobile[j] = new Mobile(m[j].getMobileId(),m[j].getIMEI(),m[j].getModel(),m[j].getDescription(),m[j].getPrice());
    }
    laptop = new Laptop*[size];
    for (int j = 0; j < size; ++j) {
        laptop[j] = new Laptop(lapy[j].getLaptopId(),lapy[j].getIMEI(),lapy[j].getModel(),lapy[j].getDescription(),lapy[j].getPrice());
    }
}

int Person::getId() {
    return id;
}

void Person::setId(int i) {
    id = i;
}

string Person::getName(){
    return name;
}

void Person::setName(string n) {
    name = n;
}

string Person::getAddress() {
    return address;
}

void Person::setAddress(string a) {
    address = a;
}

Car **Person::getMyCar(){
    return myCar;
}

void Person::setMyCar(Car **m) {
    myCar = m;
}

int Person::getSize() const {
    return size;
}

void Person::setSize(int size) {
    Person::size = size;
}

Mobile **Person::getMyMobile(){
    return mobile;
}

void Person::setMyMobile(Mobile **m) {
    mobile = m;
}

Laptop ** Person::getMyLaptops() {
    return laptop;
}

void Person::setMyLaptops(Laptop **l){
    laptop = l;
}