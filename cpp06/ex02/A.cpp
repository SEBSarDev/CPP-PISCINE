#include "A.hpp"

A::A(void)
{
	return ;
}

A::A (const A &a)
{
	*this = a;
	return ;
}

A &A::operator=(const A &)
{
	return (*this);
}

A::~A(void)
{
		return ;
}
