//
// Created by nouman on 12/7/2022.
//

#ifndef ASSOCIATION_CAR_H
#define ASSOCIATION_CAR_H
#include <iostream>
using namespace std;
class Car {
    friend ostream &operator<<(ostream &os, const Car &car);

private:
    int carId;
    string regNo;
    string chasis;
    string description;
    float price;
public:
    Car() ;

    Car(int i, string r, string c, string d, float p) ;

     int getCarId() ;

     void setCarId(int i);

    const string getRegNo() ;

    void setRegNo(string r);

    string getChasis();

    void setChasis(string c);

    string getDescription();
    void setDescription(string d);

    float getPrice() ;

    void setPrice(float p);
    ostream &print() ;
};
#endif //ASSOCIATION_CAR_H
