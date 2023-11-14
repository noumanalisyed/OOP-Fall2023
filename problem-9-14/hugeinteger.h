//
// Created by nouman on 10/31/2023.
//

#ifndef PROBLEM_9_14_HUGEINTEGER_H
#define PROBLEM_9_14_HUGEINTEGER_H
#include<iostream>
using namespace std;

class HugeInteger {
public:
    HugeInteger(string n);
    void input(string data);
    HugeInteger add(HugeInteger h);
    HugeInteger sub(HugeInteger h);
    void display();
    int getSize();
    int getCapacity();
    bool isGreaterThan(HugeInteger h);
    bool isGreaterThanEqual(HugeInteger h);
    bool isLesserThan(HugeInteger h);
    bool isLesserThanEqual(HugeInteger h);
    bool isEqualTo(HugeInteger h);
    bool isNotEqualTo(HugeInteger h);
    int getIndex(int index);
    int getDigit(int digit);
    void setDigit(int digit, int value);
    void setIndex(int index, int value);

private:
    void init();
    const int size = 40;
    int *ptr;
    string name;
    char sign;
    int capacity;
};
#endif //PROBLEM_9_14_HUGEINTEGER_H
