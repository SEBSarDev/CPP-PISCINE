#include "Point.hpp"
#include "Fixed.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point);

int main(void)
{
	Fixed px(3.99f);
	Fixed py(2.5f);
	Fixed ax(0);
	Fixed ay(0);
	Fixed bx(4);
	Fixed by(4);
	Fixed cx(4);
	Fixed cy(0);
	Point p(px, py);
	Point a(ax, ay);
	Point b(bx, by);
	Point c(cx, cy);
	
	if (bsp(a, b, c, p ) == true)
		std::cout << "p is in triangle" << std::endl;
	else
		std::cout << "p is NOT in triangle" << std::endl;
	return 0;
}
