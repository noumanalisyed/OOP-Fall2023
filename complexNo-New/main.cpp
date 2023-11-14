#include <iostream>
using namespace std;

class ComplexNumber{
    friend ostream & operator <<(ostream &out, ComplexNumber &c);
    friend istream & operator >>(istream &in, ComplexNumber &c);
public:
    ComplexNumber(){
        setComplexNumber(0,0);
        cout<<"Complex Number -- Default Constructor Called"<<endl;
    }
    ComplexNumber(float r,float i){
        setComplexNumber(r,i);
        cout<<"Complex Number -- Overloaded Constructor Called"<<endl;
    }
    void setComplexNumber(float r,float i){
        realPart = r;
        imgPart = i;
    }
    void display(){
        cout<<"("<<realPart<<" + "<<imgPart<<"i )"<<endl;
    }

    float getRealPart(){
        return realPart;
    }

    void setRealPart(float r) {
        realPart = r;
    }

    float getImgPart() {
        return imgPart;
    }

    void setImgPart(float i) {
        imgPart = i;
    }
    ComplexNumber add(ComplexNumber c){
        int r = this->realPart + c.realPart;
        int i = this->imgPart + c.imgPart;
        return ComplexNumber(r,i);
    }
    ComplexNumber operator +(ComplexNumber c){
        int r = this->realPart + c.realPart;
        int i = this->imgPart + c.imgPart;
        return ComplexNumber(r,i);
    }
    ComplexNumber sub(ComplexNumber c){
        int r = this->realPart - c.realPart;
        int i = this->imgPart - c.imgPart;
        return ComplexNumber(r,i);
    }
    ComplexNumber operator -(ComplexNumber c){
        int r = this->realPart - c.realPart;
        int i = this->imgPart - c.imgPart;
        return ComplexNumber(r,i);
    }

private:
    float realPart;
    float imgPart;
};

ostream & operator <<(ostream &out, ComplexNumber &c){
    out<<"("<<c.realPart<<" + "<<c.imgPart<<"i )"<<endl;
    return out;
}
istream & operator >>(istream &in, ComplexNumber &c){
    cout<<"Enter the real part ";
    in>>c.realPart;
    cout<<"Enter the img part ";
    in>>c.imgPart;
    return in;
}
int main() {
    ComplexNumber c1,c2,c3;
    cin>>c1;
    cin>>c2;
    cout<<c1<<c2;
    c3 = c1 + c2;

    ComplexNumber c4 = c1- c2;
    cout<<c3<<c4;
    return 0;
}
