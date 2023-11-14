#include <iostream>
using namespace std;

class Node{
public:
    Node(){
        data = 0;
        next = NULL;
    }
    Node(int d){
        data = d;
        next = NULL;
    }
    void setData(int d){
        data = d;
    }
    int getData(){
        return   data;
    }
    void setNext(Node* n){
        next = n;
    }
    Node * getNext(){
        return next;
    }
    void display(){
        cout<<data<<"   ";
    }


private:
    int data;
    Node *next;
};

class List{
public:
    List(){
        head = NULL;
        size = 0;
    }
    void insertAtEnd(int d){
        Node * temp = new Node(d);
        if(head == NULL){
            head = temp;
        }
        else{
            Node * n = head;
            while(n->getNext() != NULL) {
                n = n->getNext();
            }
            n->setNext(temp);
        }
        size++;
    }
    void insertAtStart(int d){
        Node * temp = new Node(d);
        if(head == NULL){
            head = temp;
        }
        else{
           temp->setNext(head);
           head = temp;
        }
        size++;
    }
    void insertAtMid(int d){
        int location = size /2;
        Node * temp = new Node(d);
        if(head == NULL){
            head = temp;
        }
        else{
            Node * n = head;
            int i  = 1;
            while(i < location) {
                n = n->getNext();
                i++;
            }
            temp->setNext(n->getNext());
            n->setNext(temp);
        }
        size++;
    }
    void display(){
        Node * n = head;
        while(n != NULL) {
            n->display();
            n = n->getNext();
        }
    }
    void removeAtEnd(){
        Node * curr = head;
        Node * prev  = NULL;
        while(curr->getNext() != NULL) {
          prev = curr;
          curr = curr->getNext();
        }
        prev->setNext(NULL);
        delete curr;
        curr = NULL;
        size--;
    }
    void removeAtStart(){
        Node * curr = head;
        head = curr->getNext();
        curr->setNext(NULL);
        delete curr;
        curr = NULL;
        size--;
    }
    int getSize(){
        return size;
    }
private:
    Node * head;
    int size;
};
int main() {
    /*Node n1(5);
    Node n2(7);
    Node n3(9);
    n1.setNext(&n2);
    n2.setNext(&n3);

    Node * n = &n1;
    while(n != NULL) {
        n->display();
        n = n->getNext();
    }*/
    List list;
    list.insertAtEnd(5);
    list.insertAtEnd(7);
    list.display();
    cout<<endl;
    cout<<"Size = "<<list.getSize()<<endl;
    list.insertAtEnd(9);
    list.insertAtEnd(11);
    list.insertAtStart(3);
    list.display();
    cout<<endl;
    cout<<"Size = "<<list.getSize()<<endl;
    list.insertAtMid(6);
    list.display();
    cout<<endl;
    cout<<"Size = "<<list.getSize()<<endl;
    list.removeAtEnd();
    list.display();
    cout<<endl;
    cout<<"Size = "<<list.getSize()<<endl;
    list.removeAtStart();
    list.display();
    cout<<endl;
    cout<<"Size = "<<list.getSize()<<endl;
    return 0;
}
