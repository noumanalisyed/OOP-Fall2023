#include <iostream>
using namespace std;
class Shape{
public:
    Shape(int v = 10,int x=5){
        cout<<"Shape -- Default Constructor "<<endl;
        value = v;
        x = x;
    }
    void display(){
        cout<<"Shape -- Display() "<<endl;
        cout<<"Value = "<<value<<endl;
        cout<<"X = "<<x<<endl;
    }
protected:
    int value;
private:
    int x;
};
class Circle : public Shape{
public:
        Circle(int v,int x,int r):Shape(v,x){
            radius = r;
            cout<<"Circle -- Default Constructor "<<endl;
        }
    void display(){
        cout<<"Circle -- Display() "<<endl;
        cout<<"Radius = "<<radius<<endl;
        Shape::display();
    }
protected:

private:
    int radius;
};
class Client{
public:
        Client(int d=0){
            data = d;
            s = NULL;
            cout<<"Client -- Default Constructor "<<endl;
        }
        void display(){
            cout<<"Client -- Display() "<<endl;
            if( s != NULL)
                s->display();
        }
private:
    int data;
    Shape *s;
};
int main() {
    Client client(99);
    Circle circle(10,15,7);
    client.display();
    circle.display();
    return 0;
}