#include <iostream>
using namespace std;
class Time{
public:
    Time(){
        hour = min = sec = 0;
        count++;
    }
    Time(int h,int m,int s){
        hour = (h >= 0 && h < 24) ? h : 0;
        sec  = (s >= 0 && s < 60) ? s : 0;
        min  = (m >= 0 && m < 60) ? m : 0;
        count++;
    }
    void display(){
        cout<<hour<<":"<<min<<":"<<sec<<endl;
    }
    int  static getCount(){
        return count;
    }
    ~Time(){
        cout<<"Destructor called "<<endl;
        --count;
    }
private :
    int hour,min,sec;
     static int count;
};
int Time::count = 0;
int main() {
    cout<<"Time Objects = "<<Time::getCount()<<endl;
    {
        Time time1;
        time1.display();
        cout << "Time Objects = " << time1.getCount() << endl;
        Time time2(10, 23, 45);
        time2.display();
        cout << "Time Objects = " << time1.getCount() << endl;
        Time time3(12, 25, 45);
        time3.display();
        cout << "Time Objects = " << time1.getCount() << endl;
        Time time4(22, 25, 45);
        time4.display();
        cout << "Time Objects = " << time1.getCount() << endl;

    }
    cout<<"Time Objects = "<<Time::getCount()<<endl;
    return 0;
}
