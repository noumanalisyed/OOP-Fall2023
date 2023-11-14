#include<iostream>

using namespace std;

class ComplexNo{

public:
        ComplexNo(){
            realPart = imgPart = 0;
            cout<<"Complex No -- Default Constructor called ...."<<endl;
        }
        ComplexNo(int r,int i){
            setRealPart(r);
            setImgPart(i);
            cout<<"Complex No -- Overloaded Constructor called ...."<<endl;
        }
        void display(){
            cout<<"( "<<realPart<<" , "<<imgPart<<"i )"<<endl;
        }

        void setRealPart(int r){
            realPart = (r >= 0) ? r : 0;
        }
        int getRealPart(){
            return realPart;
        }
        void setImgPart(int i){
            imgPart = (i >= 0) ? i : 0;
        }
        int getImgPart(){
            return imgPart;
        }
        ComplexNo add(ComplexNo c){
            int r = this->realPart + c.realPart;
            int i = this->imgPart + c.imgPart;
            return ComplexNo(r,i);
        }
        ComplexNo sub(ComplexNo c){
            int r = this->realPart - c.realPart;
            int i = this->imgPart - c.imgPart;
            return ComplexNo(r,i);
        }

private:
    int realPart;
    int imgPart;
};

int main(){
    ComplexNo c1;
    ComplexNo c2(4,5);
    c1.setRealPart(10);
    c1.setImgPart(6);
    c1.display();
    c2.display();
    ComplexNo c3 = c1.add(c2);
    c3.display();

    return 0;
}
