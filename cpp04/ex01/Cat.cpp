#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
	return ;
}

Cat::Cat(Cat const &a) : Animal()
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = a;
	return ;
}

Cat &Cat::operator=(Cat const &a)
{
	type = a.getType();
	brain = new Brain(a.getBrain());
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
	delete brain;
	return ;
}

void Cat::makeSound(void) const
{
	std::cout << "Miaou" << std::endl;
}

void Cat::setIdeas(std::string str, int i)
{
	this->brain->setBrainIdeas(str, i);
}

Brain &Cat::getBrain(void) const
{
	return (*this->brain);
}
