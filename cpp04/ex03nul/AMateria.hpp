#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>

class ICharacter;
class Character;

class AMateria
{
	protected :
		std::string type;
	
	public : 
		AMateria(void);
		AMateria(AMateria const & type);
		AMateria &operator=(const AMateria &a);
		~AMateria(void);
		AMateria(std::string const & type);
		std::string const &getType(void) const;
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target) = 0;
};

#endif
