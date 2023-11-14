#include <iostream>
#include<math.h>
using namespace std;
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
class Rectangle{

public:
    Rectangle(){
        cout<<"Rectangle -- Default Constructor called "<<endl;
    }
    Rectangle(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4){
       if(x1 == x2 && y1 == y3 && x3 == x4 && y2 == y4){
           p1.setPoint(x1,y1);
           p2.setPoint(x2,y2);
           p3.setPoint(x3,y3);
           p4.setPoint(x4,y4);
       }
       else{
           cout<<"These are not valid points for the rectangle"<<endl;
       }
        cout<<"\nRectangle -- Overloaded Constructor called "<<endl;
       /* p1.print();
        p2.print();
        p3.print();
        p4.print();*/
    }

    float getLength(){
        return sqrt(square((p3.getX() - p1.getX() )) +square( (p3.getY() - p1.getY())));
    }
    float getWidth(){
        return sqrt(square((p2.getX() - p1.getX() )) +square( (p2.getY() - p1.getY())));
    }
    float perimeter(){
        return 2 * (getWidth() + getLength());
    }
    float area(){
        return (getWidth() * getLength());
    }
    void print(){

        cout<<"Rectangle : "<<endl;
        cout<<"[ ";
        p1.print(); cout<<" , "; p2.print(); cout<<" , "; p3.print(); cout<<" , "; p4.print();
        cout<<" ]\n";
            cout<<"Length : "<<getLength()<<" , "
            <<"Width : "<<getWidth()<<endl
            <<"Perimeter : "<<perimeter()<<endl
            <<"Area : "<<area()<<endl;
    }

private:
    Point p1,p2,p3,p4;
    int square(int x){
        return x * x;
    }
};
int main() {
    Rectangle r1(30,70,30,35,80,70,80,35);
    r1.print();
    return 0;
}
