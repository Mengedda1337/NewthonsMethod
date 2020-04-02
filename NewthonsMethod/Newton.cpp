#include "Newton.h"
#include <math.h> 

double Newton::Find(Function& f, double start) {

	while (fabs(f(start)) > precision) {
		start = start - f(start) / f.dfdx(start);
	}

	return start;
}