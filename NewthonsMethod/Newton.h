#pragma once
#include "Function.h"
#include "Alghoritm.h"

/**
 *  A Newton class.  It's an Alghoritm derived class
 */
class Newton : public Alghoritm
{
private:
	double precision;	/// double precision

public:
	/**
	 *  A constructor
	 */
	Newton(double p) :precision(p) {};
	/**
	 *  A destructor
	 */
	virtual ~Newton() {};
	/**
	 *  returns double value - calculated function's root with given start point
	 */
	double Find(Function& f, double start);
};

