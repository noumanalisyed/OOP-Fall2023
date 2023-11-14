//
// Created by nouman on 12/9/2022.
//
#include "point.h"

    Point::Point(){
        x = y = 0;
        cout<<"( "<<x<<" , "<<y<<" ) "<<endl;
        cout<<"Point -- Default Constructor called"<<endl;
    }
    Point::Point(int x1,int y1):x(x1),y(y1){
        cout<<"( "<<x<<" , "<<y<<" ) "<<endl;
        cout<<"Point -- Overloaded Constructor called"<<endl;
    }

    int Point::getX() const {
        return x;
    }

    void Point::setX(int x) {
        Point::x = x;
    }

    int Point::getY() const {
        return y;
    }

    void Point::setY(int y) {
        Point::y = y;
    }


