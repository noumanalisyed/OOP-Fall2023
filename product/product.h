//
// Created by nouman on 12/7/2022.
//
#include <iostream>
#include <stdlib.h>
#include "productdetail.h"
using namespace std;
#ifndef PRODUCT_PRODUCT_H
#define PRODUCT_PRODUCT_H

class Product{
    friend ostream &operator<<(ostream &os, const Product &product) ;
public:
    Product();

    Product(string i, string n, string b, string desc, string pd[][2],double p[]);

    string getId() const;

    void setId(string id);

    const string &getName() const ;

    void setName(const string &name) ;

    const string &getBrand() const ;

    void setBrand(const string &brand) ;

    const string &getDescription() const;

    void setDescription(const string &description) ;

private:
    string id;
    string name;
    string brand;
    string description;
    ProductDetail ** productDetail;
};
#endif //PRODUCT_PROUDCT_H
