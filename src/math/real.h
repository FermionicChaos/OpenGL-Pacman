#pragma once
#ifndef REAL_H
#define REAL_H

#include "mconfig.h"

#ifdef REAL_TYPE_HALF
	#define REAL_TYPE half?
#endif // REAL_TYPE_HALF

#ifdef REAL_TYPE_FLOAT
	#define REAL_TYPE float
#endif // REAL_TYPE_FLOAT

#ifdef REAL_TYPE_DOUBLE
	#define REAL_TYPE double 
#endif // REAL_TYPE_DOUBLE

namespace math {

	typedef REAL_TYPE real;

	real ln(real Arg);
	real log(real Base, real RetVal);
	//real atan(real ArgY, real ArgX);

	real deg2rad(real Arg);
	real rad2deg(real Arg);

}

#endif // !REAL_H
