//============================================================================
// Name        : 2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;


class Fish{
public:
	Fish(){
		cout << "������ Fish " << endl;
	}

	virtual ~Fish(){
		cout << "������� Fish " << endl;
	}

//	virtual void Swim(){
//		cout << "���� �������." << endl;
//	}

	virtual void Swim() = 0;
};

class Carp final: public Fish{
public:
	void Swim() override final {
		cout << "���� ������� ��������." << endl;
	}
};

class Tuna: public Fish{
	void Swim(){
		cout << "����� ������� ������." << endl;
	}
};

void MakeFishSwim(Fish& fish){
	fish.Swim();
}

int main() {
	Tuna tuna;
	Carp carp;

	MakeFishSwim(tuna);
	MakeFishSwim(carp);

	return 0;
}
