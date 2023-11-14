#include <iostream>
using namespace std;
#include "point.h"
#include "shape.h"
#include "circle.h"
#include "rectangle.h"
ostream &operator<<(ostream &os, const Point &point) {
    os << "x: " << point.x << " y: " << point.y;
    return os;
}
ostream &operator<<(ostream &os, const Shape &shape) {
    os << "center: " << (Point) shape.getCenter();
    return os;
}

ostream &operator<<(ostream &os, Circle &circle) {
    os << (Shape)circle << " radius: " << circle.radius
       <<" Circumference : "<<circle.circumference()
       <<" Area : "<<circle.area()<<endl;
    return os;
}
ostream &operator<<(ostream &os, Rectangle &rectangle) {
    os << (Shape)rectangle << " length: " << rectangle.length
            << " width: " << rectangle.width
       <<" Perimeter : "<<rectangle.perimeter()
       <<" Area : "<<rectangle.area()<<endl;
    return os;
}
int main() {
    Shape shape(10,50);
    shape.draw();
    cout<<"Shape Area = "<<shape.area()<<endl;
    Circle circle;
    cout<<circle<<endl;
    Circle circle1(10,20,3.4);
    cout<<circle1<<endl;
    circle.draw();
    Rectangle rectangle(20,30,15,22);
    cout<<rectangle<<endl;
    rectangle.draw();
    return 0;
}
