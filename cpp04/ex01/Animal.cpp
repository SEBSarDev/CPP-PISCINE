#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal constructor called" << std::endl;
	this->type = "";
	return ;
}

Animal::Animal(Animal const &a)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = a;
	return ;
}

Animal &Animal::operator=(Animal const &a)
{
	type = a.getType();
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

std::string Animal::getType(void) const
{
	return (this->type);
}

void Animal::makeSound(void) const
{
	std::cout << "grr" << std::endl;
}

std::ostream &operator<<(std::ostream &output, Animal const &a)
{
	output << a.getType() << std::endl;
	return (output);
}
