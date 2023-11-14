//
// Created by nouman on 1/25/2023.
//
#include "person.h"

    Person::Person() {
        lastName = "";
        firstName = "";
        zipCode = "X";
    }
    Person::Person(string lName, string fName,string zc) {
        lastName = lName;
        firstName = fName;
        zipCode = zc;
    }

    const string &Person::getLastName() const {
        return lastName;
    }

    void Person::setLastName(const string &lastName) {
        Person::lastName = lastName;
    }

    const string &Person::getFirstName() const {
        return firstName;
    }

    void Person::setFirstName(const string &firstName) {
        Person::firstName = firstName;
    }

    const string &Person::getZipCode() const {
        return zipCode;
    }

    void Person::setZipCode(const string &zipCode) {
        Person::zipCode = zipCode;
    }

    string Person::toString() const{
        string message = "lastName: " +lastName + ", firstName: "+firstName + ", zipCode: "+zipCode;
        return message;
    }
    ostream &Person:: display() {
        cout << this->toString();
        return cout;
    }

ostream &operator<<(ostream &os, const Person &person) {
    os << "lastName: " << person.lastName << " firstName: " << person.firstName << " zipCode: " << person.zipCode<<endl;
    return os;
}

