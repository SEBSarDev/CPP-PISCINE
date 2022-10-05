#include "Ice.hpp"

Ice::Ice(void)
{
	this->type = "ice";
	return;
}

Ice::Ice(const Ice &a)
{
	*this = a;
	return ;
}

Ice &Ice::operator=(const Ice &a)
{
	type = "ice";
	return (*this);
}

Ice::~Ice(void)
{
	return ;
}

std::string const &Ice::getType(void) const
{
	return (this->type);
}

Ice *Ice::clone(void) const
{
	Ice *temp = new Ice();
	temp->type = "ice";
	return (temp);
}

void use(ICharactere &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
