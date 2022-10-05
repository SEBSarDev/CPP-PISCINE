#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal
{
	public :
		Cat(void);
		Cat(Cat const &a);
		Cat &operator=(Cat const &a);
		~Cat(void);
		virtual void makeSound(void) const;
};

#endif
