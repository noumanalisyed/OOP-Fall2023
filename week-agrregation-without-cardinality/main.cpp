#include <iostream>
using namespace std;

class Hand{
public:
    Hand(){
        id = 0;
        print();
    }
    Hand(int id,string type){
        Hand::id = id;
        Hand::type = type;
        print();
    }
    void print(){
        cout<<"Type = "<<type<<"Hand -- Id = "<<id<<endl;
    }
    void setId(int i){
        id = i;
    }
    int getId(){
        return id;
    }
    void setType(string type){
        Hand::type = type;
    }
    string getType(){
        return type;
    }
private:
    string type;
    int id;
};
class Arm{

public:
    Arm():hand(new Hand()){
        Arm::id = 0;
        print();
    }
    Arm(int id,string type,int handId):hand(new Hand(handId,type)){
        Arm::id = id;
        Arm::type = type;
        print();
    }
    void print(){
        cout<<"Arm -- Id = "<<id<<" , Arm -- type = "<<type<<endl;
        cout<<"This is Weak Aggregation and without cardinality example "<<endl;
    }
private:
    int id;
    string type;
    Hand * hand;
};
int main() {
    Arm arm1;
    Arm arm2(10,"left",1);
    return 0;
}
