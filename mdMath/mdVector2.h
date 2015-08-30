#ifndef MDVECTOR2_H
#define MDVECTOR2_H
#include <iostream>
#include "mdMath.h"
#include "mdVector3.h"

namespace mdMath {

// Custom vector class, with x and y element
	class mdVector2
	{
	public:
		float x, y;
		
		// Constructors
		mdVector2() : 
			x(0), 
			y(0) {}

		mdVector2(float _x, float _y) : 
			x(_x), 
			y(_y) {}

		mdVector2(const mdVector2 &_inVec) :
			x(_inVec.x),
			y(_inVec.y) {}

		// Get the magnitude of this vector
		const float mdVector2::Magnitude();
		// Get the squared magnitude of this vector
		const float mdVector2::SqrdMagnitude();
		// Get the normal of this vector
		const mdVector2 mdVector2::Normal();

		virtual ~mdVector2() {}

#pragma region Overloads
		mdVector2 operator= (const mdVector2 &);
		mdVector2 operator+ (const mdVector2 &) const;
		mdVector2 operator- (const mdVector2 &) const;
		mdVector2 operator* (const float &) const;
		mdVector2 operator/ (const float &) const;

		mdVector2 &operator+= (const mdVector2 &);
		mdVector2 &operator-= (const mdVector2 &);
		mdVector2 &operator/= (const float &);
		mdVector2 &operator*= (const float &);
		
		bool operator== (const mdVector2 &) const;
		bool operator!= (const mdVector2 &) const;

		friend std::ostream& operator<<(std::ostream& os, const mdVector2& vec);
#pragma endregion Overloads

	};
};
#endif

