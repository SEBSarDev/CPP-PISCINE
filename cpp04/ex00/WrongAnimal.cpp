#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal constructor called" << std::endl;
	this->type = "";
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const &a)
{
	std::cout << "WrongAnimal constructor called" << std::endl;
	*this = a;
	return ;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &a)
{
	type = a.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called" << std::endl;
	return ;
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "grr" << std::endl;
}

std::ostream &operator<<(std::ostream &output, WrongAnimal const &a)
{
	output << a.getType() << std::endl;
	return (output);
}
