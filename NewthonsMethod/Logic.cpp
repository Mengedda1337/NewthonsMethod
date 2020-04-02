#include <iostream>
#include "Logic.h"
#include "Polynomial.h"
#include "HelperFunctions.h"
#include "Newton.h"
#include <fstream>
#include <string>

using namespace std;

void Logic::Option1() {
	Polynomial p = (*this).GenerateRandomPolynomial();
	p.FindPolynomialRoot();
	int save;
	cout << "Press any button to continue! Press 0 to save polynomial to file!\n";
	cin >> save;
	p.SavePolynomialToFile();
}

Polynomial Logic::GenerateRandomPolynomial() {
	cout << "Podaj d³ugoœæ wielomianu: ";
	int length;
	cin >> length;

	list<int> coefficients;
	for (int i = 0; i < length; i++)
	{
		int randomCoefficient = GenerateRandomInteger();
		coefficients.push_back(randomCoefficient);
	}

	Polynomial p(coefficients);
	p.DisplayPolynomial();

	return p;
}

void Logic::Option2() {
	Polynomial p = (*this).UploadPolynomialFromLocalFile();
	p.FindPolynomialRoot();
	int save;
	cout << "Press any button to continue! Press 0 to save polynomial to file!\n";
	cin >> save;
	p.SavePolynomialToFile();
}

Polynomial Logic::UploadPolynomialFromLocalFile() {
	cout << "Type file directory path ie. (C:\\file.txt)" << endl;
	cin.ignore();
	string directory;
	getline(cin, directory);

	list<int> coefficients;
	ifstream myfile;
	myfile.open(directory, ios::in);

	string line;
	if (myfile.is_open())
	{
		while (getline(myfile, line))
		{
			int coefficient = stoi(line);
			coefficients.push_back(coefficient);
		}
		myfile.close();
	}

	Polynomial p(coefficients);
	p.DisplayPolynomial();

	return p;
}