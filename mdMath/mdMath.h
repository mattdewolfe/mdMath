#ifndef MDMATH_H
#define MDMATH_H

#include <math.h>
#include "mdVector2.h"
#include "mdVector3.h"

namespace mdMath 
{
	// Dot product functions
	float Dot(const mdVector2 &_a, const mdVector2 &_b);
	float Dot(const mdVector3 &_a, const mdVector3 &_b);
	float Dot(const mdVector2 *_a, const mdVector2 *_b);
	float Dot(const mdVector3 *_a, const mdVector3 *_b);
	
	// Calculate the angle between two vectors
	float AngleBetweenTwoVectors(const mdVector3 &_a, const mdVector3 &_b);
	
	// Cross product
	mdVector3 Cross(const mdVector3 _a, const mdVector3 _b);

};

#endif
