#include <iostream>
#include <string>
#include "PayRollActions.h"

using namespace std;

// Function definition of ScreenFormat.
void ScreenFormat()
{
	// cout used in formatting.
	cout << "=====================================================================================================================\n";
	cout << "=====================================================================================================================\n";
	cout << "=====================================================================================================================\n";
}

// Function definition of display, specifically display(const vector<string>* const pInventory) *pointer*.
void display(const vector<string>* const pInventory)
{
	// for loop for when string vector is equal to the inventory *pointer*.
	for (vector<string>::const_iterator iter = (*pInventory).begin();
		iter != (*pInventory).end(); ++iter)
	{
		// cout statement to print out the *pointer* iter.
		cout << *iter << endl;
	}
}

// Function definition of hackedTransaction.
void hackedTransaction(int& x, int& y) // REFERENCES FOR INT X AND INT Y.
{
	// int value is temporarily equal to x.
	int temp = x;
	// the value of x now equals the value of y.
	x = y;
	// the value of y now equals the value temp (temporarily).
	y = temp;
}