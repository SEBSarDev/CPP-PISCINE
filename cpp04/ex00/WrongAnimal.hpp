#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

class WrongAnimal
{
	public :
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &a);
		WrongAnimal &operator=(WrongAnimal const &a);
		virtual ~WrongAnimal(void);
		std::string getType(void) const;
		void makeSound(void) const;

	protected :
		std::string type;
};

std::ostream &operator<<(std::ostream &output, WrongAnimal const &a);

#endif
