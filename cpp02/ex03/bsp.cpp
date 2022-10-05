#include "Point.hpp"

 bool bsp( Point const a, Point const b, Point const c, Point const point)
 {
    float neg1;
    float neg2;
    float neg3;
	int neg;
	int pos;

	neg = 0;
	pos = 0;
	neg1 = (point.valX() - b.valX()) * (a.valY() - b.valY()) - (a.valX() - b.valX()) * (point.valY() - b.valY());
	neg2 = (point.valX() - c.valX()) * (b.valY() - c.valY()) - (b.valX() - c.valX()) * (point.valY() - c.valY());
	neg3 = (point.valX() - a.valX()) * (c.valY() - a.valY()) - (c.valX() - a.valX()) * (point.valY() - a.valY());
 	if ( neg1 <= 0 || neg2 <= 0 || neg3 <= 0)
		neg = 1;
	if ( neg1 >= 0 || neg2 >= 0 || neg3 >= 0)
		pos = 1;
	if (pos == 1 && neg == 1)
		return (false);
	return (true);
 }
