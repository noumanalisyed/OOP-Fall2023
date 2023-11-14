#include <iostream>
#include <synchapi.h>
#include <conio.h>
using namespace std;

class Time{
public:
    Time(){
        hour = min = sec = 0;
        cout<<"Time -- Default Constructor called "<<endl;
    }
    Time(int h,int m,int s){
        setTime(h,m,s);
        cout<<"Time -- Overloaded Constructor called "<<endl;
    }
    void setTime(int h,int m,int s){
        setHour(h);
        setMin(m);
        setSec(s);
    }
    void setHour(int h){
        hour =(h >= 0 && h < 24) ? h : 0;
    }
    int getHour() {
        return hour;
    }
    void setMin(int m){
        min = (m >= 0 && m < 60) ? m : 0;
    }
    int getMin() {
        return min;
    }
    void setSec(int s){
        sec = (s >= 0 && s < 60) ? s : 0;
    }
    int getSec() {
        return sec;
    }

    void display(){
        AM_PM = ((hour >= 12) ? " PM " : " AM ");
        cout<<((hour < 10)? "0":"")<<hour<<":"<<((min < 10)? "0":"")
        <<min<<":"<<((sec < 10)? "0":"")
             <<sec<<AM_PM<<endl;
    }
    void incrementTime(){
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
private:
    int hour,min,sec;
    string AM_PM ;
};


int main() {

    Time time (16,33,55);
    time.incrementTime();
    return 0;
}
