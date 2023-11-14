#include <iostream>
using namespace std;

class ComplexNo
{
public:
    ComplexNo(){
        setRealPart(0);
        setImginaryPart(0);
    }
    ComplexNo(int realPart, int imginaryPart){
        setRealPart(realPart);
        setImginaryPart(imginaryPart);
    }

    void print(){
        cout<<"( "<<realPart<<" + "<<imginaryPart<<" i ) ";
    }

    int getRealPart() {
        return realPart;
    }

    void setRealPart(int realPart) {
        ComplexNo::realPart = realPart;
    }

    int getImginaryPart() {
        return imginaryPart;
    }

    void setImginaryPart(int imginaryPart) {
        ComplexNo::imginaryPart = imginaryPart;
    }

    ComplexNo add(ComplexNo c){
        int real = this->realPart + c.realPart;
        int img = this->imginaryPart + c.imginaryPart;
        return ComplexNo(real,img);
    }
private:
    int realPart;
    int imginaryPart;
};
int main() {
    ComplexNo complexNo1(2,3);
    complexNo1.print();
    ComplexNo complexNo2(3,4);
    complexNo2.print();
    ComplexNo complexNo3 = complexNo1.add(complexNo2);
    complexNo3.print();

    return 0;
}
