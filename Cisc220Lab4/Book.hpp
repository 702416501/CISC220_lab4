/*
 * Book.hpp
 *
 *  Created on: Oct 2, 2019
 *      Author: Allie
 */

#ifndef BOOK_HPP_
#define BOOK_HPP_

#include <iostream>
using namespace std;

class Book {
	string nFirst;
	string nLast;
	int ratings[10];
	string nBook;
	int yrPub;

public:
	//constructors
	Book(string firstn, string lastn, string bookn);
	Book(string firstn, string lastn, string bookn, int pubyr, int ratings);

	~Book();//destructor

	//other methods
	double avgRating(int ratings[]);//calculates average by traversing through the array
	void printRating();//prints rating; if rating is zero, prints "(no ratings yet)"
	void printBkInfo();//prints author info, year of publication, and avg rating
	//need the operator overload

};





#endif /* BOOK_HPP_ */
