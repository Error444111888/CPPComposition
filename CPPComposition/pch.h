// Birthday Header

#pragma once


#ifndef BIRTHDAY_H
#define BIRTHDAY_H

class Birthday
{
public:
	Birthday (int m, int d, int y);
	void PrintDate();


	// Variables goes under Private
private:
	int month;
	int day;
	int year;

};

#endif //PCH_H
