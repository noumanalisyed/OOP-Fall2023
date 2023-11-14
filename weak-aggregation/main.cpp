#include <iostream>
using namespace std;

class Leaf{
public:
    Leaf(){
        id = 0;
        color = "green";
    }
    Leaf(int i, string c){
        id = i;
        color = c;
        print();
    }
    void print(){
        cout<<"id = "<<id<<", color = "<<color<<endl;
    }
    void setColor(string c){
        color = c;
    }
    string getColor(){
        return color;
    }
    void setId(int i){
        id = i;
    }
    int getId(){
        return id;
    }

private:
    int id;
    string color;
};

class Tree{
public:
        Tree(){
            id = 0;
            name = "";
            age = 0.0;
            height = 0.0;
            width = 0.0;
            noOfLeaves  = 0;
            leafPtr = NULL;
        }
        Tree(int id,string n,float a,float h,float w,int s){
            Tree::id = id;
            Tree::name = n;
            age = a;
            height = h;
            width = w;
            noOfLeaves = s;
            createLeaves();
            print();
        }
        void print(){
            cout<<"No of leaves "<<noOfLeaves<<endl;
            cout<<"id = "<<id<<" , name = "<<name<<" , age = "<<age<<" , height = "<<height<<" , width = "<<width<<endl;
        }
        void setNoOfLeaves(int s){
            noOfLeaves = (s > 0) ? s : 0;
            createLeaves();
        }

private:
    int id;
    string name;
    float age;
    float height;
    float width;
    int noOfLeaves;
    Leaf **leafPtr;

    void createLeaves(){
        leafPtr = nullptr;
        leafPtr = new Leaf *[noOfLeaves];
        for (int i = 0; i < noOfLeaves; ++i) {
            leafPtr[i] = new Leaf(i+100,"Green");
        }
    }
};
int main() {
    Tree tree(1000,"Pine Tree",20,40,5,5);
    tree.setNoOfLeaves(10);
    tree.print();
    tree.setNoOfLeaves(0);
    tree.print();
    tree.setNoOfLeaves(7);
    tree.print();
    return 0;
}
