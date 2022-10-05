#include "Cure.hpp"

Cure::Cure(void)
{
	this->type = "cure";
	return ;
}

Cure::~Cure(void)
{
	return ;
}

Cure &Cure::operator=(const Cure &a)
{
	type = a.getType();
	return (*this);
}

Cure::Cure(const Cure &a)
{
	*this = a;
	return ;
}

AMateria *Cure::clone(void) const
{
	return (new Cure());
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}
