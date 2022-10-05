#include "Point.hpp"

Point::Point(void) : x(0), y(0)
{
	return ;
}

Point::~Point(void)
{
	return ;
}

Point::Point(float a, float b) : x(a), y(b) 
{
	return ;
}

Point::Point (const Point &a) : x(a.getX()), y(a.getY())
{
	return ;
}

Point::Point(const Fixed &a, const Fixed &b) : x(a.getRawBits()), y(b.getRawBits())
{
	return ;
}

Point &Point::operator=(const Point &a)
{
	this.(a);
	return (*this);
}

Fixed Point::getY(void) const
{
	return (this->y);
}

Fixed Point::getX(void) const
{
	return (this->x);
}

float Point::valY(void) const
{
	return(this->getY().getRawBits());
}

float Point::valX(void) const
{
	return(this->getX().getRawBits());
}
