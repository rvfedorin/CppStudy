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
			cout << "Пресноводный" << endl;
		} else {
			cout << "Морской" << endl;
		}
	}

	void Swim(bool speed){
		if (speed) {
			cout << "Очень быстро поплыл!!!" << endl;
		}
	}

};

class Carp: public Fish{
public:
	Carp(): Fish(true){
		cout << "Пойман карп." << endl;
	}
};

class Tuna: public Fish{
	int weight;
public:
	using Fish::Swim;
	Tuna(): Fish(false){
		cout << "Пойман тунец." << endl;
		weight = 0;
	}

	Tuna(int mass): Fish(false){
		weight = mass;
		cout << "Пойман тунец массой: " << weight << endl;
	}

	void Swim(){
		cout << "Тунец быстро плавает." << endl;
	}
};

int main() {

	Carp myLanch;
	Tuna myDinner(123);

	cout << "Моя еда:" << endl;
	cout << "Обед: ";
	myLanch.Swim();
	cout << "Ужин: ";
	myDinner.Fish::Swim();

	myDinner.Swim();
	myDinner.Swim(true);

//	myDinner.isFreshWatreFish = false; <<--- is protected!!!


	return 0;
}








