#include "B.hpp"

B::B(void)
{
	return ;
}

B::B (const B &a)
{
	*this = a;
	return ;
}

B &B::operator=(const B &)
{
	return (*this);
}

B::~B(void)
{
		return ;
}
