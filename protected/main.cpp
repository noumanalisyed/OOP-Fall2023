#include <iostream>
using namespace  std;
class Account{
public:
    Account();
    Account(double b);
    void credit(int amount);
    void debit(int amount);
    double getBalance();
    void setBalance(double b);
    void print();
protected:

private:
    double balance;

};

//----------------------------------------------------------------------------------------------------------------------
Account::Account(){
    balance = 0.0;
}
Account::Account(double b){
    setBalance(b);
}
void Account::credit(int amount){
    if( amount >= 0 ){
        balance += amount;
        cout << "Credited Amount : " << amount << endl;
    }else{
        cout<<"Amount is Negative "<<endl;
    }
}
void Account::debit(int amount){
    if( amount >= 0 && amount <= balance ){
        balance -= amount;
        cout << "Debited Amount : " << amount << endl;
    }else{
        cout<<"Amount is Negative or Amount is Exceeded from the current balance "<<endl;
    }
}
double Account::getBalance(){
    return balance;
}
void Account::setBalance(double b){
    if(b >= 0){
        balance = b;

    } else {
        balance = 0;
        cout<<"Initial Balance was Invalid !!! set to Zero"<<endl;
    }
}
void Account::print(){
    cout<<"Balance is : "<<balance<<endl;
}
//----------------------------------------------------------------------------------------------------------------------

class SavingAccount : public Account{

public:
    SavingAccount();
    SavingAccount(double b,double ir);
    double calculateInterest();
    void print();
protected:

private:
    double interestRate;

};

//----------------------------------------------------------------------------------------------------------------------
SavingAccount::SavingAccount():Account(){
    interestRate = 0.0;
}
SavingAccount::SavingAccount(double b,double ir):Account(b){
    if(ir>= 0.0  && ir <= 1.0)
        interestRate = ir;
    else
        interestRate = 0.0;
}
double SavingAccount::calculateInterest(){
    double val = getBalance() * interestRate;
    setBalance(getBalance() + val);
    return val;
}
void SavingAccount::print() {
    Account::print();
    cout<<"Interest Rate : "<<interestRate<<endl;
    cout<<"Interest Value : "<<calculateInterest()<<endl;
    cout<<"Balance : "<<getBalance()<<endl;
}
//----------------------------------------------------------------------------------------------------------------------
class CheckingAccount : public Account{

public:
    CheckingAccount();
    CheckingAccount(double b,double f);
    void print();
    void credit(int amount);
    void debit(int amount);
protected:

private:
    double fee;

};

//----------------------------------------------------------------------------------------------------------------------
CheckingAccount::CheckingAccount():Account() {
    fee = 0.0;
}
CheckingAccount::CheckingAccount(double b,double f):Account(b){
    if(f >= 0)
        fee = f;
    else
        fee = 0.0;
}
void CheckingAccount::print(){
    Account::print();
    cout<<"Transaction Fee : "<<fee<<endl;
    cout<<"Balance : "<<getBalance()<<endl;
}
void CheckingAccount::credit(int amount){
    if(amount >= 0 ) {
        setBalance(getBalance() + amount - fee);
        cout << "Credited Amount : " << amount << endl;
    }
    else{
        cout<<"Amount Invalid cant Credit "<<endl;
    }
}
void CheckingAccount::debit(int amount){
    if(amount >= 0 && (amount + fee) <= (getBalance())) {
        setBalance(getBalance() - amount - fee);
        cout << "Debited Amount : " << amount << endl;
    }
    else{
        cout<<"Amount Invalid cant Debit "<<endl;
    }
}
//----------------------------------------------------------------------------------------------------------------------
int main() {

    SavingAccount savingAccount(10000,0.08);
    savingAccount.print();
    savingAccount.credit(5000);
    savingAccount.print();
    savingAccount.debit(2000);
    savingAccount.print();
    cout<<endl<<endl;
    CheckingAccount checkingAccount(10000,100);
    checkingAccount.print();
    checkingAccount.credit(5000);
    checkingAccount.print();
    checkingAccount.debit(2000);
    checkingAccount.print();
    return 0;
}
