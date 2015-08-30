#include <iostream>
#include "mdMath.h"

namespace mdMath {
	
	/* @Brief Returns the dot product of two normalized vector2s
	** @Parem (mdMath mdVector2, mdMath mdVector2)
	*/
	float Dot(const mdVector2 &_a, const mdVector2 &_b)
	{
		return (_a.x * _b.x) + (_a.y * _b.y);
	}
	float Dot(const mdVector2 *_a, const mdVector2 *_b)
	{
		return (_a->x * _b->x) + (_a->y * _b->y);
	}

	/* @Brief Returns the dot product of two normalized vector3s
	** @Parem (mdMath mdVector3, mdMath mdVector3)
	*/
	float Dot(const mdVector3 &_a, const mdVector3 &_b)
	{
		return (_a.x * _b.x) + (_a.y * _b.y) + (_a.z * _b.z);
	}
	float Dot(const mdVector3 *_a, const mdVector3 *_b)
	{
		return (_a->x * _b->x) + (_a->y * _b->y) + (_a->z * _b->z);
	}

	/* @Brief Calculate the angle between two vectors
	** @Parem (mdMath mdVector3, mdMath mdVector3)
	*/
	float AngleBetweenTwoVectors(mdVector3 &_a, mdVector3 &_b)
	{
		return acos( (Dot(_a, _b))  / (_a.Magnitude() * _b.Magnitude()) ); 
	}


	/* @Brief Returns the cross product of two vector3s
	** @Parem (mdMath mdVector3, mdMath mdVector3)
	*/
	mdVector3 Cross(const mdVector3 _a, const mdVector3 _b)
	{
		mdVector3 cross;
		cross.x = (_a.y * _b.z) - (_a.z * _b.y);
		cross.y = (_a.z * _b.x) - (_a.x * _b.z);
		cross.z = (_a.x * _b.y) - (_a.y * _b.x);
		return cross;
	}
	//ayyy lmao

};
