#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed c(2 + 2);
	Fixed d(2);

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	
	std::cout << std::endl << "other tests" << std::endl;

	if (b < a)
		std::cout << "b < a" << std::endl;
	if (b > a)
		std::cout << "b > a" << std::endl;
	if (b <= a)
		std::cout << "b <= a" << std::endl;
	if (b >= a)
		std::cout << "b >= a" << std::endl;
	std::cout << a + b << std::endl;
	std::cout << a - b << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;
	std::cout << c << std::endl;
	std::cout << d << std::endl;
	std::cout << c * d << std::endl;
	std::cout << c / d << std::endl;
	
	return 0;
}
