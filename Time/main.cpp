#include <iostream>
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
            cout<<((hour < 10)? "0":"")<<hour<<":"<<((min < 10)? "0":"")
            <<min<<":"<<((sec < 10)? "0":"")
            <<sec<<((hour >= 12) ? " PM " : " AM ")<<endl;
        }
private:
    int hour,min,sec;
};
int main() {
    Time time1, time2(12,34,56);
    //, time3(99,39,29);
    time1.display();
    time2.display();
    //time3.display();
    int h,m,s;
    cout<<"Enter hours : ";
    cin>>h;
    cout<<"Enter minutes : ";
    cin>>m;
    cout<<"Enter seconds : ";
    cin>>s;

    time1.setTime(h,m,s);
    time1.display();
    return 0;
}
