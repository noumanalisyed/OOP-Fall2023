//
// Created by nouman on 1/25/2023.
//

#ifndef FINAL_FALL2022_Q2_B_APPOINTMENT_H
#define FINAL_FALL2022_Q2_B_APPOINTMENT_H
#include<iostream>
#include "date.h"
#include "time.h"
#include "person.h"

using namespace std;
class DentalAppointment {
public:
    DentalAppointment(string fName, string lName, int m,int d,int y, int stHr,int stMn, int duration);

    const string &getFirstName() const ;

    void setFirstName(const string &firstName) ;

    const string &getLastName() const;

    void setLastName(const string &lastName) ;

    int getMonth() const ;

    void setMonth(int month) ;

    int getDay() const ;

    void setDay(int day) ;

    int getYear() const ;

    void setYear(int year) ;

    int getStartHour() const ;

    void setStartHour(int startHour) ;

    int getStartMinute() const ;

    void setStartMinute(int startMinute) ;

    int getEndingHour() const;

    void setEndingHour(int endingHour);

    int getEndingMinute() const ;

    void setEndingMinute(int endingMinute) ;

    int getAppointmentDuration() const ;

    void setAppointmentDuration(int appointmentDuration) ;

    const Time &getStartTime() const;

    void setStartTime(Time stTime) ;

    const Time &getEndTime() const ;

    void setEndTime(Time &endTime) ;

    const Date &getDateOfAppointment() const ;

    void setDateOfAppointment(const Date &dateOfAppointment) ;


    //friend ostream &operator<<(ostream &os, const DentalAppoitment &appoitment) ;
    void display();

private:
    string firstName;
    string lastName;
    //int month, day, year;
    //int startHour, startMinute, endingHour, endingMinute; ,
    int appointmentDuration;
    Time startTime;
    Time endTime;
    Date dateOfAppointment;

};

#endif //FINAL_FALL2022_Q2_B_APPOINTMENT_H
