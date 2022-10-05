#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
	return ;
}

Cat::Cat(Cat const &a) : Animal()
{
	std::cout << "Cat constructor called" << std::endl;
	*this = a;
	return ;
}

Cat &Cat::operator=(Cat const &a)
{
	type = a.getType();
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	return ;
}

void Cat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
}

