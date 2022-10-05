#include "AMateria.hpp"

AMateria::AMateria(void)
{
	return;
}

AMateria::AMateria(const AMateria &a)
{
	*this = a;
	return ;
}

AMateria &AMateria::operator=(const AMateria &a)
{
	this->type = a.getType();
	return (*this);
}

AMateria::~AMateria(void)
{
	return ;
}

AMateria::AMateria(std::string const &type)
{
	this->type = type;
	return ;
}

std::string const &AMateria::getType(void) const
{
	return (this->type);
}
/*
AMateria *AMateria::clone(void) const
{
	AMateria *temp = new Materia();
	temp->type = this->type;
	return (temp);
}
void use(ICharacter &target)
{
	
	return ;
}
*/
