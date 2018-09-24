// ListProcessor.cpp

// tom bailey   1540  30 sep 2011

// tom bailey   1030  27 jan 2012
// Exercise the List class with verbose Node constructor
//   and destructor.

#include "LinkedList.h"


int main()
{
	List cows;
	cout << "cows list  :  " << cows << endl << endl;
	cout << "There are " << cows.size() << " cows in this list" << endl<<endl;
	cout << "the sum of these cows is " << cows.sum() << endl << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cows.insertAsLast(5);
	cout << "cows list  :  " << cows << endl << endl;
	cout << "There are " << cows.size() << " cows in this list" << endl<<endl;
	cout << "the sum of these cows is " << cows.sum() << endl << endl;

	cows.removeFirst();
	cout << "cows list  :  " << cows << endl << endl;
	cout << "There are " << cows.size() << " cows in this list" << endl << endl;
	cout << "the sum of these cows is " << cows.sum() << endl << endl;

	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "There are " << cows.size() << " cows in this list" << endl << endl;
	cout << "the sum of these cows is " << cows.sum() << endl << endl;
	cout << "horses list:  " << horses << endl << endl;
	cout << "There are " << horses.size() << " horses in this list" << endl << endl;
	cout << "the sum of these horses is " << horses.sum() << endl << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	horses.insertAsLast(2.567);
	cows.insertAsFirst(6.78);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl << endl;
	cout << "There are " << cows.size() << " cows in this list" << endl << endl;
	cout << "There are " << horses.size() << " horses in this list" << endl << endl;
	cout << "the sum of these cows is " << cows.sum() << endl << endl;
	cout << "the sum of these horses is " << horses.sum() << endl << endl;

	List pigs;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;
	cout << "There are " << cows.size() << " cows in this list" << endl << endl;
	cout << "There are " << horses.size() << " horses in this list" << endl << endl;
	cout << "There are " << pigs.size() << " pigs in this list" << endl << endl;
	cout << "the sum of these cows is " << cows.sum() << endl << endl;
	cout << "the sum of these horses is " << horses.sum() << endl << endl;
	cout << "the sum of these pigs is " << pigs.sum() << endl << endl;

	pigs = cows;
	pigs.insertAsLast(9.087);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;
	cout << "There are " << cows.size() << " cows in this list" << endl << endl;
	cout << "There are " << horses.size() << " horses in this list" << endl << endl;
	cout << "There are " << pigs.size() << " pigs in this list" << endl << endl;
	cout << "the sum of these cows is " << cows.sum() << endl << endl;
	cout << "the sum of these horses is " << horses.sum() << endl << endl;
	cout << "the sum of these pigs is " << pigs.sum() << endl << endl;

	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;
	cout << "There are " << cows.size() << " cows in this list" << endl << endl;
	cout << "There are " << horses.size() << " horses in this list" << endl << endl;
	cout << "There are " << pigs.size() << " pigs in this list" << endl << endl;
	cout << "the sum of these cows is " << cows.sum() << endl << endl;
	cout << "the sum of these horses is " << horses.sum() << endl << endl;
	cout << "the sum of these pigs is " << pigs.sum() << endl << endl;

	cout << "End of code" << endl;

system("pause");
	return 0;
	
}

