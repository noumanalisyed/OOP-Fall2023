//
// Created by nouman on 12/8/2022.
//

#ifndef ASSOCIATION_LAPTOP_H
#define ASSOCIATION_LAPTOP_H
#include <iostream>
using namespace std;
class Laptop {
    friend ostream &operator<<(ostream &os, Laptop &lapy);

private:
    int laptopId;
    string IMEI;
    string model;
    string description;
    float price;
public:
    Laptop() ;

    Laptop(int lapid, string imei, string mod, string desc, float pr) ;

    int getLaptopId() ;

    void setLaptopId(int i);

    const string getIMEI() ;

    void setIMEI(string r);

    string getModel();

    void setModel(string d);

    string getDescription();
    void setDescription(string d);

    float getPrice() ;

    void setPrice(float p);

    ostream &print() ;
};

#endif //ASSOCIATION_LAPTOP_H
