#include <iostream>

using namespace std;

class Object{
public:
        Object(){
            x = 0;
            y = 0;
            cout<<"Object -- Default Constructor called "<<endl;
            print();
        }
        Object(int a,int b){
            x = a;
            y = b;
            cout<<"Object -- Overloaded Constructor called "<<endl;
            print();
        }
        void print(){
            cout<<"x = "<<x<<endl;
            cout<<"y = "<<y<<endl;
            cout<<endl;
        }

    int getX() const {
        return x;
    }

    void setX(int a) {
        x = a;
    }

    int getY() {
        return y;
    }

    void setY(int b) {
        y = b;
    }

private:
    int x,y;

};

int main() {
    int data[3][2] = {{2,3},{4,5},{6,7}};
    Object *object[3];
    int x,y;
    for (int i = 0; i < 3; ++i) {
        /*cout<<"Enter the Value of X ";
        cin>>x;
        object[i].setX(x);
        cout<<"Enter the Value of Y ";
        cin>>y;
        object[i].setY(y);*/
        object[i] = new Object(data[i][0],data[i][1]);
    }
    for (int i = 0; i < 3; ++i) {
        object[i]->print();
        cout<<endl;
    }

    return 0;
}
