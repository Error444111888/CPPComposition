#include "Coins.h"
#include "Birthday.h"
#include <iostream>

using namespace std;

Coins::Coins(string x, Birthday bo)
	: name (x), dateOfBirth (bo)
{

}

void Coins::PrintInfo()
{
	cout << name << " was born on ";
	dateOfBirth.PrintDate();

}

