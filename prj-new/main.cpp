#include <iostream>

using namespace std;

class Circle{
public:
    Circle(){       //default constructor
        radius = 0;
    }
    Circle(double r){       //Overloaded constructor
        radius = r;
    }

    void draw(){
        cout<<"radius = "<<radius<<endl;
        cout<<"Circle -- Draw called"<<endl;
    }

private:
    double radius;

};
int main() {
    int x;
    Circle c(10.5);
    Circle c1;

    c.draw();
    cout<<endl<<endl;
    c1.draw();
    return 0;
}
