#pragma once
#include "stdafx.h"
#include "mather.h"
#include <iostream>"
#include <string>
#include <vector>

using namespace std;
int counter = 0;
vector<string> collection = { "Collatz", "help" };

mather::mather() {

}

 int mather::mainCalc(int a) {
	while (a > 1) {

		if (a % 2 == 0) {
			a = a / 2;
			counter = counter + 1;
		}
		else {
			a = a * 3 + 1;
			counter = counter + 1;
		}
		
	}

	return a;
}

string mather::input(string a) {
	
	for (int i = 0; i < collection.size(); i++)
	{
		if (a == collection[0])
		{
			cout << "Please enter the number you want to calculate: ";
			int numberToHold = 0;
			cin >> numberToHold;
			mainCalc(numberToHold);
			cout << "It took: " << counter << " steps to calculate the number." << endl;

			counter = 0;

		}
		else if (a == collection[1])
		{
			cout << "Available commands: " << endl;
			for (int i = 0; i < collection.size(); i++)
			{
				cout << collection[i] << endl;
			}

		}
		
		return a;
	}
}