#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	int num;

	srand(time(NULL));
	num = rand() % 3 + 1;
	switch (num)
	{
		case 1:
			return (new A);
			break;
		case 2:
			return (new B);
			break;
		case 3:
			return (new C);
			break;
	}
	return (NULL);
}

void identify(Base *p)
{
	A *a = dynamic_cast<A *>(p);
	B *b = dynamic_cast<B *>(p);
	C *c = dynamic_cast<C *>(p);

	if (a != NULL)
		std::cout << "A";
	if (b != NULL)
		std::cout << "B";
	if (c != NULL)
		std::cout << "C";
}

void identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		std::cout << "A";
		static_cast<void>(a);
	}
	catch (std::exception &bc) {}
	try
	{
		B &b = dynamic_cast<B &>(p);
		std::cout << "B";
		static_cast<void>(b);
	}
	catch (std::exception &bc) {}
	try
	{
		C &c = dynamic_cast<C &>(p);
		std::cout << "C";
		static_cast<void>(c);
	}
	catch (std::exception &bc) {}
}
