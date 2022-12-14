#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal
{
	public :
		Dog(void);
		Dog(Dog const &a);
		Dog &operator=(Dog const &a);
		~Dog(void);
		virtual void makeSound(void) const;
};

#endif
