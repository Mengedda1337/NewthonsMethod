#pragma once
#include "Polynomial.h"

/**
 *  A Logic class.  Represenents logic layer of application
 */
class Logic
{
public:
	/**
	 *  Option1 - generates random polynomial logic
	 */
	void Option1();
	/**
	 *  Option2 - upload from local file logic
	 */
	void Option2();
	/**
	 *  Returns new Polynomial with random integer coefficients
	 */
	Polynomial GenerateRandomPolynomial();
	/**
	 *  Returns new Polynomial with integer coefficients uploaded from file from given directory
	 */
	Polynomial UploadPolynomialFromLocalFile();
};

