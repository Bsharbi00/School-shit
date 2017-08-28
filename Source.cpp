#include "stdafx.h"
#include <iostream>


int readNumber()
{
	std::cout << "Please input a number";
	int x;
	std::cin >> x;
	return x;
}
 void writeAnswer(int x)
{
	std::cout << "your awnser is " << x << std::endl;
}

