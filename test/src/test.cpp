//============================================================================
// Name        : test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

class Human{
	int age = 0;

	public:
		string name = "NoName";


	public:
		void SetAge(int newAge){
			age = newAge;
		}

		int GetAge(){
			if(age < 30){
				return age;
			} else {
			return age - 2;
			}
		}

		void IntroduceSelf(){
			cout << "Hello, my name is " << name << ". ";
			cout << "I am " << GetAge() << endl;
		}

};


int main()
{
	Human* man = new Human();
	Human* woman = new Human();
	Human newMan;

	man->name = "Alan";
	man->SetAge(34);
	man->IntroduceSelf();

	woman->name = "Sonya";
	woman->SetAge(23);
	woman->IntroduceSelf();

	newMan.IntroduceSelf();

	delete man;
	delete woman;

	return 0;
}
