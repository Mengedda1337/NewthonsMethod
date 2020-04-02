#include "Polynomial.h"
#include <math.h> 
#include <fstream>
#include <iostream>
#include "Newton.h"
#include "HelperFunctions.h"

using namespace std;

double Polynomial::operator()(double x) {
	double sum = 0;
	int size = coefficients.size() - 1;

	list <int> ::iterator it;

	for (it = coefficients.begin(); it != coefficients.end(); ++it) {
		sum += *it * pow(x, size);
		size--;
	}

	return sum;
}

double Polynomial::dfdx(double x) {
	double sum = 0;
	int size = coefficients.size() - 2;

	list <int> ::iterator it;

	for (it = coefficients.begin(); it != coefficients.end(); ++it) {
		if (size < 0) break;

		sum += *it * pow(x, size) * (size + 1);
		size--;
	}

	return sum;
}

void Polynomial::DisplayPolynomial() {
	list <int> ::iterator it;
	for (it = coefficients.begin(); it != coefficients.end(); ++it)
		cout << '\t' << *it;
	cout << '\n';
}

void Polynomial::FindPolynomialRoot() {
	double precision;
	cout << "Type precision of Newton's method ex. 0.001\n";
	cin >> precision;

	Newton n(precision);
	double start;
	cout << "Type estimated value of polynomial's root ex. 0 or 1\n";
	cin >> start;
	double root = n.Find(*this, start);
	cout << root << endl;
}

void Polynomial::SavePolynomialToFile()
{
	string filename = GenerateFileTitle();
	fstream file;
	file.open(filename, fstream::out);
	list <int> ::iterator it;
	for (it = coefficients.begin(); it != coefficients.end(); ++it)
		file << *it << endl;
	file.close();
}

