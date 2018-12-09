//============================================================================
// Name        : 2.cpp
// Author      : Roman V. Fedorin
// Version     :
// Copyright   : Free
// Description : Ansi-style
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

	virtual Fish* Clone() = 0;

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

	Fish* Clone() override {
		return new Carp(*this);
	}
};

class Tuna: public Fish{
	void Swim(){
		cout << "����� ������� ������." << endl;
	}

	Fish* Clone() override {
		return new Tuna(*this);
	}
};

void MakeFishSwim(Fish& fish){
	fish.Swim();
}

int main() {
	int const ARRAY_SIZE = 3;
	Tuna tuna;
	Carp carp;

	MakeFishSwim(tuna);
	MakeFishSwim(carp);

	Fish* myFishes[ARRAY_SIZE] = {nullptr};
	myFishes[0] = new Tuna;
	myFishes[1] = new Tuna;
	myFishes[2] = new Carp;

	Fish* myNewFishes[ARRAY_SIZE];
	for (int i=0; i < ARRAY_SIZE; ++i){
		myNewFishes[i] = myFishes[i]->Clone();
	}

	// ��������
	for (int f=0; f<ARRAY_SIZE; ++f){
		myNewFishes[f]->Swim();
	}

	// �������
	for (int index=0; index<ARRAY_SIZE; ++index){
		delete myFishes[index];
		delete myNewFishes[index];
	}

	return 0;
}
