#ifndef MDVECTOR3_H
#define MDVECTOR3_H

#include "mdMath.h"
#include "mdVector3.h"

namespace mdMath 
{
// Custom vector class, with x, y, and z element
	class mdVector3
	{
	public:
		float x, y, z;

		// Constructors
		mdVector3() : 
			x(0), 
			y(0), 
			z(0) {}

		mdVector3(float _x, float _y, float _z) : 
			x(_x), 
			y(_y), 
			z(_z) {}

		mdVector3(const mdVector3 &_inVec) :
			x(_inVec.x),
			y(_inVec.y),
			z(_inVec.z) {}

		// -inwork- make these dudes static

		// Get the magnitude of this vector
		const float mdVector3::Magnitude();
		// Get the squared magnitude of this vector
		const float mdVector3::SqrdMagnitude(); 
		// Get the normal of this vector
		const mdVector3 mdVector3::Normal();

		virtual ~mdVector3(void) {}

#pragma region Overloads
		mdVector3 operator= (const mdVector3 &);
		mdVector3 operator+ (const mdVector3 &) const;
		mdVector3 operator- (const mdVector3 &) const;
		mdVector3 operator* (const float &) const;
		mdVector3 operator/ (const float &) const;

		mdVector3 &operator+= (const mdVector3 &);
		mdVector3 &operator-= (const mdVector3 &);
		mdVector3 &operator/= (const float &);
		mdVector3 &operator*= (const float &);

		bool operator== (const mdVector3 &) const;
		bool operator!= (const mdVector3 &) const;

		friend std::ostream& operator<<(std::ostream& os, const mdVector3& vec);
#pragma endregion Overloads

	};
};
#endif
