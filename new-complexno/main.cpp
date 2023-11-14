#include <iostream>
using namespace std;

class ComplexNumber{
public:
        ComplexNumber(){
            realPart = imgPart = 0;
            cout<<"Default -- Constructor called ...."<<endl;
        }
        ComplexNumber(float r,float i){
            realPart = r;
            imgPart = i;
            cout<<"Overloaded -- Constructor called ...."<<endl;
        }
        void display(){
            cout<<" ("<<realPart<<" + "<<imgPart<<" i )"<<endl;
        }

    float getRealPart() {
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

private:
    float realPart;
    float imgPart;
};
int main() {
    int x,y;
    ComplexNumber c1,c2(12,18);
    ComplexNumber c3(4,5);
    c1.display();
    c2.display();
    c3.display();
    c1.setRealPart(10);
    c1.setImgPart(12);
    cout<<c1.getRealPart()<<" + "<<c1.getImgPart()<<" i "<<endl;
    return 0;
}
