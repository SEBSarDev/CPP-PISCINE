#include "C.hpp"

C::C(void)
{
	return ;
}

C::C (const C &a)
{
	*this = a;
	return ;
}

C &C::operator=(const C &)
{
	return (*this);
}

C::~C(void)
{
		return ;
}
