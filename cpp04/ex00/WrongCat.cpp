#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	std::cout << "WrongCat constructor called" << std::endl;
	this->type = "WrongCat";
	return ;
}

WrongCat::WrongCat(WrongCat const &a) : WrongAnimal()
{
	std::cout << "WrongCat constructor called" << std::endl;
	*this = a;
	return ;
}

WrongCat &WrongCat::operator=(WrongCat const &a)
{
	type = a.getType();
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called" << std::endl;
	return ;
}

void WrongCat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
}

