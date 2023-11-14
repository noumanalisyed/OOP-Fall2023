#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int number_of_passenger = 4;
    float total_miles_driven, cost_per_gallon_of_gasoline, average_miles_per_gallon, parking_fees_per_day,etolls_per_day;
    float daily_driving_cost;
    cout<<"Enter Total Miles Driven  =  ";
    cin>>total_miles_driven;
    cout<<"Enter Cost Per Gallons of Gasoline  =  ";
    cin>>cost_per_gallon_of_gasoline;
    cout<<"Enter Parking Fees per day  = ";
    cin>>parking_fees_per_day;
    cout<<"Enter eTolls per day  = ";
    cin>>etolls_per_day;
    average_miles_per_gallon = total_miles_driven / cost_per_gallon_of_gasoline;
    daily_driving_cost = parking_fees_per_day + etolls_per_day + cost_per_gallon_of_gasoline;
    cout<<"Average Miles per Gallon = "<<average_miles_per_gallon<<endl;
    cout<<"Total Driving cost  = "<<daily_driving_cost<<endl;
    cout<<"Per person Driving cost  = "<<(float)(daily_driving_cost/4)<<endl;

    return 0;
}

