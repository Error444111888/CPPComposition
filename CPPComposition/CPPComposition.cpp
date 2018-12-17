// CPPComposition.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Birthday.h"
#include "Coins.h"
#include <iostream>

using namespace std;

int main()
{

	Birthday BirthObj(01, 03, 2009);

	Coins Bitcoin ("Bitcoin as the Coin", BirthObj);
	Bitcoin.PrintInfo();




    cin.get(); 
}

