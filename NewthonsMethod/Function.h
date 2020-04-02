#pragma once

/**
 *  A function class.  It's a base class for any other function.
 */
class Function
{
public:
	/**
	* A constructor
	*/
	Function() {};
	/**
	* A deconstructor
	*/
	virtual ~Function() {};
	/**
	* An operator's override - returns value of function at point
	*/
	virtual double operator()(double x) = 0;
	/**
	* A virtual method dfdx - derivative of function
	*/
	virtual double dfdx(double x) = 0;
};

