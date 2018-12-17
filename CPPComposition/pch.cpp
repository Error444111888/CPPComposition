// pch.cpp: source file corresponding to pre-compiled header; necessary for compilation to succeed



#include "pch.h"
#include "Coins.h"
#include <iostream>


using namespace std;


// You/re calling the class in the header file with ::
Birthday::Birthday(int m, int d , int y)
{
	month = m;
	day = d;
	year = y;
}


void Birthday::PrintDate()
	{
	cout << "this date --- " << month << "/" << day << "/" << year << endl;
	}
