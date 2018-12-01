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

	Fish(bool water): isFreshWatreFish(water) {}

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
	Carp(): Fish(true){
		cout << "������ ����." << endl;
	}
};

class Tuna: public Fish{
	int m;
public:
	Tuna(): Fish(false){
		cout << "������ �����." << endl;
		m = 0;
	}

	Tuna(int i): Fish(false){
		m = i;
		cout << "������ �����." << endl;
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








