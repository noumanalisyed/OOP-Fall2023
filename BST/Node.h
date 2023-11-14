#pragma once
#include <iostream>
using namespace std;
#ifndef Node_H
#define Node_H

template<class elemType>
class Node {
private:
    Node<elemType>* left;
    Node<elemType>* right;
    Node<elemType>* parent;
    static int count;
    int customerId;
    int orderId;
    float totalPrice;

public:
    Node(elemType tp);
    void setLeft(Node<elemType>* n);
    void setRight(Node<elemType>* n);
    void setParent(Node<elemType>* n);
    void setCustomerId(int cId);
    void setOrderId(int oi);
    void setTotalPrice(float tp);
    Node<elemType>* getRight();
    Node<elemType>* getLeft();
    Node<elemType>* getParent();
    int getCustomerId();
    int getOrderId();
    float getTotalPrice();
    bool isLeafNode();
    bool isRightChild();
    bool isLeftChild();
    bool isInternalOneChild();
    bool isInternalwithOneLeftChild();
    bool isInternalwithOneRightChild();
    bool isInternalwithTwoChildren();
};

template<class elemType>
int Node<elemType> :: count = 0;

template<class elemType>
Node<elemType>::Node(elemType tp)
{
    right = NULL;
    left = NULL;
    parent = NULL;
    orderId = rand() % 100;
    count++;
    customerId = count;
    totalPrice = tp;
}
template<class elemType>
void Node<elemType>::setLeft(Node<elemType>* n)
{
    left = n;
}
template<class elemType>
void Node<elemType>::setRight(Node<elemType>* n)
{
    right = n;
}
template<class elemType>
void Node<elemType>::setParent(Node<elemType>* n)
{
    parent = n;
}
template<class elemType>
void Node<elemType>::setCustomerId(int cId)
{
    customerId = cId;
}
template<class elemType>
void Node<elemType>::setOrderId(int oi)
{
    orderId = oi;
}
template<class elemType>
void Node<elemType>::setTotalPrice(float tp)
{
    totalPrice = tp;
}
template<class elemType>
Node<elemType>* Node<elemType>::getLeft()
{
    return left;
}
template<class elemType>
Node<elemType>* Node<elemType>::getRight()
{
    return right;
}
template<class elemType>
Node<elemType>* Node<elemType>::getParent()
{
    return parent;
}
template<class elemType>
int Node<elemType>::getCustomerId()
{
    return customerId;
}
template<class elemType>
int Node<elemType>::getOrderId()
{
    return orderId;
}
template<class elemType>
float Node<elemType>::getTotalPrice()
{
    return totalPrice;
}
template<class elemType>
bool Node<elemType>::isRightChild()
{
    if (this->getParent()->getRight() == this)
        return true;
    else
        return false;
}
template<class elemType>
bool Node<elemType>::isLeftChild()
{
    if (this->getParent()->getLeft() == this)
        return true;
    else
        return false;
}
template<class elemType>
bool Node<elemType>::isLeafNode()
{
    if ((!isRightChild()) && (!isLeftChild()))
        return true;
    else
        return false;
}
template<class elemType>
bool Node<elemType>::isInternalOneChild()
{
    if ((!isInternalwithOneLeftChild()) && (!isInternalwithOneRightChild()))
        return true;
    else
        return false;
}
template<class elemType>
bool Node<elemType>::isInternalwithOneLeftChild()
{
    if ((this->getRight() == NULL) && (this->getLeft() != NULL))
        return true;
    else
        return false;
}
template<class elemType>
bool Node<elemType>::isInternalwithOneRightChild()
{
    if ((this->getRight() != NULL) && (this->getLeft() == NULL))
        return true;
    else
        return false;
}
template<class elemType>
bool Node<elemType>::isInternalwithTwoChildren()
{
    if ((this->getRight() != NULL) && (this->getLeft() != NULL))
        return true;
    else
        return false;
}
#endif