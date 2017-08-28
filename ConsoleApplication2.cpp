// ConsoleApplication2.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "io.h"

int main()
{
	int x = readNumber();
	int y = readNumber();
	writeAnswer(x + y);
	return 0;
}