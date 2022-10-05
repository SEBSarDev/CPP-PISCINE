#include "Base.hpp"

Base::Base(void)
{
	return ;
}

Base::Base (const Base &a)
{
	*this = a;
	return ;
}

Base &Base::operator=(const Base &)
{
	return (*this);
}

Base::~Base(void)
{
		return ;
}
