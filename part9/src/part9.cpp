//============================================================================
// Name        : part9.cpp
// Author      : Roman V. Fedorin
// Version     :
// Copyright   : Your copyright notice
// Description : Lesson 9, ANSI-style
//============================================================================

#include <iostream>

using namespace std;

class Human{
	int age;



	public:
		string name;

		Human(){
			age = 0;
			name = "NoName";
		}


		Human(string nameNew, int age = 25)
		:age(age)
		{
			name = nameNew;
			cout << "Created " << name << " " << age << endl;
		}

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
	Human* woman = new Human("Sonya");
	Human newMan;
	Human DiMan = Human("Di", 33);

	man->name = "Alan";
	man->SetAge(34);
	man->IntroduceSelf();

	woman->IntroduceSelf();
	newMan.IntroduceSelf();
	DiMan.IntroduceSelf();

	delete man;
	delete woman;

	return 0;
}
