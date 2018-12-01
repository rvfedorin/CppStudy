//============================================================================
// Name        : 1.cpp
// Author      : Roman V. Fedorin
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Fish{
public:
	bool isFreshWatreFish;

	void Swim(){
		if (isFreshWatreFish){
			cout << "������������" << endl;
		} else {
			cout << "�������" << endl;
		}
	}
};

class Carp: public Fish{
public:
	Carp(){
		isFreshWatreFish = true;
	}
};

class Tuna: public Fish{
public:
	Tuna(){
		isFreshWatreFish = false;
	}
};

int main() {
	Carp myLanch;
	Tuna myDinner;

	cout << "��� ���:" << endl;
	cout << "����: ";
	myLanch.Swim();
	cout << "����: ";
	myDinner.Swim();


	return 0;
}








