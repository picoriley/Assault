#include "Engine/Math/Vector2Int.hpp"
#include <math.h>

Vector2Int::Vector2Int()
{
}

Vector2Int::Vector2Int(int initialX, int initialY) 
	: x(initialX)
	, y(initialY)
{
}

Vector2Int::Vector2Int(const Vector2Int& other) 
	: x(other.x)
	, y(other.y)
{
}

void Vector2Int::SetXY(int newX, int NewY)
{
	x = newX;
	y = NewY;
}

Vector2Int& Vector2Int::operator+=(const Vector2Int& rhs)
{
	this->x += rhs.x;
	this->y += rhs.y;
	return *this;
}

Vector2Int& Vector2Int::operator-=(const Vector2Int& rhs)
{
	this->x -= rhs.x;
	this->y -= rhs.y;
	return *this;
}

Vector2Int& Vector2Int::operator*=(const int& scalarConstant)
{
	this->x *= scalarConstant;
	this->y *= scalarConstant;
	return *this;
}