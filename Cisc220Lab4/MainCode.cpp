/*
 * MainCode.cpp
 *
 *  Created on: Oct 2, 2019
 *      Author: Allie DeAbreu, Alex Clark
 */

#include "Book.hpp"
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void findbestbook(Book books[], int arraySize);

int main(){
	//part 1 for main

	int b1ratings[10] = { 3, 3, 1, 4, 2, 5, 3, 4, 5, 2};
	int b2ratings[10] = { 6, 7, 8, 10, 8, 7, 10, 9, 6, 9};
	int b3ratings[10] = { 4, 6, 2, 9, 3, 4, 10, 2, 1, 0};
	int b4ratings[10] = { 1, 1, 4, 2, 3, 6, 2, 3, 4, 1};
	int b5ratings[10] = { 5, 5, 5, 6, 4, 6, 5, 7, 3, 2};


	Book bks[5] =  {
		Book("Harper","Lee", "To Kill a Mockingbird", 1960, b1ratings),
		Book("Josh", "Steinbeck", "Of Mice and Men", 1937, b2ratings),
		Book("Sara", "Gruen", "Water for Elephants", 2011, b3ratings),
		Book("Harper", "Collins", "Wicked", 1996, b4ratings),
		Book("Julie", "Powell", "Julie and Julia", 2002, b5ratings)
	};

	findbestbook(&bks[0], 5);

	cout<<"\n"<<"\n"<<endl;


	//part 2
	cout<<"Part 2"<<"\n"<<endl;
	Book *heapBook = new Book("Ray", "Bradbury", "Fahrenheit 451", 1953, b1ratings);
	heapBook->printBkInfo();

	cout<<"\n"<<"\n"<<endl;

	//part 3
	cout<<"Part 3"<<"\n"<<endl;

	Book *heapbookarray[2];

	heapbookarray[0] = new Book("Allie", "DeAbreu",
			"Memior: I'm Exahusted", 2019, b4ratings);
	heapbookarray[1] = new Book("Me", "Myself",
			"The Sequil: What Even is Sleep", 2019, b3ratings);

	for(int i = 0; i < 2; i++) {
		heapbookarray[i]->printBkInfo();
		cout << endl;
	}




	return 0;

}

void findbestbook(Book books[], int arrsize) {
	int bestbook = 0;
	for(int i = 0; i < arrsize; i++) {
		if(books[i].avgRating() > books[bestbook].avgRating())
			bestbook = i;
	}
	cout << "Found the Best Book!" << endl;
	books[bestbook].printBkInfo();

}
