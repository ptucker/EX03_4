// ex4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	string s1;
	cout << "enter string: " << endl;
	getline(cin, s1);
	cout << "size of string: " << s1.size() << endl;

    return 0;
}

