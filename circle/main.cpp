#include <iostream>
#include<math.h>
using namespace std;
/*
 *
 *
 *
 */
class Point{
public:
    Point(){
        x = y = 0;
        cout<<"Point -- Default Constructor called "<<endl;
    }
    Point(int x1,int y1){
        setX(x1);
        setY(y1);
        cout<<"Point -- Overloaded Constructor called "<<endl;
    }
    void setPoint(int x1,int y1){
        setX(x1);
        setY(y1);
    }
    int getX() {
        return x;
    }

    void setX(int x1) {
        x = (x1 >= 0 && x1 <= 100) ? x1 : 0;
    }

    int getY() const {
        return y;
    }

    void setY(int y1) {
        y = (y1 >= 0 && y1 <= 100) ? y1 : 0;
    }
    void print(){
        cout<<"( "<<x<<" , "<<y<<" ) ";
    }
private:
    int x,y;
};

class Circle{
public:
        Circle(){
            cout<<"Circle -- Default constructor called"<<endl;
        }
        Circle(int cx,int cy,int x1,int y1):center(cx,cy){
            p1.setPoint(x1,y1);
            cout<<"Circle -- Overloaded constructor called"<<endl;
        }
        void print(){
            cout<<"Circle : "<<endl;
            cout<<"[ ";center.print();
            cout<<"  , ";
            p1.print();
            cout<<" ] ";
            cout<<"\nRadius : "<<radius()<<"\n";
            cout<<"Diameter : "<<diameter()<<"\n";
            cout<<"Circumference  : "<<circumference()<<"\n";
            cout<<"Area   : "<<area()<<"\n";
            cout<<endl;
        }

        float diameter(){
            return 2 * radius();
        }
        float radius(){
            return sqrt(square(p1.getX() - center.getX()) + square(p1.getY() - center.getY()));
        }
        float circumference(){
            return 2 * PI * radius();
        }
        float area(){
            return PI * square(radius());
        }
private:
    Point center,p1;
        float square(float x){
            return x * x;
        }
        const float PI = 3.14159;
};

int main() {
    Circle c(10,10,40,50);
    c.print();
    return 0;
}

