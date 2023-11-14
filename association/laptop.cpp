//
// Created by nouman on 12/8/2022.
//

//
// Created by nouman on 12/7/2022.
//
#include "laptop.h"

Laptop::Laptop() {
    laptopId = 0;
    IMEI = "";
    model ="";
    description = "";
    price =0.0f;
}

Laptop::Laptop(int i, string r, string c, string d, float p) {
    laptopId = i;
    IMEI = r;
    model = c;
    description = d;
    price = p;
}

int Laptop::getLaptopId() {
    return laptopId;
}

void Laptop::setLaptopId(int i) {
    laptopId = i;
}

const string Laptop::getIMEI(){
    return IMEI;
}

void Laptop::setIMEI(string r) {
    IMEI = r;
}

string Laptop::getModel(){
    return model;
}
void Laptop::setModel(string d){
    model = d;
}

string Laptop::getDescription(){
    return description;
}
void Laptop::setDescription(string d){
    description = d;
}

float Laptop::getPrice() {
    return price;
}

void Laptop::setPrice(float p){
    price = p;
}

ostream &Laptop::print() {
    cout<<"Laptop Id : "<<laptopId<<"\n"
        <<"IMEI : "<<IMEI
        <<"\nModel : "<<model
        <<"\nDescription : "<<description<<"\nPrice : "<<price<<endl;
    return cout;
}

