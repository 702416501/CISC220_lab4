/*
 * SNode.cpp
 *
 *  Created on: Sept 29, 2019
 *      Author: Alex Clark
 */

#include <stdlib.h>
#include <iostream>
#include "SNode.hpp"
using namespace std;

SNode::SNode(){
	rating = -1;
	comments = "";
	next = NULL;
}
SNode::SNode(int r, string c){
	rating = r;
	comments = c;
	next = NULL;
}

SNode::~SNode() {
	cout << "Deleting " << rating << ", " << comments << endl;
}
