/*
 * SLL.cpp
 *
 *  Created on: Sept 29, 2019
 *      Author: Alex Clark
 */

#include "SNode.hpp"
#include "SLL.hpp"
#include <iostream>
#include <stdlib.h>
using namespace std;

SLL::SLL() {
	last = NULL;
	first = NULL;
	size = 0;
}

SLL::SLL(int r, string c) {
	SNode *n = new SNode(r, c);
	first = n;
	last = n;
	size = 1;
}

void SLL::printSLL() {
	SNode *temp = first;
	while (temp != NULL) {
		cout << temp->rating << ", " << temp->comments << endl;
		temp = temp->next;
	}
	cout << "\n" << endl;
}

void SLL::insertInOrder(int r, string c) {
	if (first == NULL)
		addFirst(r, c);
	else if (r < first->rating)
		addAtFront(r, c);
	else if (r > last->rating)
		push(r, c);
	else {
		SNode *n = new SNode(r, c);
		SNode *temp = first;
		while (temp->next->rating < r) {
			temp = temp->next;
		}
		n->next = temp->next;
		temp->next = n;
		size++;
	}
}

void SLL::addFirst(int r, string c) {
	//(3 pts for working)
	//adds the very first node (made from r and c) to an empty list
	// I called this from insertInOrder
	first = new SNode(r, c);
	last = first;
	size++;
}

void SLL::addAtFront(int r, string c) {
	SNode *n = new SNode(r, c);
	n->next = first;
	first = n;
	size++;
}

void SLL::push(int r, string c) {
	SNode *n = new SNode(r, c);
	last->next = n;
	last = n;
	size++;
}

int SLL::pop() {
	SNode *temp = first;
	while (temp->next->next != NULL) {
		temp = temp->next;
	}
	int x = temp->next->rating;
	last = temp;
	delete temp->next;
	temp->next = NULL;
	size--;
	return x;
}

double SLL::getAve() {
	SNode *temp = first;
	double ave = 0.0;
	while (temp != NULL) {
		ave = ave + temp->rating;
		temp = temp->next;
	}
	ave = ave / size;
	return ave;
}

SLL::~SLL() {
	SNode *temp = first;
	while (temp != NULL) {
		first = temp->next;
		delete temp;
		temp = first;
	}
}
