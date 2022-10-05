#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor called" << std::endl;
	return ;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
	return ;
}

Brain::Brain(Brain const &a)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = a;
	return ;
}

Brain &Brain::operator=(Brain const &a)
{
	for (int i = 0; i < 100; i++)
			this->ideas[i] = a.getIdea(i);
	return (*this);
}

std::string Brain::getIdea(int i) const
{
	if (i >= 0 && i < 100)
		return (this->ideas[i]);
	return (NULL);
}

void Brain::setBrainIdeas(std::string str, int i)
{
	this->ideas[i] = str;
}
