//
// Created by nouman on 12/7/2022.
//
#include <iostream>
#include <stdlib.h>
using namespace std;
#ifndef PRODUCT_PRODUCT_DETAIL_H
#define PRODUCT_PRODUCT_DETAIL_H
class ProductDetail{
    friend ostream &operator<<(ostream &os, const ProductDetail &detail);
public:
    ProductDetail();

    ProductDetail(string id, string sku, double price);

    const string &getId() const;

    void setId(const string &id);

    const string &getSku() const;

    void setSku(const string &sku);

    double getPrice() const;

    void setPrice(double price);

private:
    string id;
    string sku;
    double price;
};
#endif //PRODUCT_PRODUCT_DETAIL_H
