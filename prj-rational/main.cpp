#include <iostream>
using namespace std;

class RationalNumber{
public:
    RationalNumber(){
        numerator = 0;
        denominator = 1;
       // cout<<"Rational Number -- Default constructor called"<<endl;
    }
    RationalNumber(int numerator, int denominator){
        RationalNumber::numerator = numerator;
        RationalNumber::denominator = (denominator > 0) ? denominator : 1;
      //  cout<<"Rational Number -- Overloaded constructor called"<<endl;
    }
    void print(){
        cout<<numerator<<" / "<<denominator<<"  ";
    }
    int getNumerator(){
        return numerator;
    }
    int getDenominator(){
        return denominator;
    }
    void setNumerator(int numerator){
        RationalNumber::numerator = numerator;
    }
    void setDenominator(int denominator){
        RationalNumber::denominator = denominator;
    }

    RationalNumber add(RationalNumber rational){
        int lcm = this->denominator * rational.denominator ;
        int component1 = ( this->numerator * lcm ) / this->denominator;
        int component2 = ( rational.numerator * lcm ) / rational.denominator;
        return  RationalNumber(component1+component2,lcm);
    }

private:
    int numerator;
    int denominator;
};

int main() {
    RationalNumber r1(2,3);
    RationalNumber r2(4,7);
    r1.print();
    cout<<" + ";
    r2.print();
    cout<<" = ";
    RationalNumber r3 = r1.add(r2);  // r1 + r2
    r3.print();
    return 0;
}
