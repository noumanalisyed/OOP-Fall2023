//
// Created by nouman on 1/25/2023.
//
#include<iostream>
#include "appointment.h"
using namespace std;

    DentalAppoitment::DentalAppoitment(string fName, string lName, int m,int d,int y, int stHr,int stMn, int duration):
            dateOfAppointment(d,m,y),startTime(stHr,stMn),endTime(stHr,stMn){
        firstName = fName;
        lastName =  lName;
        appointmentDuration = duration;
        endTime = endTime.addMinutes(duration);

    }

    const string &DentalAppoitment::getFirstName() const {
        return firstName;
    }

    void DentalAppoitment::setFirstName(const string &firstName) {
        DentalAppoitment::firstName = firstName;
    }

    const string &DentalAppoitment::getLastName() const {
        return lastName;
    }

    void DentalAppoitment::setLastName(const string &lastName) {
        DentalAppoitment::lastName = lastName;
    }

    int DentalAppoitment::getMonth() const {
        return month;
    }

    void DentalAppoitment::setMonth(int month) {
        DentalAppoitment::month = month;
    }

    int DentalAppoitment::getDay() const {
        return day;
    }

    void DentalAppoitment::setDay(int day) {
        DentalAppoitment::day = day;
    }

    int DentalAppoitment::getYear() const {
        return year;
    }

    void DentalAppoitment::setYear(int year) {
        DentalAppoitment::year = year;
    }

    int DentalAppoitment::getStartHour() const {
        return startHour;
    }

    void DentalAppoitment::setStartHour(int startHour) {
        DentalAppoitment::startHour = startHour;
    }

    int DentalAppoitment::getStartMinute() const {
        return startMinute;
    }

    void DentalAppoitment::setStartMinute(int startMinute) {
        DentalAppoitment::startMinute = startMinute;
    }

    int DentalAppoitment::getEndingHour() const {
        return endingHour;
    }

    void DentalAppoitment::setEndingHour(int endingHour) {
        DentalAppoitment::endingHour = endingHour;
    }

    int DentalAppoitment::getEndingMinute() const {
        return endingMinute;
    }

    void DentalAppoitment::setEndingMinute(int endingMinute) {
        DentalAppoitment::endingMinute = endingMinute;
    }

    int DentalAppoitment::getAppointmentDuration() const {
        return appointmentDuration;
    }

    void DentalAppoitment::setAppointmentDuration(int appointmentDuration) {
        DentalAppoitment::appointmentDuration = appointmentDuration;
    }

    const Time &DentalAppoitment::getStartTime() const {
        return startTime;
    }

    void DentalAppoitment::setStartTime(Time stTime) const{
        startTime.setTime(stTime.getHour(),stTime.getMin(),stTime.getSec());
    }

    const Time &DentalAppoitment::getEndTime() const {
        return endTime;
    }

    void DentalAppoitment::setEndTime(const Time &endTime) {
        DentalAppoitment::endTime = endTime;
    }

    const Date &DentalAppoitment::getDateOfAppointment() const {
        return dateOfAppointment;
    }

    void DentalAppoitment::setDateOfAppointment(const Date &dateOfAppointment) {
        DentalAppoitment::dateOfAppointment = dateOfAppointment;
    }


    ostream &operator<<(ostream &os, const DentalAppoitment &appoitment) {
        os << "firstName: " << appoitment.firstName << ", lastName: " << appoitment.lastName << ", month: "
           << appoitment.month << ", day: " << appoitment.day << ", year: " << appoitment.year << ", startHour: "
           << appoitment.startHour << ", startMinute: " << appoitment.startMinute << ", endingHour: "
           << appoitment.endingHour << ", endingMinute: " << appoitment.endingMinute << ", appointmentDuration: "
           << appoitment.appointmentDuration << ", startTime: " << appoitment.startTime << ", endTime: "
           << appoitment.endTime << ", dateOfAppointment: " << appoitment.dateOfAppointment;
        return os;
    }


private:
    string firstName;
    string lastName;
    int month, day, year;
    int startHour, startMinute, endingHour, endingMinute , appointmentDuration;
    Time startTime;
    Time endTime;
    Date dateOfAppointment;

};
