// Pyramid loop.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	for ( int i = 0; i < 5; i++) {
		cout << "* ";
	for (int j = i; j < 5; j++)
	{
		cout << "j \t";
	}
	cout << "\n";
	}
	
    return 0;
}

