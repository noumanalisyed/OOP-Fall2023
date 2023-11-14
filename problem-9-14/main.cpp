#include <iostream>
using namespace std;

#include "hugeinteger.cpp"

int main() {
    HugeInteger h1("h1");
    HugeInteger h2("h2");
    h1.display();
    h2.display();
    cout<<endl<<endl;
    string n1 ="67";
    string n2 = "45";
    h1.input(n1);
    h2.input(n2);
    h1.display();
    h2.display();
    HugeInteger h3 = h1.add(h2);
    h3.display();
    if(h1.isGreaterThan(h2)){
        cout<<"h1 is greater than h2"<<endl;
    }
    else {
        cout<<"h2 is greater than h1"<<endl;
    }
    if(h1.isGreaterThanEqual(h2)){
        cout<<"h1 is greater than Equal to h2"<<endl;
    }
    else {
        cout<<"h2 is greater than Equal to h1"<<endl;
    }
    if(h1.isLesserThan(h2)){
        cout<<"h1 is Lesser than h2"<<endl;
    }
    else {
        cout<<"h2 is Lesser than  h1"<<endl;
    }
    if(h1.isLesserThanEqual(h2)){
        cout<<"h1 is Lesser than Equal to h2"<<endl;
    }
    else {
        cout<<"h2 is Lesser than Equal to h1"<<endl;
    }
    if(h1.isEqualTo(h2)){
        cout<<"h1 is Equal to h2"<<endl;
    }
    else {
        cout<<"h2 is Not Equal to h1"<<endl;
    }
    if(h1.isNotEqualTo(h2)){
        cout<<"h1 is Not Equal to h2"<<endl;
    }
    else {
        cout<<"h2 is Equal to h1"<<endl;
    }
    HugeInteger h4 = h1.sub(h2);
    h4.display();
    return 0;
}
