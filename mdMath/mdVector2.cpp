#include "mdMath.h"
// Repo tweak
namespace mdMath {

	// @Brief Returns the squared magnitude of the given vector
	const float mdVector2::SqrdMagnitude() 
	{ 
		return (x * x) + (y * y); 
	}
	// @Brief Returns the magnitude of the given vector
	const float mdVector2::Magnitude() 
	{ 
		return sqrt((x * x) + (y * y));
	}
	// @Brief Return the normalized version of this vector
	const mdVector2 mdVector2::Normal()
	{
		mdVector2 result = *this;
		float temp = result.Magnitude();
		result /= temp;
		return result;
	}

	// Define overloads for basic operators
#pragma region Overloads
	mdVector2 mdVector2::operator= (const mdVector2 &_inVec)
	{
		this->x = _inVec.x;
		this->y = _inVec.y;
		return *this;
	}
	mdVector2 &mdVector2::operator+= (const mdVector2 &_inVec)
	{
		this->x += _inVec.x;
		this->y += _inVec.y;
		return *this;
	}
	mdVector2 &mdVector2::operator-= (const mdVector2 &_inVec)
	{
		this->x -= _inVec.x;
		this->y -= _inVec.y;
		return *this;
	}
	mdVector2 &mdVector2::operator*= (const float &_scale)
	{
		this->x *= _scale;
		this->y *= _scale;
		return *this;
	}
	mdVector2 &mdVector2::operator/= (const float &_scale)
	{
		this->x /= _scale;
		this->y /= _scale;
		return *this;
	}
	mdVector2 mdVector2::operator+ (const mdVector2 &_inVec) const
	{
		mdVector2 result = *this;
		result += _inVec;
		return result;
	}
	mdVector2 mdVector2::operator- (const mdVector2 &_inVec) const
	{
		mdVector2 result = *this;
		result -= _inVec;
		return result;
	}
	mdVector2 mdVector2::operator* (const float &_scale) const
	{
		mdVector2 result = *this;
		result *= _scale;
		return result;
	}
	mdVector2 mdVector2::operator/ (const float &_scale) const
	{
		mdVector2 result = *this;
		result /= _scale;
		return result;
	}
	bool mdVector2::operator== (const mdVector2 &_inVec) const
	{
		return ( (this->x == _inVec.x) && (this->y == _inVec.y) );
	}
	bool mdVector2::operator!= (const mdVector2 &_inVec) const
	{
		return ! (*this == _inVec);
	}
	std::ostream& operator<<(std::ostream& os, const mdVector2& vec)
	{
		os << '[' << vec.x << ',' << vec.y << ']';
		return os;
	}
#pragma endregion Overloads

};
