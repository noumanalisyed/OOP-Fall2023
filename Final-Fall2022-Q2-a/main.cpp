#include <iostream>
#include <iomanip>

using namespace std;
class RealtorCommission {
public:
    RealtorCommission(double sp, double cr){
        salePrice = sp;
        salesCommisionRate = cr;
        commission = salesCommisionRate * sp;
    }
    RealtorCommission(double cr){
        salesCommisionRate = cr / 100;
        salePrice = 0.0;
        commission = salesCommisionRate * salePrice;
    }

    double getSalePrice() const {
        return salePrice;
    }

    void setSalePrice(double salePrice) {
        RealtorCommission::salePrice = salePrice;
    }

    double getSalesCommisionRate() const {
        return salesCommisionRate;
    }

    void setSalesCommisionRate(double salesCommisionRate) {
        RealtorCommission::salesCommisionRate = salesCommisionRate;
    }

    double getCommission() const {
        return commission;
    }

    void setCommission(double commission) {
        RealtorCommission::commission = commission;
    }

    string toString() const {

        string message = "salePrice: " + to_string(salePrice) +
                         ", Commision Rate: " + to_string(salesCommisionRate) +
                         ", commission: " + to_string(commission);
        return message;
    }
    friend ostream &operator<<(ostream &os, const RealtorCommission &commission) {
        os <<commission.toString();
        return os;
    }

private:
    double salePrice;
    double salesCommisionRate;
    double commission;
};
int main() {
    RealtorCommission realtorCommission(200000,0.6);
    RealtorCommission realtorCommission1(6);
    cout<<realtorCommission<<endl;
    cout<<realtorCommission1<<endl;
    return 0;
}
