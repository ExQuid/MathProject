// yeye2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
int count = 0;
int mainCalc(int a) {
	while (a > 1){

		if (a % 2 == 0){
			a = a / 2;
			count = count + 1;
		}
		else {
			a = a * 3 + 1;
			count = count + 1;
		}
		
	}

	return a;
}
int main()
{
	count = 0;
	int numberToHold = 0;
	std::cout << "Please enter the number you want to calculate: ";
	std::cin >> numberToHold;
	mainCalc(numberToHold);
	std::cout << "It took: " << count << " steps to calculate the number." << std::endl;
	main();
    return 0;
}


