#include <iostream>
using namespace std;

class ResturantMeal{
public:
    ResturantMeal() {
        price = 0.0;
        name  = "";
    }

    ResturantMeal(const string &name, float price) : name(name), price(price) {

    }

    const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        ResturantMeal::name = name;
    }

    float getPrice() const {
        return price;
    }

    void setPrice(float price) {
        ResturantMeal::price = price;
    }

    friend ostream &operator<<(ostream &os, const ResturantMeal &meal) {
        os << "name: " << meal.name << " price: " << meal.price;
        return os;
    }

private:
    string name;
    float price;
};

class HotelService{
public:
    HotelService() {
        nameOfService = "";
        serviceFee = 0.0f;
        roomNo = "";
    }

    HotelService(const string &nameOfService, float serviceFee, const string &roomNo) : nameOfService(nameOfService),
                                                                                        serviceFee(serviceFee),
                                                                                        roomNo(roomNo) {

    }

    const string &getNameOfService() const {
        return nameOfService;
    }

    void setNameOfService(const string &nameOfService) {
        HotelService::nameOfService = nameOfService;
    }

    float getServiceFee() const {
        return serviceFee;
    }

    void setServiceFee(float serviceFee) {
        HotelService::serviceFee = serviceFee;
    }

    const string &getRoomNo() const {
        return roomNo;
    }

    void setRoomNo(const string &roomNo) {
        HotelService::roomNo = roomNo;
    }

    friend ostream &operator<<(ostream &os, const HotelService &service) {
        os << "nameOfService: " << service.nameOfService << " serviceFee: " << service.serviceFee << " roomNo: "
           << service.roomNo;
        return os;
    }

private:
    string nameOfService;
    float serviceFee;
    string roomNo;
};
class RoomServiceMeal : public HotelService, public ResturantMeal{
public:
    RoomServiceMeal(const string &nameOfService, float serviceFee, const string &roomNo, const string &name,
                    float price) : HotelService(nameOfService, serviceFee, roomNo), ResturantMeal(name, price) {

    }

    friend ostream &operator<<(ostream &os, const RoomServiceMeal &meal) {
        os << static_cast<const HotelService &>(meal) << ' ' << static_cast<const ResturantMeal &>(meal)
        << " Total Bill = "<<meal.getTotalBill()<<endl;
        return os;
    }
    float getTotalBill() const{
        return getPrice() + getServiceFee();
    }

private:
};
int main() {
    RoomServiceMeal roomServiceMeal("room service",4.00,"room 1202","Steak dinner",19.99);
    cout<<roomServiceMeal;
    return 0;
}
