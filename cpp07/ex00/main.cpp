#include "whatever.hpp"
#include "Test.hpp"

void suite_test(void)
{
	float a = 42.42;
	float b = 21.21;
	float c = 21.21;

	double e = 1e12;
	double f = 1e4;

	Test g(8);
	Test h(10);

	std::cout << "test float : " << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "max(a, c)  -> " << ::max(a, c) << std::endl;
	std::cout << "min(a, b)  -> " << ::min(a, b) << std::endl;
	std::cout << "swap(a, c) : " << std::endl;
	::swap(a, c);
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << std::endl;
	
	std::cout << "test double : " << std::endl;
	std::cout << "e = " << e << std::endl;
	std::cout << "f = " << f << std::endl;
	std::cout << "max(e, f)  -> " << ::max(e, f) << std::endl;
	std::cout << "min(e, f)  -> " << ::min(e, f) << std::endl;
	std::cout << "swap(e, f) : " << std::endl;
	::swap(e, f);
	std::cout << "e = " << e << std::endl;
	std::cout << "f = " << f << std::endl;
	std::cout << std::endl;
	
	std::cout << "test avec une classe: " << std::endl;
	std::cout << "g = " << g << std::endl;
	std::cout << "h = " << h << std::endl;
	std::cout << "max(g, h)  -> " << ::max(g, h) << std::endl;
	std::cout << "min(g, h)  -> " << ::min(g, h) << std::endl;
	std::cout << "swap(g, h) : " << std::endl;
	::swap(g, h);
	std::cout << "g = " << g << std::endl;
	std::cout << "h = " << h << std::endl;
}

int main (void)
{
	int a = 2;
	int b = 3;

	std::cout << "subject main test : " << std::endl;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	std::cout << std::endl;

	std::cout << "my tests : " << std::endl;
	suite_test();
	return 0;
}
