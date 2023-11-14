//
// Created by nouman on 12/9/2022.
//
#include "point.h"
#ifndef INHERITANCE_SHAPE_H
#define INHERITANCE_SHAPE_H
class Shape{
public:
    Shape();
    Shape(int a,int b);

    const Point &getCenter() const ;

    void setCenter(const Point &center) ;
    float area();
    void draw();
private:
    Point center;
};
#endif //INHERITANCE_SHAPE_H
