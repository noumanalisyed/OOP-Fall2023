//
// Created by nouman on 12/9/2022.
//
#include "shape.h"

    Shape::Shape():center(){
        cout<<"Shape -- Default Constructor called"<<endl;
    }
    Shape::Shape(int a,int b):center(a,b){
        cout<<"Shape -- Overloaded Constructor called"<<endl;
    }

    const Point &Shape::getCenter() const {
        return center;
    }

    void Shape::setCenter(const Point &center) {
        Shape::center = center;
    }
    float Shape::area(){
        return 0;
    }
    void Shape::draw(){
        cout<<"Shape -- Draw called "<<endl;
    }
