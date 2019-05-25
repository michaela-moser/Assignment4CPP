#include "header.h"
#define _CRT_SECURE_NO_WARNINGS

int main() {
	Plorg myPlorg;
	myPlorg.showPlorg();
	myPlorg.setCI(51);

	Plorg myPlorg2("NewPlorg", 159);
	myPlorg2.showPlorg();
	system("pause");
}