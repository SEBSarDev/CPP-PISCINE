#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class Animal
{
	public :
		Animal(void);
		Animal(Animal const &a);
		Animal &operator=(Animal const &a);
		virtual ~Animal(void);
		std::string getType(void) const;
		virtual void makeSound(void) const;

	protected :
		std::string type;
};

std::ostream &operator<<(std::ostream &output, Animal const &a);

#endif
