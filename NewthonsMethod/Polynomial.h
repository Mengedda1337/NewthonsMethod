#pragma once
#include "Function.h"
#include <list> 

using namespace std;

/**
 *  A Polynomial class.  It's an Function derived class
 */
class Polynomial : public Function {
private:
	list<int> coefficients;	/// STL integer list 

public:
	/**
	 *  A constructor
	 */
	Polynomial(list<int> f) :coefficients(f) {}
	/**
	 *  A deconstructor
	 */
	virtual ~Polynomial() {};
	/**
	 *  override operator
	 */
	double operator()(double x);
	/**
	 *  override dfdx method (polymorphism)
	 */
	double dfdx(double x);
	/**
	 *  Writes coefficients of polynomial on console
	 */
	void DisplayPolynomial();
	/**
	 * Finds and writes polynomial's root on console
	 */
	void FindPolynomialRoot();
	/**
	 *  Saves .txt file on local disc with polynomial's coeeficients. 
	 */
	void SavePolynomialToFile();
};

