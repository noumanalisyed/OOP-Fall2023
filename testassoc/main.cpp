#include <iostream>
using namespace std;
class ABase{

public:
    ABase() {
        data = 0;
    }

    ABase(int data) : data(data) {

    }

    int getData() const {
        return data;
    }

    void setData(int data) {
        ABase::data = data;
    }

    friend std::ostream &operator<<(std::ostream &os, const ABase &base) {
        os << "data: " << base.data;
        return os;
    }

private:
    int data;
};

class BChild{

public:
    BChild() {
        data = 0;
    }

    BChild(int d,ABase a) : data(d),aBase(a) {

    }

    int getData() const {
        return data;
    }

    void setData(int data) {
        BChild::data = data;
    }

    friend std::ostream &operator<<(std::ostream &os, const BChild &child) {
        os << "B :: data: " << child.data<<"\n A ::  "<<child.aBase;
        return os;
    }

private:
    int data;
    ABase aBase;
};

int main() {
    ABase aBase(5);
    BChild bChild(7,aBase);
   //cout<<aBase<<endl;
    cout<<bChild<<endl;

    return 0;
}
