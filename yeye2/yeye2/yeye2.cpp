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
	cin >> command;
	mathCalc.input(command);
	
	return 0;
}







