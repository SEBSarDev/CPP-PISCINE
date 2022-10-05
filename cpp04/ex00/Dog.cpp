#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
	return ;
}

Dog::Dog(Dog const &a) : Animal()
{
	std::cout << "Dog constructor called" << std::endl;
	*this = a;
	return ;
}

Dog &Dog::operator=(Dog const &a)
{
	type = a.getType();
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	return ;
}

void Dog::makeSound(void) const
{
	std::cout << "Ouaf" << std::endl;
}
