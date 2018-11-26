//============================================================================
// Name        : part9.cpp
// Author      : Roman V. Fedorin
// Version     :
// Copyright   : Your copyright notice
// Description : Lesson 9, ANSI-style
//============================================================================

#include <iostream>
#include <string.h>

using namespace std;

class Human{
	int age;
	string* motto;

	public:
		string name;

		Human(){
			age = 0;
			name = "NoName";

			motto = new string("My motto!");
		}


		Human(string nameNew, int age = 25)
		:age(age)
		{
			motto = new(nothrow) string("My motto!");
			name = nameNew;
			cout << "Created " << name << " " << age << endl;
		}

		~Human(){
			if (motto != nullptr){
				delete motto;
				cout << name << " left" << endl;
			}
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

class CopyStringError{
	char* myString;
	friend void copyInParam(CopyStringError str);

	public:


		CopyStringError(const char* str){

			cout << str << endl;
			myString = new char[strlen(str) + 1];
			strcpy(myString, str); // because str is constant but myString is not
		}

		CopyStringError(const CopyStringError &str){  // copying constructor

			cout << "Copying constructor " << str.myString << endl;
			myString = new char[strlen(str.myString) + 1];
			strcpy(myString, str.myString); // because str is constant but myString is not
		}

		~CopyStringError(){
			cout << "destructor CopyStringError" << endl;
			delete[] myString;
		}

		const char* getMyString(){
			return myString;
		}
};


class President{
private:
	President() {};
	President(const President&);
	const President& operator=(const President&);

	string name;

public:
	static President& GetInstanse(){
		static President singlePresident;
		return singlePresident;
	}

	void SetName(string nName){
		name = nName;
	}

	string GetName(){
		return name;
	}
};

void copyInParam(CopyStringError str){
	cout << str.getMyString() << " from copyInParam " << endl;
	cout << str.myString << " from copyInParam directly" << endl;
}

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

	cout << "Hello for every one!!!" << endl;
	cout << endl;

	delete man;
	delete woman;

	// class CopyStringError
	cout << endl;
	cout << "--------------------------------" << endl;
	CopyStringError objMyStr = CopyStringError("Hello");
	copyInParam(objMyStr);  // There was executed destructor CopyStringError
	cout << objMyStr.getMyString() << " from main() " << endl;  // <<<---- Error out!! expected "Hello" if not copying constructor
	cout << "--------------------------------" << endl;

	// Singleton
	cout << "--------------------------------" << endl;
	President& presid = President::GetInstanse();
	presid.SetName("New");
	cout << presid.GetName() << endl;
	cout << President::GetInstanse().GetName() << endl;
	cout << "--------------------------------" << endl;

	return 0;
}
