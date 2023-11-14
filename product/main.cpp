#include <iostream>
#include <stdlib.h>
using namespace std;
//class ProductDetail;

#include "productdetail.h"
#include "product.h"

ostream &operator<<(ostream &os, const Product &product) {
    os << "id: " << product.id << " name: " << product.name << " brand: " << product.brand << " description: "
       << product.description;
    for (int i = 0; i < 6; ++i) {
        os<<*product.productDetail[i];
    }
    return os;
}
ostream &operator<<(ostream &os, const ProductDetail &detail) {
    os << "id: " << detail.id << " sku: " << detail.sku << " price: " << detail.price<<endl;
    return os;
}
int main() {
    const int size = 4;
    string products[4][4] = {
                            {"100","Coke","Coca Cola","Soft Drink"},
                            {"101","Pepsi","Pepsi Cola","Soft Drink"},
                            {"102","Choclate","Snickers","Snack, Choclate"},
                            {"103","Biscuit","Candy","Snack"}
    };
    string productDetail1[6][2] = {
            {"1000","250 ml"},
            {"1001","330 ml"},
            {"1000","500 ml"},
            {"1000","1000 ml"},
            {"1000","1500 ml"},
            {"1000","2250 ml"}
        };
    double prices [] = {40.0,60.0,70.0,100.0,130.0,150.0};
    Product *product[size];

    for (int i = 0; i < size; ++i) {
        product[i] = new Product(products[i][0],products[i][1],products[i][2],products[i][3],productDetail1, prices);
    }

    for (int i = 0; i < size; ++i) {
        cout<<*product[i]<<endl;
    }
    return 0;
}
