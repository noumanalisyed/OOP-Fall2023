#include <iostream>
using namespace std;

class Term{
public:

    Term() {
        exp = coef = 0;
    }

    Term(int e, int c) : exp(e), coef(c) {
        //exp = e;
        //coef = c;
    }

    int getExp() const {
        return exp;
    }

    void setExp(int exp) {
        Term::exp = exp;
    }

    int getCoef() const {
        return coef;
    }

    void setCoef(int coef) {
        Term::coef = coef;
    }
    void print(){
        cout<<coef<<" X ^ "<<exp;
    }

private:
        int exp, coef;
};
class Polynomial{
public:
    Polynomial(int d) {
        degree = d;
        size = degree + 1;
        create();
    }

    void create() {
        terms = new Term *[size];
        for (int i = 0, j = degree; i < size; ++i, j--) {
            terms[i] = new Term(j, 0);
        }
    }

    void print() {
        for (int i = 0; i < size; ++i) {
            if(terms[i]->getCoef() != 0) {
                terms[i]->print();
                if( i != degree)
                    cout << " + ";
            }
        }
        cout<<endl<<endl;
    }

    void input(int x[], int s) {
        size = s;
        degree = size - 1;
        create();
        for (int i = degree, j=0; i >=0; i--, j++) {
            terms[j]->setCoef(x[i]);
        }
    }
    Polynomial add(Polynomial p){

        int d = (this->degree > p.degree)?this->degree : p.degree;
        Polynomial result(d);
        for(int i = 0 ; i<= d; i++){
            if(i <= degree && i <= p.degree) {
                if (terms[i]->getExp() == p.terms[i]->getExp()) {
                    result.terms[i]->setCoef(terms[i]->getCoef() + p.terms[i]->getCoef());
                }
                else if (terms[i]->getExp() > p.terms[i]->getExp()) {
                    result.terms[i]->setCoef(terms[i]->getCoef());
                }
                else if (terms[i]->getExp() < p.terms[i]->getExp()) {
                    result.terms[i]->setCoef(p.terms[i]->getCoef());
                }
            }
            else if (i <= degree && i > p.degree) {
                    result.terms[i]->setCoef(terms[i]->getCoef());
            } else if (i > degree && i <= p.degree) {
                    result.terms[i]->setCoef(p.terms[i]->getCoef());
            }

        }
        return result;
    }
private:
    Term **terms;
    int degree;
    int size;
};
int main() {

    Polynomial polynomial1(5);
    Polynomial polynomial2(3);
    polynomial1.print();
    polynomial2.print();
    //"2 x ^ 3 + 4 X ^2 + 3 X ^1 + 2 X ^0";
    int p1[] = {2,3,0,4};
    //"2 x ^ 5 +0 x ^ 4 + 4 X ^3 + 3 X ^2 + 2 X ^1 + 5 X ^0";
    int p2[] = {5,2,6};
    polynomial1.input(p1,4);
    polynomial2.input(p2,3);
    polynomial1.print();
    polynomial2.print();

    Polynomial polynomial3 = polynomial1.add(polynomial2);
    polynomial3.print();
    return 0;
}
