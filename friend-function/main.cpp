#include <iostream>
using namespace std;

class Account{
    friend void setBalance(Account& account, float balance);
public:
    Account(){
        accNo ="0000-00000-00";
        name = "dummy1 dumm2";
        balance = 0;
    }
    Account(string accNo, string name, float balance){
        Account::accNo = accNo;
        Account::name = name;
        Account::balance = (balance >= 0) ? balance : 0;
    }

    const string &getAccNo() const {
        return accNo;
    }

    void setAccNo(const string &accNo) {
        Account::accNo = accNo;
    }

    const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        Account::name = name;
    }

    float getBalance() const {
        return balance;
    }

    void setBalance(float balance) {
        Account::balance = balance;
    }

    void print(){
        cout<<"Account No : "<<accNo<<endl
            <<"Name : "<<name<<endl
            <<"Balance : "<<balance<<endl;
    }
private:
    string accNo;
    string name;
    float balance;
// All Members
};
//Friend function

void setBalance(Account &account, float balance){
    account.balance = balance;
}

// Non Member Function
int main() {
    Account account1("10000-232233-8987","Ahmad Ali", 10000);
    account1.print();
    setBalance(account1, 15000);
    account1.print();

    return 0;
}
