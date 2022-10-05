#include "Test.hpp"

Test::Test(void)
{
	this->_nb = 0;
	return;
}

Test::Test(int nb)
{
	this->_nb = nb;
	return;
}

Test::~Test(void)
{
	return;
}

Test::Test(const Test &a)
{
	*this = a;
	return;
}

Test &Test::operator=(const Test &a)
{
	this->_nb = a.getNb();
	return (*this);
}

int Test::getNb(void) const
{
	return (this->_nb);
}

bool Test::operator>(const Test &a) const
{
	if (this->_nb > a.getNb())
			return (true);
	return (false);
}

bool Test::operator<(const Test &a) const
{
	if (this->_nb < a.getNb())
			return (true);
	return (false);
}

bool Test::operator>=(const Test &a) const
{
	if (this->_nb >= a.getNb())
			return (true);
	return (false);
}

bool Test::operator<=(const Test &a) const
{
	if (this->_nb <= a.getNb())
			return (true);
	return (false);
}

bool Test::operator==(const Test &a) const
{
	if (this->_nb == a.getNb())
			return (true);
	return (false);
}

std::ostream &operator<<(std::ostream &output, const Test &a)
{
	output << a.getNb();
	return (output);
}
