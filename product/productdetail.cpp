//
// Created by nouman on 12/7/2022.
//
#include "productdetail.h"
ProductDetail::ProductDetail() {

}

ProductDetail::ProductDetail(string id, string sku, double price)  {
    ProductDetail::id = id;
    ProductDetail::sku = sku;
    ProductDetail::price = price;
}

const string & ProductDetail::getId() const {
    return id;
}

void ProductDetail::setId(const string &id) {
    ProductDetail::id = id;
}

const string &ProductDetail::getSku() const {
    return sku;
}

void ProductDetail::setSku(const string &sku) {
    ProductDetail::sku = sku;
}

double ProductDetail::getPrice() const {
    return price;
}

void ProductDetail::setPrice(double price) {
    ProductDetail::price = price;
}



