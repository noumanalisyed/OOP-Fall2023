#include <string> // C++ standard string class
using namespace std;

class Employee
{
public:
    Employee( const string &, const string &, const string & );

    void setFirstName( const string & ); // set first name
    string getFirstName() const; // return first name

    void setLastName( const string & ); // set last name
    string getLastName() const; // return last name

    void setSocialSecurityNumber( const string & ); // set SSN
    string getSocialSecurityNumber() const; // return SSN


    virtual double earnings() const = 0; // pure virtual
    virtual void print() const;

private:
    string firstName;
    string lastName;
    string socialSecurityNumber;
};

#include <iostream>
using namespace std;

// constructor
Employee::Employee( const string &first, const string &last, const string &ssn )
        : firstName( first ), lastName( last ), socialSecurityNumber( ssn )
{

} // end Employee constructor

// set first name
void Employee::setFirstName( const string &first )
{
    firstName = first;
} // end function setFirstName

// return first name
string Employee::getFirstName() const
{
    return firstName;
} // end function getFirstName

// set last name
void Employee::setLastName( const string &last )
{
    lastName = last;
} // end function setLastName

// return last name
string Employee::getLastName() const
{
    return lastName;
} // end function getLastName

// set social security number
void Employee::setSocialSecurityNumber( const string &ssn )
{
    socialSecurityNumber = ssn; // should validate
} // end function setSocialSecurityNumber

// return social security number
string Employee::getSocialSecurityNumber() const
{
    return socialSecurityNumber;
}

void Employee::print() const
{
    cout << getFirstName() << ' ' << getLastName() << "\nsocial security number: " << getSocialSecurityNumber();
} //
//------------------------------------------------------------

class SalariedEmployee : public Employee
{
public:
    SalariedEmployee( const string &, const string &,
                      const string &, double = 0.0 );

    void setWeeklySalary( double ); // set weekly salary
    double getWeeklySalary() const; // return weekly salary

    virtual double earnings() const; // calculate earnings
    virtual void print() const; // print SalariedEmployee object

private:
    double weeklySalary; // salary per week
};

#include <iostream>
using namespace std;

// constructor
SalariedEmployee::SalariedEmployee( const string &first, const string &last, const string &ssn, double salary )
        : Employee( first, last, ssn )
{
    setWeeklySalary( salary );
} // end SalariedEmployee constructor

// set salary
void SalariedEmployee::setWeeklySalary( double salary )
{
    if ( salary >= 0.0 )
        weeklySalary = salary;
    else
        cout<< "Weekly salary must be >= 0.0" ;
} // end function setWeeklySalary

// return salary
double SalariedEmployee::getWeeklySalary() const
{
    return weeklySalary;
} // end function getWeeklySalary

// calculate earnings;
// override pure virtual function earnings in Employee
double SalariedEmployee::earnings() const
{
    return getWeeklySalary();
} // end function earnings

// print SalariedEmployee's information
void SalariedEmployee::print() const
{
    cout << "salaried employee: ";
    Employee::print();
    cout << "\nweekly salary: " << getWeeklySalary();
} //

//----------------------------------------------------------------
class CommissionEmployee : public Employee
{
public:
    CommissionEmployee( const string &, const string &, const string &, double = 0.0, double = 0.0 );

    void setCommissionRate( double ); // set commission rate
    double getCommissionRate() const; // return commission rate

    void setGrossSales( double ); // set gross sales amount
    double getGrossSales() const; // return gross sales amount

    virtual double earnings() const; // calculate earnings
    virtual void print() const;

private:
    double grossSales; // gross weekly sales
    double commissionRate; // commission percentage
};

#include <iostream>
using namespace std;

// constructor
CommissionEmployee::CommissionEmployee( const string &first, const string &last, const string &ssn, double sales, double rate )
        : Employee( first, last, ssn )
{
    setGrossSales( sales );
    setCommissionRate( rate );
} // end CommissionEmployee constructor

// set gross sales amount
void CommissionEmployee::setGrossSales( double sales )
{
    if ( sales >= 0.0 )
        grossSales = sales;
    else
        cout<< "Gross sales must be >= 0.0" ;
} // end function setGrossSales

// return gross sales amount
double CommissionEmployee::getGrossSales() const
{
    return grossSales;
} // end function getGrossSales

// set commission rate
void CommissionEmployee::setCommissionRate( double rate )
{
    if ( rate > 0.0 && rate < 1.0 )
        commissionRate = rate;
    else
        cout<< "Commission rate must be > 0.0 and < 1.0" ;
} // end function setCommissionRate

// return commission rate
double CommissionEmployee::getCommissionRate() const
{
    return commissionRate;
} // end function getCommissionRate

// calculate earnings; override pure virtual function earnings in Employee
double CommissionEmployee::earnings() const
{
    return getCommissionRate() * getGrossSales();
} // end function earnings

// print CommissionEmployee's information
void CommissionEmployee::print() const
{
    cout << "commission employee: ";
    Employee::print(); // code reuse
    cout << "\ngross sales: " << getGrossSales() << "; commission rate: " << getCommissionRate();
} // end function print
//------------------------------------------

class BasePlusCommissionEmployee : public CommissionEmployee
{
public:
    BasePlusCommissionEmployee( const string &, const string &, const string &, double = 0.0, double = 0.0, double = 0.0 );

    void setBaseSalary( double ); // set base salary
    double getBaseSalary() const; // return base salary

    virtual double earnings() const; // calculate earnings
    virtual void print() const;

private:
    double baseSalary; // base salary per week
};

#include <iostream>
using namespace std;

// constructor
BasePlusCommissionEmployee::BasePlusCommissionEmployee(const string &first, const string &last, const string &ssn, double sales, double rate, double salary )
        : CommissionEmployee( first, last, ssn, sales, rate )
{
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
} // end function getBaseSalary

// calculate earnings;
// override virtual function earnings in CommissionEmployee
double BasePlusCommissionEmployee::earnings() const
{
    return getBaseSalary()+ CommissionEmployee::earnings();
} // end function earnings

// print BasePlusCommissionEmployee's information
void BasePlusCommissionEmployee::print() const
{
    cout << "base-salaried ";
    CommissionEmployee::print(); // code reuse
    cout << "; base salary: " << getBaseSalary();
} // end function print

#include <iostream>
#include <iomanip>
#include <vector>
#include <conio.h>
using namespace std;

void virtualViaPointer(const Employee * const ); // prototype
void virtualViaReference(const Employee & ); // prototype

int main()
{
    // set floating-point output formatting
    cout << fixed << setprecision( 2 );

    // create derived-class objects
    SalariedEmployee salariedEmployee("John", "Smith", "111-11-1111", 800 );
    CommissionEmployee commissionEmployee("Sue", "Jones", "333-33-3333", 10000, .06 );
    BasePlusCommissionEmployee basePlusCommissionEmployee("Bob", "Lewis", "444-44-4444", 5000, .04, 300 );

    cout << "Employees processed individually using static binding:\n\n";

    // output each Employee’s information and earnings using static binding
    salariedEmployee.print();
    cout << "\nearned $" << salariedEmployee.earnings() << "\n\n";
    commissionEmployee.print();
    cout << "\nearned $" << commissionEmployee.earnings() << "\n\n";
    basePlusCommissionEmployee.print();
    cout << "\nearned $" << basePlusCommissionEmployee.earnings() << "\n\n";

    // create vector of three base-class pointers
    const int size = 3;
    Employee *employees[size];

    // initialize vector with Employees
    employees[ 0 ] = &salariedEmployee;
    employees[ 1 ] = &commissionEmployee;
    employees[ 2 ] = &basePlusCommissionEmployee;

    cout << "Employees processed polymorphically via dynamic binding:\n\n";

    // call virtualViaPointer to print each Employee's information
    // and earnings using dynamic binding
    cout << "Virtual function calls made off base-class pointers:\n\n";

    /*  Employee * baseClassPtr;
      for(int i=0; i<3; i++)
      {
          baseClassPtr = employees[i];
          baseClassPtr->print();
          cout<<"\nEarning = "<<baseClassPtr->earnings()<<endl<<endl;
      }
  */
    for ( int i = 0; i < size; ++i )
        virtualViaPointer( employees[ i ] );

    // call virtualViaReference to print each Employee's information
    // and earnings using dynamic binding
   /* cout << "Virtual function calls made off base-class references:\n\n";
    for ( int i = 0; i < size; ++i )
        virtualViaReference( *employees[ i ] ); // note dereferencing
*/
    getch();
    return 0;
}

void virtualViaPointer( const Employee * const baseClassPtr )
{
    baseClassPtr->print();
    cout << "\nearned $" << baseClassPtr->earnings() << "\n\n";
} // end function virtualViaPointer

// call Employee virtual functions print and earnings off a
// base-class reference using dynamic binding
void virtualViaReference( const Employee &baseClassRef )
{
    baseClassRef.print();
    cout << "\nearned $" << baseClassRef.earnings() << "\n\n";
} // end function virtualViaReference

