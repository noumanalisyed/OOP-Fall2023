#include <iostream>

using namespace std;

class RationalNumber{
public:
        RationalNumber(){
            numerator = denominator = 1;
           // cout<<"Rational Number -- default constructor called "<<endl;
        }
        RationalNumber(int n,int d){
            numerator = n;
            denominator = (d >= 1) ? d : 1;
            //cout<<"Rational Number -- Overloaded constructor called "<<endl;
            simplify();
        }

        void display(){
            cout<<numerator<<"/"<<denominator<<" ";
        }
        void displayDecimal(){
            cout<<(float) numerator/denominator<<" ";
        }

        int getNumerator() {
            return numerator;
        }

        void setNumerator(int n) {
            numerator = n;
        }

        int getDenominator() {
            return denominator;
        }

        void setDenominator(int d) {
            denominator = d;
        }
        RationalNumber add(RationalNumber r){
            int lcm = this->denominator * r.denominator;
            int n1 = (this->numerator * lcm ) / this->denominator;
            int n2 = (r.numerator * lcm) / r.denominator;
            RationalNumber result(n1+n2,lcm);
            return result;
        }
        RationalNumber sub(RationalNumber r){
            int lcm = this->denominator * r.denominator;
            int n1 = (this->numerator * lcm ) / this->denominator;
            int n2 = (r.numerator * lcm) / r.denominator;
            RationalNumber result(n1-n2,lcm);
            return result;
        }
        RationalNumber mul(RationalNumber r){
            int n = this->numerator * r.numerator;
            int d = this->denominator * r.denominator;
            return RationalNumber(n,d);
        }
        RationalNumber div(RationalNumber r){
            int n = this->numerator * r.denominator;
            int d = this->denominator * r.numerator;
            return RationalNumber(n,d);
        }
private:
    int numerator;
    int denominator;

        void simplify(){
            int div = 2;
            int max = (numerator > denominator ) ? numerator : denominator;
            while (div <= max/2){
                if(numerator % div == 0  && denominator % div == 0){
                    numerator = numerator / div;
                    denominator = denominator / div;
                }
                else{
                    div++;
                }
            }
        }

};
int main() {
    RationalNumber rationalNumber1(7,8),rationalNumber2(5,9),rationalNumber3;
    rationalNumber1.display();
    cout<<" + ";
    rationalNumber2.display();
    cout<<" = ";
    rationalNumber3 = rationalNumber1.add(rationalNumber2);
    rationalNumber3.display();
    RationalNumber rationalNumber4 = rationalNumber1.mul(rationalNumber2);
    cout<<endl<<endl;
    rationalNumber1.display();
    cout<<" * ";
    rationalNumber2.display();
    cout<<" = ";
    rationalNumber4.display();
    RationalNumber rationalNumber5 = rationalNumber1.div(rationalNumber2);
    cout<<endl<<endl;
    rationalNumber1.display();
    cout<<" / ";
    rationalNumber2.display();
    cout<<" = ";
    rationalNumber5.display();
    cout<<endl<<endl;
    RationalNumber rationalNumber6 = rationalNumber1.sub(rationalNumber2);
    rationalNumber1.display();
    cout<<" - ";
    rationalNumber2.display();
    cout<<" = ";
    rationalNumber6.display();
    cout<<endl<<endl;
    RationalNumber rationalNumber7 = rationalNumber5.mul(rationalNumber4.sub(rationalNumber1.add(rationalNumber2)));
    rationalNumber5.display();
    cout<<" * (";
    rationalNumber4.display();
    cout<<" - ( ";
    rationalNumber1.display();
    cout<<" + ";
    rationalNumber2.display();
    cout<<" )  ) = ";
    rationalNumber7.display();
    cout<<endl<<endl;
    rationalNumber4.displayDecimal();
    return 0;
}
