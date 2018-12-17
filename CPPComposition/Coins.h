
#pragma once

#include <string>
#include "pch.h"

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

 

