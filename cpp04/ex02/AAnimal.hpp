#ifndef AANIMAL_HPP
# define AANIMAL_HPP
# include <iostream>

class AAnimal
{
	public :
		AAnimal(void);
		AAnimal(AAnimal const &a);
		AAnimal &operator=(AAnimal const &a);
		virtual ~AAnimal(void);
		std::string getType(void) const;
		virtual void makeSound(void) const = 0;

	protected :
		std::string type;
};

std::ostream &operator<<(std::ostream &output, AAnimal const &a);

#endif
