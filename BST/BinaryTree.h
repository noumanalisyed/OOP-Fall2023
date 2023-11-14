#pragma once
#include <iostream>
using namespace std;
#ifndef LinkList_H
#define LinkList_H
#include"Node.h"

template<class elemType>
class BinaryTree
{
private:
	Node<elemType>* root;

public:
	BinaryTree();
	bool isEmpty();
	Node<elemType>* SearchbyOrderId(int oi);
	Node<elemType>* SearchbyCustomerId(int cId);
	Node<elemType>* Searchbyorderid1(int d);
	void insertNode(float tp);
	void preOrderCustomerId(Node<elemType>* d, int cId);
	void RemovebyOrderId(int oi);
	void Visit(Node<elemType>* d);
	void inOrder(Node<elemType>* d);
	void print_in();
	float findRevenue();
	float calculateSum(Node<elemType>* d);
	void Swap(Node<elemType>* x, Node<elemType>* y);
	Node<elemType>* Maximum(Node<elemType>* d);
	void distroyTree(Node<elemType>* d);
	~BinaryTree();
};

#endif 