#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << "AAnimal constructor called" << std::endl;
	this->type = "";
	return ;
}

AAnimal::AAnimal(AAnimal const &a)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = a;
	return ;
}

AAnimal &AAnimal::operator=(AAnimal const &a)
{
	type = a.getType();
	return (*this);
}

AAnimal::~AAnimal(void)
{
	std::cout << "AAnimal destructor called" << std::endl;
	return ;
}

std::string AAnimal::getType(void) const
{
	return (this->type);
}

std::ostream &operator<<(std::ostream &output, AAnimal const &a)
{
	output << a.getType() << std::endl;
	return (output);
}
