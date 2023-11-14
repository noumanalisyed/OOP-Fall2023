#include <iostream>
using namespace std;
class Point{
public:
    Point() {
        x = y = 0;
    }

    Point(int x, int y) : x(x), y(y) {

    }

    int getX() const {
        return x;
    }

    void setX(int x) {
        Point::x = x;
    }

    int getY() const {
        return y;
    }

    void setY(int y) {
        Point::y = y;
    }

    friend ostream &operator<<(ostream &os, const Point &point) {
        os << "x: " << point.x << " y: " << point.y;
        return os;
    }

private:
    int x,y;
};
class Shape{
public:
    Shape(const Point &center) : center(center) {
        cout<<"Shape -- Constructor "<<endl;
    }

    virtual void draw(){
            cout<<"Shape -- Draw "<<endl;
        }
     virtual double area()= 0;
private:
    Point center;

};
class Circle : public Shape{
public:
    Circle(const Point &center, float radius) : Shape(center), radius(radius) {

    }

    float getRadius() const {
        return radius;
    }

    void setRadius(float radius) {
        Circle::radius = radius;
    }
    virtual void draw(){
        cout<<"Circle -- Draw "<<endl;
    }
    virtual double area(){
        return 3.14589 * radius * radius;
    }
    double circumference(){
            return 2 * 3.14819 * radius;
        }
private:
    float radius;
};

class Rectangle : public Shape{
public:
    Rectangle(const Point &center, float l, float w) : Shape(center)  {
        length = l;
        width = w;
    }

    float getLength() const {
        return length;
    }

    void setLength(float length) {
        Rectangle::length = length;
    }

    float getWidth() const {
        return width;
    }

    void setWidth(float width) {
        Rectangle::width = width;
    }

    virtual void draw(){
        cout<<"Rectangle -- Draw "<<endl;
    }
    virtual double area(){
        return length * width;
    }
    double perimeter(){
        return 2 * (length + width);
    }
private:
    float length, width;
};
int main() {
    Point center(0,0);
    /*Shape s(center);
    s.draw();
    cout<<"Area = "<<s.area()<<endl;*/

    Circle circle(center,3.4);
    circle.draw();
    cout<<"Circle Area = "<<circle.area()<<endl;
    cout<<"Circle Circumference = "<<circle.circumference()<<endl;

    Rectangle rectangle(center,3.4,4.3);
    rectangle.draw();
    cout<<"Rectangle Area = "<<rectangle.area()<<endl;
    cout<<"Rectangle Perimeter = "<<rectangle.perimeter()<<endl;

    cout<<endl<<endl<<"Dynamic Binding in Action "<<endl<<endl;
    /*Shape * shape = &s;
    shape->draw();
    cout<<"Area = "<<shape->area()<<endl;*/
    Shape *shape;
    shape = &circle;

    shape->draw();
    cout<<"Area = "<<shape->area()<<endl;

    shape = &rectangle;

    shape->draw();
    cout<<"Area = "<<shape->area()<<endl;
    return 0;
}
