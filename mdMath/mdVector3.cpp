#include "mdMath.h"

namespace mdMath
{
	// @Brief Returns the squared magnitude of the given vector
	const float mdVector3::SqrdMagnitude() 
	{ 
		return (x * x) + (y * y) + (z * z); 
	}
	// @Brief Returns the magnitude of the given vector
	const float mdVector3::Magnitude() 
	{ 
		return sqrt((x * x) + (y * y) + (z * z)); 
	}
	// @Brief Return the normalized version of this vector
	const mdVector3 mdVector3::Normal()
	{
		mdVector3 result = *this;
		float temp = result.Magnitude();
		result /= temp;
		return result;
	}


#pragma region Overloads
	mdVector3 mdVector3::operator= (const mdVector3 &_inVec)
	{
		this->x = _inVec.x;
		this->y = _inVec.y;
		this->z = _inVec.z;
		return *this;
	}
	mdVector3 &mdVector3::operator+= (const mdVector3 &_inVec)
	{
		this->x += _inVec.x;
		this->y += _inVec.y;
		this->z += _inVec.z;
		return *this;
	}
	mdVector3 &mdVector3::operator-= (const mdVector3 &_inVec)
	{
		this->x -= _inVec.x;
		this->y -= _inVec.y;
		this->z -= _inVec.z;
		return *this;
	}
	mdVector3 &mdVector3::operator*= (const float &_scale)
	{
		this->x *= _scale;
		this->y *= _scale;
		this->x *= _scale;
		return *this;
	}
	mdVector3 &mdVector3::operator/= (const float &_scale)
	{
		this->x /= _scale;
		this->y /= _scale;
		this->z /= _scale;
		return *this;
	}
	mdVector3 mdVector3::operator+ (const mdVector3 &_inVec) const
	{
		mdVector3 result = *this;
		result += _inVec;
		return result;
	}
	mdVector3 mdVector3::operator- (const mdVector3 &_inVec) const
	{
		mdVector3 result = *this;
		result -= _inVec;
		return result;
	}
	mdVector3 mdVector3::operator* (const float &_scale) const
	{
		mdVector3 result = *this;
		result *= _scale;
		return result;
	}
	mdVector3 mdVector3::operator/ (const float &_scale) const
	{
		mdVector3 result = *this;
		result /= _scale;
		return result;
	}
	bool mdVector3::operator== (const mdVector3 &_inVec) const
	{
		return ( (this->x == _inVec.x) && (this->y == _inVec.y) && (this->z == _inVec.z) );
	}
	bool mdVector3::operator!= (const mdVector3 &_inVec) const
	{
		return ! (*this == _inVec);
	}
	std::ostream& operator<<(std::ostream& os, const mdVector3& vec)
	{
		os << '[' << vec.x << ',' << vec.y << ',' << vec.z << ']';
		return os;
	}
#pragma endregion Overloads
};
