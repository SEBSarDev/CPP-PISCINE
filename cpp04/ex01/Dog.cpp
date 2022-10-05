#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
	return ;
}

Dog::Dog(Dog const &a) : Animal()
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = a;
	return ;
}

Dog &Dog::operator=(Dog const &a)
{
	type = a.getType();
	brain = new Brain(a.getBrain());
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->brain;
	return ;
}

void Dog::makeSound(void) const
{
	std::cout << "Ouaf" << std::endl;
}

void Dog::setIdeas(std::string str, int i)
{
	this->brain->setBrainIdeas(str, i);
}

Brain &Dog::getBrain(void) const
{
	return (*this->brain);
}
