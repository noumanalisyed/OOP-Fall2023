//
// Created by nouman on 12/7/2022.
//
#include "mobile.h"

    Mobile::Mobile(){
        mobileId = 0;
        IMEI = "";
        model ="";
        description = "";
        price =0.0f;
    }

    Mobile::Mobile(int i, string r, string c, string d, float p) {
        mobileId = i;
        IMEI = r;
        model = c;
        description = d;
        price = p;
    }

    int Mobile::getMobileId() {
        return mobileId;
    }

    void Mobile::setMobileId(int i){
        mobileId = i;
    }

    const string Mobile::getIMEI(){
        return IMEI;
    }

    void Mobile::setIMEI(string r) {
        IMEI = r;
    }

    string Mobile::getModel(){
        return model;
    }
    void Mobile::setModel(string d){
        model = d;
    }

    string Mobile::getDescription(){
        return description;
    }
    void Mobile::setDescription(string d){
        description = d;
    }

    float Mobile::getPrice() {
        return price;
    }

    void Mobile::setPrice(float p){
        price = p;
    }

    ostream &Mobile::print() {
        cout<<"Mobie Id : "<<mobileId<<"\n"
        <<"IMEI : "<<getIMEI()
        <<"\nModel : "<<model
        <<"\nDescription : "<<description<<"\nPrice : "<<price<<endl;
        return cout;
    }

