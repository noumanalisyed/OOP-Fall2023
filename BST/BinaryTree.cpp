#include <iostream>
#include "BinaryTree.h"
#include "Node.h"
using namespace std;

template<class elemType>
BinaryTree<elemType>::BinaryTree()
{
    root = NULL;
}
template<class elemType>
bool BinaryTree<elemType>::isEmpty()
{
    if (root == NULL)
        return true;
    else
        return false;
}
template<class elemType>
void BinaryTree<elemType>::inOrder(Node<elemType>* d)
{
    if (d != NULL)
    {
        inOrder(d->getLeft());
        cout << "Order Id : " << d->getOrderId() << endl;
        cout << "Customer Id : " << d->getCustomerId() << endl;
        cout << "TotalPrice : " << d->getTotalPrice() << endl;
        inOrder(d->getRight());
    }
}
template<class elemType>
Node<elemType>* BinaryTree<elemType>::SearchbyOrderId(int oi)
{
    Node<elemType>* current = root;
    Node<elemType>* previous = NULL;
    bool flag = false;
    while (current != NULL)
    {
        if (current->getOrderId() == oi)
        {
            flag = true;
            break;
        }
        else if (current->getOrderId() > oi)
        {
            previous = current;
            current = current->getLeft();
        }
        else
        {
            previous = current;
            current = current->getRight();
        }
    }
    if (flag)
        return current;
    else
        return NULL;
}
template<class elemType>
Node<elemType>* BinaryTree<elemType>::SearchbyCustomerId(int cId)
{
    Node<elemType>* current = root;
    Node<elemType>* previous = current;
    bool flag = true;
    while (current != NULL)
    {
        if (current->getCustomerId() == cId)
        {
            flag = true;
            break;
        }
        else if (current->getCustomerId() > cId)
        {
            previous = current;
            current = current->getLeft();
        }
        else
        {
            previous = current;
            current = current->getRight();
        }
    }
    if (flag)
        return current;
    else
        return NULL;
}
template<class elemType>
Node<elemType>* BinaryTree<elemType>::Searchbyorderid1(int d)
{
    Node<elemType>* current = root;
    Node<elemType>* previous = current;
    bool flag = false;
    while (current != NULL)
    {
        if (current->getOrderId() == d)
        {
            flag = true;
            break;
        }
        else if (current->getOrderId() > d)
        {
            previous = current;
            current = current->getLeft();
        }
        else
        {
            previous = current;
            current = current->getRight();
        }
    }
    if (flag)
        return previous;
    else
        return NULL;
}
template<class elemType>
void BinaryTree<elemType>::RemovebyOrderId(int oi)
{
    Node<elemType>* current = root;
    Node<elemType>* previous = current;
    while (current != NULL)
    {
        if (current->getOrderId() == oi)
            break;
        else if (current->getOrderId() > oi)
        {
            previous = current;
            current = current->getLeft();
        }
        else
        {
            previous = current;
            current = current->getRight();
        }
    }
    // current is a leaf node
    if (current->isLeafNode())
    {
        if (previous->getLeft() == current)
        {
            previous->setLeft(NULL);
        }
        else if (previous->getRight() == current)
        {
            previous->setRight(NULL);
        }
        delete current;
    }
    // current has one left child
    else if (current->isInternalwithOneLeftChild())
    {
        if (previous->getLeft() == current)
        {
            previous->setLeft(current->getLeft());
        }
        else if (previous->getRight() == current)
        {
            previous->setRight(current->getLeft());
        }
        delete current;
    }
    // current has one right child
    else if (current->isInternalwithOneRightChild())
    {
        if (previous->getLeft() == current)
        {
            previous->setLeft(current->getRight());
        }
        else if (previous->getRight() == current)
        {
            previous->setRight(current->getRight());
        }
        delete current;
    }
    // both children exist
    else if (current->isInternalwithTwoChildren())
    {
        previous = current;
        current = current->getLeft();
        Node<elemType>* m = Maximum(current);
        Swap(previous, m);

        while (current != m)
        {
            previous = current;
            current = current->getRight();
        }

        if (current->isLeafNode())
        {
            if (previous->getLeft() == current)
            {
                previous->setLeft(NULL);
            }
            else if (previous->getRight() == current)
            {
                previous->setRight(NULL);
            }
            delete current;
        }
        else if (current->isInternalwithOneLeftChild())
        {
            if (previous->getLeft() == current)
            {
                previous->setLeft(current->getLeft());
            }
            else if (previous->getRight() == current)
            {
                previous->setRight(current->getLeft());
            }
            delete current;
        }
        else if (current->isInternalwithOneRightChild())
        {
            if (previous->getLeft() == current)
            {
                previous->setLeft(current->getRight());
            }
            else if (previous->getRight() == current)
            {
                previous->setRight(current->getRight());
            }
            delete current;
        }
    }
}
template<class elemType>
Node<elemType>* BinaryTree<elemType>::Maximum(Node<elemType>* d)
{
    Node<elemType>* current = d;
    while (current->getOrderId() != NULL)
    {
        current = current->getRight();
    }
    return current;
}
template<class elemType>
void BinaryTree<elemType>::preOrderCustomerId(Node<elemType>* d, int cId)
{
    Node<elemType>* current = root;
    if (d != NULL)
    {
        if (current->getCustomerId != cId)
        {
            cout << "Order Id : " << d->getOrderId() << endl;
            cout << "Customer Id : " << d->getCustomerId() << endl;
            cout << "TotalPrice : " << d->getTotalPrice() << endl;
            preOrderCustomerId(d->getLeft());
            preOrderCustomerId(d->getRight());
        }
    }
}
template<class elemType>
float BinaryTree<elemType>::findRevenue()
{
    return calculateSum(root);
}
template<class elemType>
float BinaryTree<elemType>::calculateSum(Node<elemType>* d)
{
    float rev = d->getTotalPrice();
    rev = rev + calculateSum(d->getLeft());
    rev = rev + calculateSum(d->getRight());

    return rev;
}
template<class elemType>
void BinaryTree<elemType>::Swap(Node<elemType>* x, Node<elemType>* y)
{
    elemType z = x->getOrderId();
    x->setOrderId(y->getOrderId());
    y->setOrderId(z);
}

template<class elemType>
void BinaryTree<elemType>::insertNode(float tp)
{
    Node<elemType>* temp = new Node<elemType>(tp);
    Node<elemType>* current = root;
    Node<elemType>* previous = current;
    if (root == NULL)
    {
        root = temp;
        return;
    }
    else
    {
        while (current != NULL)
        {
            previous = current;
            if (tp < current->getOrderId())
                current = current->getLeft();
            else
                current = current->getRight();
        }

        if (tp < previous->getOrderId())
            previous->setLeft(temp);
        else
            previous->setRight(temp);
    }
}
template<class elemType>
void BinaryTree<elemType>::print_in()
{
    cout << "In-order traversal : " << endl;
    inOrder(root);
    cout << endl;
}

template<class elemType>
void BinaryTree<elemType>::Visit(Node<elemType>* d)
{
    inOrder(root);
}
template<class elemType>
BinaryTree<elemType>::~BinaryTree()
{
    distroyTree(root);
}
template<class elemType>
void BinaryTree<elemType>::distroyTree(Node<elemType>* d)
{
    if (d != NULL)
    {
        distroyTree(d->getLeft());
        distroyTree(d->getRight());
        delete d;
    }
    root = NULL;
}