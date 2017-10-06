#pragma once
#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include "mather.h"

using namespace std;

static string command;
mather mathCalc;

int main()
{
	string command;
	cout << "Enter the command:";
	cin >> command;

	mathCalc.input(command);

	main();

	return 0;
}







