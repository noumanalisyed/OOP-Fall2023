#include <iostream>
#include<string>
using namespace std;

class Time{
public:
    Time() {

    }

    Time(int h,int m,int s) {
        setHour(h);
        setMin(m);
        setSec(s);
    }

    int getHour() const {
        return hour;
    }

    void setHour(int h) {
        hour = (h >= 0 && h < 24) ? h : 0;
    }

    int getMin() const {
        return min;
    }

    void setMin(int m) {
        min = (m >= 0 && m < 60) ? m : 0;
    }

    int getSec() const {
        return sec;
    }

    void setSec(int s) {
        sec = (s >= 0 && s < 60) ? s : 0;
    }

    friend ostream &operator<<(ostream &os, const Time &time) {
        os << time.toString();
        return os;
    }
    string toString() const{
        string message = to_string(hour)+" : "+to_string(min)+" : "+to_string(sec);
        return message;
    }

private:
    int hour;
    int min;
    int sec;
};

class  Meeting{
public:
    Meeting() {

    }

    Meeting(const string &location, const string &subject, const int h,int m) : location(location),
                                                                                       subject(subject),
                                                                                       timeOfMeeting(h,m,0) {

    }

    const string &getLocation() const {
        return location;
    }

    void setLocation(const string &location) {
        Meeting::location = location;
    }

    const string &getSubject() const {
        return subject;
    }

    void setSubject(const string &subject) {
        Meeting::subject = subject;
    }

    const Time &getTimeOfMeeting() const {
        return timeOfMeeting;
    }

    void setTimeOfMeeting(const Time &timeOfMeeting) {
        Meeting::timeOfMeeting = timeOfMeeting;
    }

    friend ostream &operator<<(ostream &os, const Meeting &meetig) {
        os<<meetig.toString();
        return os;
    }
    string toString() const{
        string  message = "location: " +location + ", at " +timeOfMeeting.toString() +", Subject: "+subject;
        return message;
    }

private:
    string location;
    string subject;
    Time timeOfMeeting;
};
int main() {
    Meeting meeting("Meeting in room 205","Examiners Meeting",12,30);
    cout<<meeting;

    return 0;
}
