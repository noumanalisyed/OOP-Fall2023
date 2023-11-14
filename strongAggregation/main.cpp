#include <iostream>
using namespace std;
class Brain{
public:
        Brain(){
            message = "I am a Brain, I think most of the time ";
            print();
        }
        Brain(string str){
            message = str;
            print();
        }
        void print(){
            cout<<message<<endl;
        }
        void setMessage(string str){
            message = str;
        }
        string getMessage(){
            return message;
        }

private:
    string message;
};

class Heart{
public:
    Heart(){
        message = "I am a Heart, I have chambers, I have to pump blood!! ";
        print();
    }
    Heart(string str){
        message = str;
        print();
    }
    void print(){
        cout<<message<<endl;
    }
    void setMessage(string str){
        message = str;
    }
    string getMessage(){
        return message;
    }

private:
    string message;
};

class Person{
public:
    Person():brain(),heart(){
        id = 0;
        name = "";
        cout<<"Id = "<<id<<" , name = "<<name<<endl;
    }
    Person(string m1,string m2):brain(m1),heart(m2){
        id = 0;
        name = "";
        cout<<"Id = "<<id<<" , name = "<<name<<endl;
    }
    Person(int i,string n,string m1,string m2):brain(m1),heart(m2){
        id = i;
        name = n;
        cout<<"Id = "<<id<<" , name = "<<name<<endl;
    }

    void print(){
        cout<<"Id = "<<id<<" , name = "<<name<<endl;
        brain.print();
        heart.print();
    }
private:
    int id;
    string name;
    Heart heart;
    Brain brain;
};
int main() {
  /*  Heart heart;
    heart.print();
    Brain brain;
    brain.print();*/
    Person person1;
    cout<<endl<<endl;
    Person person2("For Brain","For Heart");
    cout<<endl<<endl;
    Person person3(100,"Kashif","For Brain","For Heart");
    //person.print();
    return 0;
}
