//
// Created by nouman on 1/25/2023.
//
#ifndef FINAL_FALL2022_Q2_B_TIME_H
#define FINAL_FALL2022_Q2_B_TIME_H
#include <iostream>
#include <synchapi.h>
#include <conio.h>
using namespace std;
class Time{
    friend ostream &operator<<(ostream &os, Time time);
public:
    Time();
    Time(Time &t);
    Time(int h,int m,int s);
    Time(int h = 0, int m =0);
    void setTime(int h, int m, int s);
    void setHour(int h);
    int getHour() const;
    void setMin(int m);
    int getMin() ;
    void setSec(int s);
    int getSec() ;
    void display();
    friend ostream &operator<<(ostream &os, Time time);
    Time & operator = (Time t) const;
    Time addMinutes(int m);
    void incrementSeconds();
private:
    int hour,min,sec;
    string AM_PM ;
};

#endif //FINAL_FALL2022_Q2_B_TIME_H
