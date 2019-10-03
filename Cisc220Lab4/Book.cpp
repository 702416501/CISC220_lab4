/*
 * Book.cpp
 *
 *  Created on: Oct 2, 2019
 *      Author: Allie DeAbreu, Alex Clark
 */

#include "Book.hpp"
#include <iostream>
#include <stdlib.h>
using namespace std;


Book::Book(string firstn, string lastn, string bookn) {
	ratings[10] = 0;
	nFirst = firstn;
	nLast = lastn;
	nBook = bookn;
	yrPub = NULL;

}

Book::Book(string firstn, string lastn, string bookn, int pubyr, int ratings){
	//ratings[] = 0;
	nFirst = firstn;
	nLast = lastn;
	nBook = bookn;
	yrPub = pubyr;
}

Book::~Book(){//destructor
}

double Book::avgRating(int rts[]){
	double x = 0;

	return x;
}

void Book::printBkInfo(){
	cout<<"Book name: "<<nBook<<endl;
	cout<<"Author: "<<nFirst<<" "<<nLast<<endl;
	cout<<"Year published: "<<yrPub<<endl;

}
void Book::printRating(){
	cout<<"Average rating of this book: "<<avgRating(ratings)<<endl;

}
