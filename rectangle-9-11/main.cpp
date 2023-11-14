#include <iostream>
using namespace std;

class Rectangle{
public:
    Rectangle(){
        length = width = 1;
    }
    Rectangle(float w, float l){
        setWidth(w);
        setLength(l);
    }

    float getLength(){
        return length;
    }

    void setLength(float l) {
        length = (l >= 0 && l <= 20) ? l : 1;
    }

    float getWidth(){
        return width;
    }

    void setWidth(float w) {
        width = (w >= 0 && w <= 20) ? w : 1;
    }

    void print() {
        cout << "length: " << length << " width: " << width<<endl
        <<"Perimeter : "<<perimeter()<<endl<<"Area : "<<area()<<endl;
    }
    float perimeter(){
        return 2 * (length + width);
    }
    float area(){
        return length * width;
    }

private:
    float length, width;
};
int main() {
    Rectangle rectangle1;
    Rectangle rectangle2(19,12);
    Rectangle rectangle3(22,34);
    cout<<"Rectangle 1 :"<<endl;
    rectangle1.print();
    cout<<"Rectangle 2 :"<<endl;
    rectangle2.print();
    cout<<"Rectangle 3 :"<<endl;
    rectangle3.print();

    return 0;
}
