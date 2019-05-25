#include <iostream>
#include "header.h"
//#define _CRT_SECURE_NO_WARNINGS
using namespace std;
int main() {
	cout << "Setting object with constructor by default.";
	Person myPerson;
	myPerson.Show();
	myPerson.FormalShow();

	string s1 = "John";
	char const* ch = "Doe";
	cout << "\nInitializing object with 1 parameter.\n";
	Person myPerson2(s1);
	myPerson2.Show();
	myPerson2.FormalShow();


	cout << "\nInitializing object with 2 parameters.\n";
	Person myPerson3(s1, ch);
	myPerson3.Show();
	myPerson3.FormalShow();

	system("pause");
}