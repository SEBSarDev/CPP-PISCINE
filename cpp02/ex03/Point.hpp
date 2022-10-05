#ifndef POINT_HPP
# define POINT_HPP
# include "Fixed.hpp"

class Point
{
	public :
	Point(void);
	~Point(void);
	Point(const Point &a);
	Point(const Fixed &a, const Fixed &b);
	Point(float a, float b);
	Point &operator=(const Point &a);
	Fixed getY(void) const;
	Fixed getX(void) const;
	float valY(void) const;
	float valX(void) const;

	private :
	Fixed const x;
	Fixed const y;
};

#endif
