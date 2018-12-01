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
protected:
	bool isFreshWatreFish;

public:
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
//	myDinner.isFreshWatreFish = false; <<--- is protected!!!


	return 0;
}








