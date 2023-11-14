#include <iostream>
using namespace std;
class ComplexNo{
public:
        ComplexNo(){
            name = "";
            realPart = imgPart = 0;
            cout<<"Default -- Constructor called "<<endl;
        }
        ComplexNo(string n,float r,float i){
            realPart = r;
            imgPart = i;
            name = n;
            cout<<"Complex No : "<<name<<" created through Overloaded -- Constructor called "<<endl;
        }
        void display(){
            cout<<name<<" : ( "<<realPart<<" + "<<imgPart<<"i )"<<endl;
        }
        void setComplexNo(float r,float i){
                realPart = r;
                imgPart = i;
        }
        void setRealPart(float r) {
            realPart = r;
        }

        void setImgPart(float i) {
            imgPart = i;
        }

        float getRealPart() {
            return realPart;
        }

        float getImgPart() {
            return imgPart;
        }

        string &getName() {
            return name;
        }

        void setName(const string &n) {
            name = n;
        }
        ComplexNo add(ComplexNo c){
            int r = realPart + c.realPart;
            int i = imgPart  + c.imgPart;
            return ComplexNo("ANS",r,i);
        }

private:
    float realPart;
    float imgPart;
    string name;
};

int main() {
    int x;
    ComplexNo c1,c2("c2",4,5);
    cout<<"Address of c1 = "<<&c1<<endl;
    cout<<"Address of c2 = "<<&c2<<endl;
    c1.setName("c1");
    c1.display();
    c2.display();
    cout<<"Size of Complex No = "<< sizeof(c1)<<" Bytes"<<endl;
    c1.setRealPart(10);
    c1.setImgPart(12);
    c1.display();
    ComplexNo c3;
    c3.setName("c3");
    c3.display();
    c3.setComplexNo(20,99);
    c3.display();
    cout<<c2.getRealPart()<<" + "<<c2.getImgPart()<<" i "<<endl;
    ComplexNo c4 = c1.add(c2);
    c4.display();
    return 0;
}
