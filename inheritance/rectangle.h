//
// Created by nouman on 12/9/2022.
//
#include "shape.h"
#ifndef INHERITANCE_RECTANGLE_H
#define INHERITANCE_RECTANGLE_H
class Rectangle : public Shape{
    friend ostream &operator<<(ostream &os, Rectangle &rectangle);
public:
    Rectangle();
    Rectangle(int a,int b, double l, double w);

    float perimeter();
    void setLength(double l);
    double getLength();
    void setWith(double w);
    double getWith();
    void draw();
    float area();
private:
    double length, width;
};
#endif //INHERITANCE_RECTANGLE_H
