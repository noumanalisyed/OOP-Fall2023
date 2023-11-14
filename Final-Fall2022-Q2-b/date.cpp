//
// Created by nouman on 11/10/2022.
//
#include <iostream>
#include <stdexcept>
#include "date.h"
// include Date class definition
using namespace std;

// constructor confirms proper value for month; calls
// utility function checkDay to confirm proper value for day
Date::Date( int mn, int dy, int yr )
{
    if ( mn > 0 && mn <= monthsPerYear ) // validate the month
        month = mn;
    else
        throw invalid_argument( "month must be 1-12" );

    year = yr; // could validate yr
    day = checkDay( dy ); // validate the day

    // output Date object to show when its constructor is called
    cout << "Date object constructor for date ";
    print();
    cout << endl;
} // end Date constructor

void Date::print() const {
     cout << month << '/' << day << '/' << year;
 } // end function

Date::~Date() {
    cout << "Date object destructor for date ";
    print();
    cout << endl;
 }
int Date::checkDay( int testDay ) const
 {
 static const int daysPerMonth[ monthsPerYear + 1 ] =
 { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

 // determine whether testDay is valid for specified month
    if ( testDay > 0 && testDay <= daysPerMonth[ month ] )
     return testDay;

 // February 29 check for leap year
    if ( month == 2 && testDay == 29 && ( year % 400 == 0 ||
        ( year % 4 == 0 && year % 100 != 0 ) ) )
        return testDay;

    throw invalid_argument( "Invalid day for current month and year" );
 }