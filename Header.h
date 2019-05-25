#pragma once
#include <iostream>
#include <string>
#define _CRT_SECURE_NO_WARNINGS
using std::cout;
using std::cin;
using std::endl;
class Plorg {
private:
	char name_[19];
	double CI_;
public:
	Plorg(char const* name = "Plorga", double CI = 50) {
		strcpy_s(name_, name);
		CI_ = CI;
	};
	void showPlorg() const; // shows current Plorg name and CI
	void setCI(int n); // set Plorg CI to new value
};