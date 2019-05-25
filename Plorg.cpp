#include "header.h"
#define _CRT_SECURE_NO_WARNINGS

void Plorg::showPlorg() const { // shows current Plorg 's name and CI
	std::cout << "This plorg name " << this->name_ << " and CI = " << this->CI_ << std::endl;
}

void Plorg::setCI(int n) { // set Plorg CI to new value
	this->CI_ = n;
	this->showPlorg();
}