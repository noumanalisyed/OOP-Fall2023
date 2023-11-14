//
// Created by nouman on 1/25/2023.
//

#ifndef FINAL_FALL2022_Q2_B_PERSON_H
#define FINAL_FALL2022_Q2_B_PERSON_H
#include <iostream>
using namespace std;
class Person{
    friend ostream &operator<<(ostream &os, const Person &person);
public:
    Person() ;
    Person(string lName, string fName,string zc) ;
    ostream & display();
    const string &getLastName() const ;

    void setLastName(const string &lastName) ;

    const string &getFirstName() const ;

    void setFirstName(const string &firstName) ;

    const string &getZipCode() const ;

    void setZipCode(const string &zipCode) ;

    string toString() const;

    friend ostream &operator<<(ostream &os, const Person &person);

private:
    string lastName;
    string firstName;
    string zipCode;
};
#endif //FINAL_FALL2022_Q2_B_PERSON_H
