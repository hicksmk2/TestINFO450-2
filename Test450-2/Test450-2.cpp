// ClassPractice 1-29.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int main()
{
	int value;
	char answer;

	do
	{
		cout << "Please enter a value: ";
		cin >> value;
		cout << "" << endl;

		cout << "Your value is " << value << endl << "But when squared it is " << pow(value, 2) << endl;
		cout << "" << endl;

		cout << "Would you like to enter another value?" << endl;
		cin >> answer;
		cout << "" << endl;
	}

	while (answer == 'Y' || answer == 'y');
	return 0;
}

