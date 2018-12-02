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

	void Swim(bool speed){
		if (speed) {
			cout << "����� ������ ������!!!" << endl;
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
	int weight;
public:
	using Fish::Swim;
	Tuna(): Fish(false){
		cout << "������ �����." << endl;
		weight = 0;
	}

	Tuna(int mass): Fish(false){
		weight = mass;
		cout << "������ ����� ������: " << weight << endl;
	}

	void Swim(){
		cout << "����� ������ �������." << endl;
	}
};

int main() {

	Carp myLanch;
	Tuna myDinner(123);

	cout << "��� ���:" << endl;
	cout << "����: ";
	myLanch.Swim();
	cout << "����: ";
	myDinner.Fish::Swim();

	myDinner.Swim();
	myDinner.Swim(true);

//	myDinner.isFreshWatreFish = false; <<--- is protected!!!


	return 0;
}








