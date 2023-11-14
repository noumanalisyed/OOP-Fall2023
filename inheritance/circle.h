//
// Created by nouman on 12/9/2022.
//
#include "shape.h"
#ifndef INHERITANCE_CIRCLE_H
#define INHERITANCE_CIRCLE_H
class Circle : public Shape{
    friend ostream &operator<<(ostream &os, Circle &circle);
public:
    Circle();
    Circle(int a,int b, double r);

    double getRadius() const ;

    void setRadius(double radius) ;
    float circumference();


    void draw();
    float area();
private:
    double radius;
    const float PI = 3.1489f;
};
#endif //INHERITANCE_CIRCLE_H
