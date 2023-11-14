
#include <string> // C++ standard string class
#include<iostream>
using namespace std;
class Employee
{
    public:
        Employee( const string &, const string &, const string &);
        void setFirstName( const string & ); // set first name
        string getFirstName() const; // return first name
        void setLastName( const string & ); // set last name
        string getLastName() const; // return last name

        void setSocialSecurityNumber( const string & ); // set SSN
        string getSocialSecurityNumber() const; // return SSN
        void print() const;
        ~Employee()
        {
                cout<<"Employee -- Destructor Called ... "<<endl;
        }
    private:
        string firstName;
        string lastName;
        string socialSecurityNumber;

};

#include <iostream>
using namespace std;
Employee::Employee(const string &first, const string &last, const string &ssn)
{
        cout<<"Employee -- Constructor Called ... "<<endl;
        firstName = first; // should validate
        lastName = last; // should validate
        socialSecurityNumber = ssn; // should validate
}
void Employee::setFirstName( const string &first )
{
    firstName = first; // should validate
} //
string Employee::getFirstName() const
{
    return firstName;
}
void Employee::setLastName( const string &last )
{
    lastName = last; // should validate
}
string Employee::getLastName() const
{
    return lastName;
} //
void Employee::setSocialSecurityNumber( const string &ssn )
{
    socialSecurityNumber = ssn; // should validate
}
string Employee::getSocialSecurityNumber() const
{
    return socialSecurityNumber;
} // end function getSocialSecurityNumber
void Employee::print() const
{
    cout << "employee: " << firstName << ' ' << lastName
         << "\nsocial security number: " << socialSecurityNumber;
}
//-------------------------------------------------------------------
class CommissionEmployee : public Employee
 {
    public:
        CommissionEmployee( const string &, const string &, const string &,
        double = 0.0, double = 0.0 );

        void setGrossSales( double ); // set gross sales amount
        double getGrossSales() const; // return gross sales amount
        void setCommissionRate( double ); // set commission rate (percentage)
        double getCommissionRate() const; // return commission rate

        double earnings() const; // calculate earnings
        void print() const; // print CommissionEmployee object
        ~CommissionEmployee()
        {
                cout<<"CommissionEmployee -- Destructor Called ... "<<endl;
        }
 private:
        double grossSales; // gross weekly sales
        double commissionRate;
};

CommissionEmployee::CommissionEmployee(
 		const string &first, const string &last, const string &ssn,
 				double sales, double rate):Employee(first,last,ssn)
	{
            cout<<"CommissionEmployee -- Constructor Called ... "<<endl;
            setGrossSales(sales);
            setCommissionRate(rate);
 	}

 // set gross sales amount
void CommissionEmployee::setGrossSales( double sales )
{
 if ( sales >= 0.0 )
    grossSales = sales;
 else
    grossSales = 0.0;
} // end function setGrossSales

// return gross sales amount
double CommissionEmployee::getGrossSales() const
{
    return grossSales;
}
void CommissionEmployee::setCommissionRate( double rate )
{
    if ( rate > 0.0 && rate < 1.0 )
        commissionRate = rate;
    else
        commissionRate = 0.1;
} // end function setCommissionRate
// return commission rate
double CommissionEmployee::getCommissionRate() const
{
    return commissionRate;
}
double CommissionEmployee::earnings() const
{
    return commissionRate * grossSales;
} // end function earnings
// print CommissionEmployee object
void CommissionEmployee::print() const
{
        Employee::print();
        cout<< "\ngross sales: " << grossSales
        << "\ncommission rate: " << commissionRate;
}

//--------------------------------------------------------

#include <string> // C++ standard string class
 using namespace std;

 class BasePlusCommissionEmployee : public CommissionEmployee
 {
 	public:
 			BasePlusCommissionEmployee( const string &, const string &,
 								const string &, double = 0.0, double = 0.0, double = 0.0 );

			void setBaseSalary( double ); // set base salary
			double getBaseSalary() const; // return base salary

			double earnings() const; // calculate earnings
 			void print() const; // print BasePlusCommissionEmployee object
            ~BasePlusCommissionEmployee()
            {
                cout<<"BasePlusCommissionEmployee -- Destructor Called ... "<<endl;
            }
 	private:
 		double baseSalary; // base salary
 }; // end class BasePlusCommissionEmployee

#include <iostream>
using namespace std;

// constructor
 BasePlusCommissionEmployee::BasePlusCommissionEmployee(
 		const string &first, const string &last, const string &ssn,
 				double sales, double rate, double salary):CommissionEmployee(first,last,ssn,sales,rate)
	{
	     cout<<"BasePlusCommissionEmployee -- Constructor Called ... "<<endl;
			setBaseSalary( salary ); // validate and store base salary
 	} // end BasePlusCommissionEmployee constructor
 // set base salary
void BasePlusCommissionEmployee::setBaseSalary( double salary )
{
    if ( salary >= 0.0 )
        baseSalary = salary;
    else
        cout<< "Salary must be >= 0.0" ;
} // end function setBaseSalary
 // return base salary
double BasePlusCommissionEmployee::getBaseSalary() const
{
    return baseSalary;
    // end function getBaseSalary
    // calculate earnings
}
double BasePlusCommissionEmployee::earnings() const
{
    return baseSalary + CommissionEmployee::earnings();
} // end function earnings
    // print BasePlusCommissionEmployee object
void BasePlusCommissionEmployee::print() const
{
    CommissionEmployee::print();
    cout<< "\nbase salary: " << baseSalary;
} // end function print

    #include <iostream>
    #include <iomanip>
    #include <conio.h>
    using namespace std;
    int main()
	{   // instantiate BasePlusCommissionEmployee object
	    {
	        BasePlusCommissionEmployee employee( "Bob", "Lewis", "333-33-3333", 5000, .04, 300 );
            // set floating-point output formatting
            cout << fixed << setprecision( 2 );
            // get commission employee data
            cout << "Employee information obtained by get functions: \n"
    		<< "\nFirst name is " << employee.getFirstName()
    		<< "\nLast name is " << employee.getLastName()
    		<< "\nSocial security number is "
    		<< employee.getSocialSecurityNumber()
    		<< "\nGross sales is " << employee.getGrossSales()
    		<< "\nCommission rate is " << employee.getCommissionRate()
    		<< "\nBase salary is " << employee.getBaseSalary() << endl;
    		cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;
            employee.setBaseSalary( 1000 ); // set base salary
            cout << "\nUpdated employee information output by print function: \n"
            << endl;
            employee.print(); // display the new employee information
    	// display the employee's earnings
            cout << "\n\nEmployee's earnings: $" << employee.earnings() << endl;
	    }
		getch();
		return 0;
} // end main
