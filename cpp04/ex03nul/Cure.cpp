#include "Cure.hpp"

Cure::Cure(void)
{
	this->type = "cure";
	return;
}

Cure::Cure(const Cure &a)
{
	*this = a;
	return ;
}

Cure &Cure::operator=(const Cure &a)
{
	type = "cure";
	return (*this);
}

Cure::~Cure(void)
{
	return ;
}

std::string const &Cure::getType(void) const
{
	return (this->type);
}

Cure *Cure::clone(void) const
{
	Cure *temp = new Cure();
	temp->type = "cure";
	return (temp);
}

void use(ICharactere &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
