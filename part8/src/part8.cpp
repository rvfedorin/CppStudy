/*
 * part8.cpp
 *
 *  Created on: 18 но€б. 2018 г.
 *      Author: wolf
 */


#include<iostream>
using namespace std;

int main ()
{
	int* pointToAnlnt = new int;
	int* pNumberCopy = pointToAnlnt;
	*pNumberCopy = 30;
	cout << *pointToAnlnt;

	delete pointToAnlnt;
	return 0;

	return 0;
}

