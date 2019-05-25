#include <iostream>
#include "header.h"
#define _CRT_SECURE_NO_WARNINGS

Person::Person(const std::string & ln, const char * fn) {
	lastName = ln;
	strcpy(fname, fn);
	std::cout << "\nUsing constructor with parameters.\nInitialisation done.\n";
}

void Person::Show() const {
	std::cout << "\nMethod Show(): " << this->fname << " " << this->lastName << std::endl;
} // first name last name format
void Person::FormalShow() const {
	std::cout << "\nMethod FormalShow(): " << this->lastName << " " << this->fname << std::endl;
}