//
// Created by nouman on 1/25/2023.
//
#include<iostream>
#include "appointment.h"
using namespace std;

    DentalAppointment::DentalAppointment(string fName, string lName, int m,int d,int y, int stHr,int stMn, int duration):
            dateOfAppointment(d,m,y),startTime(stHr,stMn),endTime(stHr,stMn){
        firstName = fName;
        lastName =  lName;
        appointmentDuration = duration;
        endTime = endTime.addMinutes(duration);

    }

    const string &DentalAppointment::getFirstName() const {
        return firstName;
    }

    void DentalAppointment::setFirstName(const string &firstName) {
        DentalAppointment::firstName = firstName;
    }

    const string &DentalAppointment::getLastName() const {
        return lastName;
    }

    void DentalAppointment::setLastName(const string &lastName) {
        DentalAppointment::lastName = lastName;
    }

    int DentalAppointment::getAppointmentDuration() const {
        return appointmentDuration;
    }

    void DentalAppointment::setAppointmentDuration(int appointmentDuration) {
        DentalAppointment::appointmentDuration = appointmentDuration;
    }

    const Time &DentalAppointment::getStartTime() const {
        return startTime;
    }

    void DentalAppointment::setStartTime(Time stTime){
        startTime.setTime(stTime.getHour(),stTime.getMin(),stTime.getSec());
    }

    const Time &DentalAppointment::getEndTime() const {
        return endTime;
    }

    void DentalAppointment::setEndTime(Time &endTime) {
        endTime.setTime(endTime.getHour(),endTime.getMin(),endTime.getSec());
    }

    const Date &DentalAppointment::getDateOfAppointment() const {
        return dateOfAppointment;
    }

    void DentalAppointment::setDateOfAppointment(const Date &dateOfAppointment) {
        DentalAppointment::dateOfAppointment = dateOfAppointment;
    }

void DentalAppointment::display() {
    cout <<"firstName: " << firstName << "\nlastName: " << lastName  << "\nAppointmentDuration: "
       << appointmentDuration << "\nStart Time: " << startTime << "\nEnd Time: "
       << endTime << "\nDate Of Appointment: " << dateOfAppointment;
}
    /*ostream &operator<<(ostream &os, const DentalAppoitment &appoitment) {
        os << "firstName: " << appoitment.firstName << ", lastName: " << appoitment.lastName << ", month: "
           << appoitment.month << ", day: " << appoitment.day << ", year: " << appoitment.year << ", startHour: "
           << appoitment.startHour << ", startMinute: " << appoitment.startMinute << ", endingHour: "
           << appoitment.endingHour << ", endingMinute: " << appoitment.endingMinute << ", appointmentDuration: "
           << appoitment.appointmentDuration << ", startTime: " << appoitment.startTime << ", endTime: "
           << appoitment.endTime << ", dateOfAppointment: " << appoitment.dateOfAppointment;
        return os;
    }*/
