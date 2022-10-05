#include "AMateria.hpp"

AMateria::AMateria(void) {}

AMateria::~AMateria(void) {}

AMateria::AMateria(const AMateria &a)
{
	this->type = a.getType();
	return ;
}

AMateria &AMateria::operator=(const AMateria &a)
{
	this->type = a.getType();
	return (*this);
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
	return ;
}

std::string const &AMateria::getType() const
{
		return(this->type);
}

void AMateria::use(ICharacter&)
{
	return ;
}
