//============================================================================
// Name        : part11Exercise.cpp
// Author      : Roman V. Fedorin
// Version     :
// Copyright   : Free
// Description : Hello World in C++, ANSI-style
//============================================================================

#include <iostream>
using namespace std;

class Figure{
public:
	virtual double Area() = 0;
	virtual void Print() = 0;

	virtual ~Figure() {};
};

class Circle: virtual Figure {
public:
	double Area() override {
		return 2.2;
	}

	void Print() override {
		cout << "Print Circle" << endl;
	}
};

class Triangle: virtual Figure {
public:
	double Area() override {
		return 2.2;
	}

	void Print() override {
		cout << "Print Triangle" << endl;
	}
};


int main() {
	Triangle tr;
	Circle cir;

	tr.Print();
	cir.Print();

	return 0;
}
