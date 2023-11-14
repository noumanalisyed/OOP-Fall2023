#include <iostream>
#include "BinaryTree.h"
#include<cstdlib>
#include "BinaryTree.cpp"
using namespace std;

int main()
{
    BinaryTree<int> bst;

    char command;
    int orderId, customerId;
    float totalPrice;
    srand(time(NULL));

    do {
        cout << "Enter the command for testing:" << endl;
        cout << "1. Add customer order by order ID in BST" << endl;
        cout << "2. Print all customer orders" << endl;
        cout << "3. Search by order ID" << endl;
        cout << "4. Search by customer ID" << endl;
        cout << "5. Remove customer order by order ID from BST" << endl;
        cout << "6. Find revenue" << endl;
        cout << "7. Exit the test program" << endl;
        cin >> command;

        switch (command) {
        case '1': {
            int size;
            cout << "Enter the size of the BinaryTree : ";
            cin >> size;
            for (int i = 0; i < size; i++)
            {
                cout << "Enter the total price: ";
                cin >> orderId;
                bst.insertNode(orderId);
            }
            break;
        }
        case '2': {
            bst.print_in();
            cout << endl;
            break;
        }
        case '3': {
            cout << "Enter the order ID to search: ";
            cin >> orderId;
            Node<int>* result = bst.SearchbyOrderId(orderId);
            if (result != NULL)
                cout << "Order found!" << endl;
            else
                cout << "Order not found!" << endl;
            break;
        }
        case '4': {
            cout << "Enter the customer ID to search: ";
            cin >> customerId;
            Node<int>* result = bst.SearchbyCustomerId(customerId);
            if (result != NULL)
                cout << "Customer found!" << endl;
            else
                cout << "Customer not found!" << endl;
            break;
        }
        case '5': {
            cout << "Enter the order ID to remove: ";
            cin >> orderId;
            bst.RemovebyOrderId(orderId);
            break;
        }
        case '6': {
            cout << "Calculated revenue : ";
            bst.findRevenue();
            break;
        }
        case '7': {
            cout << "Quit" << endl;
            break;
        }
        default: {
            cout << "Invalid command!" << endl;
            break;
        }
        }
    } while (command != '7');

    return 0;
}
