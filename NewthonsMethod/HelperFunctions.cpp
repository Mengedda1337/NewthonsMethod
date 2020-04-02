#define _CRT_SECURE_NO_WARNINGS
#include "HelperFunctions.h"
#include <iostream>
#include <ctime>

using namespace std;

int GenerateRandomInteger() {
	int min_range = -100;
	int max_range = 100;

	return (rand() % (max_range - min_range)) + min_range;
}
string GenerateFileTitle() {
	time_t rawtime;
	struct tm * timeinfo;
	char buffer[80];

	time(&rawtime);
	timeinfo = localtime(&rawtime);

	strftime(buffer, sizeof(buffer), "%d%m%Y%H%M%S", timeinfo);
	string str(buffer);

	return "polynomial_" + str + ".txt";
}