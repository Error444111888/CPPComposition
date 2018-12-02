// pch.cpp: source file corresponding to pre-compiled header; necessary for compilation to succeed
#include "pch.h"
#include <iostream>

using namespace std;

BitcoinsBirthday::BitcoinsBirthday(int m, int d , int y)
{
	month = m;
	day = d;
	year = y;
}


void BitcoinsBirthday::PrintTheDate()
	{
	cout << "Genesis Block was crated on " << m << "/" << "/" << d << "/" << y << endl;
	}
