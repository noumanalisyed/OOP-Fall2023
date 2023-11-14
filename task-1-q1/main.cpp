#include <iostream>
using namespace std;
class SavingAccount{
public:
    SavingAccount(double savingBalance);

    static double getAnnualInterestRate();

    static void setAnnualInterestRate(double annualInterestRate);

    double getSavingBalance();

    void setSavingBalance(double savingBalance);

    double calculateMonthlyInterest();

    void display();
private:
    static double annualInterestRate;
    double savingBalance;
};
double SavingAccount::annualInterestRate = 3;

SavingAccount::SavingAccount(double sb)  {
     savingBalance = sb;
}

double SavingAccount::getAnnualInterestRate() {
    return annualInterestRate;
}

void SavingAccount::setAnnualInterestRate(double air) {
    annualInterestRate = air;
}

double SavingAccount::getSavingBalance(){
    return savingBalance;
}

void SavingAccount::setSavingBalance(double sb) {
    savingBalance = sb;
}
double SavingAccount::calculateMonthlyInterest(){
    double monthlyInterest = savingBalance * annualInterestRate / 100;
    savingBalance += monthlyInterest;
    return monthlyInterest;
}
void SavingAccount::display(){
    cout<<"Account Balance "<<savingBalance<<endl
        <<"Interest Rate "<<annualInterestRate<<endl
        <<"Monthly Interest : "<<calculateMonthlyInterest()<<endl
        <<"Update Account Balance : "<<savingBalance<<endl;
}
int main() {
    SavingAccount saver1(10000), saver2(500000);
    saver1.display();
    saver2.display();
    return 0;
}
