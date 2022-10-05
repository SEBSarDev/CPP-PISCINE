#include "Ice.hpp"

Ice::Ice(void)
{
	this->type = "ice";
	return ;
}

Ice::~Ice(void)
{
	return ;
}

Ice &Ice::operator=(const Ice &a)
{
	type = a.getType();
	return (*this);
}

Ice::Ice(const Ice &a)
{
	*this = a;
	return ;
}

AMateria *Ice::clone(void) const
{
	return (new Ice());
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}
