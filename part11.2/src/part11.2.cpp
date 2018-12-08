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
		cout << "Саздаём Fish " << endl;
	}

	virtual ~Fish(){
		cout << "Удаляем Fish " << endl;
	}

//	virtual void Swim(){
//		cout << "Рыба плавает." << endl;
//	}

	virtual void Swim() = 0;
};

class Carp final: public Fish{
public:
	void Swim() override final {
		cout << "Карп плавает медленно." << endl;
	}
};

class Tuna: public Fish{
	void Swim(){
		cout << "Тунец плавает быстро." << endl;
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
