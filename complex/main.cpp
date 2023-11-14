#include <iostream>
using namespace std;

class ComplexNo{
public:
    ComplexNo(){
        realPart = imginaryPart = 0;
    }
    ComplexNo(int realPart,int imginaryPart){
        ComplexNo::realPart = realPart;
        ComplexNo::imginaryPart = imginaryPart;
    }
    void print(){
        cout<<"[ "<<realPart<<", i "<<imginaryPart<<" ] "<<endl;
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

private:
    int realPart;
    int imginaryPart;

};

int main() {
    ComplexNo complexNo(2,3);
    ComplexNo complexNo1(7,9);
    complexNo.print();
    complexNo1.print();
    complexNo1.setRealPart(12);
    complexNo1.print();
    return 0;
}
