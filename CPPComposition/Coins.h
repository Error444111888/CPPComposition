
#pragma once


#include <string>
#include "Birthday.h"

using namespace std;

class Coins
{
public:
	Coins(string x, Birthday bo);
	void PrintInfo();

private: 
	string name;
	Birthday dateOfBirth;


};

 

