//
// Created by nouman on 12/9/2022.
//
#include "circle.h"

    Circle::Circle():Shape(){
        radius = 0;
        cout<<"radius = "<<radius<<"Circle -- Default Constructor called"<<endl;
    }
    Circle::Circle(int a,int b, double r):Shape(a,b){
        radius = r;
        cout<<"Circle -- Overloaded Constructor called"<<endl;
    }

    double Circle::getRadius() const {
        return radius;
    }

    void Circle::setRadius(double radius) {
        Circle::radius = radius;
    }
    float Circle::circumference(){
        return 2 * PI * radius;
    }

    void Circle::draw(){
        cout<<"Circle -- Draw called "<<endl;

    }
    float Circle::area(){
        return PI * radius * radius;
    }