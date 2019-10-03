/*
 * Book.cpp
 *
 *  Created on: Oct 2, 2019
 *      Author: Allie DeAbreu, Alex Clark
 */

#include "Book.hpp"
#include <iostream>
#include <stdlib.h>
#include <array>
using namespace std;


Book::Book(string firstn, string lastn, string bookn) {
	nFirst = firstn;
	nLast = lastn;
	nBook = bookn;
	yrPub = NULL;

	ratings =  new int[10];
		for (int i = 0; i < 10; i++){
			ratings[i] = 0;
		}
	}

Book::Book(string firstn, string lastn, string bookn, int pubyr, int *rts){
	nFirst = firstn;
	nLast = lastn;
	nBook = bookn;
	yrPub = pubyr;

	*ratings = *rts;
}





Book::~Book(){//destructor
	cout<<nBook<<" has been deleted"<<endl;
}



double Book::avgRating(int *rts){
	int sum = 0;
	double tot = 0;
	double avg;
	for (int i = 0; i< 10; i++){
		sum += *rts[i];
		tot++;
	}

	avg = sum/tot ;
	return avg;

}






void Book::printBkInfo() {
	cout<<"Book name: "<<nBook<<endl;
	cout<<"Author: "<<nFirst<<" "<<nLast<<endl;
	cout<<"Year published: "<<yrPub<<endl;

}
void Book::printRating(){
	cout<<"Average rating of this book: "<<avgRating(ratings)<<endl;

}
