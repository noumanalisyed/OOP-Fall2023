//
// Created by nouman on 12/9/2022.
//
#include <iostream>
using namespace std;
#ifndef INHERITANCE_POINT_H
#define INHERITANCE_POINT_H
class Point{
    friend ostream &operator<<(ostream &os, const Point &point);
public:
    Point();
    Point(int x1,int y1);

    int getX() const ;

    void setX(int x) ;

    int getY() const ;

    void setY(int y) ;



private:
    int x,y;
};
#endif //INHERITANCE_POINT_H
