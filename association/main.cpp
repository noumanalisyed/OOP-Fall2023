#include <iostream>
#include "person.h"
#include "car.h"
#include "mobile.h"
#include "laptop.h"
using namespace std;

ostream &operator<<(ostream &os, const Car &car) {
    os << "\t\tCar Id: " << car.carId << " regNo: " << car.regNo << " chasis: " << car.chasis << " description: "
       << car.description << " price: " << car.price;
    return os;
}
ostream &operator<<(ostream &os, Mobile &mobile){
    os<<"Mobile Id : "<<mobile.mobileId<<", "
      <<"IMEI : "<<mobile.IMEI
      <<", Model : "<<mobile.model
      <<", Description : "<<mobile.description<<", Price : "<<mobile.price<<endl;
    return os;
}
ostream &operator<<(ostream &os, Laptop &lapy){
    os<<"Laptop Id : "<<lapy.laptopId<<", "
      <<"IMEI : "<<lapy.IMEI
      <<", Model : "<<lapy.model
      <<", Description : "<<lapy.description<<", Price : "<<lapy.price<<endl;
    return os;
}
ostream &operator<<(ostream &os, Person &person) {
    os<<"------------------------------------------------------------------------------------------------------------"<<endl;
    os<<"id: " << person.getId() << "\nname: " + person.getName() << "\naddress: " << person.getAddress() << "\nList of myCar: \n"
    <<"Total No of Cars: "<<person.getSize()<<endl;
    for (int i = 0; i < person.getSize(); ++i) {
        os<<*(person.getMyCar()[i])<<endl;
    }
    cout<<endl<<endl;
    cout<<"Total No of Mobiles: "<<person.getSize()<<endl;
    for (int i = 0; i < person.getSize(); ++i) {
        os<<*(person.getMyMobile()[i])<<endl;
    }
    cout<<endl<<endl;
    cout<<"Total No of Laptops: "<<person.getSize()<<endl;
    for (int i = 0; i < person.getSize(); ++i) {
        os<<*(person.getMyLaptops()[i])<<endl;
    }
    os<<"------------------------------------------------------------------------------------------------------------"<<endl;

    return os;
}

int main() {
    Car carCorolla(100,"ABC-100","AB2336677","Toyota Corolla",287772);
    Car carCity(101,"DEF-200","DE2336699","Honda City",297772);
    Car carCivic(101,"JKL-400","JK24456634","Honda Civic",497772);
    Car carMercedes(102,"GHI-300","GH5555688","Mercedes Benz E200",25000000);
    Car dummyCar;
    Mobile iphone10(10001,"APPLE-10-APL-2019-11000","Iphone 10 S","Iphone 10 S 64GB",100000);
    Mobile samsungA30s(10002,"SAMSNG-A30-SMG-2019-88998","samsung A30 s","samsung A30 s 32GB 3Core",62000);
    Mobile iphone11(10003,"APPLE-11-APL-2021-13299","Iphone 11 S","Iphone 11 S",130000);
    Mobile oppoNew(10005,"OPOO-10-OPO-2022-110099","OPPO 10","OPPO 10 32GB 3core",60000);
    Mobile dummyMobile;

    Laptop hpProBook(10001,"ABC-1000-HP-PRB-99001","840G","HP Probook 840 G3",128000);
    Laptop dellLatitude(10002,"ABC-1000-HP-PRB-99001","300","Dell Latitude 300",150000);
    Laptop macBookPro(10003,"APL-10099-MAC-PRB-77223","Mack Book Pro 2022","Mack Book Pro 2022",250000);
    Laptop macBookAir(10004,"APL-10099-MAC-AIR-92223","Mack Book AIR 2022","Mack Book AIR 2022",200000);
    Laptop dummyLaptop;
  /*  cout<<iphone10<<endl;
    cout<<oppoNew<<endl;*/

    Car multipleObjectList[] = {carCity,carCorolla,carCivic};
    Car singleObjectList[] ={carMercedes};
    Car dummyList[] ={dummyCar};
    Mobile multipleMobileObjectList[] = {iphone10,iphone11,samsungA30s};
    Mobile singleMobileObjectList[] ={oppoNew};
    Mobile dummyMobileList[] ={dummyMobile};

    Laptop multipleLaptopObjectList[] = {hpProBook,dellLatitude,macBookPro};
    Laptop singleLaptopObjectList[] ={macBookAir};
    Laptop dummyLaptopList[] ={dummyLaptop};

    Person ahmad(21100,"Ahmad","Lahore",multipleObjectList,multipleMobileObjectList,multipleLaptopObjectList,3);
    Person zahid(31101,"Zahid","Lahore",NULL,NULL,NULL,0);
    Person shahid(22100,"Shahid","Lahore",singleObjectList,singleMobileObjectList,singleLaptopObjectList,1);
    Person kashif(22101,"Kashif","Lahore",dummyList,dummyMobileList,dummyLaptopList,1);
    cout<<ahmad<<endl;
    cout<<zahid<<endl;
    cout<<shahid<<endl;
    cout<<kashif<<endl;

    return 0;
}
