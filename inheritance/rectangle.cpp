//
// Created by nouman on 12/9/2022.
//
#include "rectangle.h"
Rectangle::Rectangle():Shape(){

}
Rectangle::Rectangle(int a,int b, double l, double w):Shape(a,b){
    length = l;
    width = w;
}

float Rectangle::perimeter(){
    return 2 * (getLength() + getWith());
}
void Rectangle::setLength(double l){
    length = l;
}
double Rectangle::getLength(){
    return length;
}
void Rectangle::setWith(double w){
    width = w;
}
double Rectangle::getWith(){
    return width;
}
void Rectangle::draw(){
    cout<<"Rectangle -- Draw called "<<endl;
}
float Rectangle::area(){
    return length * width;
}
