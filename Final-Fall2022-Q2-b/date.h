//
// Created by nouman on 11/10/2022.
//

#ifndef DATE_H
#define DATE_H
class Date
{
public:
    static const int monthsPerYear = 12; // number of months in a year
    Date( int = 1, int = 1, int = 1900 );
    void print() const; // print date in month/day/year format
    ~Date();
private:
    int month; // 1-12 (January-December)
    int day; // 1-31 based on month
    int year; // any year

    // utility function to check if day is proper for month and year
    int checkDay( int ) const;
};
#endif //EMPLOYEE_DATE_H
