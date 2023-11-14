#include <iostream>

using namespace std;

class Point{
public:
    Point() {
        x = y = 0;
    }

    Point(int x, int y) : x(x), y(y) {}

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


private:
    int x,y;

};
class Shape{

public:
    Shape():center(0,0){

    }

    Shape(int x,int y) : center(x,y) {}

    virtual void draw() = 0;
    virtual float area() = 0;
    const Point &getCenter() const {
        return center;
    }

    void setCenter(const Point &center) {
        Shape::center = center;
    }

private:
    Point center;
};
class Circle : public Shape{

public:
        Circle():Shape(){

        }
        Circle(int x,int y, float r):Shape(x,y){
            radius = r;
        }
        float circumference(){
            return 2 * PI * radius;
        }

        virtual void draw() override {
            cout<<"Circle -- Draw called "<<endl;
        }

        virtual float area() override {
            return PI * radius * radius;
        }

private:
    float radius;
    const float PI = 3.1489;
};
class Rectangle : public Shape{

public:
    Rectangle():Shape(){

    }
    Rectangle(int x,int y, float l,float w):Shape(x,y){
       length = l;
       width = w;
    }
    float perimeter(){
        return 2 * (length + width);
    }

    virtual void draw() override {
        cout<<"Rectangle -- Draw called "<<endl;
    }

    virtual float area() override {
        return length * width;
    }

private:
    float length, width;
};
int main() {

   /* Circle circle(10,10,4);
    circle.draw();
    cout<<"Area of Circle = "<<circle.area()<<endl;*/

    Shape *shape[2];
    shape[0] = new Circle(10,10,4);
    shape[1] = new Rectangle(20,20,12,15);

    for (int i = 0; i<2; i++) {
            cout<<"Area = " <<shape[i]->area()<<endl;
            shape[i]->draw();
    }

    return 0;
}
