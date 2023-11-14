//
// Created by nouman on 12/7/2022.
//
//
// Created by nouman on 12/7/2022.
//
#include "product.h"
Product::Product() {
    id = "";
    name ="";
    brand ="";
    description = "";
}

Product::Product(string i, string n, string b, string desc, string pd[][2],double p[])  {
    id = i;
    name =n;
    brand =b;
    description = desc;
    productDetail = new ProductDetail*[6];
    for (int j = 0; j < 6; ++j) {
        productDetail[j] = new ProductDetail(pd[j][0],pd[j][1], p[j]);
    }

}

string Product::getId() const {
    return id;
}

void Product::setId(string id) {
    Product::id = id;
}

const string &Product::getName() const {
    return name;
}

void Product::setName(const string &name) {
    Product::name = name;
}

const string &Product::getBrand() const {
    return brand;
}

void Product::setBrand(const string &brand) {
    Product::brand = brand;
}

const string &Product::getDescription() const {
    return description;
}

void Product::setDescription(const string &description) {
    Product::description = description;
}

