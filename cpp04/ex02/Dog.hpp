#ifndef DOG_HPP
# define DOG_HPP
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal
{
	public :
		Dog(void);
		Dog(Dog const &a);
		Dog &operator=(Dog const &a);
		~Dog(void);
		void setIdeas(std::string str, int i);
		virtual void makeSound(void) const;
		Brain &getBrain(void) const;

	private :
		Brain *brain;
};

#endif
