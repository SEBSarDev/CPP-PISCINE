#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public :
		WrongCat(void);
		WrongCat(WrongCat const &a);
		WrongCat &operator=(WrongCat const &a);
		~WrongCat(void);
		virtual void makeSound(void) const;
};

#endif
