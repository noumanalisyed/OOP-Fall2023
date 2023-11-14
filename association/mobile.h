//
// Created by nouman on 12/7/2022.
//

#ifndef ASSOCIATION_MOBILE_H
#define ASSOCIATION_MOBILE_H
#include <iostream>
using namespace std;
class Mobile {
    friend ostream &operator<<(ostream &os, Mobile &car);

private:
    int mobileId;
    string IMEI;
    string model;
    string description;
    float price;
public:
    Mobile() ;

    Mobile(int mobid, string imei, string mod, string desc, float pr) ;

     int getMobileId() ;

     void setMobileId(int i);

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
#endif //ASSOCIATION_MOBILE_H
