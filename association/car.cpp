//
// Created by nouman on 12/7/2022.
//
#include "car.h"
    Car::Car() {
        carId = 0;
        regNo ="";
        chasis = "";
        description = "";
        price = 0.0f;
    }

    Car::Car(int i, string r, string c, string d, float p) :
            carId(i),regNo(r),chasis(c),description(d),price(p) {

    }

    int Car::getCarId() {
        return carId;
    }

    void Car::setCarId(int i) {
        carId = i;
    }

    const string Car::getRegNo() {
        return regNo;
    }

    void Car::setRegNo(string r) {
        regNo = r;
    }

    string Car::getChasis(){
        return chasis;
    }

    void Car::setChasis(string c) {
        chasis = c;
    }

    string Car::getDescription(){
        return description;
    }

    void Car::setDescription(string d) {
        description = d;
    }

    float Car::getPrice() {
        return price;
    }

    void Car::setPrice(float p) {
        price = p;
    }
    ostream &Car::print() {
        cout << "\t\tCar Id: " << carId << " regNo: " << regNo << " chasis: " << chasis << " description: "
             << description << " price: " << price;
        return cout;
    }