//
// Created by nouman on 1/25/2023.
//
#include "time.h"

Time::Time(){
        hour = min = sec = 0;
        cout<<"Time -- Default Constructor called "<<endl;
    }
Time::Time(Time &t){
        setTime(t.hour,t.min,t.sec);
        cout<<"Time -- Copy Constructor Overloaded Constructor called "<<endl;
    }
Time::Time(int h,int m,int s){
        setTime(h,m,s);
        cout<<"Time -- Overloaded Constructor called "<<endl;
    }
Time::Time(int h = 0, int m =0){
        setTime(h,m,0);
        cout<<"Time -- Overloaded Constructor called "<<endl;
    }
void Time::setTime(int h, int m, int s) {
        setHour(h);
        setMin(m);
        setSec(s);
    }
void Time::setHour(int h){
        hour =(h >= 0 && h < 24) ? h : 0;
    }
    int Time::getHour() const {
        return hour;
    }
    void Time::setMin(int m){
        min = (m >= 0 && m < 60) ? m : 0;
    }
    int Time::getMin() {
        return min;
    }
    void Time::setSec(int s){
        sec = (s >= 0 && s < 60) ? s : 0;
    }
    int Time::getSec() {
        return sec;
    }

    void Time::display() {
        AM_PM = ((hour >= 12) ? " PM " : " AM ");
        cout<<((hour < 10)? "0":"")<<hour<<":"<<((min < 10)? "0":"")
            <<min<<":"<<((sec < 10)? "0":"")
            <<sec<<AM_PM<<endl;
    }

    ostream &Time::operator<<(ostream &os, Time time){
        time.display();
        return os;
    }
    Time & Time::operator = (Time t) const{
        Time time(t.hour,t.min,t.sec);
        return time;
    }

    Time Time::addMinutes(int m){
        min = min + m;
        if(min >= 60) {
            sec = 0;
            hour++;
            min = min - 60;
        }
        else if(hour == 24){
            hour = 0;
            AM_PM = "AM";
        }
        return *this;
    }
    void Time::incrementSeconds(){
        unsigned int microseconds =1000;
        for (int i = 0; i < 100000; ++i) {
            Sleep(microseconds);
            if(sec == 59){
                sec = 0;
                min++;
            }else {
                sec++;
            }
            if(min == 60){
                min = 0;
                hour++;
            }
            if(hour == 24){
                hour = 0;
                AM_PM = "AM";
            }
            display();
        }
    }
